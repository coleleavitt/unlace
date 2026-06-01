__int64 __fastcall sub_81C420(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rsi
  int v7; // r13d
  __int64 *v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rdi
  __int64 *v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rdx
  const double *v15; // rax
  unsigned int v16; // r13d
  const __m128i *v17; // rdi
  __m128 *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  unsigned int v26; // [rsp+Ch] [rbp-3Ch] BYREF
  __m128i v27[3]; // [rsp+10h] [rbp-38h] BYREF

  v6 = a1[49];
  v7 = 2 * *(_DWORD *)(a3 + 28);
  if ( v6 )
  {
    v8 = (__int64 *)(v6 + 8LL * *(unsigned int *)(v6 - 4));
    if ( (__int64 *)v6 != v8 )
    {
      v9 = (__int64 *)a1[49];
      do
      {
        v10 = *v9++;
        *(_BYTE *)(v10 + 8) = 0;
      }
      while ( v8 != v9 );
    }
    v11 = (__int64 *)a1[50];
    if ( !v11 )
    {
      *(_DWORD *)(v6 - 4) = 0;
      goto LABEL_12;
    }
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 == v12 )
    {
LABEL_10:
      *(_DWORD *)(v6 - 4) = 0;
      goto LABEL_11;
    }
LABEL_7:
    v13 = v11;
    do
    {
      v14 = *v13++;
      *(_BYTE *)(v14 + 9) = 0;
    }
    while ( v12 != v13 );
    if ( !v6 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v11 = (__int64 *)a1[50];
  if ( !v11 )
    goto LABEL_12;
  v12 = &v11[*((unsigned int *)v11 - 1)];
  if ( v11 != v12 )
    goto LABEL_7;
LABEL_11:
  *((_DWORD *)v11 - 1) = 0;
LABEL_12:
  v15 = *(const double **)(a3 + 176);
  v16 = v7 ^ 1;
  v26 = v16;
  v17 = (const __m128i *)a1[10];
  v27[0] = (__m128i)_mm_loadh_ps(v15);
  v18 = sub_7A65F0(v17, a1 + 2, 1u, &v26, 1u, v27, *(double *)v27[0].m128i_i64, 0, nullptr);
  v19 = a1[10];
  v20 = sub_7E5FB0((__int64)a1, v16, a2, *(_QWORD *)(a3 + 176), (__int64)v18);
  return sub_7CA490(v19, v20 - 8, v21, v22, v23, v24);
}

