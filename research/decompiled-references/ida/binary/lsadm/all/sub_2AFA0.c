bool __fastcall sub_2AFA0(pthread_t a1)
{
  return pthread_join(a1, nullptr) == 0;
}

