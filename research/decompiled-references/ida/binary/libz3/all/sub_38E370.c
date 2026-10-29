__int64 __fastcall sub_38E370(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // [rsp+8h] [rbp-70h]
  __int64 v17; // [rsp+8h] [rbp-70h]
  __int64 v18; // [rsp+10h] [rbp-68h]
  __int64 v19; // [rsp+18h] [rbp-60h]
  _BYTE v20[8]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v21[8]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v22[8]; // [rsp+38h] [rbp-40h] BYREF

  sub_1858590(v20, a2);
  sub_1862370(v20, "seed", 11);
  sub_1862300(v20, "factor", 0);
  sub_1858590(v21, a2);
  sub_1862370(v21, "seed", 13);
  sub_1862300(v21, "factor", 0);
  v3 = sub_388500(a1, a2);
  v4 = sub_6FFEB0(a1, a2);
  v16 = sub_EE9140(v4, v3);
  v5 = sub_77C950(a1, (unsigned int)v21);
  v6 = sub_77C950(a1, (unsigned int)v20);
  v7 = sub_EE8DB0(v6, 10000);
  v8 = sub_77C950(a1, a2);
  v9 = sub_EE8DB0(v8, 5000);
  v10 = sub_EE91D0(v9, v7, v5);
  v11 = sub_C98B80();
  v12 = sub_EE8F50(v11, v10, v16);
  v17 = sub_D156B0(a1, a2);
  v22[0] = 0;
  v18 = sub_E664D0(a1, v22);
  v19 = sub_CF56E0(a1, a2);
  v13 = sub_D156B0(a1, a2);
  v14 = sub_EE7C20(v13, v19, v18, v17, v12);
  sub_18572D0(v22);
  sub_18572D0(v21);
  sub_18572D0(v20);
  return v14;
}

