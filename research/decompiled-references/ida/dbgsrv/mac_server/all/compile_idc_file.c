/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_file
// Address: 0x000000010002D970

//----- (000000010002D970) ----------------------------------------------------
__int64 __fastcall compile_idc_file(const char *a1, __int64 a2, char a3)
{
  pthread_mutex_t *v5; // rbx
  __int128 *v6; // rax
  __int64 v7; // r12
  unsigned int v8; // r15d
  _QWORD *v9; // rsi
  _QWORD v11[2]; // [rsp+0h] [rbp-40h] BYREF

  v5 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v6 = off_1000AC140();
  sub_10004C5E0(v6, nullptr, 0);
  v7 = sub_100032010();
  if ( (unsigned int)lex_init_file(*(_QWORD *)(v7 + 32), a1) )
  {
    sub_10002D730(*(_QWORD *)(v7 + 32), 0, a2);
    lex_term_file(*(_QWORD *)(v7 + 32), a3 & 1);
    v8 = 0;
  }
  else
  {
    v11[0] = &off_1000A8CF0;
    v9 = v11;
    if ( (a3 & 2) == 0 )
      v9 = nullptr;
    v11[1] = -1;
    v8 = sub_10002D510(v7, (__int64)v9, a2, (a3 & 4) == 0);
    lex_term_file(*(_QWORD *)(v7 + 32), a3 & 1);
  }
  qmutex_unlock(v5);
  return v8;
}
// 1000A8CF0: using guessed type __int64 (__fastcall *off_1000A8CF0)();
// 1000AC140: using guessed type __int128 *(*off_1000AC140)();
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
