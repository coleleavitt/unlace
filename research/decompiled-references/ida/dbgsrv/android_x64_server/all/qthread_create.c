/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_create
// Address: 0x00000000000C66E0

//----- (00000000000C66E0) ----------------------------------------------------
pthread_t __fastcall qthread_create(void *(*start_routine)(void *), void *arg)
{
  __int64 v2; // r12
  int v3; // ebp
  pthread_t newthread; // [rsp+8h] [rbp-70h] BYREF
  pthread_attr_t attr; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( !thread2 )
  {
    thread2 = pthread_self();
    mutex = qmutex_create();
  }
  pthread_attr_init(&attr);
  v2 = 0;
  pthread_attr_setdetachstate(&attr, 0);
  v3 = pthread_create(&newthread, &attr, start_routine, arg);
  pthread_attr_destroy(&attr);
  if ( !v3 )
    return newthread;
  return v2;
}
