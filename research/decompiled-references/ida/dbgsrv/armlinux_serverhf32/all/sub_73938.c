/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73938
// Address: 0x00073938

//----- (00073938) --------------------------------------------------------
int *sub_73938()
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

  sub_7A110(&v10);
  if ( (unsigned int)dword_D3BD4 <= 1 )
  {
    sub_7A72C("HOME", (int)&dword_D3BD0);
    if ( (unsigned int)dword_D3BD4 <= 1 )
    {
      v2 = getuid();
      v3 = getpwuid(v2);
      if ( v3 )
      {
        pw_dir = v3->pw_dir;
        if ( !pw_dir || (v5 = strlen(v3->pw_dir), (v6 = v5) == 0) )
        {
          dword_D3BD4 = 0;
          v0 = &dword_8DA5C;
          goto LABEL_3;
        }
        v8 = v5 + 1;
        v9 = (void *)dword_D3BD0;
        if ( v8 > dword_D3BD8 )
        {
          v9 = sub_77EB0((int)&dword_D3BD0, (void *)dword_D3BD0, v8, 1u);
          dword_D3BD0 = (int)v9;
        }
        dword_D3BD4 = v8;
        memmove(v9, pw_dir, v6);
        *(_BYTE *)(dword_D3BD0 + v6) = 0;
        v7 = dword_D3BD4;
      }
      else
      {
        v7 = dword_D3BD4;
      }
      if ( !v7 )
      {
        v0 = &dword_8DA5C;
        goto LABEL_3;
      }
    }
  }
  v0 = (int *)dword_D3BD0;
LABEL_3:
  sub_7A128(v10);
  return v0;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D3BD0: using guessed type int dword_D3BD0;
// D3BD4: using guessed type int dword_D3BD4;
// D3BD8: using guessed type int dword_D3BD8;
