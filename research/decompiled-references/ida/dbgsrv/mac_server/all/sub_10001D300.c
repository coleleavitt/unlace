/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D300
// Address: 0x000000010001D300

//----- (000000010001D300) ----------------------------------------------------
__int64 __fastcall sub_10001D300(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 16) == 12 )
    a2 &= ~1uLL;
  (***(void (__fastcall ****)(_QWORD, __int64))(a1 + 8))(
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL) + a2);
  return 0;
}
