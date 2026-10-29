/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000344A0
// Address: 0x00000001000344A0

//----- (00000001000344A0) ----------------------------------------------------
__int64 __fastcall sub_1000344A0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  const char *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r15
  int v8; // eax
  const char *v9; // rdi
  bool v10; // zf
  const char *v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rbx
  int v14; // r15d
  size_t v15; // r13
  void *v16; // r12
  size_t v17; // r14
  __int64 v18; // rax
  size_t v19; // r12
  bool v20; // cf
  size_t v21; // rax
  __int64 v22; // r13
  _BYTE *v23; // rax
  const char *v24; // rsi
  size_t v25; // r12
  __int128 v30; // [rsp+20h] [rbp-70h] BYREF
  unsigned __int64 v31; // [rsp+30h] [rbp-60h]
  __int128 v32; // [rsp+40h] [rbp-50h] BYREF
  size_t v33; // [rsp+50h] [rbp-40h]
  int v34; // [rsp+58h] [rbp-38h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 )
    goto LABEL_17;
  v5 = _s1;
  if ( *(_QWORD *)(a3 + 8) )
    v5 = *(const char **)a3;
  v6 = a1 + 8;
  v7 = a1 + 8;
  do
  {
    v9 = _s1;
    if ( *(_QWORD *)(v4 + 40) )
      v9 = *(const char **)(v4 + 32);
    v8 = strcmp(v9, v5);
    if ( v8 >= 0 )
      v7 = v4;
    v4 = *(_QWORD *)(v4 + 8LL * ((unsigned int)v8 >> 31));
  }
  while ( v4 );
  v10 = v7 == v6;
  v3 = a1;
  if ( v10 || (!*(_QWORD *)(v7 + 40) ? (v11 = _s1) : (v11 = *(const char **)(v7 + 32)), strcmp(v5, v11) < 0) )
  {
LABEL_17:
    v30 = 0;
    v31 = 0;
    v15 = *(_QWORD *)(v3 + 40);
    if ( v15 )
    {
      v16 = qalloc_or_throw(*(_QWORD *)(v3 + 40));
      *(_QWORD *)&v30 = v16;
      v31 = v15;
      memcpy(v16, *(const void **)(v3 + 32), v15);
      *((_QWORD *)&v30 + 1) = v15;
    }
    else
    {
      v16 = nullptr;
    }
    v17 = 0;
    if ( v15 )
      v17 = v15 - 1;
    if ( v15 < v17 + 2 )
    {
      v16 = qvector_reserve((__int64)&v30, v16, v17 + 2, 1u);
      *(_QWORD *)&v30 = v16;
    }
    *((_QWORD *)&v30 + 1) = v17 + 2;
    *((_BYTE *)v16 + v17) = 46;
    *(_BYTE *)(v30 + v17 + 1) = 0;
    v18 = *(_QWORD *)(a3 + 8);
    v19 = 0;
    v20 = v18 == 0;
    v21 = v18 - 1;
    if ( !v20 )
      v19 = v21;
    if ( !v20 && v21 != 0 )
    {
      v22 = 0;
      if ( *((_QWORD *)&v30 + 1) )
        v22 = *((_QWORD *)&v30 + 1) - 1LL;
      v23 = (_BYTE *)v30;
      if ( v31 < v19 + v22 + 1 )
      {
        v23 = qvector_reserve((__int64)&v30, (void *)v30, v19 + v22 + 1, 1u);
        *(_QWORD *)&v30 = v23;
      }
      *((_QWORD *)&v30 + 1) = v19 + v22 + 1;
      v23[v19 + v22] = 0;
      memcpy((void *)(v30 + v22), *(const void **)a3, v19);
    }
    if ( *((_QWORD *)&v30 + 1) )
      v24 = (const char *)v30;
    else
      v24 = _s1;
    v14 = sub_100033AD0((__int64)a2, v24);
    v32 = 0;
    v33 = 0;
    v25 = *(_QWORD *)(a3 + 8);
    if ( v25 )
    {
      *(_QWORD *)&v32 = qalloc_or_throw(*(_QWORD *)(a3 + 8));
      v33 = v25;
      memcpy((void *)v32, *(const void **)a3, v25);
      *((_QWORD *)&v32 + 1) = v25;
    }
    v34 = v14;
    sub_1000361F0((__int64 **)v3, (__int64)&v32, (__int64)&v32);
    if ( (_QWORD)v32 )
    {
      *((_QWORD *)&v32 + 1) = 0;
      qfree((void *)v32);
    }
    if ( (_QWORD)v30 )
    {
      *((_QWORD *)&v30 + 1) = 0;
      qfree((void *)v30);
    }
  }
  else
  {
    v12 = *(int *)(v7 + 56);
    v13 = *(_QWORD *)(*a2 + 8 * v12);
    v14 = -1;
    if ( !*(_DWORD *)(v13 + 136) )
    {
      sub_100033C40(*(_QWORD *)(*a2 + 8 * v12));
      *(_DWORD *)(v13 + 136) = -1;
      return (int)v12;
    }
  }
  return v14;
}
