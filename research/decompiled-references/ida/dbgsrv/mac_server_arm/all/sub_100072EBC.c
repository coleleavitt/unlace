/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100072EBC
// Address: 0x0000000100072EBC

//----- (0000000100072EBC) ----------------------------------------------------
void sub_100072EBC()
{
  if ( !qword_10009E3B8 )
  {
    qword_10009E3B8 = (__int64)pthread_self();
    qword_10009E3C0 = (__int64)qmutex_create();
  }
}
// 10009DF98: using guessed type __int64 qword_10009DF98[128];
// 10009E3B8: using guessed type __int64 qword_10009E3B8;
// 10009E3C0: using guessed type __int64 qword_10009E3C0;
