__int64 __fastcall sub_79BCA0(unsigned __int64 a1)
{
  unsigned __int8 v1; // dl
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // rax

  v1 = *(_BYTE *)(a1 + 8) & 0x7F;
  v2 = v1;
  if ( !v1 )
    return 0;
  while ( v2 == 4 )
  {
    result = a1 - 40;
    if ( *(_BYTE *)(a1 + 9) >> 5 == 1 )
      return result;
    v4 = *(_QWORD *)(result + 16);
    a1 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v4 & 4) != 0 )
      a1 = *(_QWORD *)(a1 + 8);
    v1 = *(_BYTE *)(a1 + 8) & 0x7F;
    v2 = v1;
    if ( !v1 )
      return 0;
  }
  return ((__int64 (*)(void))((char *)dword_3C92044 + dword_3C92044[v1]))();
}

