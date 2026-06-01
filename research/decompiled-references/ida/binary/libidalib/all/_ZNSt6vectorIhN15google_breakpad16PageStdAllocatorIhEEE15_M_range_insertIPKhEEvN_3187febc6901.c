__int64 __fastcall std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_range_insert<unsigned char const*>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 Tp_allocator; // rbx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v21; // [rsp+10h] [rbp-60h] BYREF
  _QWORD *v22; // [rsp+18h] [rbp-58h]
  __int64 v23; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+28h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h]
  unsigned __int64 v26; // [rsp+38h] [rbp-38h]
  __int64 v27; // [rsp+40h] [rbp-30h]
  __int64 v28; // [rsp+48h] [rbp-28h]
  unsigned __int64 v29; // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+58h] [rbp-18h]

  v22 = a1;
  v21 = a2;
  result = a3;
  if ( a3 != a4 )
  {
    v29 = std::distance<unsigned char const*>(a3, a4);
    if ( v29 > v22[5] - v22[4] )
    {
      v28 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_check_len(
              v22,
              v29,
              "vector::_M_range_insert");
      v27 = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_allocate(v22, v28);
      v30 = v27;
      Tp_allocator = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_get_Tp_allocator(v22);
      v13 = *(_QWORD *)__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::base(&v21);
      v30 = std::__uninitialized_move_if_noexcept_a<unsigned char *,unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(
              v22[3],
              v13,
              v27,
              Tp_allocator);
      v14 = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_get_Tp_allocator(v22);
      v30 = std::__uninitialized_copy_a<unsigned char const*,unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(
              a3,
              a4,
              v30,
              v14);
      v15 = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_get_Tp_allocator(v22);
      v16 = v22[4];
      v17 = (_QWORD *)__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::base(&v21);
      v30 = std::__uninitialized_move_if_noexcept_a<unsigned char *,unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(
              *v17,
              v16,
              v30,
              v15);
      v18 = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_get_Tp_allocator(v22);
      std::_Destroy<unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(v22[3], v22[4], v18);
      std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_deallocate(
        v22,
        v22[3],
        v22[5] - v22[3]);
      v22[3] = v27;
      v22[4] = v30;
      result = (__int64)v22;
      v22[5] = v28 + v27;
    }
    else
    {
      v24 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::end(v22);
      v26 = __gnu_cxx::operator-<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>(
              &v24,
              &v21);
      v25 = v22[4];
      if ( v26 <= v29 )
      {
        v23 = a3;
        std::advance<unsigned char const*,unsigned long>(&v23, v26);
        v8 = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_get_Tp_allocator(v22);
        std::__uninitialized_copy_a<unsigned char const*,unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(
          v23,
          a4,
          v22[4],
          v8);
        v22[4] += v29 - v26;
        v9 = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_get_Tp_allocator(v22);
        v10 = v22[4];
        v11 = (_QWORD *)__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::base(&v21);
        std::__uninitialized_move_a<unsigned char *,unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(
          *v11,
          v25,
          v10,
          v9);
        v22[4] += v26;
        return std::copy<unsigned char const*,__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>>(
                 a3,
                 v23,
                 v21);
      }
      else
      {
        v5 = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_get_Tp_allocator(v22);
        std::__uninitialized_move_a<unsigned char *,unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(
          v22[4] - v29,
          v22[4],
          v22[4],
          v5);
        v22[4] += v29;
        v6 = v25 - v29;
        v7 = (_QWORD *)__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::base(&v21);
        std::move_backward<unsigned char *,unsigned char *>(*v7, v6, v25);
        return std::copy<unsigned char const*,__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>>(
                 a3,
                 a4,
                 v21);
      }
    }
  }
  return result;
}

