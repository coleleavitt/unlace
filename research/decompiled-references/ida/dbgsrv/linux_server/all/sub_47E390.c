/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E390
// Address: 0x000000000047E390

//----- (000000000047E390) ----------------------------------------------------
const char *sub_47E390()
{
  const char *v0; // rbx
  __uid_t v2; // eax
  struct passwd *v3; // rax
  char *pw_dir; // rbp
  size_t v5; // rax
  size_t v6; // rbx
  size_t v7; // r12
  void *v8; // rdi
  pthread_mutex_t *v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = (pthread_mutex_t *)__readfsqword(0x28u);
  sub_482EF0(v9);
  if ( (unsigned __int64)xmmword_4C84C8 <= 1 )
  {
    sub_4837D0("HOME", (__int64)&qword_4C84C0);
    if ( (unsigned __int64)xmmword_4C84C8 <= 1 )
    {
      v2 = getuid();
      v3 = getpwuid(v2);
      if ( v3 )
      {
        pw_dir = v3->pw_dir;
        if ( !pw_dir || (v5 = strlen(v3->pw_dir), (v6 = v5) == 0) )
        {
          *(_QWORD *)&xmmword_4C84C8 = 0;
LABEL_13:
          v0 = s1;
          goto LABEL_3;
        }
        v7 = v5 + 1;
        v8 = qword_4C84C0;
        if ( *((_QWORD *)&xmmword_4C84C8 + 1) < v5 + 1 )
        {
          qword_4C84C0 = sub_481540((__int64)&qword_4C84C0, qword_4C84C0, v5 + 1, 1u);
          v8 = qword_4C84C0;
        }
        *(_QWORD *)&xmmword_4C84C8 = v7;
        memmove(v8, pw_dir, v6);
        *((_BYTE *)qword_4C84C0 + v6) = 0;
      }
      if ( !(_QWORD)xmmword_4C84C8 )
        goto LABEL_13;
    }
  }
  v0 = (const char *)qword_4C84C0;
LABEL_3:
  sub_482F10(v9[0]);
  return v0;
}
// 4C84C8: using guessed type __int128 xmmword_4C84C8;
