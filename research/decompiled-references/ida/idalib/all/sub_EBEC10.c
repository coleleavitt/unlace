unsigned __int64 __fastcall sub_EBEC10(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _QWORD v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v11 = sub_EBD890((__int64 *)(a1 + 2352), 8 * a8 + 32, 3u);
  *(_DWORD *)(v11 + 4) = a5;
  v12 = v11;
  *(_DWORD *)(v11 + 12) = a3;
  *(_DWORD *)v11 = a2;
  *(_DWORD *)(v11 + 8) = 4;
  *(_QWORD *)(v11 + 16) = (unsigned int)a8;
  *(_QWORD *)(v11 + 8LL * (unsigned int)a8 + 24) = a6;
  v14[0] = a7;
  v14[1] = a8;
  sub_EB8020((__int64)v14, (char *)(v11 + 24));
  return v12;
}
