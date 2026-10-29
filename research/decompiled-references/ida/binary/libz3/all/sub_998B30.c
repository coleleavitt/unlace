__int64 __fastcall sub_998B30(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  void *v8; // rdi
  int v9; // edx
  void *v10; // rdi
  int v11; // eax
  char v12; // al
  __int64 result; // rax
  __int64 v14; // [rsp+8h] [rbp-50h]
  void *v15; // [rsp+10h] [rbp-48h]

  *(_QWORD *)a1 = &off_1C56158;
  v14 = a1 + 16;
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  v8 = qword_1C7F2C0;
  if ( (qword_1C7F200 & 0x100000000LL) != 0 )
  {
    v15 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v14, &qword_1C7F200);
    v8 = v15;
    if ( (qword_1C7F210 & 0x100000000LL) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = qword_1C7F200;
    if ( (qword_1C7F210 & 0x100000000LL) == 0 )
    {
LABEL_3:
      v9 = qword_1C7F210;
      *(_BYTE *)(a1 + 36) &= ~1u;
      *(_DWORD *)(a1 + 32) = v9;
      goto LABEL_4;
    }
  }
  sub_182C690(v8, a1 + 32, &qword_1C7F210);
LABEL_4:
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 1;
  v10 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 72) = 0;
  if ( (qword_1C7F220 & 0x100000000LL) != 0 )
    sub_182C690(v10, a1 + 48, &qword_1C7F220);
  else
    *(_DWORD *)(a1 + 48) = qword_1C7F220;
  if ( (qword_1C7F230 & 0x100000000LL) != 0 )
  {
    sub_182C690(v10, a1 + 64, &qword_1C7F230);
  }
  else
  {
    v11 = qword_1C7F230;
    *(_BYTE *)(a1 + 68) &= ~1u;
    *(_DWORD *)(a1 + 64) = v11;
  }
  v12 = *(_BYTE *)(a1 + 80);
  *(_DWORD *)(a1 + 84) = a2;
  *(_BYTE *)(a1 + 80) = v12 & 0xFC | 2;
  *(_QWORD *)a1 = &off_1C56190;
  sub_91F480(a1 + 88, a4);
  result = *(_BYTE *)(a1 + 152) & 0xF8;
  *(_BYTE *)(a1 + 152) = *(_BYTE *)(a1 + 152) & 0xF8 | a5 & 3;
  return result;
}

