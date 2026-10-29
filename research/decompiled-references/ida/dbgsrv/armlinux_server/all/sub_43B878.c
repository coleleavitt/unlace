/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43B878
// Address: 0x000000000043B878

//----- (000000000043B878) ----------------------------------------------------
__int64 __fastcall sub_43B878(__int64 a1)
{
  pthread_mutex_t *v2; // x22
  __int64 v3; // x5
  unsigned int v4; // w23
  _QWORD *v5; // x1
  __int64 *v6; // x2
  __int64 v7; // t1
  _QWORD *v8; // x2
  __int64 v9; // x20
  unsigned __int64 v11; // x2
  _QWORD *v13; // x3

  if ( !a1 || *(_DWORD *)(a1 + 12) )
    return -1;
  v2 = (pthread_mutex_t *)qword_522180;
  sub_494720((pthread_mutex_t *)qword_522180);
  v3 = qword_522170;
  v4 = qword_522170;
  if ( (int)qword_522170 <= 0 )
  {
    v5 = (_QWORD *)qword_522168;
    goto LABEL_8;
  }
  v5 = (_QWORD *)qword_522168;
  if ( a1 != *(_QWORD *)qword_522168 )
  {
    v6 = (__int64 *)(qword_522168 + 8);
    while ( (__int64 *)(qword_522168 + 8 + 8LL * (unsigned int)(qword_522170 - 1)) != v6 )
    {
      v7 = *v6++;
      if ( v7 == a1 )
        goto LABEL_16;
    }
LABEL_8:
    if ( (int)qword_522170 <= 0 )
    {
      if ( (_DWORD)qword_522170 )
      {
        v13 = v5;
        v4 = 0;
        v9 = 0;
        goto LABEL_20;
      }
    }
    else
    {
      v8 = v5 + 1;
      v9 = 0;
      if ( !*v5 )
      {
        v4 = 0;
        v13 = v5;
        v9 = 0;
LABEL_20:
        *v13 = a1;
LABEL_21:
        nullsub_5(0, a1, v4);
        goto LABEL_17;
      }
      while ( ++v9 != (int)qword_522170 )
      {
        v13 = v8;
        if ( !*v8++ )
        {
          v4 = v9;
          goto LABEL_20;
        }
      }
    }
    v11 = qword_522170 + 1;
    if ( qword_522170 + 1 > (unsigned __int64)qword_522178 )
    {
      v5 = sub_491288((__int64)&qword_522168, v5, v11, 8u);
      qword_522168 = (__int64)v5;
      v3 = qword_522170;
      v11 = qword_522170 + 1;
    }
    v9 = (int)v4;
    qword_522170 = v11;
    v5[v3] = a1;
    goto LABEL_21;
  }
LABEL_16:
  v9 = -1;
LABEL_17:
  sub_494760(v2);
  return v9;
}
// 47DB68: using guessed type __int64 __fastcall nullsub_5(_QWORD, _QWORD, _QWORD);
// 522168: using guessed type __int64 qword_522168;
// 522170: using guessed type __int64 qword_522170;
// 522178: using guessed type __int64 qword_522178;
// 522180: using guessed type __int64 qword_522180;
