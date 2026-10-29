/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70480
// Address: 0x00070480

//----- (00070480) --------------------------------------------------------
_DWORD *__fastcall sub_70480(_DWORD *a1)
{
  pthread_mutex_t *v2; // r5
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // r2

  *a1 = &off_DAA40;
  v2 = (pthread_mutex_t *)dword_DE4E8;
  qmutex_lock((pthread_mutex_t *)dword_DE4E8);
  v3 = (_DWORD *)dword_DE4EC;
  v4 = dword_DE4EC + 4 * dword_DE4F0;
  if ( 4 * dword_DE4F0 )
  {
    v5 = 4 * dword_DE4F0;
    while ( (_DWORD *)*v3 != a1 )
    {
      v5 -= 4;
      ++v3;
      if ( !v5 )
        goto LABEL_8;
    }
  }
  if ( v3 != (_DWORD *)v4 )
  {
    memmove(v3, v3 + 1, (v4 - 4 - (_DWORD)v3) & 0xFFFFFFFC);
    --dword_DE4F0;
  }
LABEL_8:
  qmutex_unlock(v2);
  return a1;
}
// DAA40: using guessed type _UNKNOWN *off_DAA40;
// DE4E8: using guessed type int dword_DE4E8;
// DE4EC: using guessed type int dword_DE4EC;
// DE4F0: using guessed type int dword_DE4F0;
