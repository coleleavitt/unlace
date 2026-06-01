/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100021D8C
// Address: 0x0000000100021D8C

//----- (0000000100021D8C) ----------------------------------------------------
__int64 __fastcall sub_100021D8C(__int64 a1, __int64 a2)
{
  char *v2; // x8

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(char **)(a1 + 8);
  else
    v2 = &byte_10007AE40;
  *(_QWORD *)(a2 + 8) = *v2;
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
