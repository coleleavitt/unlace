void *__fastcall unbind_event_handler_all(__int64 a1)
{
  __int64 *v1; // r12
  void *result; // rax
  __int64 *i; // rbp
  __int64 v5; // r13
  char *v6; // rdi
  char *v7; // rdx

  v1 = *(__int64 **)(a1 + 8);
  result = *(void **)(a1 + 16);
  for ( i = &v1[(_QWORD)result]; i != v1; ++v1 )
  {
    v5 = *v1;
    v6 = *(char **)(*v1 + 8);
    result = *(void **)(*v1 + 16);
    v7 = &v6[8 * (_QWORD)result];
    if ( v6 != v7 )
    {
      while ( *(_QWORD *)v6 != a1 )
      {
        v6 += 8;
        if ( v7 == v6 )
          goto LABEL_8;
      }
      if ( v7 != v6 )
      {
        result = memmove(v6, v6 + 8, v7 - v6 - 8);
        --*(_QWORD *)(v5 + 16);
      }
    }
LABEL_8:
    ;
  }
  return result;
}
