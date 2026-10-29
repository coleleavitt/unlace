void __fastcall sub_104FA0(pthread_mutex_t *mutex, void *ptr, __int64 a3)
{
  __int64 nusers; // rax
  struct __pthread_internal_list *prev; // rax
  struct __pthread_internal_list *next; // rdi
  unsigned int v7; // edx
  _QWORD *v8; // rax

  if ( ptr )
  {
    pthread_mutex_lock(mutex);
    nusers = mutex[1].__nusers;
    if ( (unsigned int)nusers < mutex[1].__owner )
    {
      v7 = nusers + 1;
      v8 = (_QWORD *)(mutex[2].__align + 16 * nusers);
      mutex[1].__nusers = v7;
      *v8 = ptr;
      v8[1] = a3;
      pthread_mutex_unlock(mutex);
    }
    else
    {
      pthread_mutex_unlock(mutex);
      prev = mutex[1].__list.__prev;
      next = mutex[1].__list.__next;
      if ( prev )
        ((void (__fastcall *)(struct __pthread_internal_list *, void *))prev)(next, ptr);
      else
        free(ptr);
    }
  }
}

