__int64 __fastcall std::allocator_traits<std::allocator<unsigned short>>::construct<unsigned short,unsigned short const&>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = std::forward<unsigned short const&>(a3);
  return __gnu_cxx::new_allocator<unsigned short>::construct<unsigned short,unsigned short const&>(a1, a2, v3);
}

