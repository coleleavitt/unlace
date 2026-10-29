__int64 __fastcall sub_997660(__int64 a1, __int64 a2)
{
  void *v2; // r13
  int v3; // eax
  void *v4; // r14
  int v5; // eax
  void *v6; // r12
  int v7; // eax

  v2 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(a2 + 1548) & 1) != 0 )
  {
    sub_182C690(v2, a1, a2 + 1544);
    if ( (*(_BYTE *)(a2 + 1564) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)a1 = *(_DWORD *)(a2 + 1544);
    if ( (*(_BYTE *)(a2 + 1564) & 1) == 0 )
    {
LABEL_3:
      v3 = *(_DWORD *)(a2 + 1560);
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v3;
      goto LABEL_4;
    }
  }
  sub_182C690(v2, a1 + 16, a2 + 1560);
LABEL_4:
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v4 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  if ( (*(_BYTE *)(a2 + 1580) & 1) != 0 )
    sub_182C690(v4, a1 + 32, a2 + 1576);
  else
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 1576);
  if ( (*(_BYTE *)(a2 + 1596) & 1) != 0 )
  {
    sub_182C690(v4, a1 + 48, a2 + 1592);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 1592);
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = v5;
  }
  *(_BYTE *)(a1 + 68) &= 0xFCu;
  v6 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 84) &= 0xFCu;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  if ( (*(_BYTE *)(a2 + 1612) & 1) != 0 )
    sub_182C690(v6, a1 + 64, a2 + 1608);
  else
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 1608);
  if ( (*(_BYTE *)(a2 + 1628) & 1) != 0 )
  {
    sub_182C690(v6, a1 + 80, a2 + 1624);
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 1624);
    *(_BYTE *)(a1 + 84) &= ~1u;
    *(_DWORD *)(a1 + 80) = v7;
  }
  return a1;
}

