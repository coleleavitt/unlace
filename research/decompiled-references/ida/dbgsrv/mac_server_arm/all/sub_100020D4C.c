/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020D4C
// Address: 0x0000000100020D4C

//----- (0000000100020D4C) ----------------------------------------------------
__int64 __fastcall sub_100020D4C(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  FILE *v3; // x8
  __int64 v4; // x19
  const char *v5; // x0
  __int64 v6; // x8

  v2 = a1[1];
  if ( qword_10009D928 > v2 && (v3 = *(FILE **)(qword_10009D920 + 8 * v2)) != nullptr )
  {
    v4 = a2;
    if ( a1[6] )
      v5 = (const char *)a1[5];
    else
      v5 = &byte_100075A30;
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
// 100075A30: using guessed type char byte_100075A30;
// 10009D920: using guessed type __int64 qword_10009D920;
// 10009D928: using guessed type __int64 qword_10009D928;
