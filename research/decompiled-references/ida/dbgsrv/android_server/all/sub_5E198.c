/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E198
// Address: 0x000000000005E198

//----- (000000000005E198) ----------------------------------------------------
__int64 __fastcall sub_5E198(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  FILE *v4; // x1
  const char *v5; // x0
  __int64 v6; // x8

  v2 = a1[1];
  if ( qword_166A50 > v2 && (v4 = *(FILE **)(qword_166A48 + 8 * v2)) != nullptr )
  {
    if ( a1[6] )
      v5 = (const char *)a1[5];
    else
      v5 = &byte_F154B;
    v6 = (int)qfputs(v5, v4);
  }
  else
  {
    v6 = -1;
  }
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
// F154B: using guessed type char byte_F154B;
// 166A48: using guessed type __int64 qword_166A48;
// 166A50: using guessed type __int64 qword_166A50;
