/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D110
// Address: 0x000000000006D110

//----- (000000000006D110) ----------------------------------------------------
__int64 __fastcall sub_6D110(__int64 a1, const char *a2)
{
  pthread_mutex_t *v2; // r14
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r15
  const char *v6; // rdi

  if ( !a2 )
    return 0;
  v2 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v3 = 56LL * *(_QWORD *)(a1 + 96);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 88) + 24LL;
    v5 = 0;
    while ( 1 )
    {
      v6 = s1;
      if ( *(_QWORD *)(v4 - 16) )
        v6 = *(const char **)(v4 - 24);
      if ( !strcmp(v6, a2) )
        break;
      v4 += 56;
      v3 -= 56;
      if ( !v3 )
        goto LABEL_12;
    }
    v5 = v4;
  }
  else
  {
    v5 = 0;
  }
LABEL_12:
  qmutex_unlock(v2);
  return v5;
}
