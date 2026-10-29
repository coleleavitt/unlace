void __fastcall sub_1054E0(pthread_mutex_t *ptr)
{
  struct __pthread_internal_list *next; // rsi
  int v3; // ebx
  __int64 v4; // rax
  void (__fastcall *v5)(struct __pthread_internal_list *, pthread_mutex_t *); // rax
  struct __pthread_internal_list *prev; // rdi

  if ( ptr )
  {
    pthread_mutex_destroy(ptr);
    next = ptr[1].__list.__next;
    if ( next )
    {
      if ( ptr[1].__lock <= 0 )
      {
        v5 = (void (__fastcall *)(struct __pthread_internal_list *, pthread_mutex_t *))*(&ptr[1].__align + 2);
        prev = ptr[1].__list.__prev;
      }
      else
      {
        v3 = 0;
        do
        {
          v4 = v3++;
          sub_AF0B0(*((_QWORD **)&next->__prev + v4));
          next = ptr[1].__list.__next;
        }
        while ( ptr[1].__lock > v3 );
        v5 = (void (__fastcall *)(struct __pthread_internal_list *, pthread_mutex_t *))*(&ptr[1].__align + 2);
        prev = ptr[1].__list.__prev;
        if ( !next )
        {
LABEL_9:
          if ( v5 )
          {
LABEL_10:
            v5(prev, ptr);
            return;
          }
          goto LABEL_13;
        }
      }
      if ( v5 )
      {
        ((void (__fastcall *)(struct __pthread_internal_list *))v5)(prev);
        v5 = (void (__fastcall *)(struct __pthread_internal_list *, pthread_mutex_t *))*(&ptr[1].__align + 2);
        prev = ptr[1].__list.__prev;
        goto LABEL_9;
      }
      free(next);
    }
    v5 = (void (__fastcall *)(struct __pthread_internal_list *, pthread_mutex_t *))*(&ptr[1].__align + 2);
    prev = ptr[1].__list.__prev;
    if ( v5 )
      goto LABEL_10;
LABEL_13:
    free(ptr);
  }
}

