/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_wait
// Address: 0x000000010007E4A0

//----- (000000010007E4A0) ----------------------------------------------------
int *__fastcall qsem_wait(__int64 a1, __int64 *a2)
{
  int v2; // ebx
  mach_timespec_t v4; // r15
  kern_return_t v5; // eax
  semaphore_t v6; // edi
  sem_t *v7; // r14
  int v8; // eax
  int v9; // eax
  int v10; // r15d
  bool v11; // zf

  if ( !a1 )
    goto LABEL_10;
  v2 = (int)a2;
  if ( *(_QWORD *)(a1 + 8) > 1u )
  {
    v7 = *(sem_t **)(a1 + 24);
    if ( (_DWORD)a2 == -1 )
    {
      do
      {
        v9 = sem_wait(v7);
        LOBYTE(v2) = v9 == 0;
      }
      while ( v9 && *__error() == 4 );
    }
    else
    {
      v8 = sem_trywait(v7);
      while ( v8 == -1 )
      {
        if ( *__error() == 35 )
        {
          if ( v2 <= 0 )
          {
            v8 = 1;
            break;
          }
        }
        else
        {
          v11 = *__error() == 4;
          v8 = 1;
          if ( !v11 || v2 <= 0 )
            break;
        }
        v10 = 10;
        if ( (unsigned int)v2 < 0xA )
          v10 = v2;
        usleep(1000 * v10);
        v8 = sem_trywait(v7);
        v2 -= v10;
      }
      LOBYTE(v2) = v8 == 0;
    }
    return (int *)(unsigned int)v2;
  }
  v4.tv_nsec = 1000000 * ((int)a2 % 1000);
  v4.tv_sec = (int)a2 / 1000;
  do
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 24);
      if ( v2 == -1 )
        break;
      a2 = (__int64 *)v4;
      v5 = semaphore_timedwait(v6, v4);
      if ( v5 != 14 )
        goto LABEL_7;
    }
    v5 = semaphore_wait(v6);
  }
  while ( v5 == 14 );
LABEL_7:
  if ( !v5 )
  {
    LOBYTE(v2) = 1;
    return (int *)(unsigned int)v2;
  }
  if ( v5 == 37 || v5 == 49 )
  {
LABEL_10:
    v2 = 0;
    return (int *)(unsigned int)v2;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x1FEu);
  return sub_10007E5F0(510, a2);
}
// 1000AE23D: using guessed type char under_debugger;
