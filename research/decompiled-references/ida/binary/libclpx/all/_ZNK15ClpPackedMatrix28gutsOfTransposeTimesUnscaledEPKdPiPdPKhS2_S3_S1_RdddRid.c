__int64 __fastcall ClpPackedMatrix::gutsOfTransposeTimesUnscaled(
        ClpPackedMatrix *this,
        const double *a2,
        int *a3,
        double *a4,
        const unsigned __int8 *a5,
        int *a6,
        double a7,
        double a8,
        double a9,
        double *a10,
        const double *a11,
        double *a12,
        int *a13)
{
  int v13; // r15d
  int v14; // eax
  double v15; // xmm5_8
  _QWORD *v16; // rax
  double v17; // xmm9_8
  int *v18; // rbx
  __int64 v19; // r10
  unsigned __int8 v20; // r11
  __int64 v21; // rax
  int *v22; // r12
  double *v23; // r13
  int v24; // r9d
  double v25; // xmm3_8
  __int64 v26; // rdx
  __int64 v27; // r9
  int *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // r9
  double v32; // xmm11_8
  double v33; // xmm4_8
  double v34; // xmm3_8
  __int64 v35; // rax
  unsigned int v37; // [rsp+0h] [rbp-84h]
  __int64 v38; // [rsp+4h] [rbp-80h]
  __int64 v39; // [rsp+Ch] [rbp-78h]
  int v40; // [rsp+14h] [rbp-70h]
  int v41; // [rsp+18h] [rbp-6Ch]
  _OWORD v46[4]; // [rsp+3Ch] [rbp-48h]

  v13 = *((_DWORD *)this + 24);
  v14 = *a13;
  v46[0] = xmmword_28D780;
  v41 = v14;
  v15 = *a12;
  v16 = *((_QWORD **)this + 11);
  v17 = -a8;
  v39 = v16[5];
  v18 = (int *)v16[6];
  v38 = v16[4];
  if ( v13 <= 0 )
  {
    v37 = 0;
  }
  else
  {
    v19 = 0;
    v37 = 0;
    do
    {
      v20 = a5[v19] & 3;
      if ( v20 != 1 )
      {
        v21 = *v18;
        v22 = (int *)(v39 + 4 * v21);
        v23 = (double *)(v38 + 8 * v21);
        v24 = (v18[1] - (int)v21) >> 1;
        v40 = (*((_BYTE *)v18 + 4) - (_BYTE)v21) & 1;
        if ( v24 )
        {
          v25 = 0.0;
          v26 = v38 + 8 * v21;
          v27 = (unsigned int)(v24 - 1);
          v28 = (int *)(v39 + 4 * v21);
          do
          {
            v29 = *v28;
            v30 = v28[1];
            v28 += 2;
            v26 += 16;
            v25 = v25 + a2[v29] * *(double *)(v26 - 16) + a2[v30] * *(double *)(v26 - 8);
          }
          while ( v28 != &v22[2 * v27 + 2] );
          v31 = v27 + 1;
          v22 += 2 * v31;
          v23 += 2 * v31;
        }
        else
        {
          v25 = 0.0;
        }
        if ( v40 )
          v25 = v25 + a2[*v22] * *v23;
        if ( fabs(v25) > a9 )
        {
          v32 = *((double *)&v46[-1] + v20);
          v33 = v25 * v32;
          a4[v37] = v25;
          a3[v37++] = v19;
          if ( v25 * v32 > 0.0 )
          {
            v34 = a11[v19] * v32;
            if ( v17 > v34 - v33 * 1.0e15 )
            {
              if ( v17 > v34 - v33 * v15 && v33 >= a7 )
                v15 = (v34 + a8) / v33;
              v35 = v41++;
              a10[v35] = v33 * v32;
              a6[v35] = v19;
            }
          }
          v13 = *((_DWORD *)this + 24);
        }
      }
      ++v18;
      ++v19;
    }
    while ( (int)v19 < v13 );
  }
  *a13 = v41;
  *a12 = v15;
  return v37;
}

