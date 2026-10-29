const char *__fastcall stristr(const char *a1, const char *a2)
{
  const char *v2; // r14
  int v3; // ebx
  size_t v4; // rax
  int v5; // edi
  size_t v6; // r12
  const char *v7; // rbp

  v2 = a1;
  v3 = toupper(*(unsigned __int8 *)a2);
  v4 = strlen(a2 + 1);
  v5 = *(unsigned __int8 *)a1;
  if ( !(_BYTE)v5 )
    return nullptr;
  v6 = v4;
  while ( 1 )
  {
    v7 = v2++;
    if ( v3 == toupper(v5) && !strncasecmp(v2, a2 + 1, v6) )
      break;
    v5 = *(unsigned __int8 *)v2;
    if ( !(_BYTE)v5 )
      return nullptr;
  }
  return v7;
}
