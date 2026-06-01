__int64 __fastcall sub_19B300(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 i; // rbp
  const char *v6; // rdi
  const char *v7; // rsi
  unsigned int v8; // r12d
  size_t v9; // rax

  v2 = a1[1];
  if ( v2 )
  {
    v3 = *a1;
    for ( i = 0; v2 != i; ++i )
    {
      v8 = *(unsigned __int8 *)(v3 + 8);
      if ( (_BYTE)v8 )
      {
        if ( *(_QWORD *)(a2 + 48) )
        {
          v6 = *(const char **)v3;
          v7 = *(const char **)(a2 + 40);
          if ( **(_BYTE **)v3 != 1 )
            goto LABEL_4;
        }
        else
        {
          v6 = *(const char **)v3;
          v7 = s1;
          if ( **(_BYTE **)v3 != 1 )
          {
LABEL_4:
            if ( !strcmp(v6, v7) )
              return v8;
            goto LABEL_5;
          }
        }
        v9 = strlen(v6 + 1);
        if ( !strncmp(v6 + 1, v7, v9) )
          return v8;
      }
LABEL_5:
      v3 += 16;
    }
  }
  return 0;
}

