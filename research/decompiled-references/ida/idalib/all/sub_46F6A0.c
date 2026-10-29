__int64 __fastcall sub_46F6A0(__int64 a1, __int64 a2, int a3)
{
  char v5; // dl
  int v6; // eax
  int v7; // ebx
  unsigned int v8; // eax

  if ( (getinf(48) & 1) == 0 )
    return get_nice_colored_name(a1, a2, a3 | 0x107u);
  v5 = getinf_flag(44, 64);
  v6 = a3;
  v7 = a3 | 0x126;
  v8 = v6 | 0x106;
  if ( !v5 )
    v8 = v7;
  return get_nice_colored_name(a1, a2, v8);
}
