__int64 __fastcall sub_14F070(__int64 a1)
{
  unsigned int tinfo_details; // r13d
  unsigned __int8 tinfo_property; // al
  int v4; // ecx
  __int16 v5; // dx

  tinfo_details = get_tinfo_details();
  if ( (_BYTE)tinfo_details )
  {
    tinfo_property = get_tinfo_property();
    v4 = tinfo_property;
    if ( tinfo_property > 1u )
      v4 = 1 << (tinfo_property - 1);
    v5 = *(_WORD *)(a1 + 44);
    *(_DWORD *)(a1 + 40) = v4;
    *(_WORD *)(a1 + 44) = v5 & 0xFFF1;
    *(_WORD *)(a1 + 24) = ((unsigned __int64)get_tinfo_property() >> 10) & 1;
    *(_QWORD *)(a1 + 32) = get_tinfo_size();
  }
  return tinfo_details;
}

