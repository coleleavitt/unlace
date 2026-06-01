/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40BE40
// Address: 0x000000000040BE40

//----- (000000000040BE40) ----------------------------------------------------
pthread_mutex_t *sub_40BE40()
{
  pthread_mutex_t *result; // rax

  if ( !qword_4C9510 )
  {
    qword_4C9510 = j__pthread_self();
    result = sub_482C40();
    qword_4C9518 = (__int64)result;
  }
  return result;
}
// 4C9510: using guessed type __int64 qword_4C9510;
// 4C9518: using guessed type __int64 qword_4C9518;
