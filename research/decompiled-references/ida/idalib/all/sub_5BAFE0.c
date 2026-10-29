void __fastcall sub_5BAFE0(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a2 + 18) & 4) == 0 && (get_merge_state(a1, a2) & 2) == 0 )
  {
    *(_QWORD *)(a2 + 16) |= 0x40000uLL;
    sub_5C77B0(a1, a2, 0);
    sub_5CCCE0(a1, a2);
  }
}
