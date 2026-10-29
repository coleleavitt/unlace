bool __fastcall sub_13D0E90(__int64 a1, int a2)
{
  bool result; // al
  __int16 v3; // dx
  _DWORD *v4; // rdx
  int v5; // eax

  result = sub_10CCDE0(*(_WORD *)(a1 + 16));
  if ( result )
    return 0;
  v3 = *(_WORD *)(a1 + 16);
  if ( (unsigned __int16)(v3 - 7) > 0xCu && v3 != 1 )
  {
    v4 = *(_DWORD **)(a1 + 8);
    if ( v4 )
    {
      v5 = *v4 >> 9;
      if ( (unsigned __int16)v5 >= 0x1Bu )
        LOWORD(v5) = 0;
      return (unsigned __int16)v5 == a2;
    }
  }
  return result;
}
