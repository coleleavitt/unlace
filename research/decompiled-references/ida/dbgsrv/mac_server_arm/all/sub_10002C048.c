/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002C048
// Address: 0x000000010002C048

//----- (000000010002C048) ----------------------------------------------------
__int64 __fastcall sub_10002C048(__int64 a1)
{
  pthread_mutex_t *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x8
  __int64 v5; // x9

  v2 = (pthread_mutex_t *)qword_10009D7C0;
  qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = 1;
  while ( (v4 & v5) != 0 )
  {
    v3 = (unsigned int)(v3 + 1);
    v5 *= 2;
    if ( (_DWORD)v3 == 64 )
    {
      v4 = (unsigned __int8)under_debugger;
      if ( under_debugger != 1 )
        interr(1443);
      __break(1u);
      break;
    }
  }
  *(_QWORD *)(a1 + 56) = v4 | v5;
  qmutex_unlock(v2);
  return v3;
}
// 10002C0A8: variable 'v4' is possibly undefined
// 10002C0A8: variable 'v5' is possibly undefined
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
// 10009D90D: using guessed type char under_debugger;
