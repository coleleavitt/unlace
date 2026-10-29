/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: next_idcv_attr
// Address: 0x000000010003AFD0

//----- (000000010003AFD0) ----------------------------------------------------
const char *__fastcall next_idcv_attr(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // r15
  void *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r15
  const char *v10; // r14
  int v11; // eax
  const char *v12; // rsi
  char *v14; // [rsp+8h] [rbp-58h]
  __int128 v15; // [rsp+10h] [rbp-50h] BYREF
  __int64 v16; // [rsp+20h] [rbp-40h]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  v2 = *(_QWORD *)(a1 + 8);
  v15 = 0;
  v16 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3;
    v5 = v3 + 1;
    if ( v3 == -1 )
    {
      v6 = nullptr;
    }
    else
    {
      v6 = qvector_reserve((__int64)&v15, nullptr, v3 + 1, 1u);
      *(_QWORD *)&v15 = v6;
    }
    *((_QWORD *)&v15 + 1) = v5;
    memmove(v6, a2, v4);
    *(_BYTE *)(v15 + v4) = 0;
    v14 = (char *)v15;
  }
  else
  {
    v14 = nullptr;
  }
  v7 = *(_QWORD *)(v2 + 8);
  v8 = v2 + 8;
  v9 = v8;
  if ( v7 )
  {
    v10 = v14;
    if ( !*((_QWORD *)&v15 + 1) )
      v10 = _s1;
    v9 = v8;
    do
    {
      v12 = _s1;
      if ( *(_QWORD *)(v7 + 40) )
        v12 = *(const char **)(v7 + 32);
      v11 = strcmp(v10, v12);
      if ( v11 < 0 )
        v9 = v7;
      v7 = *(_QWORD *)(v7 + 8LL * (v11 >= 0));
    }
    while ( v7 );
  }
  if ( v14 )
  {
    *((_QWORD *)&v15 + 1) = 0;
    qfree(v14);
  }
  if ( v9 == v8 )
    return nullptr;
  if ( *(_QWORD *)(v9 + 40) )
    return *(const char **)(v9 + 32);
  return _s1;
}
