unsigned __int64 __fastcall sub_BAF1C0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v10 = sub_B902D0(128, a1, a2, 0);
  sub_BAEF70(v10, (__int64)a1, a2, a3, a4, a5, a7, a6, a8);
  *(_QWORD *)(v10 + 120) = *(_QWORD *)(v10 + 120) & 0xFFFFFFFFFFFFFFFBLL
                         | (4LL * (((*(_BYTE *)(a1[290] + 21LL) >> 1) ^ 1) & 1));
  sub_A82070((__int64)a1, v10, a6, v11, v12, v13);
  return v10;
}
