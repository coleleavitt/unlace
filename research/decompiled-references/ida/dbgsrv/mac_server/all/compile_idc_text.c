/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_text
// Address: 0x000000010002DAB0

//----- (000000010002DAB0) ----------------------------------------------------
__int64 __fastcall compile_idc_text(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  pthread_mutex_t *v6; // rbx
  __int64 v7; // r13
  unsigned int v8; // r14d

  v6 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v7 = sub_100032010();
  lex_init_string(*(_QWORD *)(v7 + 32), a1, *(_QWORD *)(v7 + 24));
  v8 = sub_10002D510(v7, a3, a2, a4 ^ 1u);
  qmutex_unlock(v6);
  return v8;
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
