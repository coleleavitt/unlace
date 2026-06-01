unsigned __int64 __fastcall sub_EBEEE0(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  _QWORD v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v10 = sub_EBD890((__int64 *)(a1 + 2352), 8 * a8 + 40, 3u);
  *(_DWORD *)v10 = a3;
  v11 = v10;
  *(_DWORD *)(v10 + 4) = a5;
  *(_DWORD *)(v10 + 8) = 99;
  *(_DWORD *)(v10 + 12) = a4;
  *(_DWORD *)(v10 + 16) = a8;
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = 103;
  v15[0] = a7;
  v15[1] = a8;
  sub_EB8020((__int64)v15, (char *)(v10 + 40));
  *(_QWORD *)(v11 + 24) = a6;
  *(_DWORD *)(v11 + 32) = a2;
  return v11;
}
