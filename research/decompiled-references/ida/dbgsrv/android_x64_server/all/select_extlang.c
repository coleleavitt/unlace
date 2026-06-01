/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: select_extlang
// Address: 0x000000000006A480

//----- (000000000006A480) ----------------------------------------------------
__int64 __fastcall select_extlang(__int64 *a1)
{
  unsigned int v1; // ebp
  __int64 *v2; // rbx
  pthread_mutex_t *v3; // r14
  unsigned __int64 v4; // rdx

  v2 = a1;
  v3 = (pthread_mutex_t *)qword_1557C0;
  qmutex_lock((pthread_mutex_t *)qword_1557C0);
  if ( !a1 )
    v2 = qword_154A88;
  if ( !*((_QWORD *)&xmmword_1557C8 + 1) )
    goto LABEL_8;
  v4 = 0;
  do
  {
    if ( *(__int64 **)(xmmword_1557C8 + 8 * v4) == v2 )
      break;
    ++v4;
  }
  while ( v4 < *((_QWORD *)&xmmword_1557C8 + 1) );
  if ( v4 != *((_QWORD *)&xmmword_1557C8 + 1) )
  {
    LOBYTE(v1) = 1;
    if ( qword_1557E0 != v4 )
    {
      qword_1557E0 = v4;
      nullsub_21(2, v2, v4);
    }
  }
  else
  {
LABEL_8:
    v1 = 0;
  }
  qmutex_unlock(v3);
  return v1;
}
// 6A4DE: variable 'v1' is possibly undefined
// AF4A0: using guessed type __int64 __fastcall nullsub_21(_QWORD, _QWORD, _QWORD);
// 154A88: using guessed type __int64 qword_154A88[2];
// 1557C0: using guessed type __int64 qword_1557C0;
// 1557C8: using guessed type __int128 xmmword_1557C8;
// 1557E0: using guessed type __int64 qword_1557E0;
