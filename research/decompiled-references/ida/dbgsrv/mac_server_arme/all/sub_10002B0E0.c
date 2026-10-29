/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B0E0
// Address: 0x000000010002B0E0

//----- (000000010002B0E0) ----------------------------------------------------
bool __fastcall sub_10002B0E0(char *a1, int a2, const void *a3, unsigned __int64 a4)
{
  pthread_mutex_t *v8; // x19
  _QWORD *v9; // x24
  __int64 v10; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  char v14; // [xsp+7h] [xbp-39h] BYREF

  v8 = (pthread_mutex_t *)qword_1000A57C0;
  qmutex_lock((pthread_mutex_t *)qword_1000A57C0);
  v9 = (_QWORD *)sub_10002D1C4();
  v10 = sub_10002ECAC(v9, a1);
  v11 = v10;
  if ( v10 != -1 )
  {
    v12 = *(_QWORD *)(*v9 + 8 * v10);
    v14 = 0;
    sub_10001B764((_QWORD **)(v12 + 32), a4, &v14);
    memcpy(*(void **)(v12 + 32), a3, a4);
    sub_10002E118((_QWORD **)(v12 + 32));
    *(_DWORD *)(v12 + 24) = a2;
    *(_DWORD *)(v12 + 136) = 0;
  }
  qmutex_unlock(v8);
  return v11 != -1;
}
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
