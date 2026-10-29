/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2610
// Address: 0x00000000000A2610

//----- (00000000000A2610) ----------------------------------------------------
bool __fastcall sub_A2610(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  void **v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rsi
  _QWORD *i; // rdx

  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
    return 0;
  v7 = *(_QWORD *)(a2 + 32);
  if ( v7 == -1 )
    v7 = *(_QWORD *)(a2 + 16LL * (*(_QWORD *)(a2 + 24) != -1) + 8);
  v8 = sub_A2460(a1, *(_DWORD *)(a2 + 4), v7, a4, a5);
  if ( !v8 )
    return 0;
  v9 = (void **)v8;
  sub_9FDA0(a1, "%a: bptcnd yielded false\n", a4);
  *(_BYTE *)(a2 + 16) = 1;
  v10 = *(_QWORD *)(a1 + 360);
  v11 = 8 * v10;
  i = *(_QWORD **)(a1 + 352);
  if ( 8 * v10 )
  {
    for ( i = *(_QWORD **)(a1 + 352); v7 != *i; ++i )
    {
      v11 -= 8;
      if ( !v11 )
        return sub_A1E60(a1, v9, a2, a3, a4);
    }
  }
  if ( i != (_QWORD *)(*(_QWORD *)(a1 + 352) + 8 * v10) )
  {
    if ( !(_BYTE)under_debugger )
      interr(617);
    BUG();
  }
  return sub_A1E60(a1, v9, a2, a3, a4);
}
// 158B40: using guessed type __int64 under_debugger;
