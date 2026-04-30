__int64 *__fastcall sub_5947B4(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 *result; // rax
  __int64 v11; // [rsp+10h] [rbp-50h] BYREF
  __int64 *v12; // [rsp+18h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int64 v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+48h] [rbp-18h]

  v12 = a1;
  v11 = a2;
  v16 = sub_59511A(a1, 1, "vector::_M_realloc_insert");
  v13 = sub_5939A6((__int64)a1);
  v15 = sub_5951E3(&v11, &v13);
  v14 = sub_595226(v12, v16);
  v17 = v14;
  v3 = sub_59476D(a3);
  sub_59477B((__int64)v12, 8 * v15 + v14, v3);
  v17 = 0;
  v4 = sub_5942B6((__int64)v12);
  v5 = *(_QWORD *)sub_59409E((__int64)&v11);
  v17 = sub_595259(*v12, v5, v14, v4) + 8;
  v6 = sub_5942B6((__int64)v12);
  v7 = v12[1];
  v8 = (_QWORD *)sub_59409E((__int64)&v11);
  v17 = sub_595259(*v8, v7, v17, v6);
  sub_5942B6((__int64)v12);
  sub_5942C4(*v12, v12[1]);
  sub_594738((__int64)v12, *v12, (v12[2] - *v12) >> 3);
  *v12 = v14;
  v12[1] = v17;
  result = v12;
  v12[2] = v14 + 8 * v16;
  return result;
}
