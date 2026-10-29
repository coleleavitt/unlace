__int64 __fastcall sub_2FC530(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // r14
  int v5; // eax

  v4 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182C690(v4, a1, a3);
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)a1 = *(_DWORD *)a3;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
    {
LABEL_3:
      v5 = *(_DWORD *)(a3 + 16);
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v5;
      goto LABEL_4;
    }
  }
  sub_182C690(v4, a1 + 16, a3 + 16);
LABEL_4:
  if ( *(_BYTE *)(a2 + 32) )
    sub_1831620(qword_1C7F2C0, a1);
  sub_2FC4A0((__int64)qword_1C7F2C0, a1, a2, a1);
  return a1;
}

