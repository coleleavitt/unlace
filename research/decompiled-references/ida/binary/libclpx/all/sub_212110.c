int *__fastcall sub_212110(
        _QWORD *a1,
        int *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        int a10,
        int a11)
{
  __int64 v11; // r14
  __int64 v15; // r11
  double *v16; // r13
  double v17; // xmm0_8
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rsi
  double v22; // xmm1_8
  _DWORD *v23; // r14
  int v24; // edi
  int *v25; // r10
  double *v26; // r9
  __int64 v27; // r8
  double v28; // xmm2_8
  int *v29; // rdx
  double *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // xmm3_8
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rdi
  double v39; // xmm2_8
  int v40; // edx
  double *v41; // rax

  v11 = *a9;
  if ( (int)v11 < a11 )
  {
    if ( !(unsigned int)c_ekk_IsSet(*a1, (unsigned int)v11) )
      goto LABEL_4;
    v40 = *(_DWORD *)(a7 + 4LL * *a2);
    do
    {
      v41 = (double *)(a8 + 8 * v11);
      v11 = *(int *)(a7 + 4 * v11);
      *v41 = -*v41;
    }
    while ( v40 != (_DWORD)v11 && a11 > (int)v11 );
    if ( a11 > (int)v11 )
    {
LABEL_4:
      v15 = (int)v11;
      do
      {
        v16 = (double *)(a8 + 8 * v15);
        v17 = *v16;
        v18 = *(int *)(a6 + 4 * v15);
        v19 = 4 * v18;
        v20 = v18 + 1;
        v21 = 8 * v18;
        v22 = *(double *)(a4 + 8 * v18);
        v23 = (_DWORD *)(a5 + 4 * v18);
        v24 = *v23 + *(_DWORD *)(a6 + 4 * v15);
        if ( (int)v18 + 1 <= v24 )
        {
          v25 = (int *)(a5 + v19 + 4);
          v26 = (double *)(a4 + v21 + 8);
          v27 = *v25;
          v28 = *v26;
          v17 = v17 - *(double *)(a8 + 8 * v27) * *v26;
          if ( a10 == (_DWORD)v27 )
          {
LABEL_12:
            if ( a3 )
            {
              --*v23;
              v32 = v24--;
              v33 = *(_QWORD *)(a4 + 8 * v32);
              *v25 = *(_DWORD *)(a5 + 4 * v32);
              *(_QWORD *)v26 = v33;
            }
            else
            {
              *v26 = 0.0;
              ++v20;
            }
            v17 = v17 + v28;
            if ( v24 >= v20 )
            {
              v34 = (unsigned int)(v24 - v20);
              v35 = 0;
              v36 = a5 + 4LL * v20;
              v37 = a4 + 8LL * v20;
              v38 = v34 + 1;
              do
              {
                v39 = *(double *)(a8 + 8LL * *(int *)(v36 + 4 * v35)) * *(double *)(v37 + 8 * v35);
                ++v35;
                v17 = v17 - v39;
              }
              while ( v38 != v35 );
            }
          }
          else
          {
            v29 = (int *)(a5 + v19 + 8);
            v30 = (double *)(a4 + v21 + 16);
            while ( v24 >= ++v20 )
            {
              v31 = *v29;
              v28 = *v30;
              v25 = v29;
              v26 = v30;
              ++v29;
              ++v30;
              v17 = v17 - *(double *)(a8 + 8 * v31) * v28;
              if ( (_DWORD)v31 == a10 )
                goto LABEL_12;
            }
          }
        }
        v15 = *(int *)(a7 + 4 * v15);
        *v16 = v17 * v22;
      }
      while ( a11 > (int)v15 );
      LODWORD(v11) = v15;
    }
  }
  *a9 = v11;
  return a9;
}

