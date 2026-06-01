/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A82F0
// Address: 0x00000000000A82F0

//----- (00000000000A82F0) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A82F0(__int64 a1, char a2)
{
  char *v2; // rbx
  pthread_mutex_t *result; // rax

  *(_QWORD *)a1 = &off_14F4C0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = qtime64();
  *(_DWORD *)(a1 + 104) = 0x1FFFF;
  if ( a2 )
  {
    v2 = (char *)operator new(0x28u);
    *((_OWORD *)v2 + 1) = 0;
    *((_QWORD *)v2 + 1) = v2 + 16;
    *(_QWORD *)v2 = &off_14F5F8;
    result = qmutex_create();
    *((_QWORD *)v2 + 4) = result;
    if ( !result )
    {
      if ( !(_BYTE)under_debugger )
        interr(1540);
      BUG();
    }
  }
  else
  {
    v2 = (char *)operator new(0x20u);
    *(_QWORD *)v2 = &off_14F630;
    result = (pthread_mutex_t *)(v2 + 16);
    *((_OWORD *)v2 + 1) = 0;
    *((_QWORD *)v2 + 1) = v2 + 16;
  }
  *(_QWORD *)(a1 + 88) = v2;
  return result;
}
// 14F4C0: using guessed type __int64 (__fastcall *off_14F4C0)();
// 14F5F8: using guessed type __int64 (__fastcall *off_14F5F8)();
// 14F630: using guessed type __int64 (__fastcall *off_14F630)();
// 158B40: using guessed type __int64 under_debugger;
