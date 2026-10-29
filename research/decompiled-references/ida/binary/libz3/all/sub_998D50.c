__int64 (__fastcall **__fastcall sub_998D50(__int64 a1, int a2, __int64 a3, char a4, __int64 a5, __int64 a6))()
{
  __int64 v11; // rax
  void *v12; // rdi
  int v13; // edx
  void *v14; // r14
  int v15; // eax
  char v16; // al
  char v17; // bp
  void *v19; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = &off_1C56158;
  v11 = a1 + 16;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  v12 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    v19 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v11, a3);
    v12 = v19;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
    {
LABEL_3:
      v13 = *(_DWORD *)(a3 + 16);
      *(_BYTE *)(a1 + 36) &= ~1u;
      *(_DWORD *)(a1 + 32) = v13;
      goto LABEL_4;
    }
  }
  sub_182C690(v12, a1 + 32, a3 + 16);
LABEL_4:
  *(_QWORD *)(a1 + 48) = 0;
  v14 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 72) = 0;
  if ( (*(_BYTE *)(a3 + 36) & 1) != 0 )
    sub_182C690(v14, a1 + 48, a3 + 32);
  else
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a3 + 32);
  if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
  {
    sub_182C690(v14, a1 + 64, a3 + 48);
  }
  else
  {
    v15 = *(_DWORD *)(a3 + 48);
    *(_BYTE *)(a1 + 68) &= ~1u;
    *(_DWORD *)(a1 + 64) = v15;
  }
  v16 = *(_BYTE *)(a1 + 80);
  *(_QWORD *)(a1 + 88) = a5;
  *(_QWORD *)(a1 + 96) = a6;
  v17 = v16 & 0xFC | a4 & 1;
  *(_BYTE *)(a1 + 80) = v17;
  *(_QWORD *)a1 = &off_1C561C8;
  return &off_1C561C8;
}

