char __fastcall sub_93400(char *s2, _QWORD *a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v5; // rbp
  const char *v6; // rdi

  if ( !s2 )
    return 0;
  v2 = xmmword_250848;
  if ( !(_QWORD)xmmword_250848 )
    return 0;
  v3 = qword_250840;
  v5 = 0;
  while ( 1 )
  {
    v6 = s1;
    if ( *(_QWORD *)(v3 + 8) )
      v6 = *(const char **)v3;
    if ( !strcmp(v6, s2) )
      break;
    ++v5;
    v3 += 168;
    if ( v5 == v2 )
      return 0;
  }
  return sub_93280(v5, a2);
}

