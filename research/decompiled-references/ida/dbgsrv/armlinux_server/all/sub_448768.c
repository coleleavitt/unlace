/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448768
// Address: 0x0000000000448768

//----- (0000000000448768) ----------------------------------------------------
__int64 __fastcall sub_448768(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v4; // w20
  pthread_mutex_t *v6; // x20
  __int64 v7; // x1
  int v8; // w0
  char *v9; // x2
  time_t v10; // x0
  __int64 result; // x0

  v4 = a3;
  *(_DWORD *)a1 = 289621065;
  *(_QWORD *)(a1 + 8) = sub_43CF60();
  *(_QWORD *)(a1 + 16) = sub_47DC28();
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = a2;
  *(_BYTE *)(a1 + 144) = v4;
  *(_BYTE *)(a1 + 145) = 0;
  if ( !v4 )
  {
    v6 = (pthread_mutex_t *)qword_522288;
    sub_494720((pthread_mutex_t *)qword_522288);
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)(v7 + 120) + 1;
    *(_DWORD *)(v7 + 120) = v8;
    if ( v8 == 1 && off_520158 )
      off_520158();
    *(_BYTE *)(a1 + 145) = 1;
    sub_494760(v6);
  }
  if ( sub_494500() )
  {
    v10 = -1;
    if ( !*(_BYTE *)(a1 + 144) )
      v10 = time(nullptr);
  }
  else
  {
    v10 = -1;
    *(_BYTE *)(a1 + 144) = 1;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v10;
  result = *(unsigned __int8 *)(a1 + 144);
  if ( !*(_BYTE *)(a1 + 144) )
    return callui(25, (int)callui, v9);
  return result;
}
// 448844: variable 'v9' is possibly undefined
// 520158: using guessed type __int64 (*off_520158)(void);
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
// 522288: using guessed type __int64 qword_522288;
