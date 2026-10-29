void __fastcall sub_942AE0(pthread_mutex_t *ptr)
{
  char *align; // rcx
  int owner; // eax
  void (*prev)(void); // rdx
  struct __pthread_internal_list *next; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rax
  struct __pthread_internal_list *v8; // rax

  if ( !ptr )
    return;
  align = (char *)ptr[2].__align;
  if ( !align )
    goto LABEL_13;
  owner = ptr[1].__owner;
  prev = (void (*)(void))ptr[1].__list.__prev;
  next = ptr[1].__list.__next;
  if ( !owner )
  {
LABEL_11:
    if ( prev )
      ((void (__fastcall *)(struct __pthread_internal_list *, char *))prev)(next, align);
    else
      free(align);
    goto LABEL_13;
  }
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = 16LL * v6;
      if ( !*(_QWORD *)&align[v7] )
        goto LABEL_6;
      if ( !prev )
        break;
      prev();
      align = (char *)ptr[2].__align;
      prev = (void (*)(void))ptr[1].__list.__prev;
      next = ptr[1].__list.__next;
LABEL_6:
      if ( ptr[1].__owner <= ++v6 )
        goto LABEL_10;
    }
    ++v6;
    free(*(void **)&align[v7]);
    align = (char *)ptr[2].__align;
    prev = (void (*)(void))ptr[1].__list.__prev;
    next = ptr[1].__list.__next;
  }
  while ( ptr[1].__owner > v6 );
LABEL_10:
  if ( align )
    goto LABEL_11;
LABEL_13:
  pthread_mutex_destroy(ptr);
  v8 = ptr[1].__list.__prev;
  if ( v8 )
    ((void (__fastcall *)(struct __pthread_internal_list *, pthread_mutex_t *))v8)(ptr[1].__list.__next, ptr);
  else
    free(ptr);
}

