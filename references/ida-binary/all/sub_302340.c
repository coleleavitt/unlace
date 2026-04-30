_DWORD *__fastcall sub_302340(__int64 a1, int a2)
{
  _DWORD *result; // rax
  _DWORD *i; // rdx

  result = *(_DWORD **)(a1 + 720);
  for ( i = &result[*(_QWORD *)(a1 + 728)]; result != i; ++result )
  {
    if ( *result == a2 )
      *result = -1;
  }
  return result;
}
