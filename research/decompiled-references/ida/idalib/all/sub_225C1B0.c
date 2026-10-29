__m128i *__fastcall sub_225C1B0(__m128i *a1, _QWORD **a2, __int8 a3, __m128i *a4)
{
  __m128i *v4; // r12
  __m128i *v5; // rdx
  __int64 v6; // rdx
  __m128i si128; // xmm1
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int8 v14; // r14
  __int32 v15; // r9d
  __int32 v16; // r8d
  __int64 v17; // rsi
  __int32 v18; // ecx
  __int32 v19; // edx
  __m128i *v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm2
  __int64 v23; // rax
  __int64 v24; // r14
  __m128 v25; // xmm0
  __m128i v26; // [rsp+8h] [rbp-120h] BYREF
  __int64 v27; // [rsp+18h] [rbp-110h]
  __int64 v28; // [rsp+20h] [rbp-108h]
  __int64 v29; // [rsp+28h] [rbp-100h]
  __m128i v30; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v31; // [rsp+40h] [rbp-E8h] BYREF
  __m128i v32; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-C8h]
  __int64 v34; // [rsp+68h] [rbp-C0h]
  __int64 v35; // [rsp+70h] [rbp-B8h]
  __int64 v36; // [rsp+78h] [rbp-B0h]
  __int8 v37; // [rsp+80h] [rbp-A8h]
  void *v38[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v40; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-68h]
  __int64 v42; // [rsp+C8h] [rbp-60h]
  __int64 v43; // [rsp+D0h] [rbp-58h]
  __int64 v44; // [rsp+D8h] [rbp-50h]
  __int8 v45; // [rsp+E0h] [rbp-48h]

  v4 = a1 + 1;
  if ( a4[5].m128i_i8[0] )
  {
    v5 = (__m128i *)a4->m128i_i64[0];
    a1->m128i_i64[0] = (__int64)v4;
    if ( v5 == &a4[1] )
    {
      a1[1] = _mm_load_si128(a4 + 1);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)v5;
      a1[1].m128i_i64[0] = a4[1].m128i_i64[0];
    }
    v6 = a4->m128i_i64[1];
    si128 = _mm_load_si128(a4 + 2);
    a4->m128i_i64[0] = (__int64)a4[1].m128i_i64;
    v8 = a4[3].m128i_i64[0];
    a4->m128i_i64[1] = 0;
    a1->m128i_i64[1] = v6;
    v9 = a4[3].m128i_i64[1];
    a1[3].m128i_i64[0] = v8;
    v10 = a4[4].m128i_i64[0];
    a4[1].m128i_i8[0] = 0;
    a1[4].m128i_i64[0] = v10;
    v11 = a4[4].m128i_i64[1];
    a1[3].m128i_i64[1] = v9;
    a1[4].m128i_i64[1] = v11;
    a1[5].m128i_i8[0] = 1;
    a1[2] = si128;
  }
  else
  {
    v14 = a3;
    sub_225AB40(&v30, (__int64)a4);
    if ( a3 )
    {
      v15 = v34;
      v16 = HIDWORD(v34);
      v17 = v35;
      v18 = v36;
      v19 = HIDWORD(v36);
    }
    else
    {
      v26 = v32;
      v24 = v36;
      v29 = v34;
      v28 = v35;
      v27 = v33;
      sub_2253560(v38, a2);
      v44 = v24;
      v41 = v27;
      v25 = _mm_loadh_ps((const double *)&v26.m128i_i64[1]);
      v42 = v29;
      v43 = v28;
      v40 = (__m128i)v25;
      v45 = 0;
      sub_A0AAD0((__int64)&v30, v38);
      v15 = v42;
      v16 = HIDWORD(v42);
      v17 = v43;
      v18 = v44;
      v32 = _mm_load_si128(&v40);
      v19 = HIDWORD(v44);
      v33 = v41;
      v14 = v45;
      v34 = v42;
      v35 = v43;
      v36 = v44;
      v37 = v45;
      if ( v38[0] != &v39 )
      {
        operator delete(v38[0]);
        v15 = v34;
        v16 = HIDWORD(v34);
        v17 = v35;
        v18 = v36;
        v14 = v37;
        v19 = HIDWORD(v36);
      }
    }
    v20 = (__m128i *)v30.m128i_i64[0];
    a1->m128i_i64[0] = (__int64)v4;
    if ( v20 == &v31 )
    {
      a1[1] = _mm_load_si128(&v31);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)v20;
      a1[1].m128i_i64[0] = v31.m128i_i64[0];
    }
    v21 = v30.m128i_i64[1];
    v22 = _mm_load_si128(&v32);
    a1[3].m128i_i32[2] = v15;
    a1[3].m128i_i32[3] = v16;
    a1->m128i_i64[1] = v21;
    v23 = v33;
    a1[2] = v22;
    a1[3].m128i_i64[0] = v23;
    a1[4].m128i_i64[0] = v17;
    a1[4].m128i_i32[2] = v18;
    a1[4].m128i_i32[3] = v19;
    a1[5].m128i_i8[0] = v14;
  }
  return a1;
}
