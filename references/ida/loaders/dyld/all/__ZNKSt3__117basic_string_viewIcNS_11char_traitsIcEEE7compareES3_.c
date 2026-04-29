int __cdecl std::string_view::compare(const std::string_view *this, std::string_view __sv)
{
  std::basic_string_view<_CharT, _Traits>::size_type size; // x19
  std::basic_string_view<_CharT, _Traits>::size_type v3; // x20
  int result; // w0
  int v5; // w8

  size = __sv.__size;
  v3 = this->__size;
  if ( __sv.__size >= v3 )
    __sv.__size = this->__size;
  if ( !__sv.__size || (result = _platform_memcmp(this->__data, __sv.__data, __sv.__size)) == 0 )
  {
    if ( v3 < size )
      v5 = -1;
    else
      v5 = 1;
    if ( v3 == size )
      return 0;
    else
      return v5;
  }
  return result;
}
