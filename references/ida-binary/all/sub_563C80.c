__int64 __fastcall sub_563C80(__int64 a1, const char *a2, unsigned int a3)
{
  size_t v3; // rbx
  unsigned int v4; // r12d
  __int64 v5; // r13
  unsigned int v6; // r14d
  const char *v7; // r15
  int v8; // eax

  v3 = a3;
  v4 = sub_562CD0(a1);
  if ( (_WORD)v4 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    v6 = 1;
    while ( 1 )
    {
      v7 = *(const char **)(v5 + 8LL * (unsigned __int16)v6);
      v8 = strncmp(a2, v7, v3);
      if ( v8 == -1 )
        return 0;
      if ( !v8 && !v7[v3] )
        break;
      if ( (unsigned __int16)v4 < (unsigned __int16)++v6 )
        return 0;
    }
    return v6;
  }
  return v4;
}
