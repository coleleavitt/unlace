int __fastcall sub_B635E0(pthread_t th, void **thread_return, void *(*a3)(void *), void *a4)
{
  pthread_create((pthread_t *)th, (const pthread_attr_t *)thread_return, a3, a4);
  return pthread_join(th, thread_return);
}

