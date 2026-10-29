/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_create
// Address: 0x000000010007E740

//----- (000000010007E740) ----------------------------------------------------
pthread_t __fastcall qthread_create(void *(__cdecl *a1)(void *), void *a2)
{
  int v2; // ebx
  pthread_t v4; // [rsp+8h] [rbp-68h] BYREF
  pthread_attr_t v5; // [rsp+10h] [rbp-60h] BYREF

  if ( !qword_1000AED00 )
  {
    qword_1000AED00 = pthread_self();
    qword_1000AED08 = qmutex_create();
  }
  pthread_attr_init(&v5);
  pthread_attr_setdetachstate(&v5, 1);
  v2 = pthread_create(&v4, &v5, a1, a2);
  pthread_attr_destroy(&v5);
  if ( v2 )
    return nullptr;
  else
    return v4;
}
