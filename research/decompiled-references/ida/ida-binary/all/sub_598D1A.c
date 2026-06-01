__int64 *__fastcall sub_598D1A(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v21; // [rsp+10h] [rbp-60h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-58h]
  __int64 v23; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+28h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h]
  unsigned __int64 v26; // [rsp+38h] [rbp-38h]
  __int64 v27; // [rsp+40h] [rbp-30h]
  __int64 v28; // [rsp+48h] [rbp-28h]
  unsigned __int64 v29; // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+58h] [rbp-18h]

  v22 = a1;
  v21 = a2;
  result = (__int64 *)a3;
  if ( a3 != a4 )
  {
    v29 = sub_598CDA(a3, a4);
    if ( v29 > v22[5] - v22[4] )
    {
      v28 = sub_599516(v22, v29, "vector::_M_range_insert");
      v27 = sub_599170(v22, v28);
      v30 = v27;
      v12 = sub_59894A((__int64)v22);
      v13 = *(_QWORD *)sub_5989BC((__int64)&v21);
      v30 = sub_5995DF(v22[3], v13, v27, v12);
      v14 = sub_59894A((__int64)v22);
      v30 = sub_599478(a3, a4, v30, v14);
      v15 = sub_59894A((__int64)v22);
      v16 = v22[4];
      v17 = (_QWORD *)sub_5989BC((__int64)&v21);
      v30 = sub_5995DF(*v17, v16, v30, v15);
      v18 = sub_59894A((__int64)v22);
      sub_598958(v22[3], v22[4], v18);
      sub_598C30((__int64)v22, v22[3], v22[5] - v22[3]);
      v22[3] = v27;
      v22[4] = v30;
      result = v22;
      v22[5] = v28 + v27;
    }
    else
    {
      v24 = sub_5985B0((__int64)v22);
      v26 = sub_599305(&v24, &v21);
      v25 = v22[4];
      if ( v26 <= v29 )
      {
        v23 = a3;
        sub_599430(&v23, v26);
        v8 = sub_59894A((__int64)v22);
        sub_599478(v23, a4, v22[4], v8);
        v22[4] += v29 - v26;
        v9 = sub_59894A((__int64)v22);
        v10 = v22[4];
        v11 = (_QWORD *)sub_5989BC((__int64)&v21);
        sub_599344(*v11, v25, v10, v9);
        v22[4] += v26;
        return (__int64 *)sub_5993E4(a3, v23, v21);
      }
      else
      {
        v5 = sub_59894A((__int64)v22);
        sub_599344(v22[4] - v29, v22[4], v22[4], v5);
        v22[4] += v29;
        v6 = v25 - v29;
        v7 = (_QWORD *)sub_5989BC((__int64)&v21);
        sub_599398(*v7, v6, v25);
        return (__int64 *)sub_5993E4(a3, a4, v21);
      }
    }
  }
  return result;
}
