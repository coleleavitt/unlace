unsigned __int64 __fastcall sub_156960(int a1, __int64 a2, _BYTE *a3, _BYTE *a4, _BYTE *a5)
{
  __int64 v8; // r14
  const char **i; // r15
  const char *v10; // rdi
  char v11; // al
  char v13; // al
  int v14; // [rsp+14h] [rbp-44h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( a1 > 1 )
  {
    v8 = a2 + 8LL * (unsigned int)(a1 - 2) + 16;
    for ( i = (const char **)(a2 + 8); i != (const char **)v8; ++i )
    {
      v10 = *i;
      if ( **i != 45 )
        return v15 - __readfsqword(0x28u);
      v11 = v10[1];
      if ( v11 == 77 )
      {
        v13 = v10[2];
        if ( v13 )
        {
          if ( (v13 & 0xEF) == 0x42 )
            set_merge_state();
        }
        else if ( a5 )
        {
          *a5 = 1;
        }
        continue;
      }
      if ( v11 > 77 )
      {
        if ( v11 == 118 )
        {
          enable_console_messages(1);
        }
        else if ( v11 == 122 && ((unsigned int)qsscanf() != 1 || v14 != strlen(v10 + 2)) )
        {
          if ( a4 )
            *a4 = 1;
          debug = -1;
        }
        continue;
      }
      if ( v11 > 66 )
      {
        if ( v11 == 76 )
          qword_2530B0 = (__int64)(v10 + 2);
        continue;
      }
      if ( v11 <= 64 )
      {
        if ( v11 != 45 || strcmp(v10, "--upg32") )
          continue;
        if ( a3 )
          *a3 = 1;
      }
      batch = 1;
    }
  }
  return v15 - __readfsqword(0x28u);
}

