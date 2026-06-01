/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48A910
// Address: 0x000000000048A910

//----- (000000000048A910) ----------------------------------------------------
__int64 *sub_48A910()
{
  __int64 *v0; // x20
  __uid_t v2; // w0
  struct passwd *v3; // x0
  char *pw_dir; // x21
  size_t v5; // x0
  size_t v6; // x22
  __int64 v7; // x0
  unsigned __int64 v8; // x23
  void *v9; // x0
  pthread_mutex_t *v10; // [xsp+30h] [xbp-10h] BYREF

  sub_494748(&v10);
  if ( (unsigned __int64)qword_5224D0 <= 1 )
  {
    sub_4950A8("HOME", (__int64)&qword_5224C8);
    if ( (unsigned __int64)qword_5224D0 <= 1 )
    {
      v2 = getuid();
      v3 = getpwuid(v2);
      if ( v3 )
      {
        pw_dir = v3->pw_dir;
        if ( !pw_dir || (v5 = strlen(v3->pw_dir), (v6 = v5) == 0) )
        {
          v0 = &qword_4B2D48;
          qword_5224D0 = 0;
          goto LABEL_3;
        }
        v8 = v5 + 1;
        v9 = (void *)qword_5224C8;
        if ( v8 > qword_5224D8 )
        {
          v9 = sub_491288((__int64)&qword_5224C8, (void *)qword_5224C8, v8, 1u);
          qword_5224C8 = (__int64)v9;
        }
        qword_5224D0 = v8;
        memmove(v9, pw_dir, v6);
        *(_BYTE *)(qword_5224C8 + v6) = 0;
        v7 = qword_5224D0;
      }
      else
      {
        v7 = qword_5224D0;
      }
      if ( !v7 )
      {
        v0 = &qword_4B2D48;
        goto LABEL_3;
      }
    }
  }
  v0 = (__int64 *)qword_5224C8;
LABEL_3:
  sub_494760(v10);
  return v0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 5224C8: using guessed type __int64 qword_5224C8;
// 5224D0: using guessed type __int64 qword_5224D0;
// 5224D8: using guessed type __int64 qword_5224D8;
