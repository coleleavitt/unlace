_QWORD *__fastcall sub_414950(
        __int64 *a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        char a6)
{
  int v7; // r12d
  _QWORD *v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d

  v7 = a2;
  v8 = (_QWORD *)j__qalloc_or_throw(80, a2, (__int64)a3, (__int64)a4);
  v9 = a1[8];
  v10 = v8;
  v11 = (__int64)(v8 + 4);
  v12 = (__int64)(v8 + 6);
  v8[5] = 0;
  v8[4] = 0xFFFFFFFF00000000LL;
  v8[6] = 0xFFFFFFFF00000000LL;
  v8[7] = 0;
  v8[8] = 0xFFFFFFFF00000000LL;
  v8[9] = 0;
  sub_330970((__int64)v8, v9);
  *(_DWORD *)v10 = v7;
  sub_125180(v11, a3);
  sub_125180(v12, a4);
  sub_125180((__int64)(v10 + 8), a5);
  if ( a6 || v7 > 62 )
    *((_DWORD *)v10 + 1) |= 0x10u;
  sub_A3160(a1[23], v10, a1[24]);
  a1[24] = (__int64)v10;
  sub_414640(a1, v10, v13, v14, v15, v16);
  return v10;
}
