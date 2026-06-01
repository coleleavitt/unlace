/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4312D8
// Address: 0x00000000004312D8

//----- (00000000004312D8) ----------------------------------------------------
__int64 __fastcall sub_4312D8(_QWORD *a1, __int64 a2)
{
  pthread_mutex_t *v4; // x21
  const char *v5; // x0
  unsigned __int8 *v6; // x1
  FILE *v7; // x23
  _QWORD *v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  unsigned __int64 v11; // x2
  __int64 v13; // [xsp+30h] [xbp-10h] BYREF

  v4 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  if ( a1[2] )
    v5 = (const char *)a1[1];
  else
    v5 = (const char *)&qword_4B2D48;
  if ( a1[6] )
    v6 = (unsigned __int8 *)a1[5];
  else
    v6 = (unsigned __int8 *)&qword_4B2D48;
  v7 = sub_48DCD0(v5, v6);
  if ( v7 )
  {
    v8 = (_QWORD *)qword_522128;
    v9 = qword_522130;
    if ( qword_522130 )
    {
      *(_QWORD *)(a2 + 8) = qword_522130;
      v10 = qword_522130;
      v11 = qword_522130 + 1;
      if ( qword_522130 + 1 <= (unsigned __int64)qword_522138 )
      {
LABEL_8:
        v8[v10] = v7;
        ++qword_522130;
        goto LABEL_9;
      }
LABEL_16:
      v8 = sub_491288((__int64)&qword_522128, v8, v11, 8u);
      qword_522128 = (__int64)v8;
      v10 = qword_522130;
      goto LABEL_8;
    }
    v13 = 0;
    if ( qword_522128 <= (unsigned __int64)&v13 && (unsigned __int64)&v13 < qword_522128 + 8 * qword_522138 )
    {
      if ( qword_522138 )
        goto LABEL_15;
    }
    else if ( qword_522138 )
    {
      goto LABEL_15;
    }
    v8 = sub_491288((__int64)&qword_522128, (void *)qword_522128, 1u, 8u);
    qword_522128 = (__int64)v8;
    v9 = qword_522130;
LABEL_15:
    v8[v9] = 0;
    v8 = (_QWORD *)qword_522128;
    *(_QWORD *)(a2 + 8) = ++qword_522130;
    v10 = qword_522130;
    v11 = qword_522130 + 1;
    if ( qword_522130 + 1 <= (unsigned __int64)qword_522138 )
      goto LABEL_8;
    goto LABEL_16;
  }
LABEL_9:
  sub_494760(v4);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522128: using guessed type __int64 qword_522128;
// 522130: using guessed type __int64 qword_522130;
// 522138: using guessed type __int64 qword_522138;
// 522288: using guessed type __int64 qword_522288;
