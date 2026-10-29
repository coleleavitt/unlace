__int64 __fastcall sub_492950(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // cl

  v2 = *(_DWORD *)(a1 + 176);
  v3 = *(_DWORD *)(a2 + 176);
  result = 0xFFFFFFFFLL;
  if ( v2 >= v3 )
  {
    result = 1;
    if ( v3 >= v2 )
    {
      v5 = *(_BYTE *)(a1 + 184);
      v6 = *(_BYTE *)(a2 + 184);
      result = 0xFFFFFFFFLL;
      if ( v5 >= v6 )
        return v6 < v5;
    }
  }
  return result;
}
