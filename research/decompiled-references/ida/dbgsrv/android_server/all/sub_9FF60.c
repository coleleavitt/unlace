/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9FF60
// Address: 0x000000000009FF60

//----- (000000000009FF60) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_9FF60(pthread_mutex_t *a1, _QWORD *a2)
{
  __int64 v3; // x22
  pthread_mutex_t *v5; // x0
  pthread_mutex_t *result; // x0
  __int64 v7; // x25
  __int64 v8; // x26
  __int64 v9; // x27
  pthread_mutex_t *v10; // x0
  pthread_mutex_t *v11; // x0
  pthread_mutex_t *v12; // x0
  pthread_mutex_t *v13; // x0
  pthread_mutex_t src; // [xsp+Ch] [xbp-64h] BYREF

  *(__int64 *)((char *)&src.__align + 12) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = a2[1];
  v5 = pack_dd(&src, (unsigned __int64)&src.__align + 5, (unsigned int)v3);
  result = sub_545E8(a1, &src, (char *)v5 - (char *)&src);
  if ( (int)v3 >= 1 )
  {
    v7 = 0;
    v8 = (unsigned int)v3;
    do
    {
      v9 = *a2 + v7;
      v10 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)v9 + 1LL);
      sub_545E8(a1, &src, (char *)v10 - (char *)&src);
      v11 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(v9 + 8) + 1LL);
      sub_545E8(a1, &src, (char *)v11 - (char *)&src);
      v12 = pack_dq(&src, (unsigned __int64)&src.__align + 10, *(_QWORD *)(v9 + 16) + 1LL);
      sub_545E8(a1, &src, (char *)v12 - (char *)&src);
      v13 = pack_dd(&src, (unsigned __int64)&src.__align + 5, *(unsigned __int8 *)(v9 + 24));
      result = sub_545E8(a1, &src, (char *)v13 - (char *)&src);
      --v8;
      v7 += 32;
    }
    while ( v8 );
  }
  return result;
}
