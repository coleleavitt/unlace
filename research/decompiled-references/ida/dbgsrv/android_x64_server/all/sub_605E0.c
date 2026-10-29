/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_605E0
// Address: 0x00000000000605E0

//----- (00000000000605E0) ----------------------------------------------------
__int64 __fastcall sub_605E0(__int64 a1)
{
  pthread_mutex_t *v1; // r15
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx

  v1 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 < *((_QWORD *)&xmmword_155780 + 1) )
    {
      qfclose(*(FILE **)(xmmword_155780 + 8 * v2));
      *(_QWORD *)(xmmword_155780 + 8 * v2) = 0;
      if ( *((_QWORD *)&xmmword_155780 + 1) )
      {
        v3 = *((_QWORD *)&xmmword_155780 + 1) - 1LL;
        do
        {
          if ( *(_QWORD *)(xmmword_155780 + 8 * v3) )
            break;
          *((_QWORD *)&xmmword_155780 + 1) = v3--;
        }
        while ( v3 != -1 );
      }
    }
  }
  qmutex_unlock(v1);
  return 0;
}
// 155780: using guessed type __int128 xmmword_155780;
