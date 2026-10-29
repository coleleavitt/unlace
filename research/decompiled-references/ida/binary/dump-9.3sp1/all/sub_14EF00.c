unsigned __int64 __fastcall sub_14EF00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        int a6)
{
  __int64 v8; // rbx
  unsigned __int64 result; // rax
  int v11; // [rsp+14h] [rbp-44h]

  v11 = a3;
  v8 = j__qalloc_or_throw(80, a2, a3, (__int64)a4);
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 72) = 0;
  sub_330970(v8, a2);
  *(_DWORD *)v8 = v11;
  sub_125180(v8 + 32, a4);
  sub_125180(v8 + 48, a5);
  *(_DWORD *)(v8 + 68) = a6;
  result = sub_11CDA0(a1);
  *(_BYTE *)a1 = 4;
  *(_QWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 4) = a6;
  return result;
}
