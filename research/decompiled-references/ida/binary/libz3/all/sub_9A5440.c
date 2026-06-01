__int64 __fastcall sub_9A5440(__int64 a1, int a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  void *v10; // r15
  int v11; // edx
  void *v12; // rdi
  int v13; // edx
  void *v14; // r13
  int v15; // edx
  char v16; // dl

  *(_QWORD *)a1 = &off_1C563C8;
  *(_DWORD *)(a1 + 8) = a2;
  v10 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182C690(v10, a1 + 16, a3);
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
    {
LABEL_3:
      v11 = *(_DWORD *)(a3 + 16);
      *(_BYTE *)(a1 + 36) &= ~1u;
      *(_DWORD *)(a1 + 32) = v11;
      goto LABEL_4;
    }
  }
  sub_182C690(v10, a1 + 32, a3 + 16);
LABEL_4:
  *(_QWORD *)(a1 + 48) = 0;
  v12 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 72) = 0;
  if ( (*(_BYTE *)(a3 + 36) & 1) != 0 )
    sub_182C690(v12, a1 + 48, a3 + 32);
  else
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a3 + 32);
  if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
  {
    sub_182C690(v12, a1 + 64, a3 + 48);
  }
  else
  {
    v13 = *(_DWORD *)(a3 + 48);
    *(_BYTE *)(a1 + 68) &= ~1u;
    *(_DWORD *)(a1 + 64) = v13;
  }
  *(_QWORD *)(a1 + 80) = 0;
  v14 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 1;
  *(_QWORD *)(a1 + 104) = 0;
  if ( (*(_BYTE *)(a3 + 68) & 1) != 0 )
    sub_182C690(v14, a1 + 80, a3 + 64);
  else
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a3 + 64);
  if ( (*(_BYTE *)(a3 + 84) & 1) != 0 )
  {
    sub_182C690(v14, a1 + 96, a3 + 80);
  }
  else
  {
    v15 = *(_DWORD *)(a3 + 80);
    *(_BYTE *)(a1 + 100) &= ~1u;
    *(_DWORD *)(a1 + 96) = v15;
  }
  v16 = *(_BYTE *)(a1 + 112);
  *(_QWORD *)(a1 + 120) = a5;
  *(_QWORD *)a1 = &off_1C56438;
  *(_QWORD *)(a1 + 128) = a6;
  *(_BYTE *)(a1 + 112) = v16 & 0xFC | a4 & 1;
  return a6;
}

