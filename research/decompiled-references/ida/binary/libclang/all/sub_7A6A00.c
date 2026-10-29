unsigned __int64 __fastcall sub_7A6A00(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        __int64 a9,
        char a10,
        int a11,
        __int64 a12)
{
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // rbx

  v13 = a2;
  if ( a2 )
  {
    v13 = a2 + 64;
    v14 = sub_79A610(176, a1, a2 + 64, 0);
    v15 = a6;
    v16 = a5;
  }
  else
  {
    v14 = sub_79A610(176, a1, 0, 0);
    v16 = a5;
    v15 = a6;
  }
  v17 = v14;
  sub_77D6F0(v14, 0x23u, (__int64)a1, v13, a3, a4, v16, v15, 0, a7, a8, a10, a12);
  if ( a11 )
    *(_DWORD *)(v17 + 140) = a11;
  *(_QWORD *)v17 = &off_49F5590;
  *(_QWORD *)(v17 + 168) = a9;
  return v17;
}

