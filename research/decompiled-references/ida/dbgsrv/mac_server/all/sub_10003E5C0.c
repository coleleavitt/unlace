/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003E5C0
// Address: 0x000000010003E5C0

//----- (000000010003E5C0) ----------------------------------------------------
void __fastcall sub_10003E5C0(__int64 a1)
{
  pthread_mutex_t *v2; // r14
  __int64 v3; // rax
  bool v4; // zf
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  unsigned __int8 *v11; // rsi
  int v12; // eax
  void *v13; // rdi

  if ( *(_BYTE *)(a1 + 145) == 1 )
  {
    v2 = (pthread_mutex_t *)qword_1000AD0F0;
    qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = (*(_DWORD *)(v3 + 120))-- == 1;
    if ( v4 && off_1000AC0F8 != nullptr )
      off_1000AC0F8();
    qmutex_unlock(v2);
  }
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 128) = 0;
  v5 = *(void **)(a1 + 72);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v6 = *(void **)(a1 + 48);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v7 = *(void **)(a1 + 24);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( v8 )
    {
      v9 = 0;
      do
      {
        v10 = *(_QWORD *)(a1 + 24);
        v11 = (unsigned __int8 *)(v9 + v10);
        if ( !(v9 + v10) )
        {
          if ( under_debugger != 1 )
            interr(0xA60u);
          BUG();
        }
        v12 = *v11;
        if ( v12 == 5 )
        {
          sub_1000380B0(*(unsigned __int8 ***)(v10 + v9 + 8), v11);
        }
        else if ( v12 == 7 )
        {
          v13 = *(void **)(v10 + v9 + 8);
          if ( v13 )
          {
            *(_QWORD *)(v10 + v9 + 16) = 0;
            qfree(v13);
            *(_QWORD *)(v10 + v9 + 24) = 0;
          }
        }
        *(_BYTE *)(v10 + v9) = 2;
        *(_QWORD *)(v10 + v9 + 8) = 0;
        v9 += 32;
        --v8;
      }
      while ( v8 );
      v7 = *(void **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
}
// 1000AC0F8: using guessed type __int64 (__fastcall *off_1000AC0F8)();
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE23D: using guessed type char under_debugger;
