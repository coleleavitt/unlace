/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C1D0
// Address: 0x000000000042C1D0

//----- (000000000042C1D0) ----------------------------------------------------
__int64 __fastcall sub_42C1D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  FILE *v3; // rax
  __int64 v4; // rax
  unsigned int v6; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 8);
  v7 = __readfsqword(0x28u);
  if ( v2 >= (unsigned __int64)xmmword_4C80A8
    || (v3 = *(FILE **)(qword_4C80A0 + 8 * v2)) == nullptr
    || (unsigned int)sub_480E00(v3, (char *)&v6, 4, *(_QWORD *)(a1 + 40) != 0) )
  {
    v4 = -1;
  }
  else
  {
    v4 = v6;
  }
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
// 4C80A0: using guessed type __int64 qword_4C80A0;
// 4C80A8: using guessed type __int128 xmmword_4C80A8;
