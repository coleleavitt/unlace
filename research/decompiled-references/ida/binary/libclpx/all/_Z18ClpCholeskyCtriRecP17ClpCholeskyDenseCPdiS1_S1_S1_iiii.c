__int64 __fastcall ClpCholeskyCtriRec(
        __int64 a1,
        double *a2,
        int a3,
        double *a4,
        double *a5,
        double *a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v15; // ebp
  int v17; // ebp
  signed int v18; // ebx
  __int64 v19; // rbx
  unsigned int v20; // [rsp-20h] [rbp-98h]
  int v24; // [rsp+28h] [rbp-50h]
  int v25; // [rsp+34h] [rbp-44h]
  int v26; // [rsp+38h] [rbp-40h]
  int v27; // [rsp+3Ch] [rbp-3Ch]

  while ( a3 > 16 || a7 > 16 )
  {
    while ( a3 < a7 )
    {
      v24 = a10;
      v15 = ((a7 + 1) >> 1) + 15;
      v20 = v15 & 0xFFFFFFF0;
      v15 >>= 4;
      a8 += v15;
      a7 -= v20;
      a4 += 256 * v15;
      ClpCholeskyCtriRec();
      a10 = v24;
      if ( a3 <= 16 && a7 <= 16 )
        return ClpCholeskyCtriRecLeaf(a2, a4, a5, a6, a7);
    }
    v17 = ((a3 + 1) >> 1) + 15;
    v18 = v17 & 0xFFFFFFF0;
    v17 >>= 4;
    a3 -= v18;
    v27 = a10 - v17;
    v25 = v17 * (a10 - v17);
    v26 = a10;
    a8 -= v17;
    ClpCholeskyCtriRec();
    v19 = 8LL * v18;
    ClpCholeskyCrecRec();
    a6 = (double *)((char *)a6 + v19);
    a5 = (double *)((char *)a5 + v19);
    a2 += 256 * (v25 + ((v17 * (v17 + 1)) >> 1));
    a10 = v27;
    a4 += 256 * (((v26 - a9) * (v26 - a9 - 1) - (v26 - a9 - v17) * (v26 - a9 - v17 - 1)) >> 1);
  }
  return ClpCholeskyCtriRecLeaf(a2, a4, a5, a6, a7);
}

