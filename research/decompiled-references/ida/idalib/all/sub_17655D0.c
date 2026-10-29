__int64 __fastcall sub_17655D0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( result != 1 )
  {
    v3 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_19D7F10(*(_QWORD *)(*a1 + 736), *(_QWORD *)(a2 + 32), v3);
    result = a2;
    if ( *(_QWORD *)(a2 + 16) != v3 )
      return sub_19D7F10(*(_QWORD *)(*a1 + 736), *(_QWORD *)(a2 + 32), v3);
  }
  return result;
}
