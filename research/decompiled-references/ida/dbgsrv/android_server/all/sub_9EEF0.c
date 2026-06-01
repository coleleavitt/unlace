/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9EEF0
// Address: 0x000000000009EEF0

//----- (000000000009EEF0) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_9EEF0(pthread_mutex_t *a1, _QWORD *a2)
{
  pthread_mutex_t *v4; // x0
  pthread_mutex_t *v5; // x0
  char *v6; // x8
  char *v7; // x20
  size_t v8; // x0
  pthread_mutex_t src; // [xsp+Ch] [xbp-44h] BYREF

  *(__int64 *)((char *)&src.__align + 12) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *a2 + 1LL);
  sub_545E8(a1, &src, (char *)v4 - (char *)&src);
  v5 = pack_dq(&src, (unsigned __int64)&src.__align + 10, a2[1] + 1LL);
  sub_545E8(a1, &src, (char *)v5 - (char *)&src);
  if ( a2[3] )
    v6 = (char *)a2[2];
  else
    v6 = &byte_F154B;
  if ( v6 )
    v7 = v6;
  else
    v7 = "";
  v8 = strlen(v7);
  return sub_545E8(a1, v7, v8 + 1);
}
// F154B: using guessed type char byte_F154B;
