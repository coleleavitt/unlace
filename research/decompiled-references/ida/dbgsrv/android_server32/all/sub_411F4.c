/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411F4
// Address: 0x000411F4

//----- (000411F4) --------------------------------------------------------
_DWORD *__fastcall sub_411F4(int a1, const char *a2, int a3)
{
  _DWORD *v3; // r6
  pthread_mutex_t *v5; // r5
  int v6; // r4
  unsigned int v7; // r7
  const char *v8; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r4
  size_t v12; // r0
  size_t v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  size_t v16; // r7
  int v17; // r0
  int v18; // r1
  _DWORD *v19; // r0
  unsigned int v21; // [sp+4h] [bp-20h]
  size_t v22; // [sp+8h] [bp-1Ch]
  pthread_mutex_t *mutex; // [sp+14h] [bp-10h]
  pthread_mutex_t *mutexa; // [sp+14h] [bp-10h]
  int v26; // [sp+18h] [bp-Ch]
  unsigned int v27; // [sp+1Ch] [bp-8h]
  void **v28; // [sp+1Ch] [bp-8h]

  v3 = nullptr;
  if ( a2 )
  {
    v5 = (pthread_mutex_t *)dword_DE374;
    qmutex_lock((pthread_mutex_t *)dword_DE374);
    mutex = (pthread_mutex_t *)dword_DE374;
    qmutex_lock((pthread_mutex_t *)dword_DE374);
    v26 = a1;
    v3 = nullptr;
    v27 = *(_DWORD *)(a1 + 44);
    if ( v27 )
    {
      v6 = *(_DWORD *)(a1 + 40);
      v7 = 0;
      do
      {
        v3 = *(_DWORD **)v6;
        v8 = &byte_B3CBE;
        if ( *(_DWORD *)(*(_DWORD *)v6 + 24) )
          v8 = (const char *)v3[5];
        ++v7;
        if ( !strcmp(v8, a2) )
          break;
        v6 += 4;
        v3 = nullptr;
      }
      while ( v7 < v27 );
    }
    qmutex_unlock(mutex);
    if ( v3 )
      goto LABEL_18;
    v3 = operator new(0x2Cu);
    v9 = v26;
    v10 = *(_DWORD *)(v26 + 44);
    v11 = 0;
    *v3 = v3 + 1;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = v10;
    v3[5] = 0;
    v3[6] = 0;
    v3[7] = 0;
    v3[8] = -1;
    v3[9] = -1;
    v3[10] = -1;
    mutexa = (pthread_mutex_t *)(v3 + 5);
    v28 = (void **)(v26 + 40);
    v12 = strlen(a2);
    if ( v12 )
    {
      v13 = v12;
      v14 = (void *)v3[5];
      v15 = v12 + 1;
      if ( v3[7] < v12 + 1 )
      {
        v22 = v12;
        v21 = v12 + 1;
        v14 = qvector_reserve((int)mutexa, v14, v15, 1u);
        mutexa->__lock = (int)v14;
        v13 = v22;
        v15 = v21;
      }
      v3[6] = v15;
      v16 = v13;
      memmove(v14, a2, v13);
      *(_BYTE *)(v3[5] + v16) = 0;
      v17 = a3;
      v9 = v26;
      if ( !a3 )
        goto LABEL_14;
    }
    else
    {
      v3[6] = 0;
      v17 = a3;
      if ( !a3 )
        goto LABEL_14;
    }
    v11 = *(_DWORD *)(v17 + 16);
LABEL_14:
    v3[3] = v11;
    v18 = *(_DWORD *)(v9 + 44);
    if ( *(_DWORD *)(v9 + 48) >= (unsigned int)(v18 + 1) )
    {
      v19 = *v28;
    }
    else
    {
      v19 = qvector_reserve((int)v28, *v28, v18 + 1, 4u);
      v9 = v26;
      *(_DWORD *)(v26 + 40) = v19;
      v18 = *(_DWORD *)(v26 + 44);
    }
    v19[v18] = v3;
    ++*(_DWORD *)(v9 + 44);
LABEL_18:
    qmutex_unlock(v5);
  }
  return v3;
}
// B3CBE: using guessed type char byte_B3CBE;
// DE374: using guessed type int dword_DE374;
