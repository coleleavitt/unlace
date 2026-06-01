void __fastcall sub_5A957A(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r12
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v24; // [rsp+10h] [rbp-80h] BYREF
  __int64 *v25; // [rsp+18h] [rbp-78h]
  _BYTE v26[24]; // [rsp+20h] [rbp-70h] BYREF
  __int64 v27; // [rsp+38h] [rbp-58h] BYREF
  __int64 v28; // [rsp+40h] [rbp-50h] BYREF
  __int64 v29; // [rsp+48h] [rbp-48h]
  unsigned __int64 v30; // [rsp+50h] [rbp-40h]
  __int64 v31; // [rsp+58h] [rbp-38h]
  __int64 v32; // [rsp+60h] [rbp-30h]
  __int64 v33; // [rsp+68h] [rbp-28h]
  __int64 v34; // [rsp+70h] [rbp-20h]
  __int64 v35; // [rsp+78h] [rbp-18h]

  v25 = a1;
  v24 = a2;
  if ( a3 )
  {
    if ( a3 > (v25[2] - v25[1]) >> 1 )
    {
      v34 = sub_5AA028(v25, a3, "vector::_M_fill_insert");
      v28 = sub_5A9020((__int64)v25);
      v33 = sub_5A9EC7(&v24, &v28);
      v32 = sub_5AA0F2(v25, v34);
      v35 = v32;
      v15 = sub_5A9D64(v25);
      sub_5A9FF6(2 * v33 + v32, a3, a4, v15);
      v35 = 0;
      v16 = sub_5A9D64(v25);
      v17 = (_QWORD *)sub_5A94FA((__int64)&v24);
      v35 = 2 * a3 + sub_5AA125(*v25, *v17, v32, v16);
      v18 = sub_5A9D64(v25);
      v19 = v25[1];
      v20 = (_QWORD *)sub_5A94FA((__int64)&v24);
      v35 = sub_5AA125(*v20, v19, v35, v18);
      v21 = sub_5A9D64(v25);
      sub_5A9D72(*v25, v25[1], v21);
      sub_5AA17A(v25, *v25, (v25[2] - *v25) >> 1);
      *v25 = v32;
      v25[1] = v35;
      v25[2] = v32 + 2 * v34;
    }
    else
    {
      sub_5A9E00(v26, v25, a4);
      v31 = sub_5A9E8C(v26);
      v27 = sub_5A9E9E(v25);
      v30 = sub_5A9EC7(&v27, &v24);
      v29 = v25[1];
      if ( v30 <= a3 )
      {
        v9 = sub_5A9D64(v25);
        v10 = sub_5A9FF6(v25[1], a3 - v30, v31, v9);
        v25[1] = v10;
        v11 = sub_5A9D64(v25);
        v12 = v25[1];
        v13 = (_QWORD *)sub_5A94FA((__int64)&v24);
        sub_5A9F09(*v13, v29, v12, v11);
        v25[1] += 2 * v30;
        v14 = (_QWORD *)sub_5A94FA((__int64)&v24);
        sub_5A9FA9(*v14, v29, v31);
      }
      else
      {
        v4 = sub_5A9D64(v25);
        sub_5A9F09(v25[1] - 2 * a3, v25[1], v25[1], v4);
        v25[1] += 2 * a3;
        v5 = -2LL * a3 + v29;
        v6 = (_QWORD *)sub_5A94FA((__int64)&v24);
        sub_5A9F5D(*v6, v5, v29);
        v7 = *(_QWORD *)sub_5A94FA((__int64)&v24) + 2 * a3;
        v8 = (_QWORD *)sub_5A94FA((__int64)&v24);
        sub_5A9FA9(*v8, v7, v31);
      }
      sub_5A9E5C(v26);
    }
  }
}
