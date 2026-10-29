/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_create
// Address: 0x0000000100071080

//----- (0000000100071080) ----------------------------------------------------
pthread_t __fastcall qthread_create(void *(__cdecl *a1)(void *), void *a2)
{
  int v4; // w19
  pthread_t v6; // [xsp+0h] [xbp-70h] BYREF
  pthread_attr_t v7; // [xsp+8h] [xbp-68h] BYREF

  if ( !qword_10009E3B8 )
  {
    qword_10009E3B8 = (__int64)pthread_self();
    qword_10009E3C0 = (__int64)qmutex_create();
  }
  pthread_attr_init(&v7);
  pthread_attr_setdetachstate(&v7, 1);
  v4 = pthread_create(&v6, &v7, a1, a2);
  pthread_attr_destroy(&v7);
  if ( v4 )
    return nullptr;
  else
    return v6;
}
// 10009DF98: using guessed type __int64 qword_10009DF98[128];
// 10009E3B8: using guessed type __int64 qword_10009E3B8;
// 10009E3C0: using guessed type __int64 qword_10009E3C0;
