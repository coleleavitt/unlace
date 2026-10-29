__int64 __fastcall sub_B74CC0(__int64 a1, __int64 a2, __int64 a3, char a4, int a5, __int64 a6, int a7, int a8)
{
  *(_QWORD *)(a1 + 8) = a6;
  *(_QWORD *)a1 = a3 & 0xFFFFFFFFFFFFFFF9LL;
  *(_DWORD *)(a1 + 16) = a8;
  *(_DWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 24) = a7;
  *(_BYTE *)(a1 + 28) = (2 * (a4 & 1)) | *(_BYTE *)(a1 + 28) & 0xFD;
  *(_WORD *)(a1 + 28) &= 2u;
  return 2 * (a4 & 1u);
}

