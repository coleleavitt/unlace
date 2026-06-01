__int64 __fastcall sub_215E160(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  __int64 result; // rax
  int v4; // ecx

  v2 = *(_DWORD *)(a2 + 36);
  result = 1;
  if ( (v2 & 8) == 0 )
  {
    result = 16;
    v4 = (v2 >> 20) & 0xF;
    if ( v4 )
      return (unsigned int)(1 << (v4 - 1));
  }
  return result;
}
