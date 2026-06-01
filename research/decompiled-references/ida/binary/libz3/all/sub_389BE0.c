__int64 __fastcall sub_389BE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  _BYTE v7[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  sub_1858590(v7, a2);
  sub_1862300(v7, "som", 1);
  v9[0] = 0;
  v2 = sub_388500(a1, (__int64)v9);
  v8 = 0;
  v3 = sub_D156B0(a1, (unsigned int)&v8);
  v4 = sub_EE8E00(v3, v7);
  v5 = sub_EE7A70(v4, v2);
  sub_18572D0(&v8);
  sub_18572D0(v9);
  sub_18572D0(v7);
  return v5;
}

