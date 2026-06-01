_UNKNOWN **__fastcall sub_7A2EA0(
        _QWORD *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbp
  _UNKNOWN **result; // rax

  v9 = a9;
  sub_78A3D0((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9);
  result = &off_49F5330;
  *a1 = &off_49F5330;
  if ( a9 )
    v9 = *(_QWORD *)(a9 + 128);
  a1[16] = v9;
  a1[17] = 0;
  return result;
}

