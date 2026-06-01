/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006586C
// Address: 0x000000010006586C

//----- (000000010006586C) ----------------------------------------------------
void __fastcall sub_10006586C(__int64 a1, __int64 a2)
{
  pthread_mutex_t *v4; // x22
  _QWORD *v5; // x20
  __int64 v6; // x21
  _QWORD *v7; // x22
  __int128 v8; // [xsp+0h] [xbp-50h]

  v4 = *(pthread_mutex_t **)a1;
  qmutex_lock(*(pthread_mutex_t **)a1);
  v5 = *(_QWORD **)(a1 + 8);
  v8 = *(_OWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  qmutex_unlock(v4);
  if ( (v8 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
  {
    v6 = 8 * v8;
    v7 = v5;
    do
    {
      (**(void (__fastcall ***)(_QWORD, __int64))*v7)(*v7, a2);
      ++v7;
      v6 -= 8;
    }
    while ( v6 );
  }
  if ( v5 )
    qfree(v5);
}
