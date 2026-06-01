__int64 __fastcall std::copy<__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>,unsigned long *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = std::__miter_base<__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>>(a2);
  v4 = std::__miter_base<__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>>(a1);
  return std::__copy_move_a2<false,__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>,unsigned long *>(
           v4,
           v3,
           a3);
}

