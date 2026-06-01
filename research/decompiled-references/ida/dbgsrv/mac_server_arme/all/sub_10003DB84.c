/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003DB84
// Address: 0x000000010003DB84

//----- (000000010003DB84) ----------------------------------------------------
void __noreturn sub_10003DB84()
{
  pthread_mutex_t *v0; // x23

  qmutex_unlock(v0);
  JUMPOUT(0x10003DC5CLL);
}
// 10003DB90: control flows out of bounds to 10003DC5C
// 10003DB8C: variable 'v0' is possibly undefined
