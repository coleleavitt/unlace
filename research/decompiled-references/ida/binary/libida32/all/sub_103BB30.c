bool __fastcall sub_103BB30(__int64 a1, __int64 a2)
{
  size_t v2; // rdx
  bool result; // al

  v2 = *(_QWORD *)(a1 + 32);
  result = 0;
  if ( v2 == *(_QWORD *)(a2 + 32) )
  {
    result = 1;
    if ( v2 )
      return memcmp(*(const void **)(a1 + 24), *(const void **)(a2 + 24), v2) == 0;
  }
  return result;
}

