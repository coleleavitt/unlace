__int64 __fastcall sub_76CD30(__int64 *a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v5; // rax
  const char *v6; // rdi

  if ( !a2 )
    return -1;
  v2 = a1[1] - 1;
  if ( v2 < 0 )
    return -1;
  v3 = *a1;
  do
  {
    v5 = *(_QWORD *)(v3 + 8 * v2);
    v6 = haystack;
    if ( *(_QWORD *)(v5 + 8) )
      v6 = *(const char **)v5;
    if ( !strcmp(v6, a2) )
      break;
  }
  while ( v2-- != 0 );
  return v2;
}

