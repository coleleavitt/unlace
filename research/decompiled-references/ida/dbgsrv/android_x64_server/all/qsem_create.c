/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_create
// Address: 0x00000000000C7FC0

//----- (00000000000C7FC0) ----------------------------------------------------
__int64 __fastcall qsem_create(const char *src, unsigned int value)
{
  char *v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // r15d
  sem_t *v5; // rbp
  size_t v6; // rax
  size_t v7; // r15
  unsigned __int64 v8; // rbp
  char *v9; // rax
  char *v10; // rdi

  v2 = (char *)operator new(0x28u);
  v3 = (__int64)v2;
  *(_OWORD *)v2 = 0;
  *((_QWORD *)v2 + 2) = 0;
  if ( src && *src )
  {
    v4 = __umask_chk(0);
    v5 = sem_open(src, 64, 438, value);
    __umask_chk(v4);
    if ( v5 )
    {
      *(_QWORD *)(v3 + 24) = v5;
      v6 = strlen(src);
      if ( v6 )
      {
        v7 = v6;
        v8 = v6 + 1;
        v9 = *(char **)v3;
        if ( *(_QWORD *)(v3 + 16) < v8 )
        {
          v9 = (char *)qvector_reserve(v3, *(char **)v3, v8, 1u);
          *(_QWORD *)v3 = v9;
        }
        *(_QWORD *)(v3 + 8) = v8;
        memmove(v9, src, v7);
        *(_BYTE *)(*(_QWORD *)v3 + v7) = 0;
      }
      else
      {
        *(_QWORD *)(v3 + 8) = 0;
      }
      return v3;
    }
  }
  else if ( sem_init((sem_t *)(v2 + 24), 0, value) != -1 )
  {
    return v3;
  }
  v10 = *(char **)v3;
  if ( *(_QWORD *)v3 )
  {
    *(_QWORD *)(v3 + 8) = 0;
    qfree(v10);
  }
  operator delete((void *)v3);
  return 0;
}
// 34460: using guessed type __int64 __fastcall __umask_chk(_QWORD);
