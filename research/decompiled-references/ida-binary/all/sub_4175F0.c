char __fastcall sub_4175F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char result; // al
  const char *v4; // rax
  const char *v5; // rdi

  v2 = *(_QWORD *)(a1 + 32);
  result = *(_BYTE *)(v2 + 160);
  if ( !result )
  {
    v4 = &s1;
    if ( *(_QWORD *)(v2 + 80) )
    {
      v4 = *(const char **)(v2 + 72);
      v5 = &s1;
      if ( !*(_QWORD *)(a2 + 8) )
        return strcmp(v5, v4) == 0;
    }
    else
    {
      v5 = &s1;
      if ( !*(_QWORD *)(a2 + 8) )
        return strcmp(v5, v4) == 0;
    }
    v5 = *(const char **)a2;
    return strcmp(v5, v4) == 0;
  }
  return result;
}
