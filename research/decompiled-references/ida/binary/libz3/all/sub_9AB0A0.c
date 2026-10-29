__int64 __fastcall sub_9AB0A0(__int64 a1, __int64 a2, unsigned int a3)
{
  int *v3; // rax
  int *v4; // rbp
  void *v5; // r13
  int v6; // eax
  void *v7; // r12
  int v8; // eax

  v3 = sub_9AA900(a2 - 56, a3);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v4 = v3;
  *(_QWORD *)(a1 + 16) = 1;
  v5 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  if ( (v3[1] & 1) != 0 )
  {
    sub_182C690(v5, a1 + 32, v3);
    if ( (v4[5] & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = *v3;
    if ( (v3[5] & 1) == 0 )
    {
LABEL_3:
      v6 = v4[4];
      *(_BYTE *)(a1 + 52) &= ~1u;
      *(_DWORD *)(a1 + 48) = v6;
      goto LABEL_4;
    }
  }
  sub_182C690(v5, a1 + 48, v4 + 4);
LABEL_4:
  *(_QWORD *)(a1 + 64) = 0;
  v7 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  if ( (v4[9] & 1) != 0 )
    sub_182C690(v7, a1 + 64, v4 + 8);
  else
    *(_DWORD *)(a1 + 64) = v4[8];
  if ( (v4[13] & 1) != 0 )
  {
    sub_182C690(v7, a1 + 80, v4 + 12);
  }
  else
  {
    v8 = v4[12];
    *(_BYTE *)(a1 + 84) &= ~1u;
    *(_DWORD *)(a1 + 80) = v8;
  }
  return a1;
}

