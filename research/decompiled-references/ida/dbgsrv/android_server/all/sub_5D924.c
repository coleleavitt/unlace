/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D924
// Address: 0x000000000005D924

//----- (000000000005D924) ----------------------------------------------------
__int64 __fastcall sub_5D924(_QWORD *a1, __int64 a2)
{
  pthread_mutex_t *v4; // x19
  const char *v5; // x0
  char *v6; // x1
  FILE *v7; // x20
  __int64 v8; // x8
  _QWORD *v9; // x1
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 v12; // x8
  _QWORD *v13; // x0
  __int64 v15; // [xsp+8h] [xbp-38h] BYREF

  v4 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  if ( a1[2] )
  {
    v5 = (const char *)a1[1];
    if ( a1[6] )
    {
LABEL_3:
      v6 = (char *)a1[5];
      goto LABEL_6;
    }
  }
  else
  {
    v5 = &byte_F154B;
    if ( a1[6] )
      goto LABEL_3;
  }
  v6 = &byte_F154B;
LABEL_6:
  v7 = qfopen(v5, v6);
  if ( v7 )
  {
    v8 = qword_166A50;
    if ( !qword_166A50 )
    {
      v9 = (_QWORD *)qword_166A48;
      v15 = 0;
      if ( qword_166A48 > (unsigned __int64)&v15 || qword_166A48 + 8 * qword_166A58 <= (unsigned __int64)&v15 )
      {
        if ( qword_166A58 )
        {
          v11 = 0;
          v10 = 0;
        }
        else
        {
          v9 = qvector_reserve((pthread_mutex_t *)&qword_166A48, (void *)qword_166A48, 1u, 8u);
          v10 = qword_166A50;
          v11 = v15;
          qword_166A48 = (__int64)v9;
        }
      }
      else
      {
        if ( qword_166A58 )
        {
          v10 = 0;
        }
        else
        {
          v9 = qvector_reserve((pthread_mutex_t *)&qword_166A48, (void *)qword_166A48, 1u, 8u);
          v10 = qword_166A50;
          qword_166A48 = (__int64)v9;
        }
        v11 = 0;
      }
      v9[v10] = v11;
      v8 = ++qword_166A50;
    }
    *(_QWORD *)(a2 + 8) = v8;
    v12 = qword_166A50;
    if ( qword_166A58 >= (unsigned __int64)(qword_166A50 + 1) )
    {
      v13 = (_QWORD *)qword_166A48;
    }
    else
    {
      v13 = qvector_reserve((pthread_mutex_t *)&qword_166A48, (void *)qword_166A48, qword_166A50 + 1, 8u);
      v12 = qword_166A50;
      qword_166A48 = (__int64)v13;
    }
    v13[v12] = v7;
    ++qword_166A50;
  }
  qmutex_unlock(v4);
  return 0;
}
// F154B: using guessed type char byte_F154B;
// 166A48: using guessed type __int64 qword_166A48;
// 166A50: using guessed type __int64 qword_166A50;
// 166A58: using guessed type __int64 qword_166A58;
// 166AA8: using guessed type __int64 qword_166AA8;
