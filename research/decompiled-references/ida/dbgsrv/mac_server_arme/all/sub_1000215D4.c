/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000215D4
// Address: 0x00000001000215D4

//----- (00000001000215D4) ----------------------------------------------------
__int64 __fastcall sub_1000215D4(__int64 a1, __int64 a2)
{
  char *v2; // x0

  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(char **)(a1 + 8);
  else
    v2 = &byte_10007AE40;
  *(_QWORD *)(a2 + 8) = (int)call_system((__int64)v2);
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
