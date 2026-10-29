unsigned __int64 __fastcall sub_6D3D30(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  if ( (get_tinfo_property(*a2, 2) & 0x40) != 0 )
    a3 = a3 & 7 | 1 | a3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (get_tinfo_property(*a2, 2) & 0x80u) != 0LL )
    return a3 & 7 | 4 | a3 & 0xFFFFFFFFFFFFFFF8LL;
  return a3;
}

