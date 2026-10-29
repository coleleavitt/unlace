bool __fastcall sub_9C8940(_QWORD *a1, const void *a2, size_t a3)
{
  size_t v3; // rcx
  bool result; // al

  v3 = a1[1];
  result = 0;
  if ( a3 <= v3 )
  {
    result = 1;
    if ( a3 )
      return memcmp((const void *)(*a1 + v3 - a3), a2, a3) == 0;
  }
  return result;
}

