/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DAE8
// Address: 0x0003DAE8

//----- (0003DAE8) --------------------------------------------------------
void *__fastcall sub_3DAE8(const char *a1, _DWORD *a2, size_t *a3)
{
  int v5; // r4
  _DWORD *v6; // r6
  int v7; // r0
  void *v8; // r5
  int v9; // r4
  size_t v10; // r6
  void *v11; // r0
  void *v12; // r7
  pthread_mutex_t *mutex; // [sp+Ch] [bp-4h]

  v5 = dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  mutex = (pthread_mutex_t *)v5;
  v6 = (_DWORD *)sub_3F7BC();
  v7 = sub_40994(v6, a1);
  v8 = nullptr;
  if ( v7 != -1 )
  {
    v9 = *(_DWORD *)(*v6 + 4 * v7);
    v10 = *(_DWORD *)(v9 + 20);
    if ( v10 )
    {
      if ( a3 )
        *a3 = v10;
      if ( a2 )
        *a2 = *(_DWORD *)(v9 + 12);
      v11 = qalloc(v10);
      v12 = v11;
      if ( v11 )
      {
        qmemcpy(v11, *(const void **)(v9 + 16), v10);
        v8 = v12;
      }
    }
  }
  qmutex_unlock(mutex);
  return v8;
}
// DE374: using guessed type int dword_DE374;
