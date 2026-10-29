/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9F09C
// Address: 0x000000000009F09C

//----- (000000000009F09C) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_9F09C(pthread_mutex_t *a1, _QWORD *a2)
{
  __int64 v3; // x21
  pthread_mutex_t *v5; // x0
  pthread_mutex_t *result; // x0
  __int64 v7; // x26
  unsigned int *v8; // x23
  pthread_mutex_t *v9; // x0
  char *v10; // x8
  char *v11; // x23
  size_t v12; // x0
  pthread_mutex_t v13; // [xsp+0h] [xbp-70h] BYREF

  *(&v13.__align + 1) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = a2[1];
  v5 = pack_dd(&v13, (unsigned __int64)&v13.__align + 5, (unsigned int)v3);
  result = sub_545E8(a1, &v13, (char *)v5 - (char *)&v13);
  if ( v3 )
  {
    v7 = 0;
    do
    {
      v8 = (unsigned int *)(*a2 + v7);
      v9 = pack_dd(&v13, (unsigned __int64)&v13.__align + 5, *v8);
      sub_545E8(a1, &v13, (char *)v9 - (char *)&v13);
      if ( *((_QWORD *)v8 + 2) )
        v10 = *((char **)v8 + 1);
      else
        v10 = &byte_F154B;
      if ( v10 )
        v11 = v10;
      else
        v11 = "";
      v12 = strlen(v11);
      result = sub_545E8(a1, v11, v12 + 1);
      --v3;
      v7 += 32;
    }
    while ( v3 );
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
