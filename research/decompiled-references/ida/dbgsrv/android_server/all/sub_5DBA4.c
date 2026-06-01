/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DBA4
// Address: 0x000000000005DBA4

//----- (000000000005DBA4) ----------------------------------------------------
__int64 __fastcall sub_5DBA4(__int64 a1, __int64 a2, int8x16x2_t a3)
{
  unsigned __int64 v3; // x8
  FILE *v5; // x0
  __int64 v6; // x0

  v3 = *(_QWORD *)(a1 + 8);
  if ( qword_166A50 > v3 && (v5 = *(FILE **)(qword_166A48 + 8 * v3)) != nullptr )
  {
    *(_BYTE *)a2 = 9;
    v6 = qfsize(v5, a2, a3);
  }
  else
  {
    v6 = -1;
  }
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
// 166A48: using guessed type __int64 qword_166A48;
// 166A50: using guessed type __int64 qword_166A50;
