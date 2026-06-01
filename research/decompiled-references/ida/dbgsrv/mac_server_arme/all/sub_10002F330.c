/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002F330
// Address: 0x000000010002F330

//----- (000000010002F330) ----------------------------------------------------
__int64 __fastcall sub_10002F330(__int64 a1, const char *a2)
{
  pthread_mutex_t *v4; // x19
  unsigned __int64 v5; // x22
  unsigned __int64 v6; // x8
  __int64 v7; // x23
  int v8; // w24
  __int64 v9; // x21
  const char *v10; // x0

  if ( !a2 )
    return 0;
  v4 = (pthread_mutex_t *)qword_1000A57C0;
  qmutex_lock((pthread_mutex_t *)qword_1000A57C0);
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
  {
    v6 = 0;
    v7 = *(_QWORD *)(a1 + 64);
    v8 = 1;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7 + 8 * v6);
      v10 = *(_QWORD *)(v9 + 40) ? *(const char **)(v9 + 32) : &byte_10007AE40;
      if ( !strcmp(v10, a2) )
        break;
      v6 = v8++;
      if ( v5 <= v6 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v9 = 0;
  }
  qmutex_unlock(v4);
  return v9;
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
