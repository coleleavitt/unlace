__int64 (__fastcall **__fastcall sub_999050(__int64 a1, int a2, __int64 a3, char a4))()
{
  void *v6; // r15
  int v7; // eax
  void *v8; // r13
  int v9; // eax
  char v10; // al

  *(_QWORD *)a1 = &off_1C56158;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  v6 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182C690(v6, a1 + 16, a3);
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
    {
LABEL_3:
      v7 = *(_DWORD *)(a3 + 16);
      *(_BYTE *)(a1 + 36) &= ~1u;
      *(_DWORD *)(a1 + 32) = v7;
      goto LABEL_4;
    }
  }
  sub_182C690(v6, a1 + 32, a3 + 16);
LABEL_4:
  *(_QWORD *)(a1 + 48) = 0;
  v8 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 72) = 0;
  if ( (*(_BYTE *)(a3 + 36) & 1) != 0 )
    sub_182C690(v8, a1 + 48, a3 + 32);
  else
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a3 + 32);
  if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
  {
    sub_182C690(v8, a1 + 64, a3 + 48);
  }
  else
  {
    v9 = *(_DWORD *)(a3 + 48);
    *(_BYTE *)(a1 + 68) &= ~1u;
    *(_DWORD *)(a1 + 64) = v9;
  }
  v10 = *(_BYTE *)(a1 + 80);
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 80) = a4 & 1 | v10 & 0xFC;
  *(_QWORD *)a1 = &off_1C56248;
  return &off_1C56248;
}

