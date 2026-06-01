/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C450
// Address: 0x000000000042C450

//----- (000000000042C450) ----------------------------------------------------
__int64 __fastcall sub_42C450(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  FILE *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = -1;
  if ( v2 < (unsigned __int64)xmmword_4C80A8 )
  {
    v4 = *(FILE **)(qword_4C80A0 + 8 * v2);
    if ( v4 )
      v3 = (int)sub_480D20(v4, *(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 72));
  }
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
// 4C80A0: using guessed type __int64 qword_4C80A0;
// 4C80A8: using guessed type __int128 xmmword_4C80A8;
