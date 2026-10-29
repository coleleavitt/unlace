/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027AE8
// Address: 0x0000000100027AE8

//----- (0000000100027AE8) ----------------------------------------------------
__int64 __fastcall sub_100027AE8(__int64 a1)
{
  char *v1; // x1

  if ( *(_QWORD *)(a1 + 48) )
    v1 = *(char **)(a1 + 40);
  else
    v1 = &byte_100075A30;
  return sub_100027884(a1, v1);
}
// 100075A30: using guessed type char byte_100075A30;
