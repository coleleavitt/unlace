/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414340
// Address: 0x0000000000414340

//----- (0000000000414340) ----------------------------------------------------
_DWORD *__fastcall sub_414340(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rdi
  void *v11; // r12
  unsigned __int64 v12; // rdx
  _DWORD *result; // rax
  void *v14; // rsi
  __int64 v15; // rdx

  v2 = *(_QWORD *)(a1 + 1224);
  if ( !v2 )
    goto LABEL_8;
  v4 = a1 + 1216;
  v6 = a1 + 1216;
  do
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v2 + 16);
      v8 = *(_QWORD *)(v2 + 24);
      if ( *(_DWORD *)(v2 + 32) >= a2 )
        break;
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v8 )
        goto LABEL_6;
    }
    v6 = v2;
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v7 );
LABEL_6:
  if ( v4 == v6 || *(_DWORD *)(v6 + 32) > a2 )
  {
LABEL_8:
    if ( !byte_4C94E1 )
      sub_481AC0(30064);
    BUG();
  }
  if ( *(_BYTE *)(v6 + 65) )
    --*(_DWORD *)(a1 + 1408);
  v9 = std::_Rb_tree_rebalance_for_erase(v6, v4);
  v10 = *(void **)(v9 + 72);
  v11 = (void *)v9;
  if ( v10 )
  {
    *(_QWORD *)(v9 + 80) = 0;
    j__free(v10);
  }
  operator delete(v11, 0x60u);
  v12 = *(_QWORD *)(a1 + 1264);
  --*(_QWORD *)(a1 + 1248);
  result = (_DWORD *)(v12 + 1);
  if ( v12 > 9 )
  {
    memmove(*(void **)(a1 + 1256), (const void *)(*(_QWORD *)(a1 + 1256) + 4LL), 4 * v12 - 4);
    result = *(_DWORD **)(a1 + 1264);
    v12 = (unsigned __int64)result - 1;
    *(_QWORD *)(a1 + 1264) = (char *)result - 1;
  }
  v14 = *(void **)(a1 + 1256);
  if ( *(_QWORD *)(a1 + 1272) < (unsigned __int64)result )
  {
    result = sub_481540(a1 + 1256, v14, (unsigned __int64)result, 4u);
    v15 = *(_QWORD *)(a1 + 1264);
    *(_QWORD *)(a1 + 1256) = result;
    result[v15] = a2;
  }
  else
  {
    *((_DWORD *)v14 + v12) = a2;
  }
  ++*(_QWORD *)(a1 + 1264);
  return result;
}
// 4053F0: using guessed type __int64 __fastcall std::_Rb_tree_rebalance_for_erase(_QWORD, _QWORD);
// 4C94E1: using guessed type char byte_4C94E1;
