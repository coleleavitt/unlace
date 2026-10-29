__int64 __fastcall sub_21CAC20(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  unsigned int v3; // ecx
  unsigned int v4; // ecx

  v1 = *(_QWORD *)(a1 + 48);
  result = (v1 & 0x100000000000000LL) == 0 ? 8 : 10;
  if ( (v1 & 0x200000000000000LL) == 0 )
    result = (v1 & 0x100000000000000LL) != 0 ? 2 : 0;
  if ( (v1 & 0x400000000000000LL) != 0 )
    result = (unsigned int)result | 4;
  v3 = result;
  if ( (v1 & 0x80000000000000LL) != 0 )
  {
    BYTE1(v3) = BYTE1(result) | 1;
    result = v3;
  }
  if ( (v1 & 0x1000000000000000LL) != 0 )
    result = (unsigned int)result | 0x10;
  if ( (v1 & 0x2000000000000000LL) != 0 )
    result = (unsigned int)result | 0x20;
  if ( (v1 & 0x4000000000000000LL) != 0 )
    result = (unsigned int)result | 0x40;
  v4 = result;
  if ( v1 < 0 )
  {
    LOBYTE(v4) = result | 0x80;
    return v4;
  }
  return result;
}
