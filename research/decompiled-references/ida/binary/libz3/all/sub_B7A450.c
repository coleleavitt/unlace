__int64 __fastcall sub_B7A450(__int64 a1, __int64 a2)
{
  void *v3; // r13
  int v4; // eax
  void *v5; // rdi

  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  v3 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    sub_182C690(v3, a1, a2);
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
      goto LABEL_3;
LABEL_6:
    sub_182C690(v3, a1 + 16, a2 + 16);
    goto LABEL_4;
  }
  *(_DWORD *)a1 = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
    goto LABEL_6;
LABEL_3:
  v4 = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = v4;
LABEL_4:
  v5 = qword_1C7F2C0;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  sub_1831620(v5, a1);
  *(_DWORD *)(a1 + 32) = -*(_DWORD *)(a1 + 32);
  return a1;
}

