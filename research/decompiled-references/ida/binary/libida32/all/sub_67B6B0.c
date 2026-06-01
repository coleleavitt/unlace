__int64 __fastcall sub_67B6B0(__int64 a1, __int64 a2, int a3, unsigned __int8 **a4)
{
  __int64 result; // rax
  char v6; // bp

  result = sub_67B5A0(a1, a2, a3, a4);
  v6 = result;
  if ( (result & 0x10) == 0 )
  {
    if ( (result & 0x20) == 0 )
      return result;
LABEL_5:
    result = unpack_dd(a4);
    *(_DWORD *)(a2 + 32) = result;
    return result;
  }
  result = unpack_dd(a4);
  *(_DWORD *)(a2 + 36) = result;
  if ( (v6 & 0x20) != 0 )
    goto LABEL_5;
  return result;
}

