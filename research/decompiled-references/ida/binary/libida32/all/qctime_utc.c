__int64 __fastcall qctime_utc(char *s, unsigned __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r12d
  size_t v6; // rbx
  unsigned int v7; // edi
  size_t v8; // r14
  unsigned __int64 v9; // rax
  struct tm v10; // [rsp+0h] [rbp-98h] BYREF
  char buf[40]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v3 = qgmtime(&v10);
  if ( (_BYTE)v3 && (v4 = v3, asctime_r(&v10, buf)) )
  {
    qstrncpy(s, buf, a2);
    if ( a2 > 8 && s[8] == 32 )
      s[8] = 48;
    v6 = strlen(s);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = s[v6 - 1];
        v8 = v6 - 1;
        if ( v7 > 0x7F || !isspace(v7) )
          break;
        --v6;
        if ( !v8 )
          goto LABEL_12;
      }
      v9 = v6 + 6;
    }
    else
    {
LABEL_12:
      v9 = 6;
    }
    if ( a2 >= v9 )
      qstrncpy(&s[v6], " UTC\n", 6);
  }
  else
  {
    v4 = 0;
    qstrncpy(s, "[wrong timestamp]\n", a2);
  }
  return v4;
}

