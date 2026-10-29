/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069820
// Address: 0x0000000100069820

//----- (0000000100069820) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_100069820(__int64 a1, char a2)
{
  char *v2; // r14
  pthread_mutex_t *result; // rax

  *(_QWORD *)a1 = off_1000AA4D0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = qtime64();
  *(_DWORD *)(a1 + 104) = 0x1FFFF;
  if ( a2 )
  {
    v2 = (char *)operator new(0x28u);
    *((_OWORD *)v2 + 1) = 0;
    *((_QWORD *)v2 + 1) = v2 + 16;
    *(_QWORD *)v2 = &off_1000AA620;
    result = qmutex_create();
    *((_QWORD *)v2 + 4) = result;
    if ( !result )
    {
      if ( under_debugger != 1 )
        interr(0x604u);
      BUG();
    }
  }
  else
  {
    v2 = (char *)operator new(0x20u);
    *(_QWORD *)v2 = &off_1000AA658;
    result = (pthread_mutex_t *)(v2 + 16);
    *((_OWORD *)v2 + 1) = 0;
    *((_QWORD *)v2 + 1) = v2 + 16;
  }
  *(_QWORD *)(a1 + 88) = v2;
  return result;
}
// 1000AA4D0: using guessed type void (__fastcall __noreturn *off_1000AA4D0[2])();
// 1000AA620: using guessed type __int64 (__fastcall *off_1000AA620)();
// 1000AA658: using guessed type __int64 (__fastcall *off_1000AA658)();
// 1000AE23D: using guessed type char under_debugger;
