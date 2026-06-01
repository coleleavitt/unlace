__int64 __fastcall sub_379730(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rbp
  void (*v30)(); // rax
  __int64 v32; // [rsp+0h] [rbp-58h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  _BYTE v34[64]; // [rsp+18h] [rbp-40h] BYREF

  sub_1858590(v34, a2);
  sub_1862300(v34, "arith_lhs", 1);
  sub_1862300(v34, "elim_and", 1);
  v4 = sub_D968B0(a1, a2);
  v5 = sub_EE90C0(v4);
  v6 = sub_EE9080(v5);
  v7 = sub_D156B0(a1, a2);
  v8 = sub_EE8E00(v7, v34);
  v9 = sub_CF56E0(a1, a2);
  v32 = sub_37B360(a1, a2, v10, v11, v12, v13);
  v33 = sub_CF56E0(a1, a2);
  v14 = sub_D156B0(a1, (unsigned int)v34);
  v15 = sub_EE7D40(v14, v33, v32, v9, v8, v6);
  v16 = sub_388500(a1, a2);
  v17 = sub_385F20(a1, a2);
  v18 = sub_186B270(0x10u);
  *(_DWORD *)(v18 + 8) = 0;
  *(_QWORD *)v18 = off_1C4D900;
  v19 = sub_EE8F50(v18, v17, v16);
  v20 = sub_68D4D0(a1, a2);
  v21 = sub_388500(a1, a2);
  v22 = sub_EF4290();
  v23 = sub_EE8F50(v22, v21, v20);
  v24 = sub_EF40F0();
  v25 = sub_EE8F50(v24, v23, v19);
  v26 = sub_D156B0(a1, a2);
  v27 = sub_EE8E00(v26, v34);
  v28 = sub_769490(a1, a2);
  v29 = sub_EE7B50(v15, v28, v27, v25);
  v30 = *(void (**)())(*(_QWORD *)v29 + 112LL);
  if ( v30 != nullsub_93 )
    ((void (__fastcall *)(__int64, __int64))v30)(v29, a2);
  sub_18572D0(v34);
  return v29;
}

