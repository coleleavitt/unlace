__int64 __fastcall sub_754890(__int64 a1, int *a2, int *a3, unsigned int a4, char a5)
{
  void *v9; // rdi
  void *v10; // rdi
  __int64 result; // rax
  int v12; // eax
  int v13; // eax
  void *v14; // r12
  int v15; // eax
  __int64 v16; // [rsp+10h] [rbp-50h]

  *(_QWORD *)(a1 + 24) = 0x100000000LL;
  *(_QWORD *)(a1 + 96) = 0x100000000LL;
  *(_QWORD *)a1 = 1;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v16 = a1 + 48;
  sub_182CBA0(qword_1C7F2C0, a1 + 48);
  *(_BYTE *)(a1 + 52) &= ~1u;
  v9 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 68) &= ~1u;
  *(_DWORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 64) = 0;
  sub_182CBA0(v9, a1 + 80);
  *(_BYTE *)(a1 + 84) &= ~1u;
  v10 = qword_1C7F2C0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_BYTE *)(a1 + 100) = 1;
  if ( a4 <= 0x40 )
  {
    *(_BYTE *)a1 = 1;
    *(_QWORD *)(a1 + 8) = sub_182D020(v10, a2);
    result = sub_182D020(qword_1C7F2C0, a3);
    *(_QWORD *)(a1 + 16) = result;
    *(_BYTE *)(a1 + 28) = a5;
    *(_DWORD *)(a1 + 24) = a4;
    return result;
  }
  *(_BYTE *)a1 = 0;
  if ( (a2[1] & 1) != 0 )
  {
    sub_182C690(v10, a1 + 32, a2);
    if ( (a2[5] & 1) == 0 )
    {
LABEL_5:
      v13 = a2[4];
      *(_BYTE *)(a1 + 52) &= ~1u;
      v14 = qword_1C7F2C0;
      *(_DWORD *)(a1 + 48) = v13;
      if ( (a3[1] & 1) == 0 )
        goto LABEL_6;
LABEL_11:
      sub_182C690(v14, a1 + 64, a3);
      if ( (a3[5] & 1) == 0 )
        goto LABEL_7;
LABEL_12:
      result = sub_182C690(v14, a1 + 80, a3 + 4);
      goto LABEL_8;
    }
  }
  else
  {
    v12 = *a2;
    *(_BYTE *)(a1 + 36) &= ~1u;
    *(_DWORD *)(a1 + 32) = v12;
    if ( (a2[5] & 1) == 0 )
      goto LABEL_5;
  }
  sub_182C690(v10, v16, a2 + 4);
  v14 = qword_1C7F2C0;
  if ( (a3[1] & 1) != 0 )
    goto LABEL_11;
LABEL_6:
  v15 = *a3;
  *(_BYTE *)(a1 + 68) &= ~1u;
  *(_DWORD *)(a1 + 64) = v15;
  if ( (a3[5] & 1) != 0 )
    goto LABEL_12;
LABEL_7:
  result = (unsigned int)a3[4];
  *(_BYTE *)(a1 + 84) &= ~1u;
  *(_DWORD *)(a1 + 80) = result;
LABEL_8:
  *(_BYTE *)(a1 + 100) = a5;
  *(_DWORD *)(a1 + 96) = a4;
  return result;
}

