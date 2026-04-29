__int64 __fastcall sub_3DF8A0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _DWORD *v4; // r13
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // r9d
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  int v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v11 = 0x800000000LL;
  v12 = 0;
  v3 = (_QWORD *)j__qalloc_or_throw();
  *v3 = 0xFFFFFFFF00000000LL;
  v3[1] = 0;
  v3[2] = 0xFFFFFFFF00000000LL;
  v3[3] = 0;
  v4 = *(_DWORD **)(a1 + 832);
  LOBYTE(v11) = 14;
  v5 = v4[97];
  v12 = v3;
  v13 = 0x400000001LL;
  v14 = v5;
  sub_122C80((__int64)v3, (unsigned __int8 *)&v13);
  sub_11A960((__int64)&v13);
  v6 = v4[95];
  v13 = 0x400000001LL;
  v14 = v6;
  sub_122C80((__int64)(v3 + 2), (unsigned __int8 *)&v13);
  sub_11A960((__int64)&v13);
  v7 = *(_DWORD *)(a2 + 32);
  v8 = v4[140];
  v13 = 0x800000001LL;
  v14 = v8;
  sub_1D38D0(a1, v7, (unsigned int)&v11, 0, (unsigned int)&v13, v9, v11, (__int64)v3);
  sub_11A960((__int64)&v13);
  sub_11A960((__int64)&v11);
  return 0;
}
