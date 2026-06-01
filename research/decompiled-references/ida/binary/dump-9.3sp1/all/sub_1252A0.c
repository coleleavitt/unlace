unsigned __int64 __fastcall sub_1252A0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // [rsp+0h] [rbp-48h] BYREF
  int v16; // [rsp+4h] [rbp-44h]
  int v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  sub_11CDA0(a1);
  *(_DWORD *)(a1 + 4) = 2 * a4;
  v15 = 1;
  v8 = (_QWORD *)j__qalloc_or_throw(32, a2, v6, v7);
  v17 = a2;
  *v8 = 0xFFFFFFFF00000000LL;
  v8[1] = 0;
  v8[2] = 0xFFFFFFFF00000000LL;
  v8[3] = 0;
  *(_BYTE *)a1 = 14;
  *(_QWORD *)(a1 + 8) = v8;
  v16 = a4;
  sub_11CDA0((__int64)v8);
  sub_123A40((__int64)v8, (unsigned __int8 *)&v15, v9, v10);
  sub_11CDA0((__int64)&v15);
  v11 = *(_QWORD *)(a1 + 8);
  v17 = a3;
  v15 = 1;
  v11 += 16;
  v16 = a4;
  sub_11CDA0(v11);
  sub_123A40(v11, (unsigned __int8 *)&v15, v12, v13);
  sub_11CDA0((__int64)&v15);
  return v18 - __readfsqword(0x28u);
}
