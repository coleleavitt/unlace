__int64 __fastcall sub_2AA810(__int64 a1, __int64 a2)
{
  int v2; // eax
  bool v3; // cc
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a1 + 8) < v2;
  result = *(_DWORD *)(a1 + 8) > v2;
  if ( v3 )
    return 0xFFFFFFFFLL;
  return result;
}
