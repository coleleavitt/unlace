/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CC0C0
// Address: 0x080CC0C0

//----- (080CC0C0) --------------------------------------------------------
int *sub_80CC0C0()
{
  int *v0; // edi
  __uid_t v2; // eax
  struct passwd *v3; // eax
  size_t v4; // eax
  const char *v5; // edx
  unsigned int v6; // ecx
  void *v7; // eax
  const char *v8; // [esp+0h] [ebp-34h]
  size_t n; // [esp+4h] [ebp-30h]
  const char *src; // [esp+8h] [ebp-2Ch]
  void *srca; // [esp+8h] [ebp-2Ch]
  pthread_mutex_t *mutex; // [esp+14h] [ebp-20h] BYREF
  unsigned int v13; // [esp+18h] [ebp-1Ch]

  v13 = __readgsdword(0x14u);
  sub_80D15D0(&mutex);
  if ( (unsigned int)dword_811E894 > 1 )
    goto LABEL_2;
  sub_80D2000("HOME", (void **)&dword_811E890);
  if ( (unsigned int)dword_811E894 > 1 )
    goto LABEL_2;
  v2 = getuid();
  v3 = getpwuid(v2);
  if ( !v3 )
  {
LABEL_13:
    if ( !dword_811E894 )
      goto LABEL_14;
LABEL_2:
    v0 = (int *)dword_811E890;
    goto LABEL_3;
  }
  if ( v3->pw_dir )
  {
    src = v3->pw_dir;
    v4 = strlen(src);
    v5 = src;
    n = v4;
    if ( v4 )
    {
      v6 = v4 + 1;
      v7 = (void *)dword_811E890;
      if ( dword_811E898 < v6 )
      {
        v8 = src;
        srca = (void *)v6;
        v7 = sub_80CF920((int)&dword_811E890, (void *)dword_811E890, v6, 1u);
        v5 = v8;
        v6 = (unsigned int)srca;
        dword_811E890 = (int)v7;
      }
      dword_811E894 = v6;
      memmove(v7, v5, n);
      *(_BYTE *)(dword_811E890 + n) = 0;
      goto LABEL_13;
    }
  }
  dword_811E894 = 0;
LABEL_14:
  v0 = &dword_80DDFD8;
LABEL_3:
  sub_80D1600(mutex);
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811E890: using guessed type int dword_811E890;
// 811E894: using guessed type int dword_811E894;
// 811E898: using guessed type int dword_811E898;
