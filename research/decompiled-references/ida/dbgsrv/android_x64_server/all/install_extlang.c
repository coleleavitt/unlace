/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: install_extlang
// Address: 0x000000000006A610

//----- (000000000006A610) ----------------------------------------------------
__int64 __fastcall install_extlang(__int64 a1)
{
  __int64 v1; // rbx
  pthread_mutex_t *v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  char *v6; // rax
  char *v7; // rax

  v1 = -1;
  if ( a1 && !*(_DWORD *)(a1 + 12) )
  {
    v2 = (pthread_mutex_t *)qword_1557C0;
    qmutex_lock((pthread_mutex_t *)qword_1557C0);
    v3 = *((_QWORD *)&xmmword_1557C8 + 1);
    if ( SDWORD2(xmmword_1557C8) > 0 )
    {
      v4 = 0;
      while ( *(_QWORD *)(xmmword_1557C8 + 8 * v4) != a1 )
      {
        if ( (int)++v4 >= SDWORD2(xmmword_1557C8) )
          goto LABEL_7;
      }
      v1 = -1;
      goto LABEL_20;
    }
LABEL_7:
    if ( (__int64)(*((_QWORD *)&xmmword_1557C8 + 1) << 32) <= 0 )
    {
      v1 = 0;
      if ( !DWORD2(xmmword_1557C8) )
      {
LABEL_12:
        v5 = *((_QWORD *)&xmmword_1557C8 + 1) + 1LL;
        if ( qword_1557D8 >= (unsigned __int64)(*((_QWORD *)&xmmword_1557C8 + 1) + 1LL) )
        {
          v6 = (char *)xmmword_1557C8;
        }
        else
        {
          v6 = (char *)qvector_reserve((__int64)&xmmword_1557C8, (char *)xmmword_1557C8, v5, 8u);
          *(_QWORD *)&xmmword_1557C8 = v6;
          v3 = *((_QWORD *)&xmmword_1557C8 + 1);
          v5 = *((_QWORD *)&xmmword_1557C8 + 1) + 1LL;
        }
        v7 = &v6[8 * v3];
        *((_QWORD *)&xmmword_1557C8 + 1) = v5;
        goto LABEL_19;
      }
    }
    else
    {
      v1 = 0;
      do
      {
        if ( !*(_QWORD *)(xmmword_1557C8 + 8 * v1) )
          break;
        ++v1;
      }
      while ( v1 < SDWORD2(xmmword_1557C8) );
      if ( v1 == SDWORD2(xmmword_1557C8) )
        goto LABEL_12;
    }
    v7 = (char *)(xmmword_1557C8 + 8 * v1);
LABEL_19:
    *(_QWORD *)v7 = a1;
    nullsub_21(0, a1, (unsigned int)v1);
LABEL_20:
    qmutex_unlock(v2);
  }
  return v1;
}
// AF4A0: using guessed type __int64 __fastcall nullsub_21(_QWORD, _QWORD, _QWORD);
// 1557C0: using guessed type __int64 qword_1557C0;
// 1557C8: using guessed type __int128 xmmword_1557C8;
// 1557D8: using guessed type __int64 qword_1557D8;
