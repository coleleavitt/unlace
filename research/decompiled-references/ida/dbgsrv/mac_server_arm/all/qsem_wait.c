/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_wait
// Address: 0x0000000100070D84

//----- (0000000100070D84) ----------------------------------------------------
__int64 __fastcall qsem_wait(__int64 a1, int a2)
{
  int v2; // w19
  kern_return_t v4; // w0
  semaphore_t v5; // w0
  mach_timespec_t v6; // x1
  _BOOL8 v7; // x19
  sem_t *v8; // x20
  int v9; // w0
  int v10; // w0
  int v11; // w23
  __int64 v14; // x0
  __int64 *v15; // x1

  if ( !a1 )
    return 0;
  v2 = a2;
  if ( *(_QWORD *)(a1 + 8) <= 1u )
  {
    do
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(a1 + 24);
        if ( v2 != -1 )
          break;
        v4 = semaphore_wait(v5);
        if ( v4 != 14 )
          goto LABEL_7;
      }
      v6 = (mach_timespec_t)((unsigned int)(v2 / 1000) | ((unsigned __int64)((15625 * (v2 % 1000)) & 0x3FFFFFF) << 38));
      v4 = semaphore_timedwait(v5, v6);
    }
    while ( v4 == 14 );
LABEL_7:
    if ( !v4 )
      return 1;
    if ( v4 != 37 && v4 != 49 )
    {
      if ( under_debugger == 1 )
        __break(1u);
      interr(510);
      return (__int64)sub_100070F18(v14, v15);
    }
    return 0;
  }
  v8 = *(sem_t **)(a1 + 24);
  if ( a2 == -1 )
  {
    do
    {
      v10 = sem_wait(v8);
      v7 = v10 == 0;
    }
    while ( v10 && *__error() == 4 );
    return v7;
  }
  v9 = sem_trywait(v8);
  if ( v9 != -1 )
    return v9 == 0;
  while ( *__error() == 35 )
  {
    if ( v2 < 1 )
      goto LABEL_28;
LABEL_18:
    if ( (unsigned int)v2 >= 0xA )
      v11 = 10;
    else
      v11 = v2;
    usleep(1000 * v11);
    v9 = sem_trywait(v8);
    v2 -= v11;
    if ( v9 != -1 )
      return v9 == 0;
  }
  if ( *__error() == 4 && v2 > 0 )
    goto LABEL_18;
LABEL_28:
  v9 = 1;
  return v9 == 0;
}
// 100070F15: variable 'v14' is possibly undefined
// 100070F15: variable 'v15' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
