/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025830
// Address: 0x0000000100025830

//----- (0000000100025830) ----------------------------------------------------
__int64 __fastcall sub_100025830(__int64 a1)
{
  pthread_mutex_t *v1; // rbx
  unsigned __int64 v2; // r14
  __int64 v3; // rax

  v1 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 < *((_QWORD *)&xmmword_1000AE250 + 1) )
    {
      qfclose(*(FILE **)(xmmword_1000AE250 + 8 * v2));
      *(_QWORD *)(xmmword_1000AE250 + 8 * v2) = 0;
      if ( *((_QWORD *)&xmmword_1000AE250 + 1) )
      {
        v3 = *((_QWORD *)&xmmword_1000AE250 + 1) - 1LL;
        do
        {
          if ( *(_QWORD *)(xmmword_1000AE250 + 8 * v3) )
            break;
          *((_QWORD *)&xmmword_1000AE250 + 1) = v3;
        }
        while ( v3-- != 0 );
      }
    }
  }
  qmutex_unlock(v1);
  return 0;
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE250: using guessed type __int128 xmmword_1000AE250;
