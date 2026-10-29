bool __fastcall sub_9A3FC0(__int64 a1, const void *a2, size_t a3)
{
  bool result; // al

  result = 0;
  if ( a3 <= *(_QWORD *)(a1 + 8) )
  {
    result = 1;
    if ( a3 )
      return memcmp(*(const void **)a1, a2, a3) == 0;
  }
  return result;
}

