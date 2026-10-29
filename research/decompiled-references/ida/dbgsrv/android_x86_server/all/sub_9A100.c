/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A100
// Address: 0x0009A100

//----- (0009A100) --------------------------------------------------------
void __cdecl sub_9A100(int a1, int a2)
{
  int v2; // esi
  int v3; // esi
  _DWORD *v4; // edi
  _DWORD *v5; // [esp+14h] [ebp-18h]
  pthread_mutex_t *v6; // [esp+18h] [ebp-14h]

  v6 = *(pthread_mutex_t **)a1;
  qmutex_lock(*(pthread_mutex_t **)a1);
  v5 = *(_DWORD **)(a1 + 4);
  v2 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  qmutex_unlock(v6);
  if ( (v2 & 0x3FFFFFFF) != 0 )
  {
    v3 = 4 * v2;
    v4 = v5;
    do
    {
      (**(void (__cdecl ***)(_DWORD, int))*v4)(*v4, a2);
      ++v4;
      v3 -= 4;
    }
    while ( v3 );
  }
  if ( v5 )
    qfree(v5);
}
