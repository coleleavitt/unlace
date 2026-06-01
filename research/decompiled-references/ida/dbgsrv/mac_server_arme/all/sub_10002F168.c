/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002F168
// Address: 0x000000010002F168

//----- (000000010002F168) ----------------------------------------------------
__int64 __fastcall sub_10002F168(__int64 a1, unsigned __int64 a2)
{
  pthread_mutex_t *v4; // x19
  __int64 v5; // x20

  v4 = (pthread_mutex_t *)qword_1000A57C0;
  qmutex_lock((pthread_mutex_t *)qword_1000A57C0);
  if ( *(_QWORD *)(a1 + 72) <= a2 )
  {
    if ( under_debugger != 1 )
      goto LABEL_5;
    while ( 1 )
    {
      __break(1u);
LABEL_5:
      interr(284);
    }
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * a2);
  qmutex_unlock(v4);
  return v5;
}
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
// 1000A590D: using guessed type char under_debugger;
