unsigned __int64 __fastcall sub_55C590(unsigned __int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v4; // esi
  __int64 v5; // [rsp+0h] [rbp-14h]

  if ( (a1 & 1) != 0 )
  {
    v1 = (a1 >> 40) & 0xF;
    v2 = HIBYTE(a1) + BYTE6(a1);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 20);
    LODWORD(v1) = *(_DWORD *)(a1 + 8);
    v2 = *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 4);
    if ( v4 )
    {
      LODWORD(v5) = *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 4);
      HIDWORD(v5) = v4 + v1;
      return v5;
    }
  }
  return __PAIR64__(v1, v2);
}
