__int64 __fastcall sub_99EA80(__int64 a1, __int64 a2)
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
  if ( (*(_BYTE *)(a2 + 1452) & 1) != 0 )
  {
    sub_182C690(v2, a1, a2 + 1448);
    if ( (*(_BYTE *)(a2 + 1468) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)a1 = *(_DWORD *)(a2 + 1448);
    if ( (*(_BYTE *)(a2 + 1468) & 1) == 0 )
    {
LABEL_3:
      v3 = *(_DWORD *)(a2 + 1464);
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v3;
      goto LABEL_4;
    }
  }
  sub_182C690(v2, a1 + 16, a2 + 1464);
LABEL_4:
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v4 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  if ( (*(_BYTE *)(a2 + 1484) & 1) != 0 )
    sub_182C690(v4, a1 + 32, a2 + 1480);
  else
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 1480);
  if ( (*(_BYTE *)(a2 + 1500) & 1) != 0 )
  {
    sub_182C690(v4, a1 + 48, a2 + 1496);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 1496);
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
  if ( (*(_BYTE *)(a2 + 1516) & 1) != 0 )
    sub_182C690(v6, a1 + 64, a2 + 1512);
  else
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 1512);
  if ( (*(_BYTE *)(a2 + 1532) & 1) != 0 )
  {
    sub_182C690(v6, a1 + 80, a2 + 1528);
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 1528);
    *(_BYTE *)(a1 + 84) &= ~1u;
    *(_DWORD *)(a1 + 80) = v7;
  }
  return a1;
}

