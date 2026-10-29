size_t __fastcall sub_FDBE90(__int64 a1, unsigned __int64 a2)
{
  size_t *v2; // rdx
  __int64 i; // rax
  unsigned __int64 v4; // rax
  size_t v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rax

  v2 = (size_t *)a2;
  for ( i = *(_QWORD *)(a2 + 8); i; i = *(_QWORD *)(v4 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v4 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v4 )
      break;
    v2 = (size_t *)v4;
  }
  v5 = *v2;
  v6 = (unsigned __int64)(v2 + 4);
  while ( 1 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    if ( !v7 )
      break;
    a2 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v7 & 4) == 0 || !a2 )
      return sub_FDB4A0(a1, a2, v6, v5);
  }
  a2 = 0;
  return sub_FDB4A0(a1, a2, v6, v5);
}
