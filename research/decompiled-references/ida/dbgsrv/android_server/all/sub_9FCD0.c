/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9FCD0
// Address: 0x000000000009FCD0

//----- (000000000009FCD0) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_9FCD0(pthread_mutex_t *result, __int64 a2, int a3)
{
  pthread_mutex_t *v3; // x19
  __int64 v4; // x24
  __int64 v5; // x25
  pthread_mutex_t *v6; // x0
  pthread_mutex_t *v7; // x0
  char *v8; // x8
  char *v9; // x21
  size_t v10; // x0
  char *v11; // x8
  char *v12; // x21
  size_t v13; // x0
  pthread_mutex_t v14; // [xsp+0h] [xbp-60h] BYREF

  *(&v14.__align + 1) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 >= 1 )
  {
    v3 = result;
    v4 = (unsigned int)a3;
    v5 = a2 + 32;
    do
    {
      v6 = pack_dd(&v14, (unsigned __int64)&v14.__align + 5, *(unsigned int *)(v5 - 32));
      sub_545E8(v3, &v14, (char *)v6 - (char *)&v14);
      v7 = pack_dd(&v14, (unsigned __int64)&v14.__align + 5, *(unsigned int *)(v5 - 28));
      sub_545E8(v3, &v14, (char *)v7 - (char *)&v14);
      if ( *(_QWORD *)(v5 - 16) )
        v8 = *(char **)(v5 - 24);
      else
        v8 = &byte_F154B;
      if ( v8 )
        v9 = v8;
      else
        v9 = "";
      v10 = strlen(v9);
      sub_545E8(v3, v9, v10 + 1);
      if ( *(_QWORD *)(v5 + 8) )
        v11 = *(char **)v5;
      else
        v11 = &byte_F154B;
      if ( v11 )
        v12 = v11;
      else
        v12 = "";
      v13 = strlen(v12);
      result = sub_545E8(v3, v12, v13 + 1);
      --v4;
      v5 += 56;
    }
    while ( v4 );
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
