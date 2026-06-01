/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000376D4
// Address: 0x00000001000376D4

//----- (00000001000376D4) ----------------------------------------------------
__int64 __fastcall sub_1000376D4(__int64 a1, __int64 a2, char a3)
{
  __int64 eah; // x0
  pthread_mutex_t *v7; // x21
  pthread_mutex_t *v8; // x0
  __int64 v9; // x8
  int v10; // w9
  time_t v11; // x0

  *(_DWORD *)a1 = 289621065;
  *(_QWORD *)(a1 + 8) = sub_10002BEEC();
  eah = get_eah();
  *(_OWORD *)(a1 + 24) = 0u;
  *(_QWORD *)(a1 + 16) = eah;
  *(_OWORD *)(a1 + 40) = 0u;
  *(_OWORD *)(a1 + 56) = 0u;
  *(_OWORD *)(a1 + 72) = 0u;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = a2;
  *(_BYTE *)(a1 + 144) = a3;
  *(_BYTE *)(a1 + 145) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  if ( (a3 & 1) == 0 )
  {
    v7 = (pthread_mutex_t *)qword_10009D7C0;
    v8 = qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_DWORD *)(v9 + 120);
    *(_DWORD *)(v9 + 120) = v10 + 1;
    if ( !v10 && off_10009CA10 )
      off_10009CA10(v8);
    *(_BYTE *)(a1 + 145) = 1;
    qmutex_unlock(v7);
  }
  if ( is_main_thread() )
  {
    if ( (*(_BYTE *)(a1 + 144) & 1) != 0 )
      v11 = -1;
    else
      v11 = time(nullptr);
  }
  else
  {
    *(_BYTE *)(a1 + 144) = 1;
    v11 = -1;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v11;
  if ( (*(_BYTE *)(a1 + 144) & 1) == 0 )
    callui(25);
  return a1;
}
// 10009CA10: using guessed type __int64 (__fastcall *off_10009CA10)(_QWORD);
// 10009D680: using guessed type __int64 (__fastcall *callui)(_QWORD);
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
