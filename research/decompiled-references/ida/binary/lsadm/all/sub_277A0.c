const char *sub_277A0()
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
  sub_2B500(v9);
  if ( (unsigned __int64)xmmword_7AC88 <= 1 )
  {
    sub_2B550("HOME");
    if ( (unsigned __int64)xmmword_7AC88 <= 1 )
    {
      v2 = getuid();
      v3 = getpwuid(v2);
      if ( v3 )
      {
        pw_dir = v3->pw_dir;
        if ( !pw_dir || (v5 = strlen(v3->pw_dir), (v6 = v5) == 0) )
        {
          *(_QWORD *)&xmmword_7AC88 = 0;
LABEL_13:
          v0 = s1;
          goto LABEL_3;
        }
        v7 = v5 + 1;
        v8 = dest;
        if ( *((_QWORD *)&xmmword_7AC88 + 1) < v5 + 1 )
        {
          dest = (void *)sub_29E60(&dest, dest, v5 + 1, 1);
          v8 = dest;
        }
        *(_QWORD *)&xmmword_7AC88 = v7;
        memmove(v8, pw_dir, v6);
        *((_BYTE *)dest + v6) = 0;
      }
      if ( !(_QWORD)xmmword_7AC88 )
        goto LABEL_13;
    }
  }
  v0 = (const char *)dest;
LABEL_3:
  sub_2B520(v9[0]);
  return v0;
}

