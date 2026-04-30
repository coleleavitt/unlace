char __fastcall sub_16CB40(char *s2, _QWORD *a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v5; // rbp
  const char *v6; // rdi

  if ( !s2 )
    return 0;
  v2 = xmmword_8C9548;
  if ( !(_QWORD)xmmword_8C9548 )
    return 0;
  v3 = qword_8C9540;
  v5 = 0;
  while ( 1 )
  {
    v6 = &s1;
    if ( *(_QWORD *)(v3 + 8) )
      v6 = *(const char **)v3;
    if ( !strcmp(v6, s2) )
      break;
    ++v5;
    v3 += 168;
    if ( v5 == v2 )
      return 0;
  }
  return sub_16C9C0(v5, a2);
}
