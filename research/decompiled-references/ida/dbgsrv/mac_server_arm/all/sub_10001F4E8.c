/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001F4E8
// Address: 0x000000010001F4E8

//----- (000000010001F4E8) ----------------------------------------------------
__int64 __fastcall sub_10001F4E8(__int64 a1, __int64 a2)
{
  char *v3; // x0
  __int64 v5; // [xsp+0h] [xbp-30h] BYREF
  __int128 v6; // [xsp+8h] [xbp-28h]

  v5 = 0;
  v6 = 0u;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(char **)(a1 + 8);
  else
    v3 = &byte_100075A30;
  qgetenv(v3, &v5);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v5;
  *(_OWORD *)(a2 + 16) = v6;
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
