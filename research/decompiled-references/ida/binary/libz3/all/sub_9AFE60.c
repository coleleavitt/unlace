__int64 __fastcall sub_9AFE60(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // r13
  int v5; // eax
  void *v6; // r15
  int v7; // eax

  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  v4 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    sub_182C690(v4, a1, a2);
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
    {
LABEL_3:
      v5 = *(_DWORD *)(a2 + 16);
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v5;
      goto LABEL_4;
    }
  }
  sub_182C690(v4, a1 + 16, a2 + 16);
LABEL_4:
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v6 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  if ( (*(_BYTE *)(a2 + 36) & 1) != 0 )
    sub_182C690(v6, a1 + 32, a2 + 32);
  else
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  if ( (*(_BYTE *)(a2 + 52) & 1) != 0 )
  {
    sub_182C690(v6, a1 + 48, a2 + 48);
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = v7;
  }
  sub_3ED4D0((__int64)qword_1C7F2C0, (int *)a1, a3, a1);
  sub_3ED4D0((__int64)qword_1C7F2C0, (int *)(a1 + 32), a3, a1 + 32);
  return a1;
}

