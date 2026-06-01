/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A82B0
// Address: 0x00000000000A82B0

//----- (00000000000A82B0) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A82B0(__int64 a1, char *a2, char *a3, __int128 *a4)
{
  __int128 v8; // q0
  __int128 v9; // q1
  __int128 v10; // q2
  pthread_mutex_t *result; // x0

  *(_QWORD *)a1 = 0;
  sub_39140((_QWORD *)(a1 + 24), a2);
  sub_39140((_QWORD *)(a1 + 48), a3);
  v9 = a4[1];
  v8 = a4[2];
  v10 = *a4;
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_OWORD *)(a1 + 104) = v8;
  *(_OWORD *)(a1 + 88) = v9;
  *(_OWORD *)(a1 + 72) = v10;
  *(_QWORD *)(a1 + 8) = qmutex_create();
  result = qsem_create(nullptr, 0);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
