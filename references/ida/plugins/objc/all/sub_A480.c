__int64 __fastcall sub_A480(_QWORD *a1, __int64 a2)
{
  int flags; // eax
  int v4; // eax
  char v5; // [rsp+28h] [rbp-30h]

  flags = get_flags_ex();
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
  {
    *a1 = a2;
  }
  else
  {
    if ( !(unsigned __int8)get_refinfo() || (v5 & 0x4F) != 2 && (v5 & 0x4F) != 9 )
      return 0;
    if ( !(unsigned __int8)get_data_value() )
      return 0;
    v4 = get_flags_ex();
    if ( (v4 & 0x600) != 0x400 || (v4 & 0xF0000000) != 0x50000000 )
      return 0;
    *a1 = -1;
  }
  return 1;
}
