__int64 __fastcall sub_2198F20(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_2198C60(a1, a2);
  v3 = v2;
  if ( *(_DWORD *)(a1 + 52) != (_DWORD)&loc_1000007 && v2 < 0 )
    return v2 & 0xFFFFFF;
  return v3;
}
