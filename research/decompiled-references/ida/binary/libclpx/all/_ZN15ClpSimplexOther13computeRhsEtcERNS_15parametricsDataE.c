__int64 __fastcall ClpSimplexOther::computeRhsEtc(__int64 a1, __int64 a2)
{
  int v2; // eax
  double v3; // xmm3_8
  int v4; // r10d
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 result; // rax
  __int64 v14; // r9
  __int128 v15; // xmm0
  double v16; // xmm5_8
  double v17; // xmm2_8
  double v18; // xmm1_8
  double v19; // xmm9_8
  double v20; // xmm10_8
  __int128 v21; // xmm8
  double v22; // xmm2_8
  double v23; // xmm1_8
  __int64 v24; // r8
  __int64 v25; // rcx
  double v26; // xmm2_8
  double v27; // xmm1_8
  double v28; // xmm9_8
  double v29; // xmm10_8
  __int128 v30; // xmm8
  double v31; // xmm2_8
  double v32; // xmm1_8

  v2 = *(_DWORD *)(a1 + 104);
  v3 = *(double *)a2;
  v4 = *(_DWORD *)(a1 + 108);
  v5 = 8LL * *(int *)(a2 + 128);
  v6 = v5 + *(_QWORD *)(a2 + 32);
  v7 = *(_QWORD *)(a2 + 48) + v5;
  if ( v2 <= 0 )
  {
    if ( v4 > 0 )
    {
      v15 = 0;
      v16 = 1.797693134862316e308;
LABEL_11:
      v24 = *(_QWORD *)(a1 + 176);
      v25 = *(_QWORD *)(a1 + 184);
      result = 0;
      while ( 1 )
      {
        v26 = *(double *)(v6 + 8 * result);
        v27 = *(double *)(v7 + 8 * result);
        v28 = *(double *)(v24 + 8 * result);
        v29 = *(double *)(v25 + 8 * result);
        *((_QWORD *)&v30 + 1) = *((_QWORD *)&v15 + 1);
        *(double *)&v30 = fmax(fmax(*(double *)&v15, fabs(v26)), fabs(v27));
        v15 = v30;
        if ( v28 > -1.0e30 && v29 < 1.0e30 && v26 * v16 + v28 > v27 * v16 + v29 )
          v16 = (v29 - v28) / (v26 - v27);
        v31 = v26 * v3 + v28;
        v32 = v27 * v3 + v29;
        if ( v31 > v32 )
          break;
        *(double *)(v24 + 8 * result) = v31;
        *(double *)(v25 + 8 * result++) = v32;
        if ( v4 <= (int)result )
          goto LABEL_20;
      }
LABEL_18:
      *(_QWORD *)(a2 + 16) = 0xBFF0000000000000LL;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = 0x7FEFFFFFFFFFFFFFLL;
      return 0x7FEFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 144);
    v9 = 8LL * v4;
    v10 = 8LL * (unsigned int)(v2 - 1) + 8;
    v11 = *(_QWORD *)(a1 + 152);
    v12 = v6 + v9;
    result = 0;
    v14 = v7 + v9;
    v15 = 0;
    v16 = 1.797693134862316e308;
    do
    {
      v17 = *(double *)(v12 + result);
      v18 = *(double *)(v14 + result);
      v19 = *(double *)(v8 + result);
      v20 = *(double *)(v11 + result);
      *((_QWORD *)&v21 + 1) = *((_QWORD *)&v15 + 1);
      *(double *)&v21 = fmax(fmax(*(double *)&v15, fabs(v17)), fabs(v18));
      v15 = v21;
      if ( v19 > -1.0e30 && v20 < 1.0e30 && v17 * v16 + v19 > v18 * v16 + v20 )
        v16 = (v20 - v19) / (v17 - v18);
      v22 = v17 * v3 + v19;
      v23 = v18 * v3 + v20;
      if ( v22 > v23 )
      {
        if ( v4 <= 0 )
          goto LABEL_18;
        v16 = -1.0;
        goto LABEL_11;
      }
      *(double *)(v8 + result) = v22;
      *(double *)(v11 + result) = v23;
      result += 8;
    }
    while ( v10 != result );
    if ( v4 > 0 )
      goto LABEL_11;
LABEL_20:
    *(double *)(a2 + 16) = v16;
  }
  return result;
}

