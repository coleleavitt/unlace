void __fastcall sub_225D040(__m128i *a1, _QWORD **a2)
{
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r15
  __m128 v7; // xmm0
  __m128i v8; // xmm1
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-A0h] BYREF
  void *v12[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v13; // [rsp+20h] [rbp-88h] BYREF
  __m128i v14; // [rsp+30h] [rbp-78h] BYREF
  __int64 v15; // [rsp+40h] [rbp-68h]
  __int64 v16; // [rsp+48h] [rbp-60h]
  __int64 v17; // [rsp+50h] [rbp-58h]
  __int64 v18; // [rsp+58h] [rbp-50h]
  __int8 v19; // [rsp+60h] [rbp-48h]

  v3 = a1[4].m128i_i64[1];
  v4 = a1[5].m128i_i64[1];
  v5 = a1[5].m128i_i64[0];
  v6 = a1[4].m128i_i64[0];
  v11 = a1[3].m128i_i64[1];
  sub_2253560(v12, a2);
  v15 = v6;
  v7 = _mm_loadh_ps((const double *)&v11);
  v16 = v3;
  v14 = (__m128i)v7;
  v17 = v5;
  v18 = v4;
  v19 = 0;
  sub_A0AAD0((__int64)a1[1].m128i_i64, v12);
  v8 = _mm_load_si128(&v14);
  v9 = (__int64 *)v12[0];
  a1[4].m128i_i64[0] = v15;
  v10 = v16;
  a1[3] = v8;
  a1[4].m128i_i64[1] = v10;
  a1[5].m128i_i64[0] = v17;
  a1[5].m128i_i64[1] = v18;
  a1[6].m128i_i8[0] = v19;
  if ( v9 != &v13 )
    operator delete(v9);
}
