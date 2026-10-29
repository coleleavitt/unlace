/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D20C
// Address: 0x000000010005D20C

//----- (000000010005D20C) ----------------------------------------------------
__int64 __fastcall sub_10005D20C(__int64 a1, int a2)
{
  _QWORD *v4; // x21
  pthread_mutex_t *v5; // x0

  *(_OWORD *)(a1 + 8) = 0u;
  *(_QWORD *)a1 = off_10009B9A0;
  *(_OWORD *)(a1 + 24) = 0u;
  *(_OWORD *)(a1 + 40) = 0u;
  *(_OWORD *)(a1 + 56) = 0u;
  *(_OWORD *)(a1 + 72) = 0u;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = qtime64();
  *(_DWORD *)(a1 + 104) = 0x1FFFF;
  if ( !a2 )
  {
LABEL_6:
    v4 = operator new(0x20u);
    v4[3] = 0;
    v4[2] = 0;
    *v4 = off_10009BB00;
    v4[1] = v4 + 2;
    goto LABEL_7;
  }
  v4 = operator new(0x28u);
  v4[2] = 0;
  v4[1] = v4 + 2;
  v4[3] = 0;
  *v4 = off_10009BAC8;
  v5 = qmutex_create();
  v4[4] = v5;
  if ( !v5 )
  {
    if ( under_debugger != 1 )
      interr(1540);
    __break(1u);
    goto LABEL_6;
  }
LABEL_7:
  *(_QWORD *)(a1 + 88) = v4;
  return a1;
}
// 10009B9A0: using guessed type void (__fastcall __noreturn *off_10009B9A0[2])();
// 10009BAC8: using guessed type __int64 (__fastcall *off_10009BAC8[5])();
// 10009BB00: using guessed type __int64 (__fastcall *off_10009BB00[5])();
// 10009D90D: using guessed type char under_debugger;
