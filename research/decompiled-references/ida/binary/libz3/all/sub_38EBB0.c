__int64 __fastcall sub_38EBB0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v13; // [rsp+0h] [rbp-68h]
  __int64 v14; // [rsp+0h] [rbp-68h]
  __int64 v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+18h] [rbp-50h] BYREF
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+28h] [rbp-40h] BYREF

  v18[0] = 0;
  v13 = sub_388500(a1, (__int64)v18);
  v17 = 0;
  v15 = sub_388500(a1, (__int64)&v17);
  v16 = 0;
  v3 = sub_388500(a1, (__int64)&v16);
  v4 = sub_713730(a1, a2);
  v5 = sub_EE9140(v4, v3);
  v6 = sub_C98CA0();
  v7 = sub_EE8F50(v6, v5, v15);
  v8 = sub_EF4350();
  v9 = sub_EE8F50(v8, v7, v13);
  v14 = sub_E664D0(a1, a2);
  v10 = sub_38E530(a1, 0);
  v11 = sub_EE7AC0(v10, v14, v9);
  sub_18572D0(&v16);
  sub_18572D0(&v17);
  sub_18572D0(v18);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 112LL))(v11, a2);
  return v11;
}

