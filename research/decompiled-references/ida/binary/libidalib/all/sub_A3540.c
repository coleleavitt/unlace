__int64 sub_A3540()
{
  unsigned int v0; // edx
  unsigned int v2; // edx

  v0 = 0;
  if ( !dbg )
    return v0;
  if ( *(_DWORD *)(dbg + 16LL) == 12 )
    return v0;
  v0 = 1;
  if ( *(char *)(dbg + 34LL) < 0 )
    return v0;
  LOBYTE(v2) = sub_C6150((unsigned int)dword_252588) != 0;
  return v2;
}

