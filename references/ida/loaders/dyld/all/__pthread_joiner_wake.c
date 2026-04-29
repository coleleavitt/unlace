__int64 __fastcall _pthread_joiner_wake(__int64 a1)
{
  __int64 v1; // x19
  __int64 result; // x0

  v1 = a1 + 52;
  do
  {
    result = __ulock_wake(16777218, v1, 0);
    if ( (_DWORD)result != 0 && (unsigned int)result < 0xFFFFFFFC || ((1 << (result + 4)) & 0x15) == 0 )
      _pthread_joiner_wake_cold_1();
  }
  while ( ((_DWORD)result == -2) == ((_DWORD)result == 0) );
  return result;
}
