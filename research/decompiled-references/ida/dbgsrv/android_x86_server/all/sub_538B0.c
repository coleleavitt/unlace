/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_538B0
// Address: 0x000538B0

//----- (000538B0) --------------------------------------------------------
int __cdecl sub_538B0(int a1, unsigned int a2)
{
  pthread_mutex_t *v2; // edi
  int v3; // esi

  v2 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  if ( *(_DWORD *)(a1 + 40) <= a2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(284);
    BUG();
  }
  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * a2);
  qmutex_unlock(v2);
  return v3;
}
// 13BD5C: using guessed type int dword_13BD5C;
// 13E34C: using guessed type int under_debugger;
