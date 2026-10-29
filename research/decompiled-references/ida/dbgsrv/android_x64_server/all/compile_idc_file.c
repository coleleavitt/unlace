/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_file
// Address: 0x0000000000068340

//----- (0000000000068340) ----------------------------------------------------
__int64 __fastcall compile_idc_file(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  pthread_mutex_t *v7; // r14
  __int128 *v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // r15d
  _QWORD *v11; // rsi
  _QWORD v13[8]; // [rsp+8h] [rbp-40h] BYREF

  v13[2] = __readfsqword(0x28u);
  v7 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v8 = off_154A80();
  sub_8B6D0(v8, nullptr, 0);
  v9 = sub_6B0F0();
  if ( (unsigned int)lex_init_file(*(_QWORD *)(v9 + 32), a1) )
  {
    sub_67D10(*(_QWORD *)(v9 + 32), 0, a2, a4, a5);
    lex_term_file(*(_QWORD *)(v9 + 32), a3 & 1);
    v10 = 0;
  }
  else
  {
    v13[0] = &off_14DE60;
    v11 = v13;
    if ( (a3 & 2) == 0 )
      v11 = nullptr;
    v13[1] = -1;
    v10 = sub_67AE0(v9, (__int64)v11, a2, (a3 & 4) == 0, a4, a5);
    lex_term_file(*(_QWORD *)(v9 + 32), a3 & 1);
  }
  qmutex_unlock(v7);
  return v10;
}
// 87860: using guessed type __int64 __fastcall lex_init_file(_QWORD, _QWORD);
// 879F0: using guessed type __int64 __fastcall lex_term_file(_QWORD, _QWORD);
// 14DE60: using guessed type __int64 (__fastcall *off_14DE60)();
// 154A80: using guessed type __int128 *(*off_154A80)();
