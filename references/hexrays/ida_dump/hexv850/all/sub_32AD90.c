__int64 __fastcall sub_32AD90(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_DWORD *)(a2 + 16);
  result = 1;
  if ( *(_DWORD *)(a1 + 16) <= v2 )
  {
    result = 0xFFFFFFFFLL;
    if ( *(_DWORD *)(a1 + 16) >= v2 )
    {
      v4 = *(_QWORD *)(a2 + 8);
      result = 1;
      if ( *(_QWORD *)(a1 + 8) <= v4 )
        return (unsigned int)-(*(_QWORD *)(a1 + 8) < v4);
    }
  }
  return result;
}
