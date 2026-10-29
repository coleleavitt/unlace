/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BD640
// Address: 0x00000000000BD640

//----- (00000000000BD640) ----------------------------------------------------
const char *sub_BD640()
{
  __uid_t v0; // eax
  struct passwd *v1; // rax
  char *pw_dir; // rbx
  size_t v3; // rax
  size_t v4; // r14
  void *v5; // r15
  bool v6; // cf
  void *v7; // rax
  const char *v8; // rbx
  pthread_mutex_t *v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v10[1] = (pthread_mutex_t *)__readfsqword(0x28u);
  sub_C5BE0(v10);
  if ( (unsigned __int64)*(&xmmword_157AD0 + 1) > 1 )
    goto LABEL_10;
  qgetenv("HOME", (__int64)&xmmword_157AD0);
  if ( (unsigned __int64)*(&xmmword_157AD0 + 1) > 1 )
    goto LABEL_10;
  v0 = getuid();
  v1 = getpwuid(v0);
  if ( v1 )
  {
    pw_dir = v1->pw_dir;
    if ( !pw_dir || (v3 = strlen(v1->pw_dir)) == 0 )
    {
      *(&xmmword_157AD0 + 1) = nullptr;
      goto LABEL_13;
    }
    v4 = v3;
    v5 = (void *)(v3 + 1);
    v6 = qword_157AE0 < v3 + 1;
    v7 = xmmword_157AD0;
    if ( v6 )
    {
      v7 = qvector_reserve((__int64)&xmmword_157AD0, (char *)xmmword_157AD0, (unsigned __int64)v5, 1u);
      xmmword_157AD0 = v7;
    }
    *(&xmmword_157AD0 + 1) = v5;
    memmove(v7, pw_dir, v4);
    *((_BYTE *)xmmword_157AD0 + v4) = 0;
  }
  if ( !*(&xmmword_157AD0 + 1) )
  {
LABEL_13:
    v8 = s1;
    goto LABEL_11;
  }
LABEL_10:
  v8 = (const char *)xmmword_157AD0;
LABEL_11:
  qmutex_unlock(v10[0]);
  return v8;
}
// 157AE0: using guessed type __int64 qword_157AE0;
