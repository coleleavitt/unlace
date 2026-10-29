const char *sub_834420()
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
  sub_842D10(v9);
  if ( (unsigned __int64)xmmword_2CD4EC8 <= 1 )
  {
    qgetenv((char *)"HOME");
    if ( (unsigned __int64)xmmword_2CD4EC8 <= 1 )
    {
      v2 = getuid();
      v3 = getpwuid(v2);
      if ( v3 )
      {
        pw_dir = v3->pw_dir;
        if ( !pw_dir || (v5 = strlen(v3->pw_dir), (v6 = v5) == 0) )
        {
          *(_QWORD *)&xmmword_2CD4EC8 = 0;
LABEL_13:
          v0 = haystack;
          goto LABEL_3;
        }
        v7 = v5 + 1;
        v8 = qword_2CD4EC0;
        if ( *((_QWORD *)&xmmword_2CD4EC8 + 1) < v5 + 1 )
        {
          qword_2CD4EC0 = (void *)qvector_reserve(&qword_2CD4EC0, qword_2CD4EC0, v5 + 1, 1);
          v8 = qword_2CD4EC0;
        }
        *(_QWORD *)&xmmword_2CD4EC8 = v7;
        memmove(v8, pw_dir, v6);
        *((_BYTE *)qword_2CD4EC0 + v6) = 0;
      }
      if ( !(_QWORD)xmmword_2CD4EC8 )
        goto LABEL_13;
    }
  }
  v0 = (const char *)qword_2CD4EC0;
LABEL_3:
  qmutex_unlock(v9[0]);
  return v0;
}
