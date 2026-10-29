/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_text
// Address: 0x0000000000068470

//----- (0000000000068470) ----------------------------------------------------
__int64 __fastcall compile_idc_text(__int64 a1, __int64 a2, __int64 a3, char a4, double a5, __m128 a6)
{
  pthread_mutex_t *v8; // r12
  __int64 v9; // rbx

  v8 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v9 = sub_6B0F0();
  lex_init_string(*(_QWORD *)(v9 + 32), a1, *(_QWORD *)(v9 + 24));
  LODWORD(v9) = sub_67AE0(v9, a3, a2, a4 ^ 1u, a5, a6);
  qmutex_unlock(v8);
  return (unsigned int)v9;
}
