__int64 __fastcall ClpCholeskyCfactorLeaf(__int64 a1, double *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  double v6; // xmm6_8
  __int64 result; // rax
  unsigned int v8; // r12d
  double *v10; // r15
  __int64 v11; // rbp
  double v12; // xmm1_8
  __int64 v13; // rsi
  int v15; // r13d
  double v16; // xmm2_8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // rsi
  char *v22; // rdi
  double v23; // xmm1_8
  double *v24; // rax
  __int64 v25; // rdx
  double v26; // xmm0_8
  double *v27; // rdi
  double *v28; // rax
  __int64 v29; // rdx
  double v30; // xmm0_8
  int v31; // [rsp+14h] [rbp-64h]
  int v32; // [rsp+18h] [rbp-60h]
  __int64 v35; // [rsp+30h] [rbp-48h]

  v6 = *(double *)(a1 + 32);
  v31 = *(_DWORD *)(a1 + 40);
  result = (a4 - *(_QWORD *)a1) >> 3;
  if ( a3 > 0 )
  {
    v8 = -1;
    v10 = a2;
    v11 = 0;
    v32 = result + 1;
    v12 = *a2;
    v13 = 0;
    v15 = 1;
    v35 = a6 + 4LL * (int)result;
    if ( v31 <= (int)result )
      goto LABEL_14;
LABEL_3:
    if ( -v6 < v12 )
    {
      while ( 1 )
      {
        *(_DWORD *)(v35 + 4 * v11) = 2;
        *(_QWORD *)(a4 + v13) = 0;
        *(_QWORD *)(a5 + v13) = 0x54B249AD2594C37DLL;
        result = (unsigned int)a3;
        if ( a3 <= v15 )
          break;
        memset(&a2[17 * v11 + 1], 0, 8LL * (a3 - 3 - v8) + 8);
        v17 = v15;
        v27 = a2 + 16;
LABEL_11:
        v13 = 8 * v17;
        v10 += 16;
        v12 = v10[v17];
        v28 = &a2[v17];
        v29 = a5;
        do
        {
          v30 = *v28;
          v28 += 16;
          v29 += 8;
          v12 = v12 - v30 * v30 * *(double *)(v29 - 8);
        }
        while ( v28 != &v27[16 * v11 + v17] );
        ++v8;
        ++v11;
        ++v15;
        if ( v31 > (int)(v8 + v32) )
          goto LABEL_3;
LABEL_14:
        if ( v12 >= v6 )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      v16 = 1.0 / v12;
      *(double *)(a4 + v13) = 1.0 / v12;
      result = (unsigned int)a3;
      *(double *)(a5 + v13) = v12;
      if ( a3 > v15 )
      {
        v17 = v15;
        v18 = v15 + 16LL * v8;
        v19 = (__int64)&a2[v18 + 16];
        v20 = (__int64)&a2[v18 + 17 + a3 - 3 - v8];
        v21 = -1;
        v22 = (char *)v10 - 128LL * v8 - (_QWORD)a2;
        do
        {
          v23 = *(double *)&v22[v19 - 128];
          if ( (_DWORD)v11 )
          {
            v24 = (double *)(-128LL * v8 - 128 + v19);
            v25 = a5;
            do
            {
              v25 += 8;
              v26 = *v24 * v24[v21];
              v24 += 16;
              v23 = v23 - v26 * *(double *)(v25 - 8);
            }
            while ( (double *)v19 != v24 );
          }
          --v21;
          *(double *)&v22[v19 - 128] = v23 * v16;
          v19 += 8;
        }
        while ( v20 != v19 );
        v27 = a2 + 16;
        goto LABEL_11;
      }
    }
  }
  return result;
}

