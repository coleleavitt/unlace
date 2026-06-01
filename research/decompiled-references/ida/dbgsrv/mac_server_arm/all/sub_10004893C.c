/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004893C
// Address: 0x000000010004893C

//----- (000000010004893C) ----------------------------------------------------
__int64 __fastcall sub_10004893C(__int64 a1, void *a2)
{
  _QWORD *v2; // x0
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x9

  v3 = *(_QWORD *)(a1 + 232);
  v4 = *(_QWORD *)(a1 + 240);
  v2 = (_QWORD *)(a1 + 232);
  v5 = 72 * v4;
  if ( !v5 )
    return 0;
  while ( *(void **)(v3 + 56) != a2 )
  {
    v3 += 72;
    v5 -= 72;
    if ( !v5 )
      return 0;
  }
  sub_100048EE4(v2, v3);
  qfree(a2);
  return 1;
}
