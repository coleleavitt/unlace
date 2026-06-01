void __fastcall std::vector<unsigned short>::_M_fill_insert(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 Tp_allocator; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r12
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v24; // [rsp+10h] [rbp-80h] BYREF
  __int64 *v25; // [rsp+18h] [rbp-78h]
  _BYTE v26[24]; // [rsp+20h] [rbp-70h] BYREF
  __int64 v27; // [rsp+38h] [rbp-58h] BYREF
  __int64 v28; // [rsp+40h] [rbp-50h] BYREF
  __int64 v29; // [rsp+48h] [rbp-48h]
  unsigned __int64 v30; // [rsp+50h] [rbp-40h]
  __int64 v31; // [rsp+58h] [rbp-38h]
  __int64 v32; // [rsp+60h] [rbp-30h]
  __int64 v33; // [rsp+68h] [rbp-28h]
  __int64 v34; // [rsp+70h] [rbp-20h]
  __int64 v35; // [rsp+78h] [rbp-18h]

  v25 = a1;
  v24 = a2;
  if ( a3 )
  {
    if ( a3 > (v25[2] - v25[1]) >> 1 )
    {
      v34 = std::vector<unsigned short>::_M_check_len(v25, a3, "vector::_M_fill_insert");
      v28 = std::vector<unsigned short>::begin(v25);
      v33 = __gnu_cxx::operator-<unsigned short *,std::vector<unsigned short>>(&v24, &v28);
      v32 = std::_Vector_base<unsigned short>::_M_allocate(v25, v34);
      v35 = v32;
      Tp_allocator = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(v25);
      std::__uninitialized_fill_n_a<unsigned short *,unsigned long,unsigned short,unsigned short>(
        2 * v33 + v32,
        a3,
        a4,
        Tp_allocator);
      v35 = 0;
      v16 = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(v25);
      v17 = (_QWORD *)__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short>>::base(&v24);
      v35 = 2 * a3
          + std::__uninitialized_move_if_noexcept_a<unsigned short *,unsigned short *,std::allocator<unsigned short>>(
              *v25,
              *v17,
              v32,
              v16);
      v18 = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(v25);
      v19 = v25[1];
      v20 = (_QWORD *)__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short>>::base(&v24);
      v35 = std::__uninitialized_move_if_noexcept_a<unsigned short *,unsigned short *,std::allocator<unsigned short>>(
              *v20,
              v19,
              v35,
              v18);
      v21 = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(v25);
      std::_Destroy<unsigned short *,unsigned short>(*v25, v25[1], v21);
      std::_Vector_base<unsigned short>::_M_deallocate(v25, *v25, (v25[2] - *v25) >> 1);
      *v25 = v32;
      v25[1] = v35;
      v25[2] = v32 + 2 * v34;
    }
    else
    {
      std::vector<unsigned short>::_Temporary_value::_Temporary_value<unsigned short const&>(v26, v25, a4);
      v31 = std::vector<unsigned short>::_Temporary_value::_M_val(v26);
      v27 = std::vector<unsigned short>::end(v25);
      v30 = __gnu_cxx::operator-<unsigned short *,std::vector<unsigned short>>(&v27, &v24);
      v29 = v25[1];
      if ( v30 <= a3 )
      {
        v9 = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(v25);
        v10 = std::__uninitialized_fill_n_a<unsigned short *,unsigned long,unsigned short,unsigned short>(
                v25[1],
                a3 - v30,
                v31,
                v9);
        v25[1] = v10;
        v11 = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(v25);
        v12 = v25[1];
        v13 = (_QWORD *)__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short>>::base(&v24);
        std::__uninitialized_move_a<unsigned short *,unsigned short *,std::allocator<unsigned short>>(
          *v13,
          v29,
          v12,
          v11);
        v25[1] += 2 * v30;
        v14 = (_QWORD *)__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short>>::base(&v24);
        std::fill<unsigned short *,unsigned short>(*v14, v29, v31);
      }
      else
      {
        v4 = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(v25);
        std::__uninitialized_move_a<unsigned short *,unsigned short *,std::allocator<unsigned short>>(
          v25[1] - 2 * a3,
          v25[1],
          v25[1],
          v4);
        v25[1] += 2 * a3;
        v5 = -2LL * a3 + v29;
        v6 = (_QWORD *)__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short>>::base(&v24);
        std::move_backward<unsigned short *,unsigned short *>(*v6, v5, v29);
        v7 = *(_QWORD *)__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short>>::base(&v24) + 2 * a3;
        v8 = (_QWORD *)__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short>>::base(&v24);
        std::fill<unsigned short *,unsigned short>(*v8, v7, v31);
      }
      std::vector<unsigned short>::_Temporary_value::~_Temporary_value(v26);
    }
  }
}

