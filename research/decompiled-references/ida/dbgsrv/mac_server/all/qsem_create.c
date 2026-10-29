/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_create
// Address: 0x0000000100080060

//----- (0000000100080060) ----------------------------------------------------
__int64 __fastcall qsem_create(char *__s, unsigned int value)
{
  char *v2; // rax
  __int64 v3; // rbx
  mode_t v4; // r13
  char *v5; // r15
  sem_t *v6; // r14
  size_t v7; // rax
  size_t v8; // r12
  unsigned __int64 v9; // r13
  void *v10; // rax
  void *v11; // rdi
  char __sa[32]; // [rsp+0h] [rbp-50h] BYREF

  v2 = (char *)operator new(0x20u);
  v3 = (__int64)v2;
  *(_OWORD *)v2 = 0;
  *((_QWORD *)v2 + 2) = 0;
  if ( __s && *__s )
  {
    v4 = umask(0);
    if ( strlen(__s) < 0x1F )
    {
      v5 = __s;
    }
    else
    {
      v5 = __sa;
      sub_10007FF70(__s, __sa, 31);
      __sa[30] = 0;
    }
    v6 = sem_open(v5, 512, 438, value);
    umask(v4);
    if ( v6 != (sem_t *)-1LL )
    {
      *(_QWORD *)(v3 + 24) = v6;
      v7 = strlen(v5);
      if ( !v7 )
      {
        *(_QWORD *)(v3 + 8) = 0;
        return v3;
      }
      v8 = v7;
      v9 = v7 + 1;
      v10 = *(void **)v3;
      if ( *(_QWORD *)(v3 + 16) < v9 )
      {
        v10 = qvector_reserve(v3, *(void **)v3, v9, 1u);
        *(_QWORD *)v3 = v10;
      }
      *(_QWORD *)(v3 + 8) = v9;
      memmove(v10, v5, v8);
      *(_BYTE *)(*(_QWORD *)v3 + v8) = 0;
    }
LABEL_13:
    if ( v6 != (sem_t *)-1LL )
      return v3;
    goto LABEL_14;
  }
  v6 = (sem_t *)(v2 + 24);
  if ( !semaphore_create(mach_task_self_, (semaphore_t *)v2 + 6, 0, value) )
    goto LABEL_13;
LABEL_14:
  v11 = *(void **)v3;
  if ( *(_QWORD *)v3 )
  {
    *(_QWORD *)(v3 + 8) = 0;
    qfree(v11);
  }
  operator delete((void *)v3);
  return 0;
}
// 1000801DB: conditional instruction was optimized away because r14.8!=FFFFFFFFFFFFFFFF
