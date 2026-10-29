/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F8E4
// Address: 0x0003F8E4

//----- (0003F8E4) --------------------------------------------------------
int __fastcall sub_3F8E4(int a1)
{
  unsigned int *v2; // r0
  int v3; // r1
  int v4; // r4
  int v5; // r3
  unsigned int v6; // r6
  int v7; // r5
  pthread_mutex_t *mutex; // [sp+0h] [bp-4h]

  mutex = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  v2 = (unsigned int *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 32);
  v4 = *(_DWORD *)(a1 + 36);
  v5 = 0;
  v6 = 1;
  v7 = 0;
  while ( v4 & v5 | v3 & v6 )
  {
    v5 = 2 * v5 + (v6 >> 31);
    v6 *= 2;
    if ( (unsigned int)++v7 >= 0x40 )
    {
      if ( !under_debugger )
        interr(1443);
      __debugbreak();
    }
  }
  *v2 = v3 | v6;
  v2[1] = v4 | v5;
  qmutex_unlock(mutex);
  return v7;
}
// DE374: using guessed type int dword_DE374;
// E0550: using guessed type char under_debugger;
