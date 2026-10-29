/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: prev_idcv_attr
// Address: 0x000000010003B170

//----- (000000010003B170) ----------------------------------------------------
const char *__fastcall prev_idcv_attr(__int64 a1, const char *a2)
{
  _QWORD *v2; // r12
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // r15
  void *v6; // rdi
  char *v7; // r14
  _QWORD *v8; // r13
  __int64 v9; // r12
  const char *v10; // r15
  int v11; // eax
  const char *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  bool v15; // zf
  const char *v16; // r14
  int v17; // ecx
  const char *result; // rax
  _QWORD *v19; // [rsp+0h] [rbp-60h]
  __int128 v20; // [rsp+10h] [rbp-50h] BYREF
  __int64 v21; // [rsp+20h] [rbp-40h]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  v2 = *(_QWORD **)(a1 + 8);
  v20 = 0;
  v21 = 0;
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
      v6 = qvector_reserve((__int64)&v20, nullptr, v3 + 1, 1u);
      *(_QWORD *)&v20 = v6;
    }
    *((_QWORD *)&v20 + 1) = v5;
    memmove(v6, a2, v4);
    *(_BYTE *)(v20 + v4) = 0;
    v7 = (char *)v20;
  }
  else
  {
    v7 = nullptr;
  }
  v8 = v2 + 1;
  v19 = v2;
  v9 = v2[1];
  if ( v9 )
  {
    v10 = v7;
    if ( !*((_QWORD *)&v20 + 1) )
      v10 = _s1;
    do
    {
      v12 = _s1;
      if ( *(_QWORD *)(v9 + 40) )
        v12 = *(const char **)(v9 + 32);
      v11 = strcmp(v12, v10);
      if ( v11 >= 0 )
        v8 = (_QWORD *)v9;
      v9 = *(_QWORD *)(v9 + 8LL * ((unsigned int)v11 >> 31));
    }
    while ( v9 );
  }
  if ( v7 )
  {
    *((_QWORD *)&v20 + 1) = 0;
    qfree(v7);
  }
  if ( v8 == (_QWORD *)*v19 )
    return nullptr;
  v13 = (_QWORD *)*v8;
  if ( *v8 )
  {
    do
    {
      v14 = v13;
      v13 = (_QWORD *)v13[1];
    }
    while ( v13 );
  }
  else
  {
    do
    {
      v14 = (_QWORD *)v8[2];
      v15 = *v14 == (_QWORD)v8;
      v8 = v14;
    }
    while ( v15 );
  }
  if ( !v14[5] )
  {
    if ( *a2 )
      return _s1;
    return nullptr;
  }
  v16 = (const char *)v14[4];
  v17 = strcmp(v16, a2);
  result = v16;
  if ( v17 >= 0 )
    return nullptr;
  return result;
}
