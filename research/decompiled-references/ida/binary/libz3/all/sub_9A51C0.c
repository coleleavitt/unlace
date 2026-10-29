__int64 __fastcall sub_9A51C0(__int64 a1, int a2, __int64 a3, char a4, char a5)
{
  void *v9; // r15
  int v10; // edx
  void *v11; // rdi
  int v12; // edx
  void *v13; // r13
  int v14; // eax
  __int64 result; // rax

  *(_QWORD *)a1 = &off_1C563C8;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  v9 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182C690(v9, a1 + 16, a3);
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
    {
LABEL_3:
      v10 = *(_DWORD *)(a3 + 16);
      *(_BYTE *)(a1 + 36) &= ~1u;
      *(_DWORD *)(a1 + 32) = v10;
      goto LABEL_4;
    }
  }
  sub_182C690(v9, a1 + 32, a3 + 16);
LABEL_4:
  *(_QWORD *)(a1 + 48) = 0;
  v11 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 72) = 0;
  if ( (*(_BYTE *)(a3 + 36) & 1) != 0 )
    sub_182C690(v11, a1 + 48, a3 + 32);
  else
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a3 + 32);
  if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
  {
    sub_182C690(v11, a1 + 64, a3 + 48);
  }
  else
  {
    v12 = *(_DWORD *)(a3 + 48);
    *(_BYTE *)(a1 + 68) &= ~1u;
    *(_DWORD *)(a1 + 64) = v12;
  }
  *(_QWORD *)(a1 + 80) = 0;
  v13 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 1;
  *(_QWORD *)(a1 + 104) = 0;
  if ( (*(_BYTE *)(a3 + 68) & 1) != 0 )
    sub_182C690(v13, a1 + 80, a3 + 64);
  else
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a3 + 64);
  if ( (*(_BYTE *)(a3 + 84) & 1) != 0 )
  {
    sub_182C690(v13, a1 + 96, a3 + 80);
  }
  else
  {
    v14 = *(_DWORD *)(a3 + 80);
    *(_BYTE *)(a1 + 100) &= ~1u;
    *(_DWORD *)(a1 + 96) = v14;
  }
  result = *(_BYTE *)(a1 + 112) & 0xFC;
  *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xFC | a4 & 1 | (2 * a5) & 3;
  return result;
}

