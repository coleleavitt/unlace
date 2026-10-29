/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020408
// Address: 0x0000000100020408

//----- (0000000100020408) ----------------------------------------------------
__int64 __fastcall sub_100020408(_QWORD *a1, __int64 a2)
{
  pthread_mutex_t *v4; // x19
  const char *v5; // x0
  unsigned __int8 *v6; // x1
  FILE *v7; // x21
  __int64 v8; // x8
  _QWORD *v9; // x1
  __int64 v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // x1
  __int64 v13; // x8
  __int64 v15; // [xsp+0h] [xbp-40h] BYREF

  v4 = (pthread_mutex_t *)qword_10009D7C0;
  qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
  if ( a1[2] )
  {
    v5 = (const char *)a1[1];
    if ( a1[6] )
    {
LABEL_3:
      v6 = (unsigned __int8 *)a1[5];
      goto LABEL_6;
    }
  }
  else
  {
    v5 = &byte_100075A30;
    if ( a1[6] )
      goto LABEL_3;
  }
  v6 = (unsigned __int8 *)&byte_100075A30;
LABEL_6:
  v7 = qfopen(v5, v6);
  if ( v7 )
  {
    v8 = qword_10009D928;
    if ( !qword_10009D928 )
    {
      v15 = 0;
      v9 = (_QWORD *)qword_10009D920;
      if ( qword_10009D920 > (unsigned __int64)&v15 || qword_10009D920 + 8 * qword_10009D930 <= (unsigned __int64)&v15 )
      {
        if ( qword_10009D930 )
        {
          v10 = 0;
          v11 = 0;
        }
        else
        {
          v9 = qvector_reserve(&qword_10009D920, (_QWORD *)qword_10009D920, 1u, 8u);
          qword_10009D920 = (__int64)v9;
          v11 = qword_10009D928;
          v10 = v15;
        }
        v9[v11] = v10;
      }
      else if ( qword_10009D930 )
      {
        *(_QWORD *)qword_10009D920 = 0;
      }
      else
      {
        qword_10009D920 = (__int64)qvector_reserve(&qword_10009D920, (_QWORD *)qword_10009D920, 1u, 8u);
        *(_QWORD *)(qword_10009D920 + 8 * qword_10009D928) = 0;
      }
      v8 = ++qword_10009D928;
    }
    *(_QWORD *)(a2 + 8) = v8;
    v12 = (_QWORD *)qword_10009D920;
    v13 = qword_10009D928;
    if ( qword_10009D930 < (unsigned __int64)(qword_10009D928 + 1) )
    {
      v12 = qvector_reserve(&qword_10009D920, (_QWORD *)qword_10009D920, qword_10009D928 + 1, 8u);
      qword_10009D920 = (__int64)v12;
      v13 = qword_10009D928;
    }
    v12[v13] = v7;
    ++qword_10009D928;
  }
  qmutex_unlock(v4);
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
// 10009D920: using guessed type __int64 qword_10009D920;
// 10009D928: using guessed type __int64 qword_10009D928;
// 10009D930: using guessed type __int64 qword_10009D930;
