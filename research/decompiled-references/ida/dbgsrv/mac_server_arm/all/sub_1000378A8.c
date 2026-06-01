/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000378A8
// Address: 0x00000001000378A8

//----- (00000001000378A8) ----------------------------------------------------
__int64 __fastcall sub_1000378A8(__int64 a1)
{
  pthread_mutex_t *v2; // x20
  __int64 v3; // x8
  int v4; // w9
  bool v5; // zf
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  __int64 v11; // x8
  __int64 v12; // x23
  unsigned __int8 *v13; // x1
  int v14; // w8
  void *v15; // x0

  if ( *(_BYTE *)(a1 + 145) == 1 )
  {
    v2 = (pthread_mutex_t *)qword_10009D7C0;
    qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_DWORD *)(v3 + 120) - 1;
    *(_DWORD *)(v3 + 120) = v4;
    if ( v4 )
      v5 = 1;
    else
      v5 = off_10009CA18 == nullptr;
    if ( !v5 )
      off_10009CA18();
    qmutex_unlock(v2);
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  v6 = *(void **)(a1 + 72);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v7 = *(void **)(a1 + 48);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v8 = *(void **)(a1 + 24);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 )
    {
      v10 = 0;
      do
      {
        v12 = *(_QWORD *)(a1 + 24);
        v13 = (unsigned __int8 *)(v12 + v10);
        if ( !(v12 + v10) )
        {
          if ( under_debugger != 1 )
            goto LABEL_27;
          while ( 1 )
          {
            __break(1u);
LABEL_27:
            interr(2656);
          }
        }
        v14 = *v13;
        if ( v14 == 5 )
        {
          sub_100031978(*(_QWORD *)(v12 + v10 + 8), v13);
        }
        else if ( v14 == 7 )
        {
          v15 = *(void **)(v12 + v10 + 8);
          if ( v15 )
          {
            *(_QWORD *)(v12 + v10 + 16) = 0;
            qfree(v15);
            *(_QWORD *)(v12 + v10 + 24) = 0;
          }
        }
        v11 = v12 + v10;
        *(_BYTE *)v11 = 2;
        *(_QWORD *)(v11 + 8) = 0;
        v10 += 32;
        --v9;
      }
      while ( v9 );
      v8 = *(void **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  return a1;
}
// 10009CA18: using guessed type __int64 (*off_10009CA18)();
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
// 10009D90D: using guessed type char under_debugger;
