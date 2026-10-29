__int64 __fastcall sub_12707F0(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  result = 1;
  if ( v1 <= 0x26 )
    return ((0x480000000AuLL >> v1) & 1) != 0 ? 4 : 1;
  return result;
}
