__int64 __fastcall sub_6D8560(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  char *v3; // rbp
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v1 = 1;
  v7 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1704LL) + 8LL);
  if ( v2 != 2 )
  {
    v1 = 0;
    if ( v2 != 1 )
    {
      s1 = nullptr;
      v6 = 0;
      get_selected_parser_name(&s1);
      v3 = s1;
      if ( (_QWORD)v6 )
      {
        LOBYTE(v1) = strcmp(s1, "clang") == 0;
        if ( !v3 )
          return v1;
        goto LABEL_5;
      }
      if ( s1 )
      {
LABEL_5:
        *(_QWORD *)&v6 = 0;
        qfree(v3);
      }
    }
  }
  return v1;
}

