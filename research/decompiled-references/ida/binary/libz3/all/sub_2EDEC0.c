__int64 __fastcall sub_2EDEC0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rax
  void *v6; // r14
  __int64 v7; // r12
  int v8; // eax

  v5 = *(_QWORD *)(a2 + 528);
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  v6 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  v7 = v5 + 104LL * a3;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
  {
    sub_182C690(v6, a1, a4);
    if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)a1 = *(_DWORD *)a4;
    if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
    {
LABEL_3:
      v8 = *(_DWORD *)(a4 + 16);
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v8;
      goto LABEL_4;
    }
  }
  sub_182C690(v6, a1 + 16, a4 + 16);
LABEL_4:
  if ( *(_BYTE *)(v7 + 80) )
    sub_1831620(qword_1C7F2C0, a1);
  sub_2FC4A0(qword_1C7F2C0, a1, v7 + 48, a1);
  return a1;
}

