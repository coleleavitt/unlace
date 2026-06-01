__int64 __fastcall sub_1764A80(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi

  result = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
  if ( result != 1 )
  {
    v5 = *a1;
    v6 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1E53EF0(v5, v6);
    result = a2;
    if ( *(_QWORD *)(a2 + 24) != v6 )
      return sub_1E53EF0(v5, v6);
  }
  return result;
}
