/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74848
// Address: 0x0000000000074848

//----- (0000000000074848) ----------------------------------------------------
void __fastcall sub_74848(__int64 a1)
{
  pthread_mutex_t *v2; // x20
  __int64 v3; // x8
  int v4; // w9
  void *v5; // x0
  void *v6; // x0
  char *v7; // x0
  unsigned __int64 v8; // x20
  __int64 v9; // x21
  unsigned __int64 i; // x22

  if ( *(_BYTE *)(a1 + 145) )
  {
    v2 = (pthread_mutex_t *)qword_166AA8;
    qmutex_lock((pthread_mutex_t *)qword_166AA8);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_DWORD *)(v3 + 120) - 1;
    *(_DWORD *)(v3 + 120) = v4;
    if ( !v4 && off_164A40 )
      off_164A40();
    qmutex_unlock(v2);
  }
  v5 = *(void **)(a1 + 72);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v6 = *(void **)(a1 + 48);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v7 = *(char **)(a1 + 24);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( v8 )
    {
      v9 = 0;
      for ( i = 1; ; ++i )
      {
        free_idcv((__int64 *)&v7[v9]);
        if ( i >= v8 )
          break;
        v7 = *(char **)(a1 + 24);
        v9 += 32;
      }
      v7 = *(char **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
}
// 164A40: using guessed type __int64 (*off_164A40)();
// 166AA8: using guessed type __int64 qword_166AA8;
