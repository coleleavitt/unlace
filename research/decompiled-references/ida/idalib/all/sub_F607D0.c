__int64 __fastcall sub_F607D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // edx
  _DWORD v7[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(unsigned __int16 *)(a1 + 22);
  v7[0] = 9;
  v8 = v3;
  v7[1] = v5;
  return sub_F606D0(a2, v4 & 0xFFFFFFFFFFFFFFF8LL, *(unsigned __int16 *)(a1 + 20), (v4 >> 2) & 1, (__int64)v7);
}
