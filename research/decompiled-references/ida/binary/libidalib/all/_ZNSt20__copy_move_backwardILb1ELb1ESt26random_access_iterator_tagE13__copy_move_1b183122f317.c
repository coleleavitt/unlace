__int64 __fastcall std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<unsigned short>(
        const void *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // [rsp+28h] [rbp-8h]

  v5 = (a2 - (__int64)a1) >> 1;
  if ( v5 )
    memmove((void *)(a3 - 2 * v5), a1, 2 * v5);
  return -2 * v5 + a3;
}

