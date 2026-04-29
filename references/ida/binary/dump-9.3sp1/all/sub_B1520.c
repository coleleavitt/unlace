__int64 __fastcall sub_B1520(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 result; // rax
  int v10; // r14d
  _QWORD *v11; // r13
  __int64 v12; // [rsp-10h] [rbp-38h]
  __int64 v13; // [rsp-8h] [rbp-30h]

  result = sub_B0800(a1, a2, a3, a4, a5, a6, a7, a8);
  if ( !(_BYTE)result )
  {
    v10 = 2 * *(_DWORD *)(a7 + 4);
    v11 = (_QWORD *)j__qalloc_or_throw(32, a2, v12, v13);
    *v11 = 0xFFFFFFFF00000000LL;
    v11[1] = 0;
    v11[2] = 0xFFFFFFFF00000000LL;
    v11[3] = 0;
    sub_125180(v11);
    sub_125180(v11 + 2);
    result = sub_11CDA0(a3);
    *(_BYTE *)a3 = 14;
    *(_QWORD *)(a3 + 8) = v11;
    *(_DWORD *)(a3 + 4) = v10;
  }
  return result;
}
