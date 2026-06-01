unsigned __int64 __fastcall sub_B9AB50(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned __int8 a7)
{
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx

  v9 = a4 & 0xFFFFFFFFFFFFFFFDLL;
  v10 = sub_B902D0(64, a1, a2, 0);
  sub_B725B0(v10, 9u, a2, a3);
  *(_QWORD *)(v10 + 48) = a5;
  *(_QWORD *)(v10 + 40) = (2LL * a7) | v9;
  *(_DWORD *)(v10 + 56) = a6;
  *(_QWORD *)v10 = &off_2C03528;
  return v10;
}
