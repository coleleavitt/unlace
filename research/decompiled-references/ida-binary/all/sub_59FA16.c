__int64 *__fastcall sub_59FA16(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 *result; // rax
  __int64 v12; // [rsp+10h] [rbp-50h] BYREF
  __int64 *v13; // [rsp+18h] [rbp-48h]
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]

  v13 = a1;
  v12 = a2;
  v17 = sub_59FD02(a1, 1, "vector::_M_realloc_insert");
  v14 = sub_59FE8A(a1);
  v16 = sub_59FEB3(&v12, &v14);
  v15 = sub_59DA64((__int64)v13, v17);
  v18 = v15;
  v3 = sub_59FE1F(a3);
  sub_59F9B3((__int64)v13, 4 * v16 + v15, v3);
  v18 = 0;
  v4 = sub_59C4EA((__int64)v13);
  v5 = *(_QWORD *)sub_59FEF6(&v12);
  v18 = sub_59FDCB(v13[3], v5, v15, v4) + 4;
  v6 = sub_59C4EA((__int64)v13);
  v7 = v13[4];
  v8 = (_QWORD *)sub_59FEF6(&v12);
  v18 = sub_59FDCB(*v8, v7, v18, v6);
  v9 = sub_59C4EA((__int64)v13);
  sub_59C4F8(v13[3], v13[4], v9);
  sub_59D192((__int64)v13, v13[3], (v13[5] - v13[3]) >> 2);
  v13[3] = v15;
  v13[4] = v18;
  result = v13;
  v13[5] = v15 + 4 * v17;
  return result;
}
