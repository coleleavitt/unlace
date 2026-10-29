/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60430
// Address: 0x0000000000060430

//----- (0000000000060430) ----------------------------------------------------
__int64 __fastcall sub_60430(_QWORD *a1, __int64 a2)
{
  pthread_mutex_t *v4; // r14
  const char *v5; // rsi
  const char *v6; // rdi
  FILE *v7; // rbx
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  char *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD v17[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v5 = s1;
  v6 = s1;
  if ( a1[2] )
    v6 = (const char *)a1[1];
  if ( a1[6] )
    v5 = (const char *)a1[5];
  v7 = qfopen(v6, (__int64)v5);
  if ( v7 )
  {
    v8 = *((_QWORD *)&xmmword_155780 + 1);
    if ( !*((_QWORD *)&xmmword_155780 + 1) )
    {
      v17[0] = 0;
      v9 = (char *)xmmword_155780;
      if ( (unsigned __int64)xmmword_155780 > (unsigned __int64)v17
        || (__int64)xmmword_155780 + 8 * qword_155790 <= (unsigned __int64)v17 )
      {
        if ( qword_155790 )
        {
          v11 = 0;
          v12 = 0;
        }
        else
        {
          v9 = (char *)qvector_reserve((__int64)&xmmword_155780, (char *)xmmword_155780, 1u, 8u);
          *(_QWORD *)&xmmword_155780 = v9;
          v12 = *((_QWORD *)&xmmword_155780 + 1);
          v11 = v17[0];
        }
        v13 = &v9[8 * v12];
      }
      else
      {
        if ( qword_155790 )
        {
          v10 = 0;
        }
        else
        {
          v9 = (char *)qvector_reserve((__int64)&xmmword_155780, (char *)xmmword_155780, 1u, 8u);
          *(_QWORD *)&xmmword_155780 = v9;
          v10 = *((_QWORD *)&xmmword_155780 + 1);
        }
        v13 = &v9[8 * v10];
        v11 = 0;
      }
      *(_QWORD *)v13 = v11;
      v8 = ++*((_QWORD *)&xmmword_155780 + 1);
    }
    *(_QWORD *)(a2 + 8) = v8;
    v14 = *((_QWORD *)&xmmword_155780 + 1);
    if ( qword_155790 >= (unsigned __int64)(*((_QWORD *)&xmmword_155780 + 1) + 1LL) )
    {
      v15 = (_QWORD *)xmmword_155780;
    }
    else
    {
      v15 = qvector_reserve(
              (__int64)&xmmword_155780,
              (char *)xmmword_155780,
              *((_QWORD *)&xmmword_155780 + 1) + 1LL,
              8u);
      *(_QWORD *)&xmmword_155780 = v15;
      v14 = *((_QWORD *)&xmmword_155780 + 1);
    }
    v15[v14] = v7;
    ++*((_QWORD *)&xmmword_155780 + 1);
  }
  qmutex_unlock(v4);
  return 0;
}
// 155780: using guessed type __int128 xmmword_155780;
// 155790: using guessed type __int64 qword_155790;
