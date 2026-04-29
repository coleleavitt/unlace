char __fastcall sub_46510(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  int v4; // r12d
  __int64 v5; // rdi

  if ( (get_tinfo_property(*a2, 2) & 0x3F) != 1 )
  {
    v4 = sub_4E2D0(a1);
    if ( v4 == 9 && (unsigned int)sub_44FF0(a1, a2, 0) == 1 )
    {
      LOBYTE(v3) = 1;
      return v3;
    }
    if ( !(unsigned __int8)getinf_flag(3, 4) )
    {
      LOBYTE(v3) = sub_45840(a1, a2);
      return v3;
    }
    v5 = *a2;
    if ( (unsigned int)(*(_DWORD *)(a1 + 288) - 5) <= 1 )
    {
      LOBYTE(v3) = (unsigned __int64)get_tinfo_size(0, *a2, 0) > 0x40;
      return v3;
    }
    if ( v4 == 4 )
    {
      if ( (get_tinfo_property(v5, 2) & 0x2F) == 0xD )
        return (unsigned int)sub_42C50(a2) ^ 1;
    }
    else if ( (get_tinfo_property(v5, 2) & 0xF) != 9 )
    {
      LOBYTE(v3) = 8 * (unsigned __int64)(v4 == 8) + 8 < get_tinfo_size(0, *a2, 0);
      return v3;
    }
  }
  LOBYTE(v3) = 0;
  return v3;
}
