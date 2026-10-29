/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8FDD0
// Address: 0x000000000008FDD0

//----- (000000000008FDD0) ----------------------------------------------------
char __fastcall sub_8FDD0(__int64 a1, void *a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rdi

  v2 = 72LL * *(_QWORD *)(a1 + 240);
  if ( !v2 )
    return 0;
  v4 = *(_QWORD *)(a1 + 232);
  v5 = (_QWORD *)(a1 + 232);
  while ( *(void **)(v4 + 56) != a2 )
  {
    v4 += 72;
    v2 -= 72;
    if ( !v2 )
      return 0;
  }
  sub_90500(v5, v4);
  qfree(a2);
  return 1;
}
