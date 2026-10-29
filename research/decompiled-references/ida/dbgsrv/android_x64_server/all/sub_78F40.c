/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78F40
// Address: 0x0000000000078F40

//----- (0000000000078F40) ----------------------------------------------------
void __fastcall sub_78F40(__int64 a1, double a2, __m128 a3)
{
  pthread_mutex_t *v4; // r14
  __int64 v5; // rax
  bool v6; // zf
  void *v7; // rdi
  void *v8; // rdi
  char *v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  unsigned __int64 i; // rbx

  if ( *(_BYTE *)(a1 + 145) )
  {
    v4 = (pthread_mutex_t *)qword_1557E8;
    qmutex_lock((pthread_mutex_t *)qword_1557E8);
    v5 = *(_QWORD *)(a1 + 8);
    v6 = (*(_DWORD *)(v5 + 120))-- == 1;
    if ( v6 && off_154A38 )
      off_154A38();
    qmutex_unlock(v4);
  }
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 128) = 0;
  v7 = *(void **)(a1 + 72);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v8 = *(void **)(a1 + 48);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v9 = *(char **)(a1 + 24);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    if ( v10 )
    {
      v11 = 0;
      for ( i = 1; ; ++i )
      {
        free_idcv(&v9[v11], 0.0, a3);
        if ( i >= v10 )
          break;
        v9 = *(char **)(a1 + 24);
        v11 += 32;
      }
      v9 = *(char **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
}
// 5F3B0: using guessed type __int64 __fastcall sub_5F3B0();
// 154A38: using guessed type __int64 (__fastcall *off_154A38)();
