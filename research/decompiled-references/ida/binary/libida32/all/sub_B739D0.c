unsigned __int64 __fastcall sub_B739D0(
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
  unsigned __int64 v14; // rbx

  v14 = sub_B6C590(192, a1, a2, 0);
  sub_B58BF0(v14, 0x27u, (__int64)a1, a2, a3, a5, a6, a7, 0, 0, 0, 0, a11);
  *(_QWORD *)(v14 + 176) = a4;
  *(_QWORD *)v14 = &off_2BD8CD8;
  *(_QWORD *)(v14 + 184) = (2LL * a13) | a12 & 0xFFFFFFFFFFFFFFF9LL;
  *(_QWORD *)(v14 + 168) = a9;
  if ( a8 )
    *(_DWORD *)(v14 + 140) = a8;
  *(_BYTE *)(v14 + 85) = a10 & 3 | *(_BYTE *)(v14 + 85) & 0xFC;
  return v14;
}

