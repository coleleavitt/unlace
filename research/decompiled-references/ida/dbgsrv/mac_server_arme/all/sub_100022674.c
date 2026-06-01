/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022674
// Address: 0x0000000100022674

//----- (0000000100022674) ----------------------------------------------------
__int64 __fastcall sub_100022674(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  FILE *v3; // x0
  __int64 v4; // x19
  off_t v5; // x0

  v2 = *(_QWORD *)(a1 + 8);
  if ( qword_1000A5928 > v2 && (v3 = *(FILE **)(qword_1000A5920 + 8 * v2)) != nullptr )
  {
    *(_BYTE *)a2 = 9;
    v4 = a2;
    v5 = qftell(v3);
    a2 = v4;
  }
  else
  {
    v5 = -1;
  }
  *(_QWORD *)(a2 + 8) = v5;
  return 0;
}
// 1000A5920: using guessed type __int64 qword_1000A5920;
// 1000A5928: using guessed type __int64 qword_1000A5928;
