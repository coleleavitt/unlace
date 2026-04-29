__int64 __fastcall sub_822F0(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 *v4; // rdi
  unsigned int v5; // r8d
  unsigned int v7; // eax

  v4 = *(__int64 **)(a1 + 616);
  if ( !v4 )
    return (unsigned int)-1;
  if ( *a4 - 129 > 0x20 )
  {
    v5 = 0;
    if ( *a4 > 0xF )
      return v5;
  }
  v7 = a4[1];
  if ( v7 - 129 > 0x20 )
  {
    v5 = 0;
    if ( v7 > 0xF )
      return v5;
  }
  return sub_80B50(v4, a2, a3, a4);
}
