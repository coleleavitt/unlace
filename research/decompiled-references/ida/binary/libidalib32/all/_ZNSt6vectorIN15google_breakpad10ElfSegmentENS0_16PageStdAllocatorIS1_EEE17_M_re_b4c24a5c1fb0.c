_QWORD *__fastcall std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_realloc_insert<google_breakpad::ElfSegment const&>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 Tp_allocator; // rbx
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *result; // rax
  __int64 v12; // [rsp+10h] [rbp-50h] BYREF
  _QWORD *v13; // [rsp+18h] [rbp-48h]
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]

  v13 = a1;
  v12 = a2;
  v17 = std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_check_len(
          a1,
          1,
          "vector::_M_realloc_insert");
  v14 = std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::begin(a1);
  v16 = __gnu_cxx::operator-<google_breakpad::ElfSegment *,std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>>(
          &v12,
          &v14);
  v15 = std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_allocate(
          v13,
          v17);
  v18 = v15;
  v3 = std::forward<google_breakpad::ElfSegment const&>(a3);
  std::allocator_traits<google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::construct<google_breakpad::ElfSegment,google_breakpad::ElfSegment const&>(
    v13,
    16 * v16 + v15,
    v3);
  v18 = 0;
  Tp_allocator = std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_get_Tp_allocator(v13);
  v5 = *(_QWORD *)__gnu_cxx::__normal_iterator<google_breakpad::ElfSegment *,std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>>::base(&v12);
  v18 = std::__uninitialized_move_if_noexcept_a<google_breakpad::ElfSegment *,google_breakpad::ElfSegment *,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>(
          v13[3],
          v5,
          v15,
          Tp_allocator)
      + 16;
  v6 = std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_get_Tp_allocator(v13);
  v7 = v13[4];
  v8 = (_QWORD *)__gnu_cxx::__normal_iterator<google_breakpad::ElfSegment *,std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>>::base(&v12);
  v18 = std::__uninitialized_move_if_noexcept_a<google_breakpad::ElfSegment *,google_breakpad::ElfSegment *,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>(
          *v8,
          v7,
          v18,
          v6);
  v9 = std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_get_Tp_allocator(v13);
  std::_Destroy<google_breakpad::ElfSegment *,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>(
    v13[3],
    v13[4],
    v9);
  std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_deallocate(
    v13,
    v13[3],
    (__int64)(v13[5] - v13[3]) >> 4);
  v13[3] = v15;
  v13[4] = v18;
  result = v13;
  v13[5] = v15 + 16 * v17;
  return result;
}

