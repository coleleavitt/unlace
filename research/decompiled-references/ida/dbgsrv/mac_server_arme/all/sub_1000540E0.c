/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000540E0
// Address: 0x00000001000540E0

//----- (00000001000540E0) ----------------------------------------------------
__int64 __fastcall sub_1000540E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x8
  __int64 v4; // x0

  v3 = *(_QWORD *)(a1 + 400);
  if ( v3 )
    v4 = v3 - 192;
  else
    v4 = 0;
  return sub_100053FC0(v4, a2, a3);
}
