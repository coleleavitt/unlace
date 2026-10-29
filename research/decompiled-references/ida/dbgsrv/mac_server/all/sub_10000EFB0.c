/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000EFB0
// Address: 0x000000010000EFB0

//----- (000000010000EFB0) ----------------------------------------------------
__int64 __fastcall sub_10000EFB0(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 20) - 2405;
  if ( v1 <= 5 )
    return (__int64)*(&off_1000A76C8 + 5 * v1 + 5);
  else
    return 0;
}
// 1000A76C8: using guessed type __int64 (__fastcall *off_1000A76C8)();
