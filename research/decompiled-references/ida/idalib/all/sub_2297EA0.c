int __fastcall sub_2297EA0(pthread_t a1)
{
  int result; // eax

  result = pthread_join(a1, nullptr);
  if ( result )
    sub_2297950("pthread_join failed", result);
  return result;
}
