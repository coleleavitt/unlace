/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: select_extlang
// Address: 0x0000000000067404

//----- (0000000000067404) ----------------------------------------------------
__int64 __fastcall select_extlang(__int64 *a1)
{
  pthread_mutex_t *v1; // x19
  __int64 *v3; // x1
  unsigned __int64 v4; // x2
  unsigned int v5; // w20

  v1 = (pthread_mutex_t *)qword_166A80;
  qmutex_lock((pthread_mutex_t *)qword_166A80);
  if ( a1 )
    v3 = a1;
  else
    v3 = qword_164A90;
  if ( !qword_166A90 )
    goto LABEL_9;
  v4 = 0;
  do
  {
    if ( *(__int64 **)(qword_166A88 + 8 * v4) == v3 )
      break;
    ++v4;
  }
  while ( v4 < qword_166A90 );
  if ( v4 != qword_166A90 )
  {
    if ( qword_166AA0 != v4 )
    {
      qword_166AA0 = v4;
      nullsub_2(2);
    }
    v5 = 1;
  }
  else
  {
LABEL_9:
    v5 = 0;
  }
  qmutex_unlock(v1);
  return v5;
}
// AB1C8: using guessed type __int64 __fastcall nullsub_2(_QWORD);
// 164A90: using guessed type __int64 qword_164A90[2];
// 166A80: using guessed type __int64 qword_166A80;
// 166A88: using guessed type __int64 qword_166A88;
// 166A90: using guessed type __int64 qword_166A90;
// 166AA0: using guessed type __int64 qword_166AA0;
