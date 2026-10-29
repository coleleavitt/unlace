/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B3FB0
// Address: 0x00000000000B3FB0

//----- (00000000000B3FB0) ----------------------------------------------------
__int64 __fastcall sub_B3FB0(__int64 a1, const void ***a2, const char *a3)
{
  const void **v4; // rbx
  unsigned __int64 v6; // rdx
  const void **v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // rcx
  __int64 v10; // rsi
  const void **v11; // rax
  const void *v12; // rdi
  __int64 v13; // rbp
  const void *v14; // rcx
  const void *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  const void *v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rsi
  const void *v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  _BYTE *v26; // rax
  char *v27; // rbx
  size_t v28; // r12
  __int64 v29; // rax
  __int64 v30; // rbp
  _BYTE *v31; // rax
  unsigned __int64 v32; // rbx
  size_t n; // [rsp+10h] [rbp-38h]

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v4 = a2[1];
  if ( !v4 )
    return a1;
  n = strlen(a3);
  v6 = n * ((_QWORD)v4 - 1);
  v7 = *a2;
  v8 = (__int64)&(*a2)[3 * (_QWORD)v4];
  if ( 24LL * (_QWORD)v4 )
  {
    v9 = 8LL * (_QWORD)v4 - 8;
    if ( (((unsigned __int8)((unsigned int)(8 * (_DWORD)v4 - 8) >> 3) + 1) & 3) != 0 )
    {
      v10 = -(__int64)(((unsigned __int8)((unsigned int)(8 * (_DWORD)v4 - 8) >> 3) + 1) & 3);
      v11 = *a2;
      do
      {
        v12 = v11[1];
        v13 = (__int64)v12 - 1;
        if ( !v12 )
          v13 = 0;
        v6 += v13;
        v11 += 3;
        ++v10;
      }
      while ( v10 );
      if ( v9 < 0x18 )
        goto LABEL_18;
      goto LABEL_9;
    }
    v11 = *a2;
    if ( v9 >= 0x18 )
    {
      do
      {
LABEL_9:
        v14 = v11[1];
        v15 = v11[4];
        v16 = (__int64)v14 - 1;
        if ( !v14 )
          v16 = 0;
        v17 = v6 + v16;
        v18 = (__int64)v15 - 1;
        if ( !v15 )
          v18 = 0;
        v19 = v17 + v18;
        v20 = v11[7];
        v21 = (__int64)v20 - 1;
        if ( !v20 )
          v21 = 0;
        v22 = v19 + v21;
        v23 = v11[10];
        v24 = (__int64)v23 - 1;
        if ( !v23 )
          v24 = 0;
        v6 = v22 + v24;
        v11 += 12;
      }
      while ( (const void **)v8 != v11 );
    }
  }
LABEL_18:
  if ( *(_QWORD *)(a1 + 16) < v6 )
  {
    *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, v6, 1u);
    v7 = *a2;
    v8 = (__int64)&(*a2)[3 * (_QWORD)a2[1]];
  }
  for ( ; (const void **)v8 != v7; v7 += 3 )
  {
    v25 = *(_QWORD *)(a1 + 8);
    if ( v25 >= 2 )
    {
      v26 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v25 + n )
      {
        v26 = qvector_reserve(a1, *(char **)a1, v25 + n, 1u);
        *(_QWORD *)a1 = v26;
      }
      *(_QWORD *)(a1 + 8) = v25 + n;
      v26[v25 - 1 + n] = 0;
      memmove((void *)(*(_QWORD *)a1 + v25 - 1), a3, n);
    }
    v27 = (char *)v7[1];
    if ( v27 )
    {
      v28 = (size_t)(v27 - 1);
      if ( v27 != (_BYTE *)&dword_0 + 1 )
      {
        v29 = *(_QWORD *)(a1 + 8);
        v30 = v29 - 1;
        if ( !v29 )
          v30 = 0;
        v31 = *(_BYTE **)a1;
        v32 = (unsigned __int64)&v27[v30];
        if ( *(_QWORD *)(a1 + 16) < v32 )
        {
          v31 = qvector_reserve(a1, *(char **)a1, v32, 1u);
          *(_QWORD *)a1 = v31;
        }
        *(_QWORD *)(a1 + 8) = v32;
        v31[v28 + v30] = 0;
        memcpy((void *)(*(_QWORD *)a1 + v30), *v7, v28);
      }
    }
  }
  return a1;
}
// 0: using guessed type int dword_0;
