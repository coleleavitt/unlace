__int64 *__fastcall sub_5A57F4(__int64 *a1, __int64 a2, __int64 a3)
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
  v17 = sub_5A6516(a1, 1, "vector::_M_realloc_insert");
  v14 = sub_5A65E0(a1);
  v16 = sub_5A6609(&v12, &v14);
  v15 = sub_5A664C(v13, v17);
  v18 = v15;
  v3 = sub_5A649B(a3);
  sub_5A5790((__int64)v13, 16 * v16 + v15, v3);
  v18 = 0;
  v4 = sub_5A56AE((__int64)v13);
  v5 = *(_QWORD *)sub_5A6680(&v12);
  v18 = sub_5A668E(v13[3], v5, v15, v4) + 16;
  v6 = sub_5A56AE((__int64)v13);
  v7 = v13[4];
  v8 = (_QWORD *)sub_5A6680(&v12);
  v18 = sub_5A668E(*v8, v7, v18, v6);
  v9 = sub_5A56AE((__int64)v13);
  sub_5A56BC(v13[3], v13[4], v9);
  sub_5A6428(v13, v13[3], (v13[5] - v13[3]) >> 4);
  v13[3] = v15;
  v13[4] = v18;
  result = v13;
  v13[5] = v15 + 16 * v17;
  return result;
}
