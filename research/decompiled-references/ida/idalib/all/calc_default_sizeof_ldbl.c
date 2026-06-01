__int64 __fastcall calc_default_sizeof_ldbl(__int64 a1, const char *a2)
{
  int v2; // eax
  unsigned __int64 v3; // rdi
  __int64 v4; // rax

  v2 = *(_DWORD *)(get_ph(a1, a2) + 4);
  if ( v2 )
  {
    if ( v2 != 13 || (a1 & 0xF) != 6 || (unsigned int)getinf(5) == 25 || !(unsigned __int8)getinf_flag(3, 4) )
      return 8;
    return 16;
  }
  v3 = a1 & 0xF;
  if ( (_BYTE)v3 == 6 )
  {
    if ( (unsigned int)getinf(5) != 25 && !(unsigned __int8)getinf_flag(3, 4) )
      return 12;
    return 16;
  }
  v4 = -261;
  if ( _bittest64(&v4, v3) )
    return 8;
  return 10;
}
