/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_create
// Address: 0x000B47A0

//----- (000B47A0) --------------------------------------------------------
int __cdecl qthread_create(void *(*start_routine)(void *), void *arg)
{
  int v2; // esi
  int result; // eax
  pthread_attr_t attr; // [esp+8h] [ebp-34h] BYREF

  *(&attr.__align + 8) = __readgsdword(0x14u);
  if ( !dword_13E358 )
  {
    dword_13E358 = pthread_self();
    dword_13E35C = (int)qmutex_create();
  }
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 0);
  v2 = pthread_create((pthread_t *)&attr.__align + 7, &attr, start_routine, arg);
  pthread_attr_destroy(&attr);
  result = 0;
  if ( !v2 )
    return *(&attr.__align + 7);
  return result;
}
// 13E358: using guessed type int dword_13E358;
// 13E35C: using guessed type int dword_13E35C;
