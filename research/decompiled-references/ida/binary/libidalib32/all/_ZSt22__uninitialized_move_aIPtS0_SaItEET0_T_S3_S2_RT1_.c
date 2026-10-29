__int64 __fastcall std::__uninitialized_move_a<unsigned short *,unsigned short *,std::allocator<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 move; // rbx
  __int64 v5; // rax

  move = std::make_move_iterator<unsigned short *>(a2);
  v5 = std::make_move_iterator<unsigned short *>(a1);
  return std::__uninitialized_copy_a<std::move_iterator<unsigned short *>,unsigned short *,unsigned short>(
           v5,
           move,
           a3,
           a4);
}

