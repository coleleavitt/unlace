void *__fastcall std::char_traits<char>::copy(void *a1, const void *a2, size_t a3)
{
  if ( a3 )
    return memcpy(a1, a2, a3);
  else
    return a1;
}

