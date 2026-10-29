void __fastcall std::vector<unsigned short>::_M_default_append(__int64 *a1, unsigned __int64 a2)
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
    if ( a2 > (a1[2] - a1[1]) >> 1 )
    {
      v7 = std::vector<unsigned short>::_M_check_len(a1, a2, "vector::_M_default_append");
      std::vector<unsigned short>::size(a1);
      v6 = std::_Vector_base<unsigned short>::_M_allocate(a1, v7);
      Tp_allocator = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(a1);
      v8 = std::__uninitialized_move_if_noexcept_a<unsigned short *,unsigned short *,std::allocator<unsigned short>>(
             *a1,
             a1[1],
             v6,
             Tp_allocator);
      v4 = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(a1);
      v9 = std::__uninitialized_default_n_a<unsigned short *,unsigned long,unsigned short>(v8, a2, v4);
      v5 = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(a1);
      std::_Destroy<unsigned short *,unsigned short>(*a1, a1[1], v5);
      std::_Vector_base<unsigned short>::_M_deallocate(a1, *a1, (a1[2] - *a1) >> 1);
      *a1 = v6;
      a1[1] = v9;
      a1[2] = v6 + 2 * v7;
    }
    else
    {
      v2 = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(a1);
      a1[1] = std::__uninitialized_default_n_a<unsigned short *,unsigned long,unsigned short>(a1[1], a2, v2);
    }
  }
}

