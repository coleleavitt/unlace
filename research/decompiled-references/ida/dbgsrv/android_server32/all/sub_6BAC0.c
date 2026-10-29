/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BAC0
// Address: 0x0006BAC0

//----- (0006BAC0) --------------------------------------------------------
_DWORD *__fastcall sub_6BAC0(_DWORD *a1, int a2)
{
  int v4; // r1
  _DWORD *v5; // r7
  pthread_mutex_t *v6; // r0
  _DWORD *v7; // r0

  *a1 = &off_DA8C8;
  memset(a1 + 1, 0, 0x2Cu);
  a1[12] = qtime64();
  a1[13] = v4;
  a1[14] = 0x1FFFF;
  if ( a2 )
  {
    v5 = operator new(0x14u);
    *v5 = &off_DA95C;
    v5[1] = v5 + 2;
    v5[2] = 0;
    v5[3] = 0;
    v6 = qmutex_create();
    v5[4] = v6;
    if ( !v6 )
    {
      if ( !under_debugger )
        interr(1540);
      __debugbreak();
    }
  }
  else
  {
    v7 = operator new(0x10u);
    *v7 = &off_DA978;
    v7[1] = v7 + 2;
    v5 = v7;
    v7[2] = 0;
    v7[3] = 0;
  }
  a1[11] = v5;
  return a1;
}
// 6BAE8: variable 'v4' is possibly undefined
// DA8C8: using guessed type _UNKNOWN *off_DA8C8;
// DA95C: using guessed type _UNKNOWN *off_DA95C;
// DA978: using guessed type _UNKNOWN *off_DA978;
// E0550: using guessed type char under_debugger;
