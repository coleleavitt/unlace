/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: select_extlang
// Address: 0x0000000100031A10

//----- (0000000100031A10) ----------------------------------------------------
__int64 __fastcall select_extlang(__int64 *a1)
{
  unsigned int v1; // r15d
  __int64 *v2; // r14
  pthread_mutex_t *v3; // rbx
  __int64 v4; // rdx

  v2 = a1;
  v3 = (pthread_mutex_t *)qword_1000AD0E8;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0E8);
  if ( !a1 )
    v2 = qword_1000AC148;
  if ( *((_QWORD *)&xmmword_1000AE290 + 1) )
  {
    v4 = 0;
    while ( *(__int64 **)(xmmword_1000AE290 + 8 * v4) != v2 )
    {
      if ( *((_QWORD *)&xmmword_1000AE290 + 1) == ++v4 )
      {
        v1 = 0;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v4 = 0;
  }
  LOBYTE(v1) = v4 != *((_QWORD *)&xmmword_1000AE290 + 1);
  if ( v4 != *((_QWORD *)&xmmword_1000AE290 + 1) && qword_1000AE2A8 != v4 )
  {
    qword_1000AE2A8 = v4;
    LOBYTE(v1) = 1;
    sub_100070A90();
  }
LABEL_12:
  qmutex_unlock(v3);
  return v1;
}
// 100031A96: variable 'v1' is possibly undefined
// 1000AC148: using guessed type __int64 qword_1000AC148[2];
// 1000AD0E8: using guessed type __int64 qword_1000AD0E8;
// 1000AE290: using guessed type __int128 xmmword_1000AE290;
// 1000AE2A8: using guessed type __int64 qword_1000AE2A8;
