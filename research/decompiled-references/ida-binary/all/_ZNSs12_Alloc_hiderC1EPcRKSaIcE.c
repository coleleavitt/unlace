// Alternative name is '_ZNSs12_Alloc_hiderC2EPcRKSaIcE'
_QWORD *__fastcall std::string::_Alloc_hider::_Alloc_hider(_QWORD *a1, __int64 a2, __int64 a3)
{
  std::allocator<char>::allocator(a1, a3);
  *a1 = a2;
  return a1;
}
