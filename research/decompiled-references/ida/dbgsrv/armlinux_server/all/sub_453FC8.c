/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453FC8
// Address: 0x0000000000453FC8

//----- (0000000000453FC8) ----------------------------------------------------
__int64 __fastcall sub_453FC8(__int64 a1, char *a2)
{
  _QWORD *v3; // x23
  __int64 *v4; // x20
  __int64 *v5; // x0
  __int64 *v6; // x21
  unsigned __int64 v7; // x3
  __int64 v8; // x4
  unsigned __int64 v9; // x2
  __int64 **v10; // x7
  __int64 *i; // x1
  __int64 v12; // x0
  unsigned __int64 v13; // x3
  void *v14; // x0
  __int64 v15; // x1
  void *v16; // x0
  unsigned __int64 v18; // x3
  __int64 *v19; // x2
  unsigned int *v20; // x1
  int v21; // w2
  unsigned int *v22; // x1
  int v23; // w2
  __int64 *v24[2]; // [xsp+40h] [xbp-10h] BYREF

  if ( *(_BYTE *)(a1 + 760) )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(303);
  }
  v3 = *(_QWORD **)(a1 + 696);
  sub_452A08(v24, a2);
  v4 = (__int64 *)sub_4537E8(v3, v24);
  v5 = v24[0] - 3;
  if ( v24[0] - 3 == std::string::_Rep::_S_empty_rep_storage )
    goto LABEL_6;
  if ( &_pthread_key_create )
  {
    v20 = (unsigned int *)(v24[0] - 1);
    do
      v21 = __ldaxr(v20);
    while ( __stlxr(v21 - 1, v20) );
  }
  else
  {
    v21 = *((_DWORD *)v24[0] - 2);
    *((_DWORD *)v24[0] - 2) = v21 - 1;
  }
  if ( v21 > 0 )
  {
LABEL_6:
    if ( !v4 )
      return (__int64)v24[1] ^ _stack_chk_guard;
  }
  else
  {
    j__free_0(v5);
    if ( !v4 )
      return (__int64)v24[1] ^ _stack_chk_guard;
  }
  v6 = *(__int64 **)(a1 + 696);
  v8 = *v6;
  v7 = v6[1];
  v9 = v4[6] % v7;
  v10 = (__int64 **)(*v6 + 8 * v9);
  for ( i = *v10; v4 != (__int64 *)*i; i = (__int64 *)*i )
    ;
  v12 = *v4;
  if ( *(__int64 **)(*v6 + 8 * v9) != i )
  {
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 48) % v7;
      if ( v9 != v13 )
      {
        *(_QWORD *)(v8 + 8 * v13) = i;
        v12 = *v4;
      }
    }
    goto LABEL_14;
  }
  if ( !v12 )
  {
    v19 = i;
    goto LABEL_22;
  }
  v18 = *(_QWORD *)(v12 + 48) % v7;
  if ( v9 != v18 )
  {
    *(_QWORD *)(v8 + 8 * v18) = i;
    v10 = (__int64 **)(*v6 + 8 * v9);
    v19 = *v10;
LABEL_22:
    if ( v19 == v6 + 2 )
      v6[2] = v12;
    *v10 = nullptr;
    v12 = *v4;
  }
LABEL_14:
  *i = v12;
  v14 = (void *)v4[2];
  if ( v14 )
  {
    v4[3] = 0;
    j__free(v14);
  }
  v15 = v4[1];
  v16 = (void *)(v15 - 24);
  if ( (__int64 *)(v15 - 24) != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v22 = (unsigned int *)(v15 - 8);
      do
        v23 = __ldaxr(v22);
      while ( __stlxr(v23 - 1, v22) );
    }
    else
    {
      v23 = *(_DWORD *)(v15 - 8);
      *(_DWORD *)(v15 - 8) = v23 - 1;
    }
    if ( v23 <= 0 )
      j__free_0(v16);
  }
  j__free_0(v4);
  --v6[3];
  return (__int64)v24[1] ^ _stack_chk_guard;
}
// 52451C: using guessed type char under_debugger;
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
