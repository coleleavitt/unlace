__int64 __fastcall sub_9F03A0(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  char v6; // dl
  __int64 result; // rax

  *(_BYTE *)(a1 + 120) = 0;
  if ( *(_BYTE *)(a2 + 120) )
  {
    sub_9EDF30(a1, a2);
    v2 = *(_BYTE *)(a2 + 112) & 1 | *(_BYTE *)(a1 + 112) & 0xFE;
    *(_BYTE *)(a1 + 112) = v2;
    v3 = *(_BYTE *)(a2 + 112) & 2 | v2 & 0xFFFFFFFD;
    *(_BYTE *)(a1 + 112) = v3;
    v4 = *(_BYTE *)(a2 + 112) & 4 | v3 & 0xFFFFFFFB;
    *(_BYTE *)(a1 + 112) = v4;
    v5 = *(_BYTE *)(a2 + 112) & 8 | v4 & 0xFFFFFFF7;
    *(_BYTE *)(a1 + 112) = v5;
    v6 = *(_BYTE *)(a2 + 112);
    *(_BYTE *)(a1 + 120) = 1;
    result = v6 & 0x70 | v5 & 0xFFFFFF8F;
    *(_BYTE *)(a1 + 112) = result;
  }
  return result;
}

