void __fastcall sub_5A0AC0(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a2 + 10) & 4) == 0 && (get_merge_state(a1, a2) & 2) == 0 )
  {
    *(_QWORD *)(a2 + 8) |= 0x40000uLL;
    sub_5ACD60(a1, a2, 0);
    sub_5B1E60(a1, a2);
  }
}

