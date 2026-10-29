/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001F740
// Address: 0x000000010001F740

//----- (000000010001F740) ----------------------------------------------------
__int64 __fastcall sub_10001F740(__int64 a1, __int64 a2)
{
  char *v2; // x0

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(char **)(a1 + 8);
  else
    v2 = &byte_100075A30;
  *(_QWORD *)(a2 + 8) = (int)call_system((__int64)v2);
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
