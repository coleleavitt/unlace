/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A0F8
// Address: 0x000000010001A0F8

//----- (000000010001A0F8) ----------------------------------------------------
__int64 __fastcall sub_10001A0F8(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x8

  if ( *(_DWORD *)(a1 + 16) == 12 )
    v2 = a2 & 0xFFFFFFFFFFFFFFFELL;
  else
    v2 = a2;
  (***(void (__fastcall ****)(_QWORD, unsigned __int64))(a1 + 8))(
    *(_QWORD *)(a1 + 8),
    v2 + *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL));
  return 0;
}
