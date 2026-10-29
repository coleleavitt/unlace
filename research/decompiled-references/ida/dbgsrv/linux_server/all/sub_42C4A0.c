/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C4A0
// Address: 0x000000000042C4A0

//----- (000000000042C4A0) ----------------------------------------------------
__int64 __fastcall sub_42C4A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  FILE *v3; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 < (unsigned __int64)xmmword_4C80A8 && (v3 = *(FILE **)(qword_4C80A0 + 8 * v2)) != nullptr )
  {
    *(_BYTE *)a2 = 9;
    *(_QWORD *)(a2 + 8) = sub_47A370(v3);
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 4C80A0: using guessed type __int64 qword_4C80A0;
// 4C80A8: using guessed type __int128 xmmword_4C80A8;
