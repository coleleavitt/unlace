__int64 __fastcall sub_3E5F20(__int64 a1, int a2)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // ecx
  unsigned int v5; // edx

  v2 = *(_DWORD *)(a1 + 80);
  result = (unsigned int)a2;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
  {
    if ( a2 >= *(_DWORD *)(a1 + 480) && a2 <= v2 + *(_DWORD *)(a1 + 356) - 1 )
      return -v2 & (unsigned int)a2;
  }
  else if ( a2 >= *(_DWORD *)(a1 + 356) && a2 <= v2 + *(_DWORD *)(a1 + 480) - 1 )
  {
    return -v2 & (unsigned int)a2;
  }
  if ( a2 >= *(_DWORD *)(a1 + 484) )
  {
    v4 = v2 + *(_DWORD *)(a1 + 608) - 1;
    v5 = a2 & -v2;
    if ( a2 <= v4 )
      return v5;
  }
  return result;
}
