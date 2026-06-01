__int64 __fastcall sub_5C7AA0(_DWORD *a1, __int64 a2)
{
  int v2; // eax

  v2 = a1[182];
  if ( (v2 & 1) == 0 )
  {
    if ( !unk_2C57908 )
      return set_qerrno(84, a2);
    a1[182] = v2 | 1;
  }
  if ( a1[53] == 2 )
  {
    if ( (unsigned int)set_qerrno(63, a2) )
      return 0xFFFFFFFFLL;
  }
  else
  {
    a1[53] = 1;
  }
  if ( a1[52] )
    return set_qerrno(66, a2);
  a1[52] = 7;
  return 0;
}

