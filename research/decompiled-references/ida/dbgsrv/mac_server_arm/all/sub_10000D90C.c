/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000D90C
// Address: 0x000000010000D90C

//----- (000000010000D90C) ----------------------------------------------------
__int64 __fastcall sub_10000D90C(__int64 a1)
{
  unsigned int v1; // w8

  v1 = *(_DWORD *)(a1 + 20) - 2405;
  if ( v1 <= 5 )
    return (__int64)*(&off_100098E18 + 5 * v1 + 5);
  else
    return 0;
}
// 100098E18: using guessed type __int64 (__fastcall *off_100098E18)();
