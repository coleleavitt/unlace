_QWORD *__fastcall sub_3F0E50(
        __int64 *a1,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        char a6)
{
  _QWORD *v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r14

  v8 = (_QWORD *)j__qalloc_or_throw(80);
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
  sub_32ADE0((__int64)v8, v9);
  *(_DWORD *)v10 = a2;
  sub_1205C0(v11, a3);
  sub_1205C0(v12, a4);
  sub_1205C0((__int64)(v10 + 8), a5);
  if ( a6 || a2 > 62 )
    *((_DWORD *)v10 + 1) |= 0x10u;
  sub_9E5A0(a1[23], v10, a1[24]);
  a1[24] = (__int64)v10;
  sub_3F0B40(a1, v10);
  return v10;
}
