// Alternative name is '_ZNSt12_Vector_baseItSaItEED2Ev'
__int64 __fastcall std::_Vector_base<unsigned short>::~_Vector_base(_QWORD *a1)
{
  std::_Vector_base<unsigned short>::_M_deallocate(a1, *a1, (__int64)(a1[2] - *a1) >> 1);
  return std::_Vector_base<unsigned short>::_Vector_impl::~_Vector_impl(a1);
}

