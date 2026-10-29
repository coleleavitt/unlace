// Alternative name is '_ZNSt6vectorImSaImEEC2ERKS1_'
__int64 *__fastcall std::vector<unsigned long>::vector(__int64 *a1, __int64 a2)
{
  __int64 Tp_allocator; // rax
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  _BYTE v10[33]; // [rsp+1Fh] [rbp-21h] BYREF

  Tp_allocator = std::_Vector_base<unsigned long>::_M_get_Tp_allocator(a2);
  __gnu_cxx::__alloc_traits<std::allocator<unsigned long>>::_S_select_on_copy(v10, Tp_allocator);
  v3 = std::vector<unsigned long>::size(a2);
  std::_Vector_base<unsigned long>::_Vector_base(a1, v3, v10);
  std::allocator<unsigned long>::~allocator(v10);
  v4 = std::_Vector_base<unsigned long>::_M_get_Tp_allocator(a1);
  v5 = *a1;
  v6 = std::vector<unsigned long>::end(a2);
  v7 = std::vector<unsigned long>::begin(a2);
  v8 = std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>,unsigned long *,unsigned long>(
         v7,
         v6,
         v5,
         v4);
  a1[1] = v8;
  return a1;
}

