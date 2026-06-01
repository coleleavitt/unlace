char *__fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned char>(
        _BYTE *a1,
        _BYTE *a2,
        char *a3)
{
  size_t n; // [rsp+28h] [rbp-8h]

  n = a2 - a1;
  if ( a2 != a1 )
    memmove(a3, a1, n);
  return &a3[n];
}

