/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C140
// Address: 0x000000000042C140

//----- (000000000042C140) ----------------------------------------------------
__int64 __fastcall sub_42C140(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  FILE *v4; // r8
  _BOOL4 v5; // ecx
  __int16 v7; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v2 = -1;
  v3 = a1[1];
  v8 = __readfsqword(0x28u);
  if ( v3 < (unsigned __int64)xmmword_4C80A8 )
  {
    v4 = *(FILE **)(qword_4C80A0 + 8 * v3);
    if ( v4 )
    {
      v5 = a1[9] != 0;
      v7 = a1[5];
      v2 = (int)sub_480EC0(v4, &v7, 2, v5);
    }
  }
  *(_QWORD *)(a2 + 8) = v2;
  return 0;
}
// 4C80A0: using guessed type __int64 qword_4C80A0;
// 4C80A8: using guessed type __int128 xmmword_4C80A8;
