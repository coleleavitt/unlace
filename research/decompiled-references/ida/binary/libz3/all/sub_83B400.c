__int64 __fastcall sub_83B400(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rax
  bool v5; // al
  void *v6; // r14
  int v7; // eax

  v2 = *a2;
  v3 = a2[1] + 12LL * *((unsigned int *)a2 + 4);
  if ( *a2 )
  {
    v4 = *(unsigned int *)(v2 - 4);
    v2 += 40 * v4;
    v5 = (_DWORD)v4 != 0;
  }
  else
  {
    v5 = 0;
  }
  *(_BYTE *)a1 = v5;
  *(_BYTE *)(a1 + 12) &= 0xFCu;
  *(_BYTE *)(a1 + 28) &= 0xFCu;
  *(_DWORD *)(a1 + 8) = 0;
  v6 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 32) = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    sub_182C690(v6, a1 + 8, &qword_1C7F280);
    if ( (qword_1C7F290 & 0x100000000LL) == 0 )
      goto LABEL_5;
LABEL_8:
    sub_182C690(v6, a1 + 24, &qword_1C7F290);
    goto LABEL_6;
  }
  *(_DWORD *)(a1 + 8) = qword_1C7F280;
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
    goto LABEL_8;
LABEL_5:
  v7 = qword_1C7F290;
  *(_BYTE *)(a1 + 28) &= ~1u;
  *(_DWORD *)(a1 + 24) = v7;
LABEL_6:
  *(_QWORD *)(a1 + 40) = v2;
  *(_QWORD *)(a1 + 48) = v3;
  *(_QWORD *)(a1 + 56) = v3;
  return a1;
}

