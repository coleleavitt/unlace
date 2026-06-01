__int64 __fastcall sub_15FB7C0(__int64 *a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  _QWORD *v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  _QWORD *v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rbp

  v1 = *(_QWORD **)(*a1 + 248);
  v2 = sub_A63CE0(v1);
  v3 = sub_A72BF0((__int64)v1, v2);
  v4 = *(_QWORD **)(*a1 + 248);
  v5 = sub_A63D00(v4);
  v6 = sub_A72BF0((__int64)v4, v5);
  v7 = *(_QWORD **)(*a1 + 248);
  v8 = sub_A70970(v7);
  v9 = sub_A72BF0((__int64)v7, v8);
  v10 = *(_QWORD **)(*a1 + 248);
  v11 = sub_A63D20(v10);
  v12 = sub_A72BF0((__int64)v10, v11);
  sub_15FB740(*a1, "atomic_size_t", 0xDu, v3);
  sub_15FB740(*a1, "atomic_intptr_t", 0xFu, v6);
  sub_15FB740(*a1, "atomic_uintptr_t", 0x10u, v9);
  return sub_15FB740(*a1, "atomic_ptrdiff_t", 0x10u, v12);
}
