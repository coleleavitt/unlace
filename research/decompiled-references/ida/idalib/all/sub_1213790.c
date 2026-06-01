__int64 __fastcall sub_1213790(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  result = 0;
  if ( v1 <= 0x26 )
    return 2 * (unsigned int)(((1LL << v1) & 0x6019E00018LL) != 0);
  return result;
}
