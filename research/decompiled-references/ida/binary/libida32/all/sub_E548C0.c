bool __fastcall sub_E548C0(__int64 a1, __int64 a2)
{
  size_t v2; // rdx
  bool result; // al

  v2 = *(_QWORD *)(a2 + 8);
  result = 0;
  if ( *(_QWORD *)(a1 + 8) == v2 )
  {
    result = 1;
    if ( v2 )
      return memcmp(*(const void **)a2, *(const void **)a1, v2) == 0;
  }
  return result;
}

