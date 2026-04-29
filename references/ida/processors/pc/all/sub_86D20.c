__int64 __fastcall sub_86D20(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax

  if ( !a3 )
    return 0;
  if ( !*a3 )
    return 0;
  v5 = getseg();
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)(v5 + 43) == 2 )
    return 0;
  if ( get_ind_purged() != -1 )
    return 0;
  v6 = demangle_name();
  if ( (int)(v6 & 0x800FFFFF) <= 1 )
    return 0;
  if ( (v6 & 1) != 0 )
  {
    if ( *a3 != 64 )
      strncasecmp(a3, "__imp_@", 7u);
LABEL_17:
    set_purged();
    return 1;
  }
  if ( (int)(v6 & 0x800FFFFF) <= 255 )
  {
    v7 = demangle_name();
    if ( (~v7 & 0xA0000) != 0 && (v7 & 0x70020000) != 0x60020000 )
    {
      if ( !*(_BYTE *)(a1 + 208) )
      {
        netnode_supset();
        return 1;
      }
      goto LABEL_17;
    }
    return 0;
  }
  return 1;
}
