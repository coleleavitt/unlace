__int64 __fastcall sub_C9B90(const char *a1, __int64 a2)
{
  const char *v2; // r14
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rbx
  const char *v7; // r13
  __int64 v9; // r12
  const char *v10; // rsi
  char *s1; // [rsp+20h] [rbp-48h]

  if ( !dbg )
    return 0xFFFFFFFFLL;
  v2 = a1;
  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
  {
    v4 = xmmword_2524F8;
    if ( !(_QWORD)xmmword_2524F8 )
      return 0xFFFFFFFFLL;
LABEL_10:
    v5 = qword_2524F0;
    v6 = 0;
    while ( 1 )
    {
      v7 = ::s1;
      if ( *(_QWORD *)(v5 + 8) )
        v7 = *(const char **)v5;
      if ( !strcasecmp(v2, v7) || (unsigned __int8)(*v2 - 36) <= 1u && !strcasecmp(v2 + 1, v7) )
        return (unsigned int)v6;
      ++v6;
      v5 += 56;
      if ( v6 == v4 )
      {
        if ( !a2 )
          return 0xFFFFFFFFLL;
        goto LABEL_19;
      }
    }
  }
  get_ph();
  v3 = sub_9E360();
  if ( !v3 )
  {
    if ( (unsigned int)str2reg() != -1 )
      *(_DWORD *)a2 = 0;
    goto LABEL_31;
  }
  if ( v3 != 1 || (v2 = s1) == nullptr )
LABEL_31:
    v2 = a1;
  v4 = xmmword_2524F8;
  if ( (_QWORD)xmmword_2524F8 )
    goto LABEL_10;
LABEL_19:
  if ( *(_WORD *)(a2 + 2) )
  {
    if ( strcasecmp(v2, a1) )
    {
      *(_DWORD *)a2 = 0;
      if ( v4 )
      {
        v9 = qword_2524F0;
        v6 = 0;
        while ( 1 )
        {
          v10 = ::s1;
          if ( *(_QWORD *)(v9 + 8) )
            v10 = *(const char **)v9;
          if ( !strcasecmp(a1, v10) )
            break;
          ++v6;
          v9 += 56;
          if ( v6 == v4 )
            return 0xFFFFFFFFLL;
        }
        return (unsigned int)v6;
      }
    }
  }
  return 0xFFFFFFFFLL;
}

