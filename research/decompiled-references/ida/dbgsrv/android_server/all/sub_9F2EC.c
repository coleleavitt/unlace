/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9F2EC
// Address: 0x000000000009F2EC

//----- (000000000009F2EC) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_9F2EC(pthread_mutex_t *a1, __int64 a2)
{
  char *v4; // x8
  char *v5; // x21
  size_t v6; // x0
  pthread_mutex_t *v7; // x0
  pthread_mutex_t *v8; // x0
  pthread_mutex_t *v9; // x0
  pthread_mutex_t src; // [xsp+Ch] [xbp-44h] BYREF

  *(__int64 *)((char *)&src.__align + 12) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a2 + 8) )
    v4 = *(char **)a2;
  else
    v4 = &byte_F154B;
  if ( v4 )
    v5 = v4;
  else
    v5 = "";
  v6 = strlen(v5);
  sub_545E8(a1, v5, v6 + 1);
  v7 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(a2 + 24) + 1LL);
  sub_545E8(a1, &src, (char *)v7 - (char *)&src);
  v8 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(a2 + 32) + 1LL);
  sub_545E8(a1, &src, (char *)v8 - (char *)&src);
  v9 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(a2 + 40) + 1LL);
  return sub_545E8(a1, &src, (char *)v9 - (char *)&src);
}
// F154B: using guessed type char byte_F154B;
