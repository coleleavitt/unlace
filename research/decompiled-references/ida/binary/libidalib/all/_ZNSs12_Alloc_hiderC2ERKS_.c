// Alternative name is '_ZNSs12_Alloc_hiderC1ERKS_'
std::string::_Alloc_hider *__fastcall std::string::_Alloc_hider::_Alloc_hider(
        std::string::_Alloc_hider *this,
        const std::string::_Alloc_hider *a2)
{
  std::allocator<char>::allocator();
  *(_QWORD *)this = *(_QWORD *)a2;
  return this;
}

