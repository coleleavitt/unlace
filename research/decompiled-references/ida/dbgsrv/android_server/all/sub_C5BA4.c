/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C5BA4
// Address: 0x00000000000C5BA4

//----- (00000000000C5BA4) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_C5BA4(__int64 *a1, pthread_mutex_t *a2)
{
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x21
  char *align; // x0
  unsigned __int64 v7; // x21
  pthread_mutex_t *result; // x0
  __int64 v9; // x9
  __int64 v10; // x10
  __int64 v11; // x8
  __int64 v12; // x20
  _BYTE *v13; // x23
  pthread_mutex_t *v14; // x0
  _BYTE *v15; // x9
  char *v16; // x1
  unsigned __int64 v17; // x8
  unsigned __int64 v18; // x20
  char *v19; // x0
  char v20[4]; // [xsp+0h] [xbp-40h] BYREF
  char v21[4]; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v22; // [xsp+8h] [xbp-38h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(&a2->__align + 1);
  v5 = 21 * a1[1] + 10;
  if ( v4 >= v5 )
  {
    if ( v4 != v5 )
    {
      v20[0] = 0;
      sub_5BBF4(a2, v5, v20);
    }
  }
  else
  {
    if ( *(&a2->__align + 2) >= v5 )
    {
      align = (char *)a2->__align;
    }
    else
    {
      align = (char *)qvector_reserve(a2, (void *)a2->__align, v5, 1u);
      v4 = *(&a2->__align + 1);
      a2->__align = (__int64)align;
    }
    memset(&align[v4], 0, v5 - v4);
    *(&a2->__align + 1) = v5;
  }
  v7 = a2->__align + v5;
  result = pack_dq((pthread_mutex_t *)a2->__align, v7, a1[1]);
  v9 = 24 * a1[1];
  if ( v9 )
  {
    v10 = *a1;
    v11 = 0;
    v12 = *a1 + v9;
    v13 = (_BYTE *)(v10 + 16);
    do
    {
      if ( (unsigned __int64)result < v7 )
      {
        result->__size[0] = *v13;
        result = (pthread_mutex_t *)((char *)result + 1);
      }
      v14 = pack_dq(result, v7, *((_QWORD *)v13 - 2) - v11);
      result = pack_dq(v14, v7, *((_QWORD *)v13 - 1) - *((_QWORD *)v13 - 2));
      v11 = *((_QWORD *)v13 - 1);
      v15 = v13 + 8;
      v13 += 24;
    }
    while ( v15 != (_BYTE *)v12 );
  }
  v16 = (char *)a2->__align;
  v17 = *(&a2->__align + 1);
  v18 = (unsigned __int64)result - a2->__align;
  if ( v17 >= v18 )
  {
    if ( v17 != v18 )
    {
      v21[0] = 0;
      return sub_5BBF4(a2, v18, v21);
    }
  }
  else
  {
    if ( *(&a2->__align + 2) < v18 )
    {
      v19 = (char *)qvector_reserve(a2, v16, v18, 1u);
      v17 = *(&a2->__align + 1);
      v16 = v19;
      a2->__align = (__int64)v19;
    }
    result = (pthread_mutex_t *)memset(&v16[v17], 0, v18 - v17);
    *(&a2->__align + 1) = v18;
  }
  return result;
}
