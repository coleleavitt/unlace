/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8590
// Address: 0x00000000000A8590

//----- (00000000000A8590) ----------------------------------------------------
void __fastcall sub_A8590(__int64 a1, __int64 *a2)
{
  sem_t ***v2; // r15
  pthread_t v3; // rax
  __int64 v4; // rdi
  const char *v5; // rax

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88)) )
  {
    v2 = (sem_t ***)operator new(0x18u);
    *v2 = (sem_t **)a1;
    v2[1] = (sem_t **)a2;
    v2[2] = (sem_t **)qsem_create(nullptr, 0);
    v3 = qthread_create((void *(*)(void *))start_routine, v2);
    if ( v3 )
    {
      sub_A8690(a1, (unsigned __int64)a2, v3);
      v4 = (__int64)v2[2];
      if ( v4 )
        qsem_post(v4);
    }
    else
    {
      v5 = (const char *)qerrstr(0xFFFFFFFFLL);
      sub_932B0((__int64)a2, "Failed to create thread: %s; cannot handle session\n", v5);
      if ( a2 )
        (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
      *(_OWORD *)v2 = 0;
      qsem_free(v2[2]);
      operator delete(v2);
    }
  }
  else
  {
    sub_A8690(a1, (unsigned __int64)a2, 0);
    sub_A8150(a1, a2);
  }
}
