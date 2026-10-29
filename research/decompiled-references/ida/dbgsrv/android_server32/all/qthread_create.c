/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_create
// Address: 0x00080E40

//----- (00080E40) --------------------------------------------------------
int __fastcall qthread_create(void *(*a1)(void *), void *a2)
{
  int v3; // r6
  int v4; // r4
  pthread_attr_t attr; // [sp+4h] [bp-20h] BYREF

  if ( !dword_E055C )
  {
    dword_E055C = pthread_self();
    dword_E0560 = (int)qmutex_create();
  }
  pthread_attr_init(&attr);
  v3 = 0;
  pthread_attr_setdetachstate(&attr, 0);
  v4 = pthread_create((pthread_t *)&attr.__align + 6, &attr, a1, a2);
  pthread_attr_destroy(&attr);
  if ( !v4 )
    return *(&attr.__align + 6);
  return v3;
}
// E055C: using guessed type int dword_E055C;
// E0560: using guessed type int dword_E0560;
