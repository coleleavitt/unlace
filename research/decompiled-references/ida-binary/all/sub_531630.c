__int64 __fastcall sub_531630(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v5; // r12
  const char *v6; // rsi
  unsigned int v7; // r15d
  const char *v8; // rdi
  size_t v10; // rax

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = *a1;
  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(unsigned __int8 *)(v3 + 8);
      v8 = *(const char **)v3;
      if ( !(_BYTE)v7 )
        break;
      v6 = &s1;
      if ( a2[5] )
        v6 = (const char *)a2[4];
      if ( *v8 != 1 )
      {
        if ( !strcmp(v8, v6) )
          return v7;
        goto LABEL_7;
      }
      v10 = strlen(v8 + 1);
      if ( !strncmp(v8 + 1, v6, v10) )
        return v7;
      ++v5;
      v3 += 16;
      if ( v2 == v5 )
        return 0;
    }
    if ( (const char *)a2[24] == v8 )
      return 1;
LABEL_7:
    ++v5;
    v3 += 16;
    if ( v2 == v5 )
      return 0;
  }
}
