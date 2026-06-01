__int64 __fastcall sub_8F5730(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edx

  v2 = sub_A1A5A0(a2, 24);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(a1 + 8) = v3;
  *(_QWORD *)a1 = *(_QWORD *)v2;
  *(_BYTE *)(a1 + 12) = *(_BYTE *)(v2 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v2 + 16);
  sub_A1A5E0(a2, 24);
  return a1;
}

