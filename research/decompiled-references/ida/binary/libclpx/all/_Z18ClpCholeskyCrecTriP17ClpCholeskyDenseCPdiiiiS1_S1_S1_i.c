__int64 __fastcall ClpCholeskyCrecTri(
        __int64 a1,
        double *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        double *a7,
        __int64 a8,
        double *a9,
        int a10)
{
  int v15; // r12d
  signed int v16; // ebx
  __int64 v17; // rax
  int v19; // r12d
  unsigned int v20; // ebx
  int v24; // [rsp+28h] [rbp-50h]
  int v25; // [rsp+28h] [rbp-50h]
  int v27; // [rsp+38h] [rbp-40h]
  int v28; // [rsp+3Ch] [rbp-3Ch]

  while ( a3 > 16 || a4 > 16 )
  {
    while ( a3 < a4 )
    {
      v24 = a10;
      v15 = ((a4 + 1) >> 1) + 15;
      v16 = v15 & 0xFFFFFFF0;
      v15 >>= 4;
      a5 -= v15;
      a4 -= v16;
      ClpCholeskyCrecTri();
      a10 = v24 - v15;
      a2 += 256 * (((v24 - a6) * (v24 - a6 - 1) - (v24 - a6 - v15) * (v24 - a6 - v15 - 1)) >> 1);
      v17 = 8LL * v16;
      a9 = (double *)((char *)a9 + v17);
      a8 += v17;
      if ( a3 <= 16 && a4 <= 16 )
        return ClpCholeskyCrecTriLeaf(a2, a7, a9, a3);
    }
    v25 = a10;
    v19 = ((a3 + 1) >> 1) + 15;
    v20 = v19 & 0xFFFFFFF0;
    v19 >>= 4;
    a3 -= v20;
    ClpCholeskyCrecTri();
    v28 = v25 - a5;
    v27 = v25 - a5 - v19;
    a5 += v19;
    ClpCholeskyCrecRec();
    a7 += 256 * (((v28 + 1) * v28 - (v27 + 1) * v27) >> 1);
    a2 += 256 * v19;
    a10 = v25;
  }
  return ClpCholeskyCrecTriLeaf(a2, a7, a9, a3);
}

