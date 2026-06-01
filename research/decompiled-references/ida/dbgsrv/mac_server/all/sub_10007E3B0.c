/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007E3B0
// Address: 0x000000010007E3B0

//----- (000000010007E3B0) ----------------------------------------------------
__int64 __fastcall sub_10007E3B0(void *a1)
{
  pthread_mutex_t *v1; // rbx
  pthread_t v2; // rax

  v1 = *((pthread_mutex_t **)a1 + 7);
  if ( v1 )
    pthread_mutex_lock(v1);
  if ( !*((_BYTE *)a1 + 76) )
  {
    v2 = qthread_create((void *(__cdecl *)(void *))sub_10007E7F0, a1);
    *((_QWORD *)a1 + 8) = v2;
    if ( !v2 )
    {
      if ( under_debugger != 1 )
        interr(0x4EAu);
      BUG();
    }
    *((_BYTE *)a1 + 76) = 1;
    pthread_sigmask(2, (const sigset_t *)a1 + 18, nullptr);
  }
  if ( v1 )
    pthread_mutex_unlock(v1);
  return __stack_chk_guard;
}
// 1000AE23D: using guessed type char under_debugger;
