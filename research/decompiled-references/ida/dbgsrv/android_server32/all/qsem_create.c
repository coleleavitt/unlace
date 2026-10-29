/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_create
// Address: 0x00081EE2

//----- (00081EE2) --------------------------------------------------------
void **__fastcall qsem_create(const char *a1, unsigned int a2)
{
  char *v4; // r0
  void **v5; // r4
  sem_t *v6; // r6
  size_t v7; // r0
  size_t v8; // r6
  void *v9; // r1
  unsigned int v10; // r7
  void *v11; // r0
  __mode_t mask; // [sp+0h] [bp-4h]

  v4 = (char *)operator new(0x10u);
  *(_DWORD *)v4 = 0;
  *((_DWORD *)v4 + 1) = 0;
  *((_DWORD *)v4 + 2) = 0;
  v5 = (void **)v4;
  if ( a1 && *a1 )
  {
    mask = umask(0);
    v6 = sem_open(a1, 64, 438, a2);
    umask(mask);
    if ( v6 )
    {
      v5[3] = v6;
      v7 = strlen(a1);
      if ( v7 )
      {
        v8 = v7;
        v9 = *v5;
        v10 = v7 + 1;
        if ( (unsigned int)v5[2] < v7 + 1 )
        {
          v9 = qvector_reserve((int)v5, v9, v10, 1u);
          *v5 = v9;
        }
        v5[1] = (void *)v10;
        memmove(v9, a1, v8);
        *((_BYTE *)*v5 + v8) = 0;
      }
      else
      {
        v5[1] = nullptr;
      }
      return v5;
    }
  }
  else if ( sem_init((sem_t *)(v4 + 12), 0, a2) != -1 )
  {
    return v5;
  }
  v11 = *v5;
  if ( *v5 )
  {
    v5[1] = nullptr;
    qfree(v11);
  }
  operator delete(v5);
  return nullptr;
}
