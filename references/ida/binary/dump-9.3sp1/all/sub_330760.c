bool __fastcall sub_330760(__int64 a1, int a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 tinfo_size; // rbp

  if ( a2 )
    return 1;
  v3 = *(unsigned int *)(a1 + 284);
  if ( (unsigned int)v3 > 0x1F )
    return 1;
  v4 = 2550140928LL;
  if ( !_bittest64(&v4, v3) || (get_tinfo_property() & 0x3F) == 1 )
    return 1;
  tinfo_size = get_tinfo_size();
  return get_tinfo_size() == tinfo_size;
}
