__int64 __fastcall sub_5E2590(__int64 a1)
{
  const char *v1; // rbp
  int v2; // eax
  _BYTE *v3; // rbx
  const char *v4; // rsi
  __int64 v6; // rax
  char *v7; // rax
  __int64 (__fastcall *v8)(_QWORD); // rdx
  _QWORD *v9; // rdi

  if ( *(_QWORD *)(a1 + 48) )
  {
    v1 = *(const char **)(a1 + 40);
    if ( !strcmp(v1, "align") )
    {
      v6 = 8;
    }
    else
    {
      if ( strcmp(v1, "noreturn") )
      {
        v2 = strcmp(v1, "uuid");
        goto LABEL_6;
      }
      v6 = 32;
    }
    v7 = (char *)&off_2B30420 + v6;
    v8 = *(__int64 (__fastcall **)(_QWORD))v7;
    v9 = (_QWORD *)(a1 + *((_QWORD *)v7 + 1));
    if ( (*(_QWORD *)v7 & 1) != 0 )
      v8 = *(__int64 (__fastcall **)(_QWORD))((char *)v8 + *v9 - 1);
    return v8(v9);
  }
  v2 = -1;
  v1 = haystack;
LABEL_6:
  v3 = &off_2B303A8;
  while ( v2 )
  {
    if ( v3 == algn_2B30408 )
      return set_qerrno(47);
    v4 = *(const char **)v3;
    v3 += 8;
    v2 = strcmp(v1, v4);
  }
  return 0;
}
