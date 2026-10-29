void __fastcall sub_225D240(__m128i *a1, _QWORD **a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __m128 v5; // xmm0
  __m128i v6; // xmm1
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // [rsp+8h] [rbp-110h] BYREF
  __int64 v10; // [rsp+10h] [rbp-108h]
  __int64 v11; // [rsp+18h] [rbp-100h]
  void *v12[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v14; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-C8h]
  __int64 v16; // [rsp+58h] [rbp-C0h]
  __int64 v17; // [rsp+60h] [rbp-B8h]
  __int64 v18; // [rsp+68h] [rbp-B0h]
  __int8 v19; // [rsp+70h] [rbp-A8h]
  __m128i v20; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v21[9]; // [rsp+90h] [rbp-88h] BYREF
  char v22; // [rsp+D8h] [rbp-40h]

  sub_2253560(&v20, a2);
  sub_A0AAD0((__int64)&a1[6].m128i_i64[1], &v20);
  if ( (_QWORD *)v20.m128i_i64[0] != v21 )
    operator delete((void *)v20.m128i_i64[0]);
  sub_225D110(&v20, a1);
  if ( (v22 & 1) == 0 )
  {
    v3 = v21[7];
    v11 = v21[5];
    v4 = v21[6];
    v10 = v21[4];
    v9 = v21[3];
    sub_2253560(v12, a2);
    v17 = v4;
    v5 = _mm_loadh_ps((const double *)&v9);
    v18 = v3;
    v14 = (__m128i)v5;
    v15 = v10;
    v16 = v11;
    v19 = 0;
    sub_A0AAD0((__int64)a1[1].m128i_i64, v12);
    v6 = _mm_load_si128(&v14);
    v7 = (__int64 *)v12[0];
    a1[4].m128i_i64[0] = v15;
    v8 = v16;
    a1[3] = v6;
    a1[4].m128i_i64[1] = v8;
    a1[5].m128i_i64[0] = v17;
    a1[5].m128i_i64[1] = v18;
    a1[6].m128i_i8[0] = v19;
    if ( v7 != &v13 )
      operator delete(v7);
    if ( (v22 & 1) == 0 && (_QWORD *)v20.m128i_i64[0] != v21 )
      operator delete((void *)v20.m128i_i64[0]);
  }
}
