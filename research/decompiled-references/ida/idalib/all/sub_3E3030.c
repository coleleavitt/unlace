__int64 __fastcall sub_3E3030(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r13

  if ( (sub_3BE900(a1, a3, 4) & 0x600) == 0x200 )
    return sub_3E1CA0(a1, a2, a3);
  v4 = sub_3C1F00(a1, a3);
  if ( *(_DWORD *)(a1[3] + 24LL) == 8 )
  {
    if ( v4 == -1 )
      return sub_3E1CA0(a1, a2, a3);
  }
  else if ( v4 >= 0x100000000LL )
  {
    return sub_3E1CA0(a1, a2, a3);
  }
  if ( (sub_3BE900(a1, v4, 4) & 0x10000) == 0 )
    return sub_3E1CA0(a1, a2, a3);
  *(_QWORD *)a2 = v4;
  *(_BYTE *)(a2 + 8) = 21;
  return 1;
}
