/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C370
// Address: 0x000000000042C370

//----- (000000000042C370) ----------------------------------------------------
__int64 __fastcall sub_42C370(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // rax
  FILE *v5; // rsi

  v2 = *(_QWORD *)(a1 + 40);
  v4 = -1;
  if ( v2 < (unsigned __int64)xmmword_4C80A8 )
  {
    v5 = *(FILE **)(qword_4C80A0 + 8 * v2);
    if ( v5 )
      v4 = sub_480FF0(*(char *)(a1 + 8), v5);
  }
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
// 4C80A0: using guessed type __int64 qword_4C80A0;
// 4C80A8: using guessed type __int128 xmmword_4C80A8;
