/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DCF0
// Address: 0x000000000005DCF0

//----- (000000000005DCF0) ----------------------------------------------------
__int64 __fastcall sub_5DCF0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  FILE *v4; // x1
  __int64 v5; // x8

  v2 = *(_QWORD *)(a1 + 40);
  if ( qword_166A50 > v2 && (v4 = *(FILE **)(qword_166A48 + 8 * v2)) != nullptr )
    v5 = (int)qfputc(*(unsigned __int8 *)(a1 + 8), v4);
  else
    v5 = -1;
  *(_QWORD *)(a2 + 8) = v5;
  return 0;
}
// 166A48: using guessed type __int64 qword_166A48;
// 166A50: using guessed type __int64 qword_166A50;
