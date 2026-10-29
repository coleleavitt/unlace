__int64 __fastcall sub_206D480(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 28);
  if ( v1 <= 0xE )
  {
    result = 0x100000001LL;
    if ( ((1LL << v1) & 0x4180) != 0 )
      return result;
    if ( ((1LL << v1) & 0x2060) != 0 )
      return 0x100000000LL;
  }
  return 0;
}
