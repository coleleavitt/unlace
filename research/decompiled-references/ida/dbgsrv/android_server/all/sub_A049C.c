/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A049C
// Address: 0x00000000000A049C

//----- (00000000000A049C) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A049C(pthread_mutex_t *a1, __int64 a2, char a3)
{
  pthread_mutex_t *v6; // x0
  pthread_mutex_t *result; // x0
  __int64 v8; // x25
  unsigned __int64 v9; // x26
  unsigned int *v10; // x27
  pthread_mutex_t *v11; // x0
  pthread_mutex_t *v12; // x0
  pthread_mutex_t *v13; // x0
  pthread_mutex_t v14; // [xsp+0h] [xbp-60h] BYREF

  *(&v14.__align + 1) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = pack_dd(&v14, (unsigned __int64)&v14.__align + 5, *(unsigned int *)(a2 + 8));
  result = sub_545E8(a1, &v14, (char *)v6 - (char *)&v14);
  if ( *(_QWORD *)(a2 + 8) )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = (unsigned int *)(*(_QWORD *)a2 + v8);
      v11 = pack_dd(&v14, (unsigned __int64)&v14.__align + 5, *v10);
      sub_545E8(a1, &v14, (char *)v11 - (char *)&v14);
      v12 = pack_dd(&v14, (unsigned __int64)&v14.__align + 5, v10[4]);
      result = sub_545E8(a1, &v14, (char *)v12 - (char *)&v14);
      if ( (a3 & 1) != 0 )
      {
        v13 = pack_dd(&v14, (unsigned __int64)&v14.__align + 5, v10[1]);
        sub_545E8(a1, &v14, (char *)v13 - (char *)&v14);
        result = sub_545E8(a1, *((void **)v10 + 1), *((_QWORD *)v10 + 2));
      }
      ++v9;
      v8 += 32;
    }
    while ( v9 < *(_QWORD *)(a2 + 8) );
  }
  return result;
}
