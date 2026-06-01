// attributes: thunk
int qthread_free(pthread_t th)
{
  return pthread_detach(th);
}

