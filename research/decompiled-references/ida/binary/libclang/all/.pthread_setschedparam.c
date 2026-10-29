// attributes: thunk
int pthread_setschedparam(pthread_t target_thread, int policy, const struct sched_param *param)
{
  return pthread_setschedparam(target_thread, policy, param);
}

