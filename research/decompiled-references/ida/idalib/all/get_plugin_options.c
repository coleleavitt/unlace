const char *__fastcall get_plugin_options(char *s2)
{
  __int64 v1; // r14
  __int64 v2; // r12
  __int64 v4; // rbx
  __int64 v5; // rbp
  const char *v6; // rdi
  _QWORD *v7; // rbx
  const char *result; // rax

  v1 = xmmword_2CCB538;
  if ( !(_QWORD)xmmword_2CCB538 )
    return nullptr;
  v2 = qword_2CCB530;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = haystack;
    if ( *(_QWORD *)(v2 + v4 + 8) )
      v6 = *(const char **)(v2 + v4);
    if ( !strcmp(v6, s2) )
      break;
    ++v5;
    v4 += 24;
    if ( v5 == v1 )
      return nullptr;
  }
  v7 = (_QWORD *)(qword_2CCB510 + v4);
  result = haystack;
  if ( v7[1] )
    return (const char *)*v7;
  return result;
}
