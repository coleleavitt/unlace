unsigned __int64 __fastcall sub_215E360(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax

  if ( !*(_QWORD *)(a1 + 96) || (v2 = (unsigned int *)(a2 + 8), !a2) )
    v2 = (unsigned int *)(a2 + 8);
  result = *v2;
  if ( (_DWORD)result )
  {
    v4 = (unsigned int)result;
    result = 1;
    v5 = v4 - 1;
    if ( v5 )
    {
      _BitScanReverse64(&v6, v5);
      result = 1LL << (64 - ((unsigned __int8)v6 ^ 0x3Fu));
      if ( result > 0x1F )
        return 32;
    }
  }
  return result;
}
