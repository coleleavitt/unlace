__int64 __fastcall sub_453E30(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 24);
  result = 0;
  if ( (v2 & 0x20) == 0 )
  {
    result = (v2 >> 3) & 1;
    if ( (v2 & 2) == 0 )
      return 1;
  }
  return result;
}
