__int64 __fastcall sub_47A5E0(_QWORD *a1, __int64 a2, const char *a3)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  const char *v7; // rdi

  v4 = a1[18];
  v5 = v4 + 56LL * a1[19];
  if ( v4 == v5 )
    return 0;
  while ( 1 )
  {
    v7 = &s1;
    if ( *(_QWORD *)(v4 + 8) )
      v7 = *(const char **)v4;
    if ( !strcmp(v7, a3) )
      break;
    v4 += 56;
    if ( v5 == v4 )
      return 0;
  }
  if ( !v4 )
    return 0;
  else
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 216LL))(a1, a2, v4);
}
