void *__fastcall sub_1052B0(pthread_mutex_t *mutex)
{
  size_t align; // rbx
  unsigned int nusers; // ecx
  __int64 v3; // rcx
  __int64 v4; // rcx
  size_t v5; // r13
  void *v6; // r12
  struct __pthread_internal_list *prev; // rax
  __int64 (__fastcall *v8)(struct __pthread_internal_list *, size_t); // rax

  align = mutex[1].__align;
  pthread_mutex_lock(mutex);
  nusers = mutex[1].__nusers;
  if ( nusers )
  {
    v3 = nusers - 1;
    mutex[1].__nusers = v3;
    v4 = mutex[2].__align + 16 * v3;
    v5 = *(_QWORD *)(v4 + 8);
    v6 = *(void **)v4;
    *(_QWORD *)(v4 + 8) = 0;
    *(_QWORD *)v4 = 0;
    if ( v5 >> 3 <= align && align <= v5 )
    {
      pthread_mutex_unlock(mutex);
      return v6;
    }
    if ( v6 )
    {
      prev = mutex[1].__list.__prev;
      if ( prev )
        ((void (__fastcall *)(struct __pthread_internal_list *, void *))prev)(mutex[1].__list.__next, v6);
      else
        free(v6);
    }
  }
  pthread_mutex_unlock(mutex);
  v8 = (__int64 (__fastcall *)(struct __pthread_internal_list *, size_t))*(&mutex[1].__align + 2);
  if ( v8 )
    return (void *)v8(mutex[1].__list.__next, align);
  else
    return malloc(align);
}

