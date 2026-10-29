__int64 __fastcall sub_60A410(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // r12d
  int v7; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 64);
  v8 = __readfsqword(0x28u);
  v7 = a4;
  sub_79B440(a1, a2, v4, &v7, 4, 65);
  sub_79B440(a1, a2, v4, a3, 0, 83);
  v7 = *(_DWORD *)(a1 + 64) + 1;
  sub_60A150((_DWORD *)(a1 + 64), &v7, 165);
  v7 = *(_DWORD *)(a1 + 64);
  sub_79B440(a1, a2, 0xFFFFFFFFLL, &v7, 4, 65);
  return (int)v4;
}

