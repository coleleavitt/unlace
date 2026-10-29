unsigned __int64 __fastcall sub_E9B010(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r12
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v11 = sub_E99B50((__int64 *)(a1 + 2352), 8 * (a9 + a10) + 40, 3u);
  *(_DWORD *)v11 = a2;
  v12 = v11;
  *(_DWORD *)(v11 + 4) = a4;
  *(_DWORD *)(v11 + 8) = 29;
  *(_DWORD *)(v11 + 12) = a3;
  *(_DWORD *)(v11 + 16) = a9;
  *(_DWORD *)(v11 + 20) = a5;
  *(_DWORD *)(v11 + 32) = a10;
  *(_DWORD *)(v11 + 24) = a6;
  v18[1] = a9;
  v13 = v11 + 40;
  *(_DWORD *)(v11 + 28) = a7;
  v18[0] = a8;
  sub_E942E0((__int64)v18, (char *)(v11 + 40));
  if ( a10 )
    memset((void *)(v13 + 8LL * *(unsigned int *)(v12 + 16)), 0, 8LL * (a10 - 1) + 8);
  return v12;
}

