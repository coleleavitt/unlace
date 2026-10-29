unsigned __int64 __fastcall sub_7A6770(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        char a9,
        char a10,
        __int64 a11)
{
  __int64 v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rbx

  v11 = a2;
  if ( a2 )
  {
    v11 = a2 + 64;
    v12 = sub_79A610(184, a1, a2 + 64, 0);
    v13 = a6;
    v14 = a5;
  }
  else
  {
    v12 = sub_79A610(184, a1, 0, 0);
    v14 = a5;
    v13 = a6;
  }
  v15 = v12;
  sub_77D6F0(v12, 0x22u, (__int64)a1, v11, a3, a4, v14, v13, 0, a7, a8, a10, a11);
  *(_OWORD *)(v15 + 168) = 0;
  *(_QWORD *)v15 = &off_49F5518;
  *(_BYTE *)(v15 + 29) = (2 * (a9 & 1)) | *(_BYTE *)(v15 + 29) & 0xFD;
  return v15;
}

