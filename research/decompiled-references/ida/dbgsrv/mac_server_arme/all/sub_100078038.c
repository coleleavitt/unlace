/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100078038
// Address: 0x0000000100078038

//----- (0000000100078038) ----------------------------------------------------
void sub_100078038()
{
  if ( !qword_1000A63B8 )
  {
    qword_1000A63B8 = (__int64)pthread_self();
    qword_1000A63C0 = (__int64)qmutex_create();
  }
}
// 1000A5F98: using guessed type __int64 qword_1000A5F98[128];
// 1000A63B8: using guessed type __int64 qword_1000A63B8;
// 1000A63C0: using guessed type __int64 qword_1000A63C0;
