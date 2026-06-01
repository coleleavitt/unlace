/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A05C0
// Address: 0x00000000000A05C0

//----- (00000000000A05C0) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A05C0(pthread_mutex_t *a1, __int64 a2, __int64 a3, __int64 a4)
{
  pthread_mutex_t *v7; // x0
  __int64 v8; // x1
  int v9; // w2
  __int64 v10; // x3
  size_t v11; // x23
  void *v12; // x24
  pthread_mutex_t *v13; // x0
  pthread_mutex_t *v14; // x0
  size_t v15; // x23
  void *v16; // x21
  pthread_mutex_t *v17; // x0
  pthread_mutex_t *result; // x0
  pthread_mutex_t src; // [xsp+Ch] [xbp-64h] BYREF

  *(__int64 *)((char *)&src.__align + 12) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = sub_A049C(a1, a2, 1);
  v11 = *(_QWORD *)(a3 + 8);
  if ( HIDWORD(v11)
    || (v12 = *(void **)a3,
        v13 = pack_dd(&src, (unsigned __int64)&src.__align + 5, (unsigned int)v11),
        sub_545E8(a1, &src, (char *)v13 - (char *)&src),
        sub_545E8(a1, v12, v11),
        v14 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(a3 + 24) + 1LL),
        v7 = sub_545E8(a1, &src, (char *)v14 - (char *)&src),
        v15 = *(_QWORD *)(a3 + 40),
        HIDWORD(v15)) )
  {
    if ( !under_debugger )
      interr(5);
    __break(1u);
    return sub_A0704(v7, v8, v9, v10);
  }
  else
  {
    v16 = *(void **)(a3 + 32);
    v17 = pack_dd(&src, (unsigned __int64)&src.__align + 5, (unsigned int)v15);
    sub_545E8(a1, &src, (char *)v17 - (char *)&src);
    result = sub_545E8(a1, v16, v15);
    if ( a4 )
      return sub_A049C(a1, a4, 0);
  }
  return result;
}
// A0701: variable 'v8' is possibly undefined
// A0701: variable 'v9' is possibly undefined
// A0701: variable 'v10' is possibly undefined
// 168DF0: using guessed type char under_debugger;
