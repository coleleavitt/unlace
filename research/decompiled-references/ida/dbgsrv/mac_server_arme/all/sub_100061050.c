/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061050
// Address: 0x0000000100061050

//----- (0000000100061050) ----------------------------------------------------
__int64 __fastcall sub_100061050(__int64 a1, int a2)
{
  _QWORD *v4; // x21
  pthread_mutex_t *v5; // x0

  *(_OWORD *)(a1 + 8) = 0u;
  *(_QWORD *)a1 = off_10009F9E0;
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
    *v4 = off_10009FB40;
    v4[1] = v4 + 2;
    goto LABEL_7;
  }
  v4 = operator new(0x28u);
  v4[2] = 0;
  v4[1] = v4 + 2;
  v4[3] = 0;
  *v4 = off_10009FB08;
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
// 10009F9E0: using guessed type void (__fastcall __noreturn *off_10009F9E0[2])();
// 10009FB08: using guessed type __int64 (__fastcall *off_10009FB08[5])();
// 10009FB40: using guessed type __int64 (__fastcall *off_10009FB40[5])();
// 1000A590D: using guessed type char under_debugger;
