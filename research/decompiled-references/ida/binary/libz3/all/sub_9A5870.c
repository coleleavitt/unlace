__int64 (__fastcall **__fastcall sub_9A5870(__int64 a1, int a2, __int64 a3, char a4))()
{
  void *v7; // r14
  int v8; // eax
  void *v9; // rdi
  int v10; // eax
  void *v11; // r15
  int v12; // eax
  char v13; // al

  *(_QWORD *)a1 = &off_1C563C8;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  v7 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182C690(v7, a1 + 16, a3);
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
    {
LABEL_3:
      v8 = *(_DWORD *)(a3 + 16);
      *(_BYTE *)(a1 + 36) &= ~1u;
      *(_DWORD *)(a1 + 32) = v8;
      goto LABEL_4;
    }
  }
  sub_182C690(v7, a1 + 32, a3 + 16);
LABEL_4:
  *(_QWORD *)(a1 + 48) = 0;
  v9 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 72) = 0;
  if ( (*(_BYTE *)(a3 + 36) & 1) != 0 )
    sub_182C690(v9, a1 + 48, a3 + 32);
  else
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a3 + 32);
  if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
  {
    sub_182C690(v9, a1 + 64, a3 + 48);
  }
  else
  {
    v10 = *(_DWORD *)(a3 + 48);
    *(_BYTE *)(a1 + 68) &= ~1u;
    *(_DWORD *)(a1 + 64) = v10;
  }
  *(_QWORD *)(a1 + 80) = 0;
  v11 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 1;
  *(_QWORD *)(a1 + 104) = 0;
  if ( (*(_BYTE *)(a3 + 68) & 1) != 0 )
    sub_182C690(v11, a1 + 80, a3 + 64);
  else
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a3 + 64);
  if ( (*(_BYTE *)(a3 + 84) & 1) != 0 )
  {
    sub_182C690(v11, a1 + 96, a3 + 80);
  }
  else
  {
    v12 = *(_DWORD *)(a3 + 80);
    *(_BYTE *)(a1 + 100) &= ~1u;
    *(_DWORD *)(a1 + 96) = v12;
  }
  v13 = *(_BYTE *)(a1 + 112);
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 112) = a4 & 1 | v13 & 0xFC;
  *(_QWORD *)a1 = &off_1C564B8;
  return &off_1C564B8;
}

