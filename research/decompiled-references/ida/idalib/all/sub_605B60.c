void __fastcall sub_605B60(__int64 a1, __int64 a2)
{
  char *v2; // r13
  const char *v3; // rbx
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  const char *v7; // rbp
  char *v8; // rax
  char *v9; // rax
  char *v10; // r14
  int v11; // eax

  v2 = (char *)qstrdup(a2);
  v3 = v2;
  if ( v2 )
  {
    while ( 1 )
    {
      v7 = nullptr;
      v8 = strchr(v3, 59);
      if ( v8 )
      {
        *v8 = 0;
        v7 = v8 + 1;
      }
      v9 = strchr(v3, 61);
      v10 = v9;
      if ( v9 )
      {
        if ( *(v9 - 1) == 41 )
        {
          v11 = sub_7A0090(a1, v3);
          *v10 = 0;
          v6 = (unsigned int)v11;
          if ( v11 < 0 )
            sub_368890();
          v4 = v10 + 1;
          v5 = 1;
        }
        else
        {
          *v9 = 0;
          v4 = v9 + 1;
          v5 = 0;
          v6 = 0;
        }
      }
      else
      {
        v5 = 0;
        v4 = "1";
        v6 = 0;
      }
      lex_define_macro(a1, v3, v4, v6, v5);
      if ( !v7 )
        break;
      v3 = v7;
    }
  }
  qfree(v2);
}
