/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79AD0
// Address: 0x00079AD0

//----- (00079AD0) --------------------------------------------------------
char *__fastcall sub_79AD0(const char *a1, unsigned int a2)
{
  char *v4; // r4
  int v5; // r0
  bool v6; // zf
  void *v7; // r0
  void *v8; // r0
  __mode_t v10; // r7
  sem_t *v11; // r6
  size_t v12; // r0
  size_t v13; // r6
  unsigned int v14; // r7
  void *v15; // r0

  v4 = (char *)sub_805CC(0x1Cu);
  *(_DWORD *)v4 = 0;
  *((_DWORD *)v4 + 1) = 0;
  *((_DWORD *)v4 + 2) = 0;
  if ( !a1 || !*a1 )
  {
    v5 = sem_init((sem_t *)(v4 + 12), 0, a2);
    v6 = v5 == -1;
    if ( v5 != -1 )
      v6 = v4 + 12 == nullptr;
    if ( !v6 )
      return v4;
    goto LABEL_7;
  }
  v10 = umask(0);
  v11 = sem_open(a1, 64, 438, a2);
  umask(v10);
  if ( !v11 )
  {
LABEL_7:
    if ( v4 )
    {
      v7 = *(void **)v4;
      if ( *(_DWORD *)v4 )
      {
        *((_DWORD *)v4 + 1) = 0;
        sub_77E08(v7);
      }
      v8 = v4;
      v4 = nullptr;
      sub_8121C(v8);
    }
    return v4;
  }
  *((_DWORD *)v4 + 3) = v11;
  v12 = strlen(a1);
  v13 = v12;
  if ( v12 )
  {
    v14 = v12 + 1;
    v15 = *(void **)v4;
    if ( v14 > *((_DWORD *)v4 + 2) )
    {
      v15 = sub_77EB0((int)v4, *(void **)v4, v14, 1u);
      *(_DWORD *)v4 = v15;
    }
    *((_DWORD *)v4 + 1) = v14;
    memmove(v15, a1, v13);
    *(_BYTE *)(*(_DWORD *)v4 + v13) = 0;
    return v4;
  }
  *((_DWORD *)v4 + 1) = 0;
  return v4;
}
