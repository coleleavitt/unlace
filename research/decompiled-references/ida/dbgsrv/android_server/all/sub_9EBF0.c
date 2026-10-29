/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9EBF0
// Address: 0x000000000009EBF0

//----- (000000000009EBF0) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_9EBF0(pthread_mutex_t *a1, __int64 a2)
{
  pthread_mutex_t *v4; // x0
  pthread_mutex_t *v5; // x0
  pthread_mutex_t *v6; // x0
  pthread_mutex_t *v7; // x0
  char *v8; // x8
  char *v9; // x21
  size_t v10; // x0
  char *v11; // x8
  char *v12; // x20
  size_t v13; // x0
  pthread_mutex_t src; // [xsp+Ch] [xbp-44h] BYREF

  *(__int64 *)((char *)&src.__align + 12) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(a2 + 64) + 1LL);
  sub_545E8(a1, &src, (char *)v4 - (char *)&src);
  v5 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)a2 + 1LL - 16LL * *(_QWORD *)(a2 + 64));
  sub_545E8(a1, &src, (char *)v5 - (char *)&src);
  v6 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(a2 + 8) + 1LL - *(_QWORD *)a2);
  sub_545E8(a1, &src, (char *)v6 - (char *)&src);
  v7 = pack_dd(
         &src,
         (unsigned __int64)&src.__align + 5,
         *(unsigned __int8 *)(a2 + 73) | (16 * (unsigned int)*(unsigned __int8 *)(a2 + 72)));
  sub_545E8(a1, &src, (char *)v7 - (char *)&src);
  if ( *(_QWORD *)(a2 + 24) )
    v8 = *(char **)(a2 + 16);
  else
    v8 = &byte_F154B;
  if ( v8 )
    v9 = v8;
  else
    v9 = "";
  v10 = strlen(v9);
  sub_545E8(a1, v9, v10 + 1);
  if ( *(_QWORD *)(a2 + 48) )
    v11 = *(char **)(a2 + 40);
  else
    v11 = &byte_F154B;
  if ( v11 )
    v12 = v11;
  else
    v12 = "";
  v13 = strlen(v12);
  return sub_545E8(a1, v12, v13 + 1);
}
// F154B: using guessed type char byte_F154B;
