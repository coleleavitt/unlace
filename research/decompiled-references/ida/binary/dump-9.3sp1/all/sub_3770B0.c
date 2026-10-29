__int16 __fastcall sub_3770B0(__int64 a1)
{
  int v1; // eax
  int v2; // ebp
  char v3; // al
  __int64 v4; // rdx

  v1 = *(_DWORD *)(a1 + 4);
  if ( (v1 & 0x400) != 0 )
  {
    BYTE1(v1) |= 4u;
    *(_DWORD *)(a1 + 4) = v1;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 72);
    v3 = getinf();
    v4 = 260;
    if ( _bittest64(&v4, v3 & 0xF) && v2 == 112 )
      sub_376E40(a1, 1, 1);
    v1 = *(_DWORD *)(a1 + 4);
    BYTE1(v1) |= 4u;
    *(_DWORD *)(a1 + 4) = v1;
  }
  return v1;
}
