unsigned __int64 __fastcall sub_B97D00(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        char a10,
        int a11,
        __int64 a12)
{
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // rbp

  v13 = a2;
  if ( a2 )
  {
    v13 = a2 + 64;
    v14 = sub_B902D0(168, a1, a2 + 64, 0);
    v15 = a6;
    v16 = a5;
  }
  else
  {
    v14 = sub_B902D0(168, a1, 0, 0);
    v16 = a5;
    v15 = a6;
  }
  v17 = v14;
  sub_B7C930(v14, 0x23u, (__int64)a1, v13, a3, a4, v16, v15, a7, a8, a9, a10, a12);
  *(_QWORD *)v17 = &off_2C02D50;
  if ( a11 )
    *(_DWORD *)(v17 + 140) = a11;
  return v17;
}
