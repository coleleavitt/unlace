char *__fastcall std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(
        const void *a1,
        __int64 a2,
        char *a3)
{
  __int64 v5; // [rsp+28h] [rbp-8h]

  v5 = (a2 - (__int64)a1) >> 1;
  if ( v5 )
    memmove(a3, a1, 2 * v5);
  return &a3[2 * v5];
}

