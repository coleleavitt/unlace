/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020F98
// Address: 0x0000000100020F98

//----- (0000000100020F98) ----------------------------------------------------
__int64 __fastcall sub_100020F98(__int64 a1, __int64 a2)
{
  char *v3; // x1

  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(char **)(a1 + 40);
  else
    v3 = &byte_10007AE40;
  *(_QWORD *)(a2 + 8) = (unsigned int)del_idcv_attr(a1, v3) == 0;
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
