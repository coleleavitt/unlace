__int64 __fastcall sub_38EA00(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+18h] [rbp-60h]
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+38h] [rbp-40h] BYREF

  v16 = 0;
  sub_1862460(&v16, "qi.cost", "0");
  v18[0] = 0;
  v14 = sub_388500(a1, (__int64)v18);
  v3 = sub_EE4EC0(a1, v18);
  v17 = 0;
  v4 = sub_388500(a1, (__int64)&v17);
  v5 = sub_EE8E00(v4, &v16);
  v15 = sub_EF3CC0(128.0);
  v6 = sub_EF3C90();
  v7 = sub_EF3F90(v6, v15);
  v8 = sub_EE9010(v7);
  v9 = sub_EE7AC0(v8, v5, v3);
  v10 = sub_EE9140(v9, v14);
  v11 = sub_38E530(a1, 1);
  v12 = sub_EE7A70(v11, v10);
  sub_18572D0(&v17);
  sub_18572D0(v18);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 112LL))(v12, a2);
  sub_18572D0(&v16);
  return v12;
}

