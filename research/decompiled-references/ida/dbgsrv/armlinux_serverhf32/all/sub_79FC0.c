/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79FC0
// Address: 0x00079FC0

//----- (00079FC0) --------------------------------------------------------
pthread_t __fastcall sub_79FC0(void *(*a1)(void *), void *a2)
{
  int v4; // r6
  pthread_t newthread; // [sp+4h] [bp-30h] BYREF
  pthread_attr_t attr; // [sp+8h] [bp-2Ch] BYREF

  if ( !dword_D5C0C )
    sub_79F7C();
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 0);
  v4 = pthread_create(&newthread, &attr, a1, a2);
  pthread_attr_destroy(&attr);
  if ( v4 )
    return 0;
  else
    return newthread;
}
// D5C0C: using guessed type int dword_D5C0C;
