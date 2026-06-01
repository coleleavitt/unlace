__int64 __fastcall sub_1764810(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx

  result = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
  if ( result != 1 )
  {
    v4 = *a1;
    v5 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_190C990(v4, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20), v5);
    result = a2;
    if ( *(_QWORD *)(a2 + 24) != v5 )
      return sub_190C990(v4, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20), v5);
  }
  return result;
}
