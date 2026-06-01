/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: for_all_extlangs
// Address: 0x00000000000672FC

//----- (00000000000672FC) ----------------------------------------------------
__int64 __fastcall for_all_extlangs(__int64 (__fastcall ***a1)(_QWORD, __int64), char a2)
{
  pthread_mutex_t *v2; // x19
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x23
  __int64 v7; // x9
  int v8; // w26
  __int64 v9; // x22
  int v10; // w0
  __int64 v12; // x21

  v2 = (pthread_mutex_t *)qword_166A80;
  qmutex_lock((pthread_mutex_t *)qword_166A80);
  v5 = qword_166A90;
  if ( qword_166A90 )
  {
    v6 = qword_166AA0;
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      v9 = *(_QWORD *)(qword_166A88 + 8 * v7);
      if ( v9 )
      {
        if ( (a2 & 1) != 0 )
          select_extlang(*(__int64 **)(qword_166A88 + 8 * v7));
        v10 = (**a1)(a1, v9);
        v5 = qword_166A90;
        if ( v10 )
          break;
      }
      v7 = v8;
      if ( v5 <= v8++ )
      {
        v12 = 0;
        if ( v6 >= v5 )
          goto LABEL_12;
        goto LABEL_9;
      }
    }
    v12 = v10;
    if ( v6 >= qword_166A90 )
      goto LABEL_12;
LABEL_9:
    if ( (a2 & 1) != 0 )
      select_extlang(*(__int64 **)(qword_166A88 + 8 * v6));
  }
  else
  {
    v12 = 0;
  }
LABEL_12:
  qmutex_unlock(v2);
  return v12;
}
// 166A80: using guessed type __int64 qword_166A80;
// 166A88: using guessed type __int64 qword_166A88;
// 166A90: using guessed type __int64 qword_166A90;
// 166AA0: using guessed type __int64 qword_166AA0;
