__int64 __fastcall sub_177E170(__int64 *a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 result; // rax
  unsigned __int64 v8; // rdx

  result = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 16), 0, a3, a5, a6, a7);
  if ( result != 1 )
  {
    v8 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1A86120(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v8);
    result = a2;
    if ( *(_QWORD *)(a2 + 16) != v8 )
      return sub_1A86120(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v8);
  }
  return result;
}
