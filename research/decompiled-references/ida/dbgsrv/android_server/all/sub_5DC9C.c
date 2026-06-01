/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DC9C
// Address: 0x000000000005DC9C

//----- (000000000005DC9C) ----------------------------------------------------
__int64 __fastcall sub_5DC9C(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  FILE *v4; // x0
  int v5; // w0
  __int64 v6; // x8

  v2 = *(_QWORD *)(a1 + 8);
  if ( qword_166A50 <= v2 || (v4 = *(FILE **)(qword_166A48 + 8 * v2)) == nullptr || (v5 = qfgetc(v4), v5 == -1) )
    v6 = -1;
  else
    v6 = (unsigned __int8)v5;
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
// 166A48: using guessed type __int64 qword_166A48;
// 166A50: using guessed type __int64 qword_166A50;
