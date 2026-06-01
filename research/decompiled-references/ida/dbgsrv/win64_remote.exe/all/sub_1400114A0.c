/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400114A0
// Address: 0x00000001400114A0

//----- (00000001400114A0) ----------------------------------------------------
__int64 __fastcall sub_1400114A0(__int64 a1)
{
  unsigned __int64 i; // rdi

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && !sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  sub_14000E2B0(a1);
  for ( i = 0; i < *(_QWORD *)(a1 + 1328); ++i )
    sub_1400018A0(*(void **)(*(_QWORD *)(a1 + 1320) + 8 * i));
  return sub_14001DDE0(a1);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
