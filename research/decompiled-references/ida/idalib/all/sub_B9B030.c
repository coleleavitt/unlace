unsigned __int64 __fastcall sub_B9B030(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbx

  v12 = a6 & 0xFFFFFFFFFFFFFFFBLL;
  v13 = sub_B902D0(88, a1, a2, 0);
  sub_B725B0(v13, 0x30u, a2, a3);
  *(_QWORD *)(v13 + 40) = a4;
  *(_QWORD *)(v13 + 48) = a5;
  *(_DWORD *)(v13 + 64) = a7;
  *(_QWORD *)(v13 + 56) = v12;
  *(_QWORD *)v13 = &off_2C03680;
  *(_QWORD *)(v13 + 72) = a8;
  *(_QWORD *)(v13 + 80) = a9;
  return v13;
}
