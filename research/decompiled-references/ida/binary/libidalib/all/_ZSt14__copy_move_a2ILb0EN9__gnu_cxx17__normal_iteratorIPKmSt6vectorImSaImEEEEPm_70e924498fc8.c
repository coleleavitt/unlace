__int64 __fastcall std::__copy_move_a2<false,__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>,unsigned long *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax

  v3 = std::__niter_base<unsigned long *>(a3);
  v4 = std::__niter_base<unsigned long const*,std::vector<unsigned long>>(a2);
  v5 = std::__niter_base<unsigned long const*,std::vector<unsigned long>>(a1);
  return std::__copy_move_a<false,unsigned long const*,unsigned long *>(v5, v4, v3);
}

