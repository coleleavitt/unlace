__int64 __fastcall sub_32F8F0(__int64 a1, unsigned int a2, int *a3)
{
  __int64 v4; // rbx
  void *v5; // r13
  int v6; // eax
  int v7; // eax
  void *v8; // r13
  int v9; // eax
  int v10; // eax
  void *v11; // r12
  int v12; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 32) + 96LL * a2;
  v5 = qword_1C7F2C0;
  if ( (a3[1] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, *(_QWORD *)(a1 + 32) + 96LL * a2, a3);
    if ( (a3[5] & 1) == 0 )
    {
LABEL_3:
      v7 = a3[4];
      v8 = qword_1C7F2C0;
      *(_BYTE *)(v4 + 20) &= ~1u;
      *(_DWORD *)(v4 + 16) = v7;
      if ( (a3[9] & 1) == 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = *a3;
    *(_BYTE *)(v4 + 4) &= ~1u;
    *(_DWORD *)v4 = v6;
    if ( (a3[5] & 1) == 0 )
      goto LABEL_3;
  }
  sub_182C690(v5, v4 + 16, a3 + 4);
  v8 = qword_1C7F2C0;
  if ( (a3[9] & 1) == 0 )
  {
LABEL_4:
    v9 = a3[8];
    *(_BYTE *)(v4 + 36) &= ~1u;
    *(_DWORD *)(v4 + 32) = v9;
    if ( (a3[13] & 1) == 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  sub_182C690(v8, v4 + 32, a3 + 8);
  if ( (a3[13] & 1) == 0 )
  {
LABEL_5:
    v10 = a3[12];
    v11 = qword_1C7F2C0;
    *(_BYTE *)(v4 + 52) &= ~1u;
    *(_DWORD *)(v4 + 48) = v10;
    if ( (a3[17] & 1) == 0 )
      goto LABEL_6;
LABEL_12:
    sub_182C690(v11, v4 + 64, a3 + 16);
    if ( (a3[21] & 1) == 0 )
      goto LABEL_7;
    return sub_182C690(v11, v4 + 80, a3 + 20);
  }
LABEL_11:
  sub_182C690(v8, v4 + 48, a3 + 12);
  v11 = qword_1C7F2C0;
  if ( (a3[17] & 1) != 0 )
    goto LABEL_12;
LABEL_6:
  v12 = a3[16];
  *(_BYTE *)(v4 + 68) &= ~1u;
  *(_DWORD *)(v4 + 64) = v12;
  if ( (a3[21] & 1) == 0 )
  {
LABEL_7:
    result = (unsigned int)a3[20];
    *(_BYTE *)(v4 + 84) &= ~1u;
    *(_DWORD *)(v4 + 80) = result;
    return result;
  }
  return sub_182C690(v11, v4 + 80, a3 + 20);
}

