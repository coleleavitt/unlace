__int64 __fastcall sub_5E37C0(_DWORD *a1)
{
  int v1; // eax

  v1 = a1[186];
  if ( (v1 & 1) == 0 )
  {
    if ( !unk_2C81928 )
      return set_qerrno(84);
    a1[186] = v1 | 1;
  }
  if ( a1[55] == 2 )
  {
    if ( (unsigned int)set_qerrno(63) )
      return 0xFFFFFFFFLL;
  }
  else
  {
    a1[55] = 1;
  }
  if ( a1[54] )
    return set_qerrno(66);
  a1[54] = 7;
  return 0;
}
