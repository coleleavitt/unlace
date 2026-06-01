/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BD940
// Address: 0x000BD940

//----- (000BD940) --------------------------------------------------------
int __cdecl sub_BD940(int *ptr)
{
  int result; // eax

  sub_BEEB0(ptr);
  result = pthread_setspecific(dword_13E3AC, nullptr);
  if ( result )
  {
    sub_C10D0("cannot zero out thread value for __cxa_get_globals()");
    return _cxa_guard_acquire(ptr);
  }
  return result;
}
// 13E3AC: using guessed type int dword_13E3AC;
