/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: install_extlang
// Address: 0x0000000100031AD0

//----- (0000000100031AD0) ----------------------------------------------------
__int64 __fastcall install_extlang(__int64 a1)
{
  __int64 v1; // r15
  pthread_mutex_t *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int128 v5; // rax

  v1 = -1;
  if ( a1 && !*(_DWORD *)(a1 + 12) )
  {
    v2 = (pthread_mutex_t *)qword_1000AD0E8;
    qmutex_lock((pthread_mutex_t *)qword_1000AD0E8);
    v3 = *((_QWORD *)&xmmword_1000AE290 + 1);
    if ( SDWORD2(xmmword_1000AE290) <= 0 )
    {
LABEL_7:
      if ( SDWORD2(xmmword_1000AE290) <= 0 )
      {
        v1 = 0;
      }
      else
      {
        v1 = 0;
        while ( *(_QWORD *)(xmmword_1000AE290 + 8 * v1) )
        {
          if ( SDWORD2(xmmword_1000AE290) == ++v1 )
          {
            v1 = SDWORD2(xmmword_1000AE290);
            goto LABEL_15;
          }
        }
      }
      if ( v1 == SDWORD2(xmmword_1000AE290) )
      {
LABEL_15:
        v5 = xmmword_1000AE290 + __PAIR128__(1, 0);
        if ( qword_1000AE2A0 < (unsigned __int64)(*((_QWORD *)&xmmword_1000AE290 + 1) + 1LL) )
        {
          *(_QWORD *)&v5 = qvector_reserve(
                             (__int64)&xmmword_1000AE290,
                             (void *)xmmword_1000AE290,
                             *((unsigned __int64 *)&v5 + 1),
                             8u);
          *(_QWORD *)&xmmword_1000AE290 = v5;
          v3 = *((_QWORD *)&xmmword_1000AE290 + 1);
          *((_QWORD *)&v5 + 1) = *((_QWORD *)&xmmword_1000AE290 + 1) + 1LL;
        }
        *(_QWORD *)&v5 = v5 + 8 * v3;
        *((_QWORD *)&xmmword_1000AE290 + 1) = *((_QWORD *)&v5 + 1);
      }
      else
      {
        *(_QWORD *)&v5 = xmmword_1000AE290 + 8 * v1;
      }
      *(_QWORD *)v5 = a1;
      sub_100070A90();
    }
    else
    {
      v4 = 0;
      while ( *(_QWORD *)(xmmword_1000AE290 + 8 * v4) != a1 )
      {
        if ( (DWORD2(xmmword_1000AE290) & 0x7FFFFFFF) == ++v4 )
          goto LABEL_7;
      }
      v1 = -1;
    }
    qmutex_unlock(v2);
  }
  return v1;
}
// 1000AD0E8: using guessed type __int64 qword_1000AD0E8;
// 1000AE290: using guessed type __int128 xmmword_1000AE290;
// 1000AE2A0: using guessed type __int64 qword_1000AE2A0;
