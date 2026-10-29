/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: select_extlang
// Address: 0x000000010002CB3C

//----- (000000010002CB3C) ----------------------------------------------------
bool __fastcall select_extlang(__int64 *a1)
{
  pthread_mutex_t *v2; // x19
  __int64 *v3; // x1
  __int64 v4; // x2
  _BOOL8 v5; // x20

  v2 = (pthread_mutex_t *)qword_1000A57B8;
  qmutex_lock((pthread_mutex_t *)qword_1000A57B8);
  if ( a1 )
    v3 = a1;
  else
    v3 = qword_1000A4A68;
  if ( qword_1000A5960 )
  {
    v4 = 0;
    while ( *(__int64 **)(qword_1000A5958 + 8 * v4) != v3 )
    {
      if ( qword_1000A5960 == ++v4 )
      {
        v5 = 0;
        goto LABEL_15;
      }
    }
  }
  else
  {
    v4 = 0;
  }
  v5 = v4 != qword_1000A5960;
  if ( v4 != qword_1000A5960 && qword_1000A5970 != v4 )
  {
    qword_1000A5970 = v4;
    nullsub_29(2, v3, v4);
    v5 = 1;
  }
LABEL_15:
  qmutex_unlock(v2);
  return v5;
}
// 100068AA0: using guessed type __int64 __fastcall nullsub_29(_QWORD, _QWORD, _QWORD);
// 1000A4A68: using guessed type __int64 qword_1000A4A68[2];
// 1000A57B8: using guessed type __int64 qword_1000A57B8;
// 1000A5958: using guessed type __int64 qword_1000A5958;
// 1000A5960: using guessed type __int64 qword_1000A5960;
// 1000A5970: using guessed type __int64 qword_1000A5970;
