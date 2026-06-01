__int64 __fastcall sub_B3FC10(__int64 a1)
{
  _DWORD *v1; // rcx
  int v2; // edx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 56);
  v2 = **(_DWORD **)(a1 + 32) >> 14;
  result = v2 & 0x11 | 0xEu;
  if ( v1 )
    return v2 & 0x13 | (*v1 >> 14) & 0x1Cu;
  return result;
}

