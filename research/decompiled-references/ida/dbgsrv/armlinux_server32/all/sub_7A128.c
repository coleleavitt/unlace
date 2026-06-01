/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A128
// Address: 0x0007A128

//----- (0007A128) --------------------------------------------------------
pthread_t __fastcall sub_7A128(void *(*a1)(void *), void *a2)
{
  int v4; // r6
  pthread_t newthread; // [sp+4h] [bp-30h] BYREF
  pthread_attr_t attr; // [sp+8h] [bp-2Ch] BYREF

  if ( !dword_D6C2C )
    sub_7A0E4();
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 0);
  v4 = pthread_create(&newthread, &attr, a1, a2);
  pthread_attr_destroy(&attr);
  if ( v4 )
    return 0;
  else
    return newthread;
}
// D6C2C: using guessed type int dword_D6C2C;
