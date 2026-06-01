__int64 __fastcall sub_51FA00(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  const char *v5; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = v3 + 72LL * *(_QWORD *)(v2 + 24);
  if ( v3 == v4 )
    return 0;
  while ( 1 )
  {
    v5 = haystack;
    if ( *(_QWORD *)(v3 + 8) )
      v5 = *(const char **)v3;
    if ( !strcmp(v5, a2) )
      break;
    v3 += 72;
    if ( v4 == v3 )
      return 0;
  }
  return v3;
}
