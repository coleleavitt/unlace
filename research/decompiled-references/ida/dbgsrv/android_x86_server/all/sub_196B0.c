/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_196B0
// Address: 0x000196B0

//----- (000196B0) --------------------------------------------------------
void sub_196B0()
{
  if ( !dword_13E358 )
  {
    dword_13E358 = pthread_self();
    dword_13E35C = (int)qmutex_create();
  }
}
// 13E358: using guessed type int dword_13E358;
// 13E35C: using guessed type int dword_13E35C;
