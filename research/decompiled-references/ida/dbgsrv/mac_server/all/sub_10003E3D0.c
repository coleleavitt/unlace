/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003E3D0
// Address: 0x000000010003E3D0

//----- (000000010003E3D0) ----------------------------------------------------
time_t __fastcall sub_10003E3D0(__int64 a1, __int64 a2, int a3)
{
  char v3; // al
  pthread_mutex_t *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  time_t result; // rax
  char v14; // [rsp-8h] [rbp-20h]

  v14 = v3;
  *(_DWORD *)a1 = 289621065;
  *(_QWORD *)(a1 + 8) = sub_100032010();
  *(_QWORD *)(a1 + 16) = get_eah();
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 136) = a2;
  *(_BYTE *)(a1 + 144) = a3;
  *(_BYTE *)(a1 + 145) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  if ( !a3 )
  {
    v6 = (pthread_mutex_t *)qword_1000AD0F0;
    v7 = qword_1000AD0F0;
    qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_DWORD *)(v8 + 120);
    *(_DWORD *)(v8 + 120) = v9 + 1;
    if ( v9 == 0 && qword_1000AC0F0 != 0 )
      ((void (__fastcall *)(__int64))qword_1000AC0F0)(v7);
    *(_BYTE *)(a1 + 145) = 1;
    qmutex_unlock(v6);
  }
  if ( is_main_thread() )
  {
    result = -1;
    if ( (*(_BYTE *)(a1 + 144) & 1) == 0 )
      result = time(nullptr);
  }
  else
  {
    *(_BYTE *)(a1 + 144) = 1;
    result = -1;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = result;
  if ( !*(_BYTE *)(a1 + 144) )
    return callui(25, a2, v10, (unsigned int)&callui, v11, v12, v14);
  return result;
}
// 10003E3D9: variable 'v3' is possibly undefined
// 10003E4DB: variable 'v10' is possibly undefined
// 10003E4DB: variable 'v11' is possibly undefined
// 10003E4DB: variable 'v12' is possibly undefined
// 1000AC0F0: using guessed type __int64;
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
