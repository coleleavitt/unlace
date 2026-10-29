/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D8D0
// Address: 0x000000000041D8D0

//----- (000000000041D8D0) ----------------------------------------------------
__int64 __fastcall sub_41D8D0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  int v10; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  int v18; // eax
  unsigned int v19; // ebp
  bool v20; // zf
  double v21; // xmm4_8
  double v22; // xmm5_8
  char v23; // [rsp+0h] [rbp-18h]

  v9 = dword_4C8070;
  if ( !dword_4C8070 )
  {
    sub_412D00(a2, a3, a4, a5, a6, a7, a8, a9);
    v9 = dword_4C8070;
    if ( dword_4C8070 != 1 )
      goto LABEL_3;
LABEL_9:
    sub_4563D0(
      a1,
      "DBG: debugging of multi-threaded program is not available\n",
      *(double *)a2.m128_u64,
      *(double *)a3.m128_u64,
      *(double *)a4.m128_u64,
      *(double *)a5.m128_u64,
      a6,
      a7,
      *(double *)a8.m128_u64,
      *(double *)a9.m128_u64);
    return 0;
  }
  if ( dword_4C8070 == 1 )
    goto LABEL_9;
LABEL_3:
  if ( v9 == 2 )
  {
    sub_4563D0(
      a1,
      "DBG: PTRACE_O_TRACECLONE ability detected, will be used in debugging multi-threaded program\n",
      *(double *)a2.m128_u64,
      *(double *)a3.m128_u64,
      *(double *)a4.m128_u64,
      *(double *)a5.m128_u64,
      a6,
      a7,
      *(double *)a8.m128_u64,
      *(double *)a9.m128_u64);
    v18 = dword_4C56C8;
    v19 = *(_DWORD *)(a1 + 1340);
    if ( dword_4C56C8 == -1 )
    {
      *(double *)a2.m128_u64 = sub_410F70(
                                 a2,
                                 a3,
                                 a4,
                                 a5,
                                 v16,
                                 v17,
                                 a8,
                                 a9,
                                 a1,
                                 (__int64)"DBG: PTRACE_O_TRACECLONE ability detected, will be used in debugging multi-threaded program\n",
                                 v12,
                                 v13,
                                 v14,
                                 v15,
                                 v23);
      v18 = dword_4C56C8;
    }
    if ( v18 )
      ptrace(PTRACE_SETOPTIONS, v19, 0, 8);
    v20 = *(_BYTE *)(a1 + 1348) == 0;
    *(_QWORD *)(a1 + 960) = 0;
    *(_QWORD *)(a1 + 976) = 0;
    if ( v20 )
    {
      sub_4563D0(a1, "DBG: collect threads\n");
      sub_41CE10(a1, *(double *)a2.m128_u64, a3, a4, a5, v21, v22, a8, a9);
      *(_BYTE *)(a1 + 1348) = 1;
    }
    return 1;
  }
  v10 = (unsigned __int8)sub_41D690(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  sub_4563D0(a1, "DBG: tdb_new returns %d\n", v10);
  if ( (_BYTE)v10 )
  {
    if ( *(_QWORD *)(a1 + 952) )
      sub_4563D0(a1, "DBG: libthread_db.so will be used in debugging multi-threaded program\n");
    return 1;
  }
  return 0;
}
// 41D8F4: variable 'a6' is possibly undefined
// 41D8F4: variable 'a7' is possibly undefined
// 41DA00: variable 'v16' is possibly undefined
// 41DA00: variable 'v17' is possibly undefined
// 41DA00: variable 'v12' is possibly undefined
// 41DA00: variable 'v13' is possibly undefined
// 41DA00: variable 'v14' is possibly undefined
// 41DA00: variable 'v15' is possibly undefined
// 41DA00: variable 'v23' is possibly undefined
// 41D9CD: variable 'v21' is possibly undefined
// 41D9CD: variable 'v22' is possibly undefined
// 4C56C8: using guessed type int dword_4C56C8;
// 4C8070: using guessed type int dword_4C8070;
