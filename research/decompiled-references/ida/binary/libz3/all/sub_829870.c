__int64 __fastcall sub_829870(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rbp
  void *v6; // r13
  int v7; // eax
  void *v8; // r12
  int v9; // eax

  v3 = *(_QWORD *)(a2 + 496);
  v4 = (unsigned int)sub_FF9FB0(v3, a3);
  v5 = *(_QWORD *)(sub_FF9B20(v3) + 48) + (v4 << 6);
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  v6 = qword_1C7F2C0;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(v5 + 4) & 1) != 0 )
  {
    sub_182C690(v6, a1, v5);
    if ( (*(_BYTE *)(v5 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)a1 = *(_DWORD *)v5;
    if ( (*(_BYTE *)(v5 + 20) & 1) == 0 )
    {
LABEL_3:
      v7 = *(_DWORD *)(v5 + 16);
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v7;
      goto LABEL_4;
    }
  }
  sub_182C690(v6, a1 + 16, v5 + 16);
LABEL_4:
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v8 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  if ( (*(_BYTE *)(v5 + 36) & 1) != 0 )
    sub_182C690(v8, a1 + 32, v5 + 32);
  else
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(v5 + 32);
  if ( (*(_BYTE *)(v5 + 52) & 1) != 0 )
  {
    sub_182C690(v8, a1 + 48, v5 + 48);
  }
  else
  {
    v9 = *(_DWORD *)(v5 + 48);
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = v9;
  }
  return a1;
}

