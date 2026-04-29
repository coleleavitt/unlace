bool __fastcall sub_329110(__int64 a1, int a2, _QWORD *a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  __int64 tinfo_size; // rbp

  if ( a2 )
    return 1;
  v4 = *(unsigned int *)(a1 + 284);
  if ( (unsigned int)v4 > 0x1F )
    return 1;
  v5 = 2550140928LL;
  if ( !_bittest64(&v5, v4) || (get_tinfo_property(*(_QWORD *)(a1 + 72), 2) & 0x3F) == 1 )
    return 1;
  tinfo_size = get_tinfo_size(0, *a3, 0);
  return get_tinfo_size(0, *(_QWORD *)(a1 + 72), 0) == tinfo_size;
}
