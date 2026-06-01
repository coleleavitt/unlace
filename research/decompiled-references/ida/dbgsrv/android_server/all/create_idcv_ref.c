/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_idcv_ref
// Address: 0x000000000006E2B4

//----- (000000000006E2B4) ----------------------------------------------------
__int64 __fastcall create_idcv_ref(__int64 *a1, __int64 a2)
{
  pthread_mutex_t *v4; // x19
  __int64 v5; // x0
  unsigned __int64 v6; // x23
  unsigned __int64 v7; // x24
  unsigned int v8; // w22
  __int64 *v9; // x20

  v4 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v5 = sub_6804C();
  v6 = *(_QWORD *)(v5 + 88);
  v7 = a2 - 24;
  v8 = 0;
  if ( v6 <= a2 - 24 && v6 + 56LL * *(_QWORD *)(v5 + 96) > v7 )
  {
    free_idcv(a1);
    *(_BYTE *)a1 = 10;
    v9 = a1 + 1;
    if ( *(_BYTE *)a2 == 10 )
    {
      *(_OWORD *)v9 = *(_OWORD *)(a2 + 8);
    }
    else
    {
      *v9 = 0;
      *((_DWORD *)v9 + 2) = ~(-1227133513 * ((v7 - v6) >> 3));
    }
    v8 = 1;
  }
  qmutex_unlock(v4);
  return v8;
}
// 166AA8: using guessed type __int64 qword_166AA8;
