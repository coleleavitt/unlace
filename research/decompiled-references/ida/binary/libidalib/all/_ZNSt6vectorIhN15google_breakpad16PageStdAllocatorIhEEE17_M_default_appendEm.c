void __fastcall std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_default_append(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 Tp_allocator; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+10h] [rbp-30h]
  __int64 v7; // [rsp+20h] [rbp-20h]
  __int64 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-18h]

  if ( a2 )
  {
    if ( a2 > a1[5] - a1[4] )
    {
      v7 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_check_len(
             a1,
             a2,
             "vector::_M_default_append");
      std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::size(a1);
      v6 = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_allocate(a1, v7);
      Tp_allocator = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_get_Tp_allocator(a1);
      v8 = std::__uninitialized_move_if_noexcept_a<unsigned char *,unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(
             a1[3],
             a1[4],
             v6,
             Tp_allocator);
      v4 = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_get_Tp_allocator(a1);
      v9 = std::__uninitialized_default_n_a<unsigned char *,unsigned long,google_breakpad::PageStdAllocator<unsigned char>>(
             v8,
             a2,
             v4);
      v5 = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_get_Tp_allocator(a1);
      std::_Destroy<unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(a1[3], a1[4], v5);
      std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_deallocate(
        a1,
        a1[3],
        a1[5] - a1[3]);
      a1[3] = v6;
      a1[4] = v9;
      a1[5] = v7 + v6;
    }
    else
    {
      v2 = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_get_Tp_allocator(a1);
      a1[4] = std::__uninitialized_default_n_a<unsigned char *,unsigned long,google_breakpad::PageStdAllocator<unsigned char>>(
                a1[4],
                a2,
                v2);
    }
  }
}

