__int64 __fastcall sub_385BE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+8h] [rbp-20h] BYREF

  sub_1858590(&v7, a2);
  sub_1862300(&v7, "use_ls", 1);
  sub_1862370(&v7, "ls_time", a3);
  v8[0] = 0;
  v4 = sub_388500(a1, v8);
  v5 = sub_EE8E00(v4, &v7);
  sub_18572D0(v8);
  sub_18572D0(&v7);
  return v5;
}

