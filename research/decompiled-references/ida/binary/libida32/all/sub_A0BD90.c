__int64 __fastcall sub_A0BD90(__int64 a1, __int64 a2)
{
  char v2; // al
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // al
  char v8; // dl
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al

  v2 = *(_BYTE *)(a2 + 120);
  if ( *(_BYTE *)(a1 + 120) )
  {
    if ( !v2 )
    {
      *(_BYTE *)(a1 + 120) = 0;
      sub_9E5FA0(a1);
      return a1;
    }
    sub_A0B930(a1, a2);
    v9 = *(_BYTE *)(a2 + 112) & 1 | *(_BYTE *)(a1 + 112) & 0xFE;
    *(_BYTE *)(a1 + 112) = v9;
    v10 = *(_BYTE *)(a2 + 112) & 2 | v9 & 0xFD;
    *(_BYTE *)(a1 + 112) = v10;
    v11 = *(_BYTE *)(a2 + 112) & 4 | v10 & 0xFB;
    *(_BYTE *)(a1 + 112) = v11;
    v12 = *(_BYTE *)(a2 + 112) & 8 | v11 & 0xF7;
    *(_BYTE *)(a1 + 112) = v12;
    *(_BYTE *)(a1 + 112) = *(_BYTE *)(a2 + 112) & 0x70 | v12 & 0x8F;
    return a1;
  }
  else
  {
    if ( !v2 )
      return a1;
    sub_9EDF30(a1, a2);
    v4 = *(_BYTE *)(a2 + 112) & 1 | *(_BYTE *)(a1 + 112) & 0xFE;
    *(_BYTE *)(a1 + 112) = v4;
    v5 = *(_BYTE *)(a2 + 112) & 2 | v4 & 0xFD;
    *(_BYTE *)(a1 + 112) = v5;
    v6 = *(_BYTE *)(a2 + 112) & 4 | v5 & 0xFB;
    *(_BYTE *)(a1 + 112) = v6;
    v7 = *(_BYTE *)(a2 + 112) & 8 | v6 & 0xF7;
    *(_BYTE *)(a1 + 112) = v7;
    v8 = *(_BYTE *)(a2 + 112);
    *(_BYTE *)(a1 + 120) = 1;
    *(_BYTE *)(a1 + 112) = v8 & 0x70 | v7 & 0x8F;
    return a1;
  }
}

