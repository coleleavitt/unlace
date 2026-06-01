char __fastcall sub_1FED080(__int64 a1, __int64 a2)
{
  char result; // al
  size_t v3; // rdx

  result = *(_BYTE *)(a2 + 40);
  if ( result )
  {
    result = *(_BYTE *)(a1 + 40);
    if ( result )
    {
      v3 = *(_QWORD *)(a1 + 16);
      if ( v3 == *(_QWORD *)(a2 + 16) )
      {
        if ( v3 )
          return memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 8), v3) == 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
