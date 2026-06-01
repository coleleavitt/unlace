unsigned __int64 __fastcall sub_EBDF10(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  _QWORD v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v10 = sub_EBD890((__int64 *)(a1 + 2352), 8 * a8 + 32, 3u);
  *(_DWORD *)v10 = a2;
  v11 = v10;
  *(_DWORD *)(v10 + 12) = a3;
  *(_DWORD *)(v10 + 4) = a5;
  *(_DWORD *)(v10 + 8) = 6;
  *(_DWORD *)(v10 + 16) = a8;
  *(_DWORD *)(v10 + 20) = a4;
  v15[0] = a7;
  v15[1] = a8;
  sub_EB8020((__int64)v15, (char *)(v10 + 24));
  *(_QWORD *)(v11 + 8LL * *(unsigned int *)(v11 + 16) + 24) = a6;
  return v11;
}
