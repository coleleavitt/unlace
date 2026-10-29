/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9F4C8
// Address: 0x000000000009F4C8

//----- (000000000009F4C8) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_9F4C8(pthread_mutex_t *a1, unsigned int *a2)
{
  pthread_mutex_t *v4; // x0
  pthread_mutex_t *v5; // x0
  pthread_mutex_t *v6; // x0
  char *v7; // x8
  char *v8; // x20
  size_t v9; // x0
  pthread_mutex_t src; // [xsp+Ch] [xbp-44h] BYREF

  *(__int64 *)((char *)&src.__align + 12) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = pack_dd(&src, (unsigned __int64)&src.__align + 5, *a2);
  sub_545E8(a1, &src, (char *)v4 - (char *)&src);
  v5 = pack_dd(&src, (unsigned __int64)&src.__align + 5, *((unsigned __int8 *)a2 + 4));
  sub_545E8(a1, &src, (char *)v5 - (char *)&src);
  v6 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *((_QWORD *)a2 + 1) + 1LL);
  sub_545E8(a1, &src, (char *)v6 - (char *)&src);
  if ( *((_QWORD *)a2 + 3) )
    v7 = *((char **)a2 + 2);
  else
    v7 = &byte_F154B;
  if ( v7 )
    v8 = v7;
  else
    v8 = "";
  v9 = strlen(v8);
  return sub_545E8(a1, v8, v9 + 1);
}
// F154B: using guessed type char byte_F154B;
