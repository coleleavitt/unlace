__int64 *__fastcall std::vector<google_breakpad::ExceptionHandler *>::_M_realloc_insert<google_breakpad::ExceptionHandler *>(
        __int64 *a1,
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
  __int64 *result; // rax
  __int64 v12; // [rsp+10h] [rbp-50h] BYREF
  __int64 *v13; // [rsp+18h] [rbp-48h]
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]

  v13 = a1;
  v12 = a2;
  v17 = std::vector<google_breakpad::ExceptionHandler *>::_M_check_len(a1, 1, "vector::_M_realloc_insert");
  v14 = std::vector<google_breakpad::ExceptionHandler *>::begin(a1);
  v16 = __gnu_cxx::operator-<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>(
          &v12,
          &v14);
  v15 = std::_Vector_base<google_breakpad::ExceptionHandler *>::_M_allocate(v13, v17);
  v18 = v15;
  v3 = std::forward<google_breakpad::ExceptionHandler *>(a3);
  std::allocator_traits<std::allocator<google_breakpad::ExceptionHandler *>>::construct<google_breakpad::ExceptionHandler *,google_breakpad::ExceptionHandler *>(
    v13,
    8 * v16 + v15,
    v3);
  v18 = 0;
  Tp_allocator = std::_Vector_base<google_breakpad::ExceptionHandler *>::_M_get_Tp_allocator(v13);
  v5 = *(_QWORD *)__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>::base(&v12);
  v18 = std::__uninitialized_move_if_noexcept_a<google_breakpad::ExceptionHandler **,google_breakpad::ExceptionHandler **,std::allocator<google_breakpad::ExceptionHandler *>>(
          *v13,
          v5,
          v15,
          Tp_allocator)
      + 8;
  v6 = std::_Vector_base<google_breakpad::ExceptionHandler *>::_M_get_Tp_allocator(v13);
  v7 = v13[1];
  v8 = (_QWORD *)__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>::base(&v12);
  v18 = std::__uninitialized_move_if_noexcept_a<google_breakpad::ExceptionHandler **,google_breakpad::ExceptionHandler **,std::allocator<google_breakpad::ExceptionHandler *>>(
          *v8,
          v7,
          v18,
          v6);
  v9 = std::_Vector_base<google_breakpad::ExceptionHandler *>::_M_get_Tp_allocator(v13);
  std::_Destroy<google_breakpad::ExceptionHandler **,google_breakpad::ExceptionHandler *>(*v13, v13[1], v9);
  std::_Vector_base<google_breakpad::ExceptionHandler *>::_M_deallocate(v13, *v13, (v13[2] - *v13) >> 3);
  *v13 = v15;
  v13[1] = v18;
  result = v13;
  v13[2] = v15 + 8 * v17;
  return result;
}

