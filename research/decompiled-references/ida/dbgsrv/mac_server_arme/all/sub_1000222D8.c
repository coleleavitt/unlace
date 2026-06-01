/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000222D8
// Address: 0x00000001000222D8

//----- (00000001000222D8) ----------------------------------------------------
__int64 __fastcall sub_1000222D8(_QWORD *a1, __int64 a2)
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

  v4 = (pthread_mutex_t *)qword_1000A57C0;
  qmutex_lock((pthread_mutex_t *)qword_1000A57C0);
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
    v5 = &byte_10007AE40;
    if ( a1[6] )
      goto LABEL_3;
  }
  v6 = (unsigned __int8 *)&byte_10007AE40;
LABEL_6:
  v7 = qfopen(v5, v6);
  if ( v7 )
  {
    v8 = qword_1000A5928;
    if ( !qword_1000A5928 )
    {
      v15 = 0;
      v9 = (_QWORD *)qword_1000A5920;
      if ( qword_1000A5920 > (unsigned __int64)&v15 || qword_1000A5920 + 8 * qword_1000A5930 <= (unsigned __int64)&v15 )
      {
        if ( qword_1000A5930 )
        {
          v10 = 0;
          v11 = 0;
        }
        else
        {
          v9 = qvector_reserve(&qword_1000A5920, (_QWORD *)qword_1000A5920, 1u, 8u);
          qword_1000A5920 = (__int64)v9;
          v11 = qword_1000A5928;
          v10 = v15;
        }
        v9[v11] = v10;
      }
      else if ( qword_1000A5930 )
      {
        *(_QWORD *)qword_1000A5920 = 0;
      }
      else
      {
        qword_1000A5920 = (__int64)qvector_reserve(&qword_1000A5920, (_QWORD *)qword_1000A5920, 1u, 8u);
        *(_QWORD *)(qword_1000A5920 + 8 * qword_1000A5928) = 0;
      }
      v8 = ++qword_1000A5928;
    }
    *(_QWORD *)(a2 + 8) = v8;
    v12 = (_QWORD *)qword_1000A5920;
    v13 = qword_1000A5928;
    if ( qword_1000A5930 < (unsigned __int64)(qword_1000A5928 + 1) )
    {
      v12 = qvector_reserve(&qword_1000A5920, (_QWORD *)qword_1000A5920, qword_1000A5928 + 1, 8u);
      qword_1000A5920 = (__int64)v12;
      v13 = qword_1000A5928;
    }
    v12[v13] = v7;
    ++qword_1000A5928;
  }
  qmutex_unlock(v4);
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
// 1000A5920: using guessed type __int64 qword_1000A5920;
// 1000A5928: using guessed type __int64 qword_1000A5928;
// 1000A5930: using guessed type __int64 qword_1000A5930;
