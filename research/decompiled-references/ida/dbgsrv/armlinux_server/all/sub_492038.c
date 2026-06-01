/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492038
// Address: 0x0000000000492038

//----- (0000000000492038) ----------------------------------------------------
bool __fastcall sub_492038(__int64 a1)
{
  pthread_mutex_t *v2; // x21
  __int64 v3; // x20
  _QWORD *v4; // x0
  __int64 v5; // x1

  v2 = (pthread_mutex_t *)qword_524508;
  sub_494720((pthread_mutex_t *)qword_524508);
  v3 = qword_524500;
  if ( qword_524500 )
  {
    v4 = *(_QWORD **)qword_524500;
    v5 = *(_QWORD *)qword_524500 + 8LL * *(_QWORD *)(qword_524500 + 8);
    if ( *(_QWORD *)qword_524500 != v5 )
    {
      while ( *v4 != a1 )
      {
        if ( (_QWORD *)v5 == ++v4 )
          return sub_494760(v2);
      }
      memmove(v4, v4 + 1, ((v5 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8LL) - 8);
      --*(_QWORD *)(v3 + 8);
    }
  }
  return sub_494760(v2);
}
// 523500: using guessed type __int64 qword_523500[512];
// 524500: using guessed type __int64 qword_524500;
// 524508: using guessed type __int64 qword_524508;
