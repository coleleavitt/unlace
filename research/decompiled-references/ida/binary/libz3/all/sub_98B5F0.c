__int64 __fastcall sub_98B5F0(__int64 a1, int *a2)
{
  void *v2; // r13
  int v3; // eax
  int v4; // eax
  void *v5; // r13
  int v6; // eax
  int v7; // eax
  void *v8; // r12
  int v9; // eax
  __int64 result; // rax

  v2 = qword_1C7F2C0;
  if ( (a2[1] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, a1, a2);
    if ( (a2[5] & 1) == 0 )
    {
LABEL_3:
      v4 = a2[4];
      v5 = qword_1C7F2C0;
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v4;
      if ( (a2[9] & 1) == 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  else
  {
    v3 = *a2;
    *(_BYTE *)(a1 + 4) &= ~1u;
    *(_DWORD *)a1 = v3;
    if ( (a2[5] & 1) == 0 )
      goto LABEL_3;
  }
  sub_182C690(v2, a1 + 16, a2 + 4);
  v5 = qword_1C7F2C0;
  if ( (a2[9] & 1) == 0 )
  {
LABEL_4:
    v6 = a2[8];
    *(_BYTE *)(a1 + 36) &= ~1u;
    *(_DWORD *)(a1 + 32) = v6;
    if ( (a2[13] & 1) == 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  sub_182C690(v5, a1 + 32, a2 + 8);
  if ( (a2[13] & 1) == 0 )
  {
LABEL_5:
    v7 = a2[12];
    v8 = qword_1C7F2C0;
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = v7;
    if ( (a2[17] & 1) == 0 )
      goto LABEL_6;
LABEL_12:
    sub_182C690(v8, a1 + 64, a2 + 16);
    if ( (a2[21] & 1) == 0 )
      goto LABEL_7;
    return sub_182C690(v8, a1 + 80, a2 + 20);
  }
LABEL_11:
  sub_182C690(v5, a1 + 48, a2 + 12);
  v8 = qword_1C7F2C0;
  if ( (a2[17] & 1) != 0 )
    goto LABEL_12;
LABEL_6:
  v9 = a2[16];
  *(_BYTE *)(a1 + 68) &= ~1u;
  *(_DWORD *)(a1 + 64) = v9;
  if ( (a2[21] & 1) == 0 )
  {
LABEL_7:
    result = (unsigned int)a2[20];
    *(_BYTE *)(a1 + 84) &= ~1u;
    *(_DWORD *)(a1 + 80) = result;
    return result;
  }
  return sub_182C690(v8, a1 + 80, a2 + 20);
}

