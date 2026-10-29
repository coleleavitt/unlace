/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A3F0
// Address: 0x000000000006A3F0

//----- (000000000006A3F0) ----------------------------------------------------
__int64 __fastcall sub_6A3F0(__int64 a1, const char *a2)
{
  pthread_mutex_t *v2; // x19
  unsigned __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x8
  int v8; // w24
  __int64 v9; // x21
  const char *v10; // x0

  if ( !a2 )
    return 0;
  v2 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 8 * v7);
      v10 = *(_QWORD *)(v9 + 40) ? *(const char **)(v9 + 32) : &byte_F154B;
      if ( !strcmp(v10, a2) )
        break;
      v7 = v8;
      if ( v5 <= v8++ )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v9 = 0;
  }
  qmutex_unlock(v2);
  return v9;
}
// F154B: using guessed type char byte_F154B;
// 166AA8: using guessed type __int64 qword_166AA8;
