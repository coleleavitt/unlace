/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003C154
// Address: 0x000000010003C154

//----- (000000010003C154) ----------------------------------------------------
void __noreturn sub_10003C154()
{
  pthread_mutex_t *v0; // x23

  qmutex_unlock(v0);
  JUMPOUT(0x10003C22CLL);
}
// 10003C160: control flows out of bounds to 10003C22C
// 10003C15C: variable 'v0' is possibly undefined
