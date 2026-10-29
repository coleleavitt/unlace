const char *sub_90550()
{
  const char *v0; // rbx
  __uid_t v2; // eax
  struct passwd *v3; // rax
  char *pw_dir; // rbp
  size_t v5; // rax
  size_t v6; // rbx
  size_t v7; // r12
  void *v8; // rdi
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  sub_98430(v9);
  if ( (unsigned __int64)xmmword_166188 <= 1 )
  {
    sub_98D10("HOME");
    if ( (unsigned __int64)xmmword_166188 <= 1 )
    {
      v2 = getuid();
      v3 = getpwuid(v2);
      if ( v3 )
      {
        pw_dir = v3->pw_dir;
        if ( !pw_dir || (v5 = strlen(v3->pw_dir), (v6 = v5) == 0) )
        {
          *(_QWORD *)&xmmword_166188 = 0;
LABEL_13:
          v0 = haystack;
          goto LABEL_3;
        }
        v7 = v5 + 1;
        v8 = dest;
        if ( *((_QWORD *)&xmmword_166188 + 1) < v5 + 1 )
        {
          dest = (void *)sub_96080(&dest, dest, v5 + 1, 1);
          v8 = dest;
        }
        *(_QWORD *)&xmmword_166188 = v7;
        memmove(v8, pw_dir, v6);
        *((_BYTE *)dest + v6) = 0;
      }
      if ( !(_QWORD)xmmword_166188 )
        goto LABEL_13;
    }
  }
  v0 = (const char *)dest;
LABEL_3:
  sub_98450(v9[0]);
  return v0;
}

