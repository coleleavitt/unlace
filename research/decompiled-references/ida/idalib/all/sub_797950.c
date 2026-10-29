void __fastcall sub_797950(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  char *v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // rax
  void *v8; // rbx
  __int64 v9; // rdx
  bool v10; // zf

  if ( *(_BYTE *)(a1 + 145) )
  {
    v8 = qword_2CD4690;
    qmutex_lock(qword_2CD4690);
    v9 = *(_QWORD *)(a1 + 8);
    v10 = (*(_DWORD *)(v9 + 120))-- == 1;
    if ( v10 && off_2C7C638 )
      off_2C7C638();
    qmutex_unlock(v8);
  }
  v2 = *(void **)(a1 + 72);
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 128) = 0;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v2);
  }
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v3);
  }
  v4 = *(char **)(a1 + 24);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = i;
        free_idcv(&v4[32 * v7]);
        v4 = *(char **)(a1 + 24);
      }
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v4);
  }
}
