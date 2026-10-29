/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020E84
// Address: 0x0000000100020E84

//----- (0000000100020E84) ----------------------------------------------------
__int64 __fastcall sub_100020E84(__int64 a1, unsigned __int8 *a2)
{
  char *v2; // x2

  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  else
    v2 = &byte_10007AE40;
  return get_idcv_attr(a2, a1, v2, 0);
}
// 10007AE40: using guessed type char byte_10007AE40;
