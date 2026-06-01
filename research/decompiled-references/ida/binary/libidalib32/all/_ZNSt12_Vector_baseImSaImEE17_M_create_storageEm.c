_QWORD *__fastcall std::_Vector_base<unsigned long>::_M_create_storage(_QWORD *a1, __int64 a2)
{
  *a1 = std::_Vector_base<unsigned long>::_M_allocate(a1, a2);
  a1[1] = *a1;
  a1[2] = *a1 + 8 * a2;
  return a1;
}

