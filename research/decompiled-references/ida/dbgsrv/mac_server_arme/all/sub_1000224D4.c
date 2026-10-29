/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000224D4
// Address: 0x00000001000224D4

//----- (00000001000224D4) ----------------------------------------------------
__int64 __fastcall sub_1000224D4(__int64 a1)
{
  pthread_mutex_t *v2; // x19
  unsigned __int64 v3; // x21
  bool v4; // cf
  __int64 v5; // x9

  v2 = (pthread_mutex_t *)qword_1000A57C0;
  qmutex_lock((pthread_mutex_t *)qword_1000A57C0);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    v4 = v3 >= qword_1000A5928;
  else
    v4 = 1;
  if ( !v4 )
  {
    qfclose(*(FILE **)(qword_1000A5920 + 8 * v3));
    *(_QWORD *)(qword_1000A5920 + 8 * v3) = 0;
    if ( qword_1000A5928 )
    {
      v5 = qword_1000A5928 - 1;
      do
      {
        if ( *(_QWORD *)(qword_1000A5920 + 8 * v5) )
          break;
        qword_1000A5928 = v5--;
      }
      while ( v5 != -1 );
    }
  }
  qmutex_unlock(v2);
  return 0;
}
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
// 1000A5920: using guessed type __int64 qword_1000A5920;
// 1000A5928: using guessed type __int64 qword_1000A5928;
