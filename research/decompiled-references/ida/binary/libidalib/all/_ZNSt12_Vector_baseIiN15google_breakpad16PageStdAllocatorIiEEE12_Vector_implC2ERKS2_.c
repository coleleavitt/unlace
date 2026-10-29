// Alternative name is '_ZNSt12_Vector_baseIiN15google_breakpad16PageStdAllocatorIiEEE12_Vector_implC1ERKS2_'
_QWORD *__fastcall std::_Vector_base<int,google_breakpad::PageStdAllocator<int>>::_Vector_impl::_Vector_impl(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rdx

  v2 = a2[1];
  *a1 = *a2;
  a1[1] = v2;
  a1[2] = a2[2];
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  return a1;
}

