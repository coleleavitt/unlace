/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005DD60
// Address: 0x000000010005DD60

//----- (000000010005DD60) ----------------------------------------------------
__int64 __fastcall sub_10005DD60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r15
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r15
  char *v12; // rax
  _QWORD *v13; // rdi
  int v14; // r12d
  __int64 v15; // rbx
  __int64 v16; // r14
  const char *v17; // rax
  const char *v18; // r13
  size_t v19; // rax
  size_t v20; // r12
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r14
  __int64 v26; // [rsp+18h] [rbp-48h]
  unsigned __int8 v27; // [rsp+2Fh] [rbp-31h] BYREF

  v7 = a2;
  v8 = *(char **)a2;
  v9 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v9 + 1) )
  {
    v8 = (char *)qvector_reserve(a2, v8, v9 + 1, 1u);
    v7 = a2;
    *(_QWORD *)a2 = v8;
    v9 = *(_QWORD *)(a2 + 8);
  }
  v8[v9] = 1;
  ++*(_QWORD *)(v7 + 8);
  sub_100032FE0((void **)v7, *(unsigned __int8 *)(a4 + 168));
  sub_100032FE0((void **)v7, *(unsigned __int8 *)(a4 + 169));
  v10 = sub_1000534E0(a5);
  sub_10005A320((void **)v7, v10);
  sub_100032FE0((void **)v7, *(_DWORD *)(a5 + 24));
  sub_100032FE0((void **)v7, *(_DWORD *)(a6 + 8));
  if ( (int)*(_QWORD *)(a6 + 8) > 0 )
  {
    v26 = *(_QWORD *)(a6 + 8) & 0x7FFFFFFFLL;
    v11 = 0;
    do
    {
      v14 = *(_DWORD *)(*(_QWORD *)a6 + 4 * v11);
      v15 = *(_QWORD *)(a4 + 104);
      v16 = 120LL * v14;
      sub_10005A320((void **)a2, *(_QWORD *)(v15 + v16));
      sub_10005A320((void **)a2, *(unsigned int *)(v15 + v16 + 8));
      sub_10005DF90(a2, v14);
      v17 = _s1;
      if ( *(_QWORD *)(v15 + v16 + 24) )
        v17 = *(const char **)(v16 + v15 + 16);
      v18 = &_s;
      if ( v17 )
        v18 = v17;
      v19 = strlen(v18);
      v20 = v19 + 1;
      if ( v19 != -1 )
      {
        v13 = (_QWORD *)a2;
        v21 = *(_QWORD *)(a2 + 8);
        v22 = 0x7FFFFFFFFFFFFFFFLL;
        if ( !__CFADD__(v20, v21) )
          v22 = v20 + v21;
        if ( v21 >= v22 )
        {
          if ( v21 != v22 )
          {
            v27 = 0;
            sub_10001CE90(a2, v22, &v27);
            v13 = (_QWORD *)a2;
          }
        }
        else
        {
          v12 = *(char **)a2;
          if ( *(_QWORD *)(a2 + 16) < v22 )
          {
            v12 = (char *)qvector_reserve(a2, *(void **)a2, v22, 1u);
            *(_QWORD *)a2 = v12;
          }
          __bzero(&v12[*(_QWORD *)(a2 + 8)], v22 - *(_QWORD *)(a2 + 8));
          v13 = (_QWORD *)a2;
          *(_QWORD *)(a2 + 8) = v22;
        }
        memcpy((void *)(*v13 + v21), v18, v20);
      }
      ++v11;
    }
    while ( v26 != v11 );
  }
  return 0;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
