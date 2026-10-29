/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DA38
// Address: 0x0003DA38

//----- (0003DA38) --------------------------------------------------------
int __fastcall sub_3DA38(const char *a1, int a2, const void *a3, unsigned int a4)
{
  pthread_mutex_t *v6; // r6
  _DWORD *v7; // r7
  int v8; // r0
  int v9; // r5
  int v10; // r7
  _BYTE v14[4]; // [sp+18h] [bp-8h] BYREF

  v6 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  v7 = (_DWORD *)sub_3F7BC();
  v8 = sub_409E4((int)v7, a1);
  v9 = 0;
  if ( v8 != -1 )
  {
    v10 = *(_DWORD *)(*v7 + 4 * v8);
    v14[0] = 0;
    sub_370F6((void **)(v10 + 16), a4, v14);
    qmemcpy(*(void **)(v10 + 16), a3, a4);
    sub_40394((_DWORD *)(v10 + 16));
    *(_DWORD *)(v10 + 68) = 0;
    *(_DWORD *)(v10 + 12) = a2;
    v9 = 1;
  }
  qmutex_unlock(v6);
  return v9;
}
// DE374: using guessed type int dword_DE374;
