/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001F12C
// Address: 0x000000010001F12C

//----- (000000010001F12C) ----------------------------------------------------
__int64 __fastcall sub_10001F12C(__int64 a1, __int64 a2)
{
  char *v3; // x1

  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(char **)(a1 + 40);
  else
    v3 = &byte_100075A30;
  *(_QWORD *)(a2 + 8) = (unsigned int)del_idcv_attr(a1, v3) == 0;
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
