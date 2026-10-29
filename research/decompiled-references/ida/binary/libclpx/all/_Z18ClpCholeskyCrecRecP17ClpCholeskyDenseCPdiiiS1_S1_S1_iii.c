__int64 __fastcall ClpCholeskyCrecRec(
        __int64 a1,
        const double *a2,
        int a3,
        int a4,
        int a5,
        const double *a6,
        double *a7,
        const double *a8,
        int a9,
        int a10,
        int a11)
{
  int v18; // edx
  int v19; // edx
  int v20; // r11d
  signed int v21; // r13d
  __int64 v22; // rdx
  int v24; // r11d
  int v25; // esi
  int v26; // r11d
  int v27; // r13d
  __int64 v28; // rdx
  double *v31; // [rsp+18h] [rbp-50h]
  double *v32; // [rsp+18h] [rbp-50h]
  unsigned int v33; // [rsp+18h] [rbp-50h]
  int v34; // [rsp+20h] [rbp-48h]
  int v35; // [rsp+20h] [rbp-48h]
  double *v36; // [rsp+20h] [rbp-48h]
  int v37; // [rsp+2Ch] [rbp-3Ch]
  int v38; // [rsp+2Ch] [rbp-3Ch]
  int v39; // [rsp+2Ch] [rbp-3Ch]

LABEL_1:
  while ( a3 > 16 || a5 > 16 || a4 > 16 )
  {
    while ( 1 )
    {
      v18 = a3;
      if ( a5 >= a3 )
        v18 = a5;
      if ( a4 >= v18 )
        break;
      v19 = a4;
      if ( a3 >= a4 )
        v19 = a3;
      if ( a5 < v19 )
      {
        v24 = ((a3 + 1) >> 1) + 15;
        a3 -= v24 & 0xFFFFFFF0;
        v38 = v24 >> 4;
        v35 = a11;
        v32 = a7;
        ClpCholeskyCrecRec();
        a11 = v35;
        v25 = v35 - a9;
        a9 += v38;
        a2 += 256 * v38;
        a7 = &v32[256 * ((v25 * (v25 - 1) - (v25 - v38) * (v25 - v38 - 1)) >> 1)];
        goto LABEL_1;
      }
      v20 = ((a5 + 1) >> 1) + 15;
      v21 = v20 & 0xFFFFFFF0;
      a5 -= v20 & 0xFFFFFFF0;
      v37 = v20 >> 4;
      v34 = a11;
      v31 = a7;
      ClpCholeskyCrecRec();
      a11 = v34 - v37;
      a9 -= v37;
      a8 += v21;
      v22 = 8LL * (((v34 - a10) * (v34 - a10 - 1) - (v34 - a10 - v37) * (v34 - a10 - v37 - 1)) >> 1 << 8);
      a6 = (const double *)((char *)a6 + v22);
      a2 = (const double *)((char *)a2 + v22);
      a7 = v31;
      if ( a3 <= 16 && a5 <= 16 && a4 <= 16 )
        return ClpCholeskyCrecRecLeaf(a2, a6, a7, a8, a4);
    }
    v39 = a11;
    v26 = ((a4 + 1) >> 1) + 15;
    v27 = v26 >> 4 << 8;
    v36 = a7;
    v33 = v26 & 0xFFFFFFF0;
    ClpCholeskyCrecRec();
    v28 = v27;
    a6 = (const double *)((char *)a6 + v28 * 8);
    a11 = v39;
    a7 = &v36[v28];
    a4 -= v33;
  }
  return ClpCholeskyCrecRecLeaf(a2, a6, a7, a8, a4);
}

