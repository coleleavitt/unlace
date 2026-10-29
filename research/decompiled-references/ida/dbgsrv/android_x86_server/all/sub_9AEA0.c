/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9AEA0
// Address: 0x0009AEA0

//----- (0009AEA0) --------------------------------------------------------
bool __cdecl sub_9AEA0(_DWORD *a1)
{
  int v1; // esi
  _DWORD *i; // eax
  int v3; // ecx
  pthread_mutex_t *v5; // [esp+18h] [ebp-14h]

  *a1 = &off_138BF4;
  v5 = (pthread_mutex_t *)dword_13C2E0;
  qmutex_lock((pthread_mutex_t *)dword_13C2E0);
  v1 = 4 * dword_13C2E8;
  i = (_DWORD *)dword_13C2E4;
  if ( 4 * dword_13C2E8 )
  {
    for ( i = (_DWORD *)dword_13C2E4; (_DWORD *)*i != a1; ++i )
    {
      v1 -= 4;
      if ( !v1 )
        return qmutex_unlock(v5);
    }
  }
  v3 = dword_13C2E4 + 4 * dword_13C2E8;
  if ( i != (_DWORD *)v3 )
  {
    memmove(i, i + 1, (v3 - 4 - (_DWORD)i) & 0xFFFFFFFC);
    --dword_13C2E8;
  }
  return qmutex_unlock(v5);
}
// 138BF4: using guessed type void (__noreturn *off_138BF4)();
// 13C2E0: using guessed type int dword_13C2E0;
// 13C2E4: using guessed type int dword_13C2E4;
// 13C2E8: using guessed type int dword_13C2E8;
