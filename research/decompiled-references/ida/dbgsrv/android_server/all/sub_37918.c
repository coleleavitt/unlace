/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37918
// Address: 0x0000000000037918

//----- (0000000000037918) ----------------------------------------------------
void sub_37918()
{
  if ( !qword_168E08 )
  {
    qword_168E08 = pthread_self();
    qword_168E10 = (__int64)qmutex_create();
  }
}
// 167DD0: using guessed type __int64[512];
// 168E08: using guessed type __int64 qword_168E08;
// 168E10: using guessed type __int64 qword_168E10;
