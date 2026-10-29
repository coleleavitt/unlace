/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B77D4
// Address: 0x00000000000B77D4

//----- (00000000000B77D4) ----------------------------------------------------
char *sub_B77D4()
{
  __uid_t v0; // w0
  struct passwd *v1; // x0
  char *pw_dir; // x20
  size_t v3; // x0
  void *v4; // x1
  unsigned __int64 v5; // x22
  size_t v6; // x21
  char *v7; // x19
  pthread_mutex_t *v9[2]; // [xsp+0h] [xbp-50h] BYREF

  v9[1] = *(pthread_mutex_t **)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_C0EAC(v9);
  if ( (unsigned __int64)qword_167D88 <= 1 )
  {
    qgetenv("HOME", (__int64)&qword_167D80);
    if ( (unsigned __int64)qword_167D88 <= 1 )
    {
      v0 = getuid();
      v1 = getpwuid(v0);
      if ( v1 )
      {
        pw_dir = v1->pw_dir;
        if ( !pw_dir || (v3 = strlen(v1->pw_dir)) == 0 )
        {
          qword_167D88 = 0;
          v7 = &byte_F154B;
          goto LABEL_11;
        }
        v4 = (void *)qword_167D80;
        v5 = v3 + 1;
        v6 = v3;
        if ( qword_167D90 < v3 + 1 )
        {
          v4 = qvector_reserve((pthread_mutex_t *)&qword_167D80, (void *)qword_167D80, v5, 1u);
          qword_167D80 = (__int64)v4;
        }
        qword_167D88 = v5;
        memmove(v4, pw_dir, v6);
        *(_BYTE *)(qword_167D80 + v6) = 0;
      }
      if ( !qword_167D88 )
      {
        v7 = &byte_F154B;
        goto LABEL_11;
      }
    }
  }
  v7 = (char *)qword_167D80;
LABEL_11:
  qmutex_unlock(v9[0]);
  return v7;
}
// F154B: using guessed type char byte_F154B;
// 166D80: using guessed type __int64[512];
// 167D80: using guessed type __int64 qword_167D80;
// 167D88: using guessed type __int64 qword_167D88;
// 167D90: using guessed type __int64 qword_167D90;
