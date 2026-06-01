/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_text
// Address: 0x0000000100028A64

//----- (0000000100028A64) ----------------------------------------------------
__int64 __fastcall compile_idc_text(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  pthread_mutex_t *v8; // x19
  __int64 v9; // x23
  __int64 v10; // x20

  v8 = (pthread_mutex_t *)qword_10009D7C0;
  qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
  v9 = sub_10002BEEC();
  lex_init_string(*(_QWORD *)(v9 + 32), a1, *(_QWORD *)(v9 + 24));
  v10 = sub_100028510(v9, a3, a2, a4 ^ 1u);
  qmutex_unlock(v8);
  return v10;
}
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
