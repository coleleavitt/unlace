__int64 (__fastcall **__fastcall sub_9A0230(__int64 a1, int a2, __int64 a3, char a4))()
{
  void *v6; // r13
  int v7; // eax
  char v8; // cl

  *(_QWORD *)a1 = &off_1C56290;
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
LABEL_6:
    sub_182C690(v6, a1 + 32, a3 + 16);
    goto LABEL_4;
  }
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
    goto LABEL_6;
LABEL_3:
  v7 = *(_DWORD *)(a3 + 16);
  *(_BYTE *)(a1 + 36) &= ~1u;
  *(_DWORD *)(a1 + 32) = v7;
LABEL_4:
  v8 = *(_BYTE *)(a1 + 48);
  *(_QWORD *)a1 = &off_1C56380;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 48) = a4 & 1 | v8 & 0xFC;
  return &off_1C56380;
}

