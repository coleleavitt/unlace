__int64 __fastcall sub_3C2B00(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // ecx

  v2 = *(_DWORD *)(a2 + 12);
  result = 1;
  if ( *(_DWORD *)(a1 + 12) <= v2 )
  {
    result = 0xFFFFFFFFLL;
    if ( *(_DWORD *)(a1 + 12) >= v2 )
    {
      v4 = *(_DWORD *)(a2 + 16);
      result = 1;
      if ( *(_DWORD *)(a1 + 16) <= v4 )
        return (unsigned int)-(*(_DWORD *)(a1 + 16) < v4);
    }
  }
  return result;
}
