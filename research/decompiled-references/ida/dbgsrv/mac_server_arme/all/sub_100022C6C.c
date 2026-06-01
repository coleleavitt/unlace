/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022C6C
// Address: 0x0000000100022C6C

//----- (0000000100022C6C) ----------------------------------------------------
__int64 __fastcall sub_100022C6C(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  FILE *v3; // x8
  __int64 v4; // x19
  const char *v5; // x0
  __int64 v6; // x8

  v2 = a1[1];
  if ( qword_1000A5928 > v2 && (v3 = *(FILE **)(qword_1000A5920 + 8 * v2)) != nullptr )
  {
    v4 = a2;
    if ( a1[6] )
      v5 = (const char *)a1[5];
    else
      v5 = &byte_10007AE40;
    v6 = (int)qfputs(v5, v3);
    a2 = v4;
  }
  else
  {
    v6 = -1;
  }
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A5920: using guessed type __int64 qword_1000A5920;
// 1000A5928: using guessed type __int64 qword_1000A5928;
