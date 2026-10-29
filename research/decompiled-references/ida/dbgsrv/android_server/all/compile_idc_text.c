/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_text
// Address: 0x00000000000658DC

//----- (00000000000658DC) ----------------------------------------------------
__int64 __fastcall compile_idc_text(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  pthread_mutex_t *v7; // x19
  __int64 v9; // x23
  int v10; // w3
  int v11; // w4
  int v12; // w5
  int v13; // w6
  int v14; // w7

  v7 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v9 = sub_6804C();
  lex_init_string(*(_QWORD *)(v9 + 32), a1, *(_QWORD *)(v9 + 24), v10, v11, v12, v13, v14);
  LOBYTE(a2) = sub_6517C(v9, a3, a2, (a4 & 1) == 0);
  qmutex_unlock(v7);
  return a2 & 1;
}
// 65920: variable 'v10' is possibly undefined
// 65920: variable 'v11' is possibly undefined
// 65920: variable 'v12' is possibly undefined
// 65920: variable 'v13' is possibly undefined
// 65920: variable 'v14' is possibly undefined
// 166AA8: using guessed type __int64 qword_166AA8;
