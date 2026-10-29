/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028B08
// Address: 0x0000000100028B08

//----- (0000000100028B08) ----------------------------------------------------
bool __fastcall sub_100028B08(char *a1, int a2, const void *a3, unsigned __int64 a4)
{
  pthread_mutex_t *v8; // x19
  _QWORD *v9; // x24
  __int64 v10; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  char v14; // [xsp+7h] [xbp-39h] BYREF

  v8 = (pthread_mutex_t *)qword_10009D7C0;
  qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
  v9 = (_QWORD *)sub_10002BEEC();
  v10 = sub_10002D914(v9, a1);
  v11 = v10;
  if ( v10 != -1 )
  {
    v12 = *(_QWORD *)(*v9 + 8 * v10);
    v14 = 0;
    sub_100019CE4((_QWORD **)(v12 + 32), a4, &v14);
    memcpy(*(void **)(v12 + 32), a3, a4);
    sub_10002CDB4((_QWORD **)(v12 + 32));
    *(_DWORD *)(v12 + 24) = a2;
    *(_DWORD *)(v12 + 136) = 0;
  }
  qmutex_unlock(v8);
  return v11 != -1;
}
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
