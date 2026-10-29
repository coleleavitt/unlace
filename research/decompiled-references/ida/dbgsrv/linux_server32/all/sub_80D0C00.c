/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0C00
// Address: 0x080D0C00

//----- (080D0C00) --------------------------------------------------------
void **__cdecl sub_80D0C00(char *name, unsigned int value)
{
  int v2; // eax
  void **v3; // esi
  sem_t *v5; // ebp
  size_t v6; // eax
  size_t v7; // ebp
  void *v8; // eax
  unsigned int v9; // edx
  void *v10; // eax
  __mode_t mask; // [esp+0h] [ebp-20h]
  __mode_t maska; // [esp+0h] [ebp-20h]

  v2 = operator new(0x1Cu);
  *(_DWORD *)v2 = 0;
  v3 = (void **)v2;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  if ( !name || !*name )
  {
    if ( sem_init((sem_t *)(v2 + 12), 0, value) != -1 )
      return v3;
    goto LABEL_8;
  }
  mask = umask(0);
  v5 = sem_open(name, 64, 438, value);
  umask(mask);
  if ( !v5 )
  {
LABEL_8:
    if ( v3 )
    {
      v8 = *v3;
      if ( *v3 )
      {
        v3[1] = nullptr;
        sub_80CF780(v8);
      }
      operator delete(v3, 0x1Cu);
    }
    return nullptr;
  }
  v3[3] = v5;
  v6 = strlen(name);
  v7 = v6;
  if ( v6 )
  {
    v9 = v6 + 1;
    v10 = *v3;
    if ( (unsigned int)v3[2] < v9 )
    {
      maska = v9;
      v10 = sub_80CF920((int)v3, v10, v9, 1u);
      v9 = maska;
      *v3 = v10;
    }
    v3[1] = (void *)v9;
    memmove(v10, name, v7);
    *((_BYTE *)*v3 + v7) = 0;
    return v3;
  }
  v3[1] = nullptr;
  return v3;
}
