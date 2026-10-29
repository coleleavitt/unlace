__int64 __fastcall std::move_backward<unsigned char *,unsigned char *>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = std::__miter_base<unsigned char *>(a2);
  v4 = std::__miter_base<unsigned char *>(a1);
  return std::__copy_move_backward_a2<true,unsigned char *,unsigned char *>(v4, v3, a3);
}

