/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_create
// Address: 0x00000000000C19FC

//----- (00000000000C19FC) ----------------------------------------------------
pthread_t __fastcall qthread_create(void *(*a1)(void *), void *a2)
{
  int v4; // w19
  pthread_t newthread; // [xsp+8h] [xbp-78h] BYREF
  pthread_attr_t attr; // [xsp+10h] [xbp-70h] BYREF
  __int64 v8; // [xsp+48h] [xbp-38h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !qword_168E08 )
  {
    qword_168E08 = pthread_self();
    qword_168E10 = (__int64)qmutex_create();
  }
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 0);
  v4 = pthread_create(&newthread, &attr, a1, a2);
  pthread_attr_destroy(&attr);
  if ( v4 )
    return 0;
  else
    return newthread;
}
// 167DD0: using guessed type __int64[512];
// 168E08: using guessed type __int64 qword_168E08;
// 168E10: using guessed type __int64 qword_168E10;
