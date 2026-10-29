__int64 __fastcall sub_C23540(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int8 v2; // al
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  *a1 = *a1 & 7 | sub_A51390(a2);
  v2 = sub_A513A0(a2);
  v3 = *a1;
  *((_DWORD *)a1 + 4) = 0;
  *a1 = (4LL * v2) | v3 & 0xFFFFFFFFFFFFFFFBLL;
  v6[0] = sub_A513B0(a2);
  v6[1] = v4;
  return sub_C234C0((__int64)(a1 + 1), (__int64)v6);
}
