/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025650
// Address: 0x0000000100025650

//----- (0000000100025650) ----------------------------------------------------
__int64 __fastcall sub_100025650(_QWORD *a1, __int64 a2)
{
  pthread_mutex_t *v4; // rbx
  const char *v5; // rsi
  const char *v6; // rdi
  FILE *v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int128 v13; // rax
  __int64 v15; // [rsp+8h] [rbp-28h] BYREF

  v4 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v5 = _s1;
  v6 = _s1;
  if ( a1[2] )
    v6 = (const char *)a1[1];
  if ( a1[6] )
    v5 = (const char *)a1[5];
  v7 = qfopen(v6, (__int64)v5);
  if ( v7 )
  {
    v8 = *((_QWORD *)&xmmword_1000AE250 + 1);
    if ( !*((_QWORD *)&xmmword_1000AE250 + 1) )
    {
      v9 = (_QWORD *)xmmword_1000AE250;
      v15 = 0;
      if ( (unsigned __int64)xmmword_1000AE250 <= (unsigned __int64)&v15
        && (__int64)xmmword_1000AE250 + 8 * qword_1000AE260 > (unsigned __int64)&v15 )
      {
        if ( qword_1000AE260 )
        {
          *(_QWORD *)xmmword_1000AE250 = 0;
        }
        else
        {
          *(_QWORD *)&xmmword_1000AE250 = qvector_reserve(
                                            (__int64)&xmmword_1000AE250,
                                            (void *)xmmword_1000AE250,
                                            1u,
                                            8u);
          *(_QWORD *)(xmmword_1000AE250 + 8LL * *((_QWORD *)&xmmword_1000AE250 + 1)) = 0;
        }
      }
      else
      {
        v10 = 0;
        if ( qword_1000AE260 )
        {
          v11 = 0;
        }
        else
        {
          v9 = qvector_reserve((__int64)&xmmword_1000AE250, (void *)xmmword_1000AE250, 1u, 8u);
          *(_QWORD *)&xmmword_1000AE250 = v9;
          v11 = *((_QWORD *)&xmmword_1000AE250 + 1);
          v10 = v15;
        }
        v9[v11] = v10;
      }
      v8 = ++*((_QWORD *)&xmmword_1000AE250 + 1);
    }
    *(_QWORD *)(a2 + 8) = v8;
    v12 = *((_QWORD *)&xmmword_1000AE250 + 1);
    v13 = xmmword_1000AE250 + __PAIR128__(1, 0);
    if ( qword_1000AE260 < (unsigned __int64)(*((_QWORD *)&xmmword_1000AE250 + 1) + 1LL) )
    {
      *(_QWORD *)&v13 = qvector_reserve(
                          (__int64)&xmmword_1000AE250,
                          (void *)xmmword_1000AE250,
                          *((unsigned __int64 *)&v13 + 1),
                          8u);
      *(_QWORD *)&xmmword_1000AE250 = v13;
      v12 = *((_QWORD *)&xmmword_1000AE250 + 1);
    }
    *(_QWORD *)(v13 + 8 * v12) = v7;
    ++*((_QWORD *)&xmmword_1000AE250 + 1);
  }
  qmutex_unlock(v4);
  return 0;
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE250: using guessed type __int128 xmmword_1000AE250;
// 1000AE260: using guessed type __int64 qword_1000AE260;
