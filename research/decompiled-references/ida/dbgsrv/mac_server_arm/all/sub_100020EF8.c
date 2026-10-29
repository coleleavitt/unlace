/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020EF8
// Address: 0x0000000100020EF8

//----- (0000000100020EF8) ----------------------------------------------------
__int64 __fastcall sub_100020EF8(__int64 a1, __int64 a2)
{
  const char *v2; // x0

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  else
    v2 = &byte_100075A30;
  *(_QWORD *)(a2 + 8) = atol(v2);
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
