/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020F40
// Address: 0x0000000100020F40

//----- (0000000100020F40) ----------------------------------------------------
__int64 __fastcall sub_100020F40(__int64 a1, __int64 a2)
{
  char *v2; // x2

  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  else
    v2 = &byte_10007AE40;
  *(_QWORD *)(a2 + 8) = (unsigned int)get_idcv_attr(nullptr, a1, v2, 0) == 0;
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
