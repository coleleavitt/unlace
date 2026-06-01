size_t __fastcall std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<unsigned char>(
        _BYTE *a1,
        _BYTE *a2,
        __int64 a3)
{
  size_t n; // [rsp+28h] [rbp-8h]

  n = a2 - a1;
  if ( a2 != a1 )
    memmove((void *)(a3 - n), a1, n);
  return a3 - n;
}

