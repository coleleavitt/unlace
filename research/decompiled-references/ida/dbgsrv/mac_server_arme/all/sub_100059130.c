/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059130
// Address: 0x0000000100059130

//----- (0000000100059130) ----------------------------------------------------
bool __fastcall sub_100059130(__int64 a1, _QWORD *a2)
{
  __int64 v2; // x8
  __int64 v5; // x21
  unsigned __int64 v6; // x22
  _BOOL8 result; // x0

  v2 = *(_QWORD *)(a1 + 384);
  if ( v2 != a2[1] )
    return 0;
  if ( !v2 )
    return 1;
  v5 = 0;
  v6 = 0;
  do
  {
    result = sub_10005CC70(*(_QWORD *)(a1 + 376) + v5, *a2 + v5);
    if ( !result )
      break;
    ++v6;
    v5 += 80;
  }
  while ( v6 < *(_QWORD *)(a1 + 384) );
  return result;
}
