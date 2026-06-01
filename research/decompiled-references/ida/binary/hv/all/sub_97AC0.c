bool __fastcall sub_97AC0(pthread_t a1)
{
  return pthread_join(a1, nullptr) == 0;
}

