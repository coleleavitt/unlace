/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_guard_acquire
// Address: 0x000BD9A0

//----- (000BD9A0) --------------------------------------------------------
int _cxa_guard_acquire(__guard *a1)
{
  __guard *v1; // edi
  int v2; // esi
  __guard v3; // eax

  if ( pthread_mutex_lock((pthread_mutex_t *)&dword_13E3B4) )
  {
    LOBYTE(v3) = sub_C10D0("__cxa_guard_acquire failed to acquire mutex");
  }
  else
  {
    v1 = a1;
    v2 = 0;
    if ( *(_BYTE *)a1 )
      goto LABEL_8;
    while ( 1 )
    {
      v3 = *a1;
      if ( (*a1 & 0xFF00) == 0 )
        break;
      if ( pthread_cond_wait((pthread_cond_t *)&dword_13E3B8, (pthread_mutex_t *)&dword_13E3B4) )
      {
        LOBYTE(v3) = sub_C10D0("__cxa_guard_acquire condition variable wait failed");
        goto LABEL_6;
      }
    }
  }
  while ( 1 )
  {
LABEL_6:
    v2 = 0;
    if ( !(_BYTE)v3 )
    {
      v1[1] = 0;
      *v1 = 256;
      v2 = 1;
    }
LABEL_8:
    if ( !pthread_mutex_unlock((pthread_mutex_t *)&dword_13E3B4) )
      break;
    LOBYTE(v3) = sub_C10D0("__cxa_guard_acquire failed to release mutex");
  }
  return v2;
}
// BDA17: variable 'v1' is possibly undefined
// 13E3B4: using guessed type int dword_13E3B4;
// 13E3B8: using guessed type int dword_13E3B8;
