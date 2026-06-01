__int64 __fastcall idp_dirspec_t__::vfunc_3(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v6; // rbp
  const char *v7; // rdi

  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
    return -1;
  v4 = *(_QWORD *)(a1 + 40);
  v6 = 0;
  while ( 1 )
  {
    v7 = &s1;
    if ( *(_QWORD *)(v4 + 56) )
      v7 = *(const char **)(v4 + 48);
    if ( !strcasecmp(v7, a3) )
      break;
    ++v6;
    v4 += 96;
    if ( v3 == v6 )
      return -1;
  }
  if ( v4 )
    return v6;
  else
    return -1;
}
