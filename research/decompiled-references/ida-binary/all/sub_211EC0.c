__int64 sub_211EC0()
{
  unsigned int v0; // edx
  unsigned int v2; // edx

  v0 = 0;
  if ( !dbg )
    return v0;
  if ( *(_DWORD *)(dbg + 16) == 12 )
    return v0;
  v0 = 1;
  if ( *(char *)(dbg + 34) < 0 )
    return v0;
  LOBYTE(v2) = sub_234FE0((unsigned int)dword_8CC428) != 0;
  return v2;
}
