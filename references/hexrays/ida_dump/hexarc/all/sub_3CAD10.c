__int64 __fastcall sub_3CAD10(__int64 *a1, const char *a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v6; // rbp
  const char *v7; // rdi
  __int64 result; // rax

  v3 = a1[1];
  if ( !v3 )
    return 0;
  v4 = *a1;
  v6 = 0;
  while ( 1 )
  {
    v7 = s1;
    if ( *(_QWORD *)(v4 + 8) )
      v7 = *(const char **)v4;
    if ( !strcmp(v7, a2) )
      break;
    ++v6;
    v4 += 40;
    if ( v6 == v3 )
      return 0;
  }
  if ( !a3 )
    return v4 + 24;
  result = 0;
  if ( *(_DWORD *)(v4 + 24) == a3 )
    return v4 + 24;
  return result;
}
