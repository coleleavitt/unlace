__int64 __fastcall sub_1035810(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 632);
  result = (unsigned int)(v2 - 9);
  LOBYTE(result) = v2 == 0 || (unsigned int)result <= 0x7FFFFFF6;
  if ( !(_BYTE)result )
    return sub_102C2E0(a1, a2);
  return result;
}
