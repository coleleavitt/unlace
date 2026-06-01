__int64 __fastcall sub_684B60(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = a2;
  v4 = a3;
  if ( a3 >= a2 )
  {
    v4 = a2;
    v3 = a3;
  }
  if ( (sub_3BE900(a1, v4, 4) & 0x400) != 0 && !(unsigned __int8)get_fixup(0, v4) )
    return 1;
  while ( 1 )
  {
    v5 = sub_3C1900(a1, v4, v3, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_3B7CE0, nullptr);
    v4 = v5;
    if ( v5 == -1 )
      break;
    v6 = getseg(v5);
    if ( (!v6 || (*(_BYTE *)(v6 + 44) & 8) == 0) && !(unsigned __int8)get_fixup(0, v4) )
      return 1;
  }
  return 0;
}
