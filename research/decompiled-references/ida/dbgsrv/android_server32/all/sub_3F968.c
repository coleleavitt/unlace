/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F968
// Address: 0x0003F968

//----- (0003F968) --------------------------------------------------------
bool __fastcall sub_3F968(int a1, char a2)
{
  pthread_mutex_t *v4; // r4
  __int64 v5; // r2
  __int64 *v6; // r5

  v4 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = (__int64 *)(a1 + 32);
  if ( (v5 & (1LL << a2)) == 0 )
  {
    if ( !under_debugger )
      interr(1444);
    __debugbreak();
  }
  *v6 = v5 & ~(1LL << a2);
  return qmutex_unlock(v4);
}
// DE374: using guessed type int dword_DE374;
// E0550: using guessed type char under_debugger;
