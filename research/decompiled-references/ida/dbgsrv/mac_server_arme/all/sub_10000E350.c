/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E350
// Address: 0x000000010000E350

//----- (000000010000E350) ----------------------------------------------------
__int64 __fastcall sub_10000E350(__int64 a1)
{
  unsigned int v1; // w8

  v1 = *(_DWORD *)(a1 + 20) - 2405;
  if ( v1 <= 5 )
    return (__int64)*(&off_10009CE58 + 5 * v1 + 5);
  else
    return 0;
}
// 10009CE58: using guessed type __int64 (__fastcall *off_10009CE58)();
