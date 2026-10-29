__int64 __fastcall leading_zero_important(__int64 not_tail, unsigned int a2)
{
  int v2; // eax
  int v4; // ecx
  int v5; // ebp
  __int16 flags; // ax
  __int64 v7; // rax
  unsigned int v8; // edx

  v2 = *(_DWORD *)(qword_2CA1698 + 904);
  if ( (v2 & 0x1C000) != 0x4000 )
    return 0;
  v4 = v2 & 0xE00;
  if ( (v2 & 0x3000) != 0 )
  {
    if ( v4 != 1024 )
      return 0;
    v5 = 16;
  }
  else
  {
    v5 = 16;
    if ( v4 != 1024 )
      v5 = 10;
  }
  flags = get_flags_ex(not_tail, 4);
  not_tail = (unsigned int)not_tail;
  if ( (flags & 0x600) == 0x200 )
    not_tail = (unsigned int)prev_not_tail((unsigned int)not_tail);
  v7 = get_flags_ex(not_tail, 0);
  LOBYTE(v8) = (unsigned int)get_radix(v7, a2) == v5;
  return v8;
}

