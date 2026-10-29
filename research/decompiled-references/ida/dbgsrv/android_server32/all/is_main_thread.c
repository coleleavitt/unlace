/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_main_thread
// Address: 0x000805D4

//----- (000805D4) --------------------------------------------------------
bool is_main_thread()
{
  pthread_t v0; // r4
  int v1; // r5

  v0 = dword_E055C;
  if ( dword_E055C )
  {
    v1 = pthread_self();
  }
  else
  {
    v1 = pthread_self();
    dword_E055C = v1;
    dword_E0560 = (int)qmutex_create();
    v0 = dword_E055C;
  }
  return pthread_equal(v1, v0) != 0;
}
// E055C: using guessed type int dword_E055C;
// E0560: using guessed type int dword_E0560;
