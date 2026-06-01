/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58250
// Address: 0x00058250

//----- (00058250) --------------------------------------------------------
int __cdecl sub_58250(int a1, unsigned int a2)
{
  pthread_mutex_t *v2; // edi
  int v4; // [esp+8h] [ebp-14h]

  v2 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  if ( *(_DWORD *)(a1 + 52) <= a2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(288);
    BUG();
  }
  v4 = *(_DWORD *)(a1 + 48);
  qmutex_unlock(v2);
  return v4 + 32 * a2 + 12;
}
// 13BD5C: using guessed type int dword_13BD5C;
// 13E34C: using guessed type int under_debugger;
