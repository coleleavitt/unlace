/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000514A0
// Address: 0x00000001000514A0

//----- (00000001000514A0) ----------------------------------------------------
char __fastcall sub_1000514A0(__int64 a1, void *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD *v4; // rdi

  v2 = 72LL * *(_QWORD *)(a1 + 240);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 232);
  v4 = (_QWORD *)(a1 + 232);
  while ( *(void **)(v3 + 56) != a2 )
  {
    v3 += 72;
    v2 -= 72;
    if ( !v2 )
      return 0;
  }
  sub_100051B10(v4, v3);
  qfree(a2);
  return 1;
}
