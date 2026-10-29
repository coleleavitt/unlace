__int64 __fastcall sub_5C6880(__int64 a1, const char *a2)
{
  const char *v2; // rbp
  int v3; // eax
  _BYTE *v4; // rbx
  __int64 v6; // rax
  char *v7; // rax
  __int64 (__fastcall *v8)(_QWORD); // rdx
  _QWORD *v9; // rdi

  if ( *(_QWORD *)(a1 + 48) )
  {
    v2 = *(const char **)(a1 + 40);
    if ( !strcmp(v2, "align") )
    {
      v6 = 8;
    }
    else
    {
      if ( strcmp(v2, "noreturn") )
      {
        a2 = "uuid";
        v3 = strcmp(v2, "uuid");
        goto LABEL_6;
      }
      v6 = 32;
    }
    v7 = (char *)&off_2B06460 + v6;
    v8 = *(__int64 (__fastcall **)(_QWORD))v7;
    v9 = (_QWORD *)(a1 + *((_QWORD *)v7 + 1));
    if ( (*(_QWORD *)v7 & 1) != 0 )
      v8 = *(__int64 (__fastcall **)(_QWORD))((char *)v8 + *v9 - 1);
    return v8(v9);
  }
  v3 = -1;
  v2 = haystack;
LABEL_6:
  v4 = &off_2B063E8;
  while ( v3 )
  {
    if ( v4 == algn_2B06448 )
      return set_qerrno(47, a2);
    a2 = *(const char **)v4;
    v4 += 8;
    v3 = strcmp(v2, a2);
  }
  return 0;
}

