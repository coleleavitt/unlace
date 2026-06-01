__int64 __fastcall std::__copy_move_backward_a2<true,unsigned short *,unsigned short *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax

  v3 = std::__niter_base<unsigned short *>(a3);
  v4 = std::__niter_base<unsigned short *>(a2);
  v5 = std::__niter_base<unsigned short *>(a1);
  return std::__copy_move_backward_a<true,unsigned short *,unsigned short *>(v5, v4, v3);
}

