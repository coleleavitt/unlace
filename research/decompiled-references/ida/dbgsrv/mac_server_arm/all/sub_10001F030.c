/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001F030
// Address: 0x000000010001F030

//----- (000000010001F030) ----------------------------------------------------
__int64 __fastcall sub_10001F030(__int64 a1, unsigned __int8 *a2)
{
  char *v2; // x2

  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  else
    v2 = &byte_100075A30;
  return get_idcv_attr(a2, a1, v2, 0);
}
// 100075A30: using guessed type char byte_100075A30;
