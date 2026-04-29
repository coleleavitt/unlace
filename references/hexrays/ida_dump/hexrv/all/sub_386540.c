__int64 __fastcall sub_386540(__int64 a1, _QWORD *a2)
{
  int tinfo_property; // eax
  int v5; // r13d
  __int64 v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdi

  tinfo_property = get_tinfo_property(a2[3], 23);
  if ( tinfo_property <= 0 )
    return 0xFFFFFFFFLL;
  v5 = tinfo_property;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 88);
    v9 = v6 + *a2;
    if ( v8 == v9 || sub_252170(v9, v8) )
      break;
    ++v7;
    v6 += 72;
    if ( v7 == v5 )
      return 0xFFFFFFFFLL;
  }
  return v7;
}
