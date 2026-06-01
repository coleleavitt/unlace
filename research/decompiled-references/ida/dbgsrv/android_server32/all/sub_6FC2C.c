/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FC2C
// Address: 0x0006FC2C

//----- (0006FC2C) --------------------------------------------------------
void __fastcall sub_6FC2C(int a1, int a2)
{
  pthread_mutex_t *v4; // r6
  int v5; // r4
  int v6; // r6
  _DWORD *v7; // r7
  _DWORD *v8; // [sp+0h] [bp-4h]

  v4 = *(pthread_mutex_t **)a1;
  qmutex_lock(*(pthread_mutex_t **)a1);
  *(_DWORD *)(a1 + 12) = 0;
  v8 = *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 4) = 0;
  v5 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = 0;
  qmutex_unlock(v4);
  if ( 4 * v5 )
  {
    v6 = 4 * v5;
    v7 = v8;
    do
    {
      (**(void (__fastcall ***)(_DWORD, int))*v7)(*v7, a2);
      v6 -= 4;
      ++v7;
    }
    while ( v6 );
  }
  if ( v8 )
    qfree(v8);
}
