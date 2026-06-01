__int64 __fastcall sub_3EA510(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _DWORD *v4; // r13
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  int v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v10 = 0x800000000LL;
  v11 = nullptr;
  v3 = (_QWORD *)j__qalloc_or_throw();
  *v3 = 0xFFFFFFFF00000000LL;
  v3[1] = 0;
  v3[2] = 0xFFFFFFFF00000000LL;
  v3[3] = 0;
  v4 = *(_DWORD **)(a1 + 832);
  LOBYTE(v10) = 14;
  v5 = v4[97];
  v11 = v3;
  v12 = 0x400000001LL;
  v13 = v5;
  sub_125180((__int64)v3, (unsigned __int8 *)&v12);
  sub_11CDA0((__int64)&v12);
  v6 = v4[95];
  v12 = 0x400000001LL;
  v13 = v6;
  sub_125180((__int64)(v3 + 2), (unsigned __int8 *)&v12);
  sub_11CDA0((__int64)&v12);
  v7 = *(_DWORD *)(a2 + 32);
  v8 = v4[140];
  v12 = 0x800000001LL;
  v13 = v8;
  sub_1D6450(a1, v7, (unsigned __int8 *)&v10, nullptr, (unsigned __int8 *)&v12);
  sub_11CDA0((__int64)&v12);
  sub_11CDA0((__int64)&v10);
  return 0;
}
