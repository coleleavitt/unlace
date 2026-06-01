__int64 __fastcall sub_2BD150(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // rbp
  int v4; // r15d
  int v5; // r14d
  int v6; // eax
  __int64 v7; // rax
  int v9; // [rsp+8h] [rbp-50h]
  int v10; // [rsp+10h] [rbp-48h]
  int v11; // [rsp+18h] [rbp-40h]

  v1 = sub_26B780(a1, 8);
  v2 = sub_26B780(a1, 7);
  v3 = sub_26B780(a1, 6);
  v4 = sub_26B780(a1, 5);
  v5 = sub_26B780(a1, 4);
  v11 = sub_26B780(a1, 3);
  v10 = sub_26B5C0(a1, 2);
  v9 = sub_26B590(a1, 1);
  v6 = sub_26B5C0(a1, 0);
  v7 = Z3_mk_list_sort(v6, v9, v10, v11, v5, v4, v3, v2, v1);
  return sub_26B3D0(a1, v7);
}

