/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_create
// Address: 0x00000000000C30B0

//----- (00000000000C30B0) ----------------------------------------------------
pthread_mutex_t *__fastcall qsem_create(const char *a1, unsigned int a2)
{
  char *v4; // x0
  pthread_mutex_t *v5; // x19
  unsigned int v6; // w22
  sem_t *v7; // x21
  size_t v8; // x0
  void *align; // x1
  unsigned __int64 v10; // x22
  size_t v11; // x21
  void *v12; // x0

  v4 = (char *)operator new(0x28u);
  v5 = (pthread_mutex_t *)v4;
  *((_QWORD *)v4 + 1) = 0;
  *((_QWORD *)v4 + 2) = 0;
  *(_QWORD *)v4 = 0;
  if ( a1 && *a1 )
  {
    v6 = __umask_chk(0);
    v7 = sem_open(a1, 64, 438, a2);
    __umask_chk(v6);
    if ( v7 )
    {
      v5->__list.__prev = (struct __pthread_internal_list *)v7;
      v8 = strlen(a1);
      if ( v8 )
      {
        align = (void *)v5->__align;
        v10 = v8 + 1;
        v11 = v8;
        if ( *(&v5->__align + 2) < v8 + 1 )
        {
          align = qvector_reserve(v5, align, v10, 1u);
          v5->__align = (__int64)align;
        }
        *(&v5->__align + 1) = v10;
        memmove(align, a1, v11);
        *(_BYTE *)(v5->__align + v11) = 0;
      }
      else
      {
        *(&v5->__align + 1) = 0;
      }
      return v5;
    }
  }
  else if ( sem_init((sem_t *)(v4 + 24), 0, a2) != -1 )
  {
    return v5;
  }
  v12 = (void *)v5->__align;
  if ( v5->__align )
  {
    *(&v5->__align + 1) = 0;
    qfree(v12);
  }
  operator delete(v5);
  return nullptr;
}
// 36EC0: using guessed type __int64 __fastcall __umask_chk(_QWORD);
