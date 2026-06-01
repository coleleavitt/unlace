/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_495020
// Address: 0x0000000000495020

//----- (0000000000495020) ----------------------------------------------------
bool __fastcall sub_495020(const char *a1, const char *a2)
{
  _BOOL4 v2; // w19
  pthread_mutex_t *v5; // x21
  int v6; // w0

  v2 = 0;
  if ( a2 )
  {
    if ( !qword_524530 )
      sub_4944D8();
    v5 = (pthread_mutex_t *)qword_524528;
    sub_494720((pthread_mutex_t *)qword_524528);
    if ( *a2 )
      v6 = setenv(a1, a2, 1);
    else
      v6 = unsetenv(a1);
    v2 = v6 == 0;
    sub_494760(v5);
  }
  return v2;
}
// 524528: using guessed type __int64 qword_524528;
// 524530: using guessed type __int64 qword_524530;
