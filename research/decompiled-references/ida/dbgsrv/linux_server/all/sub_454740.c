/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454740
// Address: 0x0000000000454740

//----- (0000000000454740) ----------------------------------------------------
__int64 __fastcall sub_454740(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v7; // r13
  _QWORD *v8; // rbx
  void *v9; // rdi
  void *v10; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, char **); // rax
  void *v13; // rdi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r13
  unsigned __int64 i; // rbx
  __int64 v17; // rax
  void *v18; // rdi
  __int64 v19; // r14
  __int128 v20; // xmm0
  char *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r15
  size_t v25; // r8
  __int64 v26; // rdx
  char *v27; // rsi
  char *v28; // rax
  const void *v30; // r9
  void *v31; // rax
  const void *v32; // [rsp+8h] [rbp-40h]

  v3 = 0;
  v7 = a1[40];
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)(a1[39] + (v3 << 6));
      v9 = (void *)v8[5];
      if ( v9 )
      {
        v8[6] = 0;
        j__free(v9);
      }
      v10 = (void *)v8[1];
      if ( v10 )
      {
        v8[2] = 0;
        j__free(v10);
      }
      ++v3;
    }
    while ( v7 != v3 );
  }
  v11 = *a1;
  a1[40] = 0;
  v12 = *(__int64 (__fastcall **)(__int64, char **))(v11 + 24);
  if ( v12 != sub_4542C0 )
  {
    ((void (__fastcall *)(__int64 *, __int64 *, __int64))v12)(a1, a1 + 39, a3);
LABEL_10:
    v14 = *(_QWORD *)(a2 + 8);
    v15 = a1[40];
    if ( !v14 )
      goto LABEL_15;
    goto LABEL_11;
  }
  v13 = (void *)a1[39];
  if ( v13 )
  {
    j__free(v13);
    a1[39] = 0;
    a1[41] = 0;
    goto LABEL_10;
  }
  v14 = *(_QWORD *)(a2 + 8);
  v15 = 0;
  if ( !v14 )
    return 1;
LABEL_11:
  for ( i = 0; i < v14; ++i )
  {
    v17 = *(_QWORD *)a2 + 32 * i;
    v18 = *(void **)(v17 + 8);
    if ( v18 )
    {
      *(_QWORD *)(v17 + 16) = 0;
      j__free(v18);
    }
  }
LABEL_15:
  *(_QWORD *)(a2 + 8) = 0;
  if ( *(_QWORD *)(a2 + 16) < v15 )
  {
    *(_QWORD *)a2 = sub_481540(a2, *(void **)a2, v15, 0x20u);
  }
  else if ( !v15 )
  {
    return 1;
  }
  v19 = 0;
  v20 = 0;
  do
  {
    v26 = *(_QWORD *)(a2 + 8);
    v27 = *(char **)a2;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v26 + 1) )
    {
      v28 = (char *)sub_481540(a2, v27, v26 + 1, 0x20u);
      v26 = *(_QWORD *)(a2 + 8);
      v20 = 0;
      *(_QWORD *)a2 = v28;
      v27 = v28;
    }
    v21 = &v27[32 * v26];
    *((_QWORD *)v21 + 1) = 0;
    *((_OWORD *)v21 + 1) = v20;
    ++*(_QWORD *)(a2 + 8);
    v22 = a1[39] + (v19 << 6);
    *(_DWORD *)v21 = *(_DWORD *)v22;
    v23 = v22 + 40;
    if ( *(_QWORD *)(v22 + 48) <= 1u )
      v23 = v22 + 8;
    if ( v21 + 8 != (char *)v23 )
    {
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 && (v25 = v24 - 1, v24 != 1) )
      {
        v30 = *(const void **)v23;
        v31 = *((void **)v21 + 1);
        if ( *((_QWORD *)v21 + 3) < v24 )
        {
          v32 = *(const void **)v23;
          v31 = sub_481540((__int64)(v21 + 8), *((void **)v21 + 1), *(_QWORD *)(v23 + 8), 1u);
          v30 = v32;
          v25 = v24 - 1;
          *((_QWORD *)v21 + 1) = v31;
        }
        *((_QWORD *)v21 + 2) = v24;
        memmove(v31, v30, v25);
        v20 = 0;
        *(_BYTE *)(*((_QWORD *)v21 + 1) + v24 - 1) = 0;
      }
      else
      {
        *((_QWORD *)v21 + 2) = 0;
      }
    }
    ++v19;
  }
  while ( v19 != v15 );
  return 1;
}
