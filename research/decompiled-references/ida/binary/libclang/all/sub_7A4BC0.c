unsigned __int64 __fastcall sub_7A4BC0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        unsigned __int8 a13)
{
  unsigned __int64 v14; // r15

  v14 = sub_79A610(192, a1, a2, 0);
  sub_77D6F0(v14, 0x25u, (__int64)a1, a2, a3, a5, a6, a7, 0, 0, 0, 0, a11);
  *(_QWORD *)(v14 + 176) = a4;
  *(_QWORD *)v14 = &off_49F53B0;
  *(_QWORD *)(v14 + 168) = a9;
  *(_QWORD *)(v14 + 184) = a12 & 0xFFFFFFFFFFFFFFF9LL | (2LL * a13);
  if ( a8 )
    *(_DWORD *)(v14 + 140) = a8;
  *(_BYTE *)(v14 + 85) = *(_BYTE *)(v14 + 85) & 0xFC | a10 & 3;
  return v14;
}

