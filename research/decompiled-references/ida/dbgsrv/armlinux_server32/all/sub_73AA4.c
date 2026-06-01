/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73AA4
// Address: 0x00073AA4

//----- (00073AA4) --------------------------------------------------------
int *sub_73AA4()
{
  int *v0; // r4
  __uid_t v2; // r0
  struct passwd *v3; // r0
  char *pw_dir; // r6
  size_t v5; // r0
  size_t v6; // r7
  int v7; // r3
  unsigned int v8; // r9
  void *v9; // r0
  pthread_mutex_t *v10; // [sp+0h] [bp-Ch] BYREF

  sub_7A278(&v10);
  if ( (unsigned int)dword_D4BF4 <= 1 )
  {
    sub_7A894("HOME", (int)&dword_D4BF0);
    if ( (unsigned int)dword_D4BF4 <= 1 )
    {
      v2 = getuid();
      v3 = getpwuid(v2);
      if ( v3 )
      {
        pw_dir = v3->pw_dir;
        if ( !pw_dir || (v5 = strlen(v3->pw_dir), (v6 = v5) == 0) )
        {
          dword_D4BF4 = 0;
          v0 = &dword_8DB98;
          goto LABEL_3;
        }
        v8 = v5 + 1;
        v9 = (void *)dword_D4BF0;
        if ( v8 > dword_D4BF8 )
        {
          v9 = sub_78018((int)&dword_D4BF0, (void *)dword_D4BF0, v8, 1u);
          dword_D4BF0 = (int)v9;
        }
        dword_D4BF4 = v8;
        memmove(v9, pw_dir, v6);
        *(_BYTE *)(dword_D4BF0 + v6) = 0;
        v7 = dword_D4BF4;
      }
      else
      {
        v7 = dword_D4BF4;
      }
      if ( !v7 )
      {
        v0 = &dword_8DB98;
        goto LABEL_3;
      }
    }
  }
  v0 = (int *)dword_D4BF0;
LABEL_3:
  sub_7A290(v10);
  return v0;
}
// 8DB98: using guessed type int dword_8DB98;
// D4BF0: using guessed type int dword_D4BF0;
// D4BF4: using guessed type int dword_D4BF4;
// D4BF8: using guessed type int dword_D4BF8;
