__int64 __fastcall sub_2383E0(const char *a1, __int64 a2, __int64 a3)
{
  char *v3; // r14
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rbx
  const char *v8; // r13
  __int64 v10; // r12
  const char *v11; // rsi
  char *s1[9]; // [rsp+20h] [rbp-48h] BYREF

  s1[1] = (char *)__readfsqword(0x28u);
  if ( !dbg )
    return 0xFFFFFFFFLL;
  v3 = (char *)a1;
  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
  {
    v5 = xmmword_8CC398;
    if ( !(_QWORD)xmmword_8CC398 )
      return 0xFFFFFFFFLL;
LABEL_10:
    v6 = qword_8CC390;
    v7 = 0;
    while ( 1 )
    {
      v8 = &::s1;
      if ( *(_QWORD *)(v6 + 8) )
        v8 = *(const char **)v6;
      if ( !strcasecmp(v3, v8) || (unsigned __int8)(*v3 - 36) <= 1u && !strcasecmp(v3 + 1, v8) )
        return (unsigned int)v7;
      ++v7;
      v6 += 56;
      if ( v7 == v5 )
      {
        if ( !a2 )
          return 0xFFFFFFFFLL;
        goto LABEL_19;
      }
    }
  }
  get_ph(a1, a2, a3);
  v4 = sub_1E73C0(0x3F0u, s1, a2, a1);
  if ( !v4 )
  {
    if ( (unsigned int)str2reg(a1) != -1 )
      *(_DWORD *)a2 = 0;
    goto LABEL_31;
  }
  if ( v4 != 1 || (v3 = s1[0]) == nullptr )
LABEL_31:
    v3 = (char *)a1;
  v5 = xmmword_8CC398;
  if ( (_QWORD)xmmword_8CC398 )
    goto LABEL_10;
LABEL_19:
  if ( *(_WORD *)(a2 + 2) )
  {
    if ( strcasecmp(v3, a1) )
    {
      *(_DWORD *)a2 = 0;
      if ( v5 )
      {
        v10 = qword_8CC390;
        v7 = 0;
        while ( 1 )
        {
          v11 = &::s1;
          if ( *(_QWORD *)(v10 + 8) )
            v11 = *(const char **)v10;
          if ( !strcasecmp(a1, v11) )
            break;
          ++v7;
          v10 += 56;
          if ( v7 == v5 )
            return 0xFFFFFFFFLL;
        }
        return (unsigned int)v7;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
