__int64 __fastcall sub_3EA510(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  _DWORD *v6; // r13
  int v7; // eax
  int v8; // eax
  __int64 v9; // rsi
  int v10; // eax
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  int v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v12 = 0x800000000LL;
  v13 = nullptr;
  v5 = (_QWORD *)j__qalloc_or_throw(32, a2, a3, a4);
  *v5 = 0xFFFFFFFF00000000LL;
  v5[1] = 0;
  v5[2] = 0xFFFFFFFF00000000LL;
  v5[3] = 0;
  v6 = *(_DWORD **)(a1 + 832);
  LOBYTE(v12) = 14;
  v7 = v6[97];
  v13 = v5;
  v14 = 0x400000001LL;
  v15 = v7;
  sub_125180((__int64)v5, (unsigned __int8 *)&v14);
  sub_11CDA0((__int64)&v14);
  v8 = v6[95];
  v14 = 0x400000001LL;
  v15 = v8;
  sub_125180((__int64)(v5 + 2), (unsigned __int8 *)&v14);
  sub_11CDA0((__int64)&v14);
  v9 = *(unsigned int *)(a2 + 32);
  v10 = v6[140];
  v14 = 0x800000001LL;
  v15 = v10;
  sub_1D6450(a1, v9, (unsigned __int8 *)&v12, nullptr, (unsigned __int8 *)&v14);
  sub_11CDA0((__int64)&v14);
  sub_11CDA0((__int64)&v12);
  return 0;
}
