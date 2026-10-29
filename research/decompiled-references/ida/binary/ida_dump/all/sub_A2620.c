bool __fastcall sub_A2620(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( a2 && *(_DWORD *)a2 == 59 && *(_DWORD *)(a2 + 36) == *(_DWORD *)(a1 + 80) && *(_BYTE *)(a2 + 32) == 1 )
    return *(_DWORD *)(a1 + 64) == *(_DWORD *)(a2 + 40);
  return result;
}
