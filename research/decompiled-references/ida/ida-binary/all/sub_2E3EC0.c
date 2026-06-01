__int64 __fastcall sub_2E3EC0(__int64 *a1, const char *a2, _QWORD *a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rbx
  const char *v7; // rdi

  v3 = a1[1];
  if ( !v3 )
    return 0;
  v4 = *a1;
  v5 = 0;
  while ( 1 )
  {
    v6 = v4;
    v7 = &s1;
    if ( *(_QWORD *)(v4 + 56) )
      v7 = *(const char **)(v4 + 48);
    if ( !strcasecmp(v7, a2) )
      break;
    ++v5;
    v4 += 96;
    if ( v5 == v3 )
      return 0;
  }
  if ( a3 )
  {
    *a3 = v5;
    return *a1 + 96 * v5;
  }
  return v6;
}
