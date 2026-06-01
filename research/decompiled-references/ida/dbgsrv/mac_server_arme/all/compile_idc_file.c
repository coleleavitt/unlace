/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_file
// Address: 0x000000010002AED0

//----- (000000010002AED0) ----------------------------------------------------
__int64 __fastcall compile_idc_file(__int64 a1, __int64 a2, char a3)
{
  pthread_mutex_t *v6; // x19
  __int128 *v7; // x0
  __int64 v8; // x22
  __int64 v9; // x21
  _QWORD *v10; // x1
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF

  v6 = (pthread_mutex_t *)qword_1000A57C0;
  qmutex_lock((pthread_mutex_t *)qword_1000A57C0);
  v7 = off_1000A4A60();
  sub_100046740((__int64)v7, nullptr, 0);
  v8 = sub_10002D1C4();
  if ( (unsigned int)lex_init_file(*(_QWORD *)(v8 + 32), a1) )
  {
    sub_10002AC58(*(const char **)(v8 + 32), 0, a2);
    lex_term_file(*(_QWORD *)(v8 + 32), a3 & 1);
    v9 = 0;
  }
  else
  {
    v12[0] = &off_10009E498;
    v12[1] = -1;
    if ( (a3 & 2) != 0 )
      v10 = v12;
    else
      v10 = nullptr;
    v9 = sub_10002AAC4(v8, (__int64)v10, a2, (a3 & 4) == 0);
    lex_term_file(*(_QWORD *)(v8 + 32), a3 & 1);
  }
  qmutex_unlock(v6);
  return v9;
}
// 100043FCC: using guessed type __int64 __fastcall lex_init_file(_QWORD, _QWORD);
// 100044124: using guessed type __int64 __fastcall lex_term_file(_QWORD, _QWORD);
// 10009E498: using guessed type __int64 (__fastcall *off_10009E498)();
// 1000A4A60: using guessed type __int128 *(*off_1000A4A60)();
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
