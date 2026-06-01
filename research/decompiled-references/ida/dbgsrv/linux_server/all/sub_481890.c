/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481890
// Address: 0x0000000000481890

//----- (0000000000481890) ----------------------------------------------------
bool __fastcall sub_481890(__int64 a1)
{
  pthread_mutex_t *v1; // rbp
  _QWORD *v3; // r12
  _QWORD *v4; // rdi
  __int64 v5; // rdx

  v1 = (pthread_mutex_t *)qword_4C94F0;
  sub_482EC0((pthread_mutex_t *)qword_4C94F0);
  v3 = qword_4C94F8;
  if ( qword_4C94F8 )
  {
    v4 = *(_QWORD **)qword_4C94F8;
    v5 = *(_QWORD *)qword_4C94F8 + 8LL * *((_QWORD *)qword_4C94F8 + 1);
    if ( *(_QWORD *)qword_4C94F8 != v5 )
    {
      while ( *v4 != a1 )
      {
        if ( (_QWORD *)v5 == ++v4 )
          return sub_482F10(v1);
      }
      if ( (_QWORD *)v5 != v4 )
      {
        memmove(v4, v4 + 1, v5 - (_QWORD)v4 - 8);
        --v3[1];
      }
    }
  }
  return sub_482F10(v1);
}
// 4C94F0: using guessed type __int64 qword_4C94F0;
