__int64 __fastcall sub_D0AF80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // dl

  v2 = sub_E21760(a2, 24);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(v2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)v2;
  v3 = *(_BYTE *)(v2 + 12);
  *(_DWORD *)(v2 + 8) = 0;
  LODWORD(v2) = *(_DWORD *)(v2 + 16);
  *(_BYTE *)(a1 + 12) = v3;
  *(_DWORD *)(a1 + 16) = v2;
  sub_E21790(a2, 24);
  return a1;
}
