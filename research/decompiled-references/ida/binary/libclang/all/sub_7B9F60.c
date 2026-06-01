unsigned __int64 __fastcall sub_7B9F60(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  unsigned __int64 v10; // rbx

  v10 = sub_79A610(128, a1, a2, 0);
  sub_7B9C10(v10, (__int64)a1, a2, a3, a4, a5, a7, a6, a8);
  *(_QWORD *)(v10 + 120) = *(_QWORD *)(v10 + 120) & 0xFFFFFFFFFFFFFFFBLL | (4LL * (*(char *)(a1[270] + 18LL) >= 0LL));
  sub_6C9720((__int64)a1, v10, a6);
  return v10;
}

