/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FE80
// Address: 0x0005FE80

//----- (0005FE80) --------------------------------------------------------
void __cdecl sub_5FE80(int a1)
{
  _DWORD *v1; // edi
  pthread_mutex_t *v2; // esi
  int v3; // eax
  bool v4; // zf
  void *v5; // eax
  void *v6; // eax
  char *v7; // eax
  int v8; // edi
  unsigned int i; // esi
  unsigned int v10; // [esp+8h] [ebp-14h]

  v1 = (_DWORD *)a1;
  if ( *(_BYTE *)(a1 + 77) )
  {
    v2 = (pthread_mutex_t *)dword_13BD5C;
    qmutex_lock((pthread_mutex_t *)dword_13BD5C);
    v3 = *(_DWORD *)(a1 + 4);
    v4 = (*(_DWORD *)(v3 + 64))-- == 1;
    if ( v4 && off_13B620 )
      off_13B620();
    qmutex_unlock(v2);
  }
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  v5 = *(void **)(a1 + 36);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    qfree(v5);
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 44) = 0;
  }
  v6 = *(void **)(a1 + 24);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    qfree(v6);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v7 = *(char **)(a1 + 12);
  if ( v7 )
  {
    v10 = *(_DWORD *)(a1 + 16);
    if ( v10 )
    {
      v8 = 0;
      for ( i = 1; ; ++i )
      {
        free_idcv(&v7[v8]);
        if ( i >= v10 )
          break;
        v7 = *(char **)(a1 + 12);
        v8 += 20;
      }
      v1 = (_DWORD *)a1;
      v7 = *(char **)(a1 + 12);
    }
    v1[4] = 0;
    qfree(v7);
    v1[3] = 0;
    v1[5] = 0;
  }
}
// 13B620: using guessed type int (*off_13B620)();
// 13BD5C: using guessed type int dword_13BD5C;
