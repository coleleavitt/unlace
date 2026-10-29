/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_main_thread
// Address: 0x000B3A80

//----- (000B3A80) --------------------------------------------------------
bool is_main_thread()
{
  pthread_t v0; // edi
  int v1; // esi

  v0 = dword_13E358;
  if ( dword_13E358 )
  {
    v1 = pthread_self();
  }
  else
  {
    v1 = pthread_self();
    dword_13E358 = v1;
    dword_13E35C = (int)qmutex_create();
    v0 = dword_13E358;
  }
  return pthread_equal(v1, v0) != 0;
}
// 13E358: using guessed type int dword_13E358;
// 13E35C: using guessed type int dword_13E35C;
