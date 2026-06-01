__int64 __fastcall sub_13D0F00(__int64 a1)
{
  bool v1; // al
  unsigned int v2; // edx
  __int16 v3; // ax
  _DWORD *v5; // rax
  int v6; // eax

  v1 = sub_10CCDE0(*(_WORD *)(a1 + 16));
  v2 = 0;
  if ( v1 )
    return 0;
  v3 = *(_WORD *)(a1 + 16);
  if ( (unsigned __int16)(v3 - 7) <= 0xCu )
    return 0;
  if ( v3 == 1 )
    return 0;
  v5 = *(_DWORD **)(a1 + 8);
  if ( !v5 )
    return 0;
  v6 = *v5 >> 9;
  if ( (unsigned __int16)v6 < 0x1Bu )
    return (unsigned __int16)v6;
  return v2;
}
