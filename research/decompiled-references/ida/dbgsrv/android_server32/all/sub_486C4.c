/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486C4
// Address: 0x000486C4

//----- (000486C4) --------------------------------------------------------
int __fastcall sub_486C4(int a1)
{
  pthread_mutex_t *v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r5
  void *v6; // r0
  void *v7; // r0
  unsigned __int8 *v8; // r0
  unsigned int v9; // r6
  unsigned int i; // r7

  if ( *(_BYTE *)(a1 + 77) )
  {
    v2 = (pthread_mutex_t *)dword_DE374;
    qmutex_lock((pthread_mutex_t *)dword_DE374);
    v3 = *(_DWORD *)(a1 + 4);
    v4 = *(_DWORD *)(v3 + 68) - 1;
    *(_DWORD *)(v3 + 68) = v4;
    if ( !v4 && off_DD618 )
      off_DD618();
    qmutex_unlock(v2);
  }
  v5 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  v6 = *(void **)(a1 + 36);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    qfree(v6);
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 36) = 0;
  }
  v7 = *(void **)(a1 + 24);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    qfree(v7);
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 24) = 0;
  }
  v8 = *(unsigned __int8 **)(a1 + 12);
  if ( v8 )
  {
    v9 = *(_DWORD *)(a1 + 16);
    if ( v9 )
    {
      for ( i = 1; ; ++i )
      {
        free_idcv(&v8[v5]);
        if ( i >= v9 )
          break;
        v5 += 24;
        v8 = *(unsigned __int8 **)(a1 + 12);
      }
      v8 = *(unsigned __int8 **)(a1 + 12);
    }
    *(_DWORD *)(a1 + 16) = 0;
    qfree(v8);
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 12) = 0;
  }
  return a1;
}
// DD618: using guessed type int (*off_DD618)(void);
// DE374: using guessed type int dword_DE374;
