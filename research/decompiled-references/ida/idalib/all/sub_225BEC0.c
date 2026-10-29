__m128i *__fastcall sub_225BEC0(__m128i *a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  __int32 v5; // r13d
  __int32 v6; // r14d
  __int64 v7; // r15
  __int32 v8; // edx
  __int32 v9; // ecx
  __m128i *v10; // rsi
  __int64 v11; // rsi
  __m128i v12; // xmm1
  __int64 v13; // rsi
  __int32 v15; // ecx
  __int32 v16; // edx
  __m128i *v17; // rsi
  __int64 v18; // rsi
  __m128i si128; // xmm2
  __int64 v20; // rsi
  __int32 v21; // eax
  __m128i v22; // [rsp+0h] [rbp-128h] BYREF
  _QWORD *v23; // [rsp+10h] [rbp-118h]
  __int64 v24; // [rsp+18h] [rbp-110h]
  __m128i *v25; // [rsp+20h] [rbp-108h]
  __int32 v26; // [rsp+28h] [rbp-100h]
  __int32 v27; // [rsp+2Ch] [rbp-FCh]
  _QWORD v28[2]; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v29; // [rsp+40h] [rbp-E8h] BYREF
  __m128 v30; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-C8h]
  int v32; // [rsp+68h] [rbp-C0h]
  int v33; // [rsp+6Ch] [rbp-BCh]
  __int64 v34; // [rsp+70h] [rbp-B8h]
  __int32 v35; // [rsp+78h] [rbp-B0h]
  __int32 v36; // [rsp+7Ch] [rbp-ACh]
  char v37; // [rsp+80h] [rbp-A8h]
  void *v38; // [rsp+90h] [rbp-98h] BYREF
  __int64 v39; // [rsp+98h] [rbp-90h]
  __m128i v40; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v41; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-68h]
  __int32 v43; // [rsp+C8h] [rbp-60h]
  __int32 v44; // [rsp+CCh] [rbp-5Ch]
  __int64 v45; // [rsp+D0h] [rbp-58h]
  __int32 v46; // [rsp+D8h] [rbp-50h]
  __int32 v47; // [rsp+DCh] [rbp-4Ch]
  char v48; // [rsp+E0h] [rbp-48h]
  char v49; // [rsp+E8h] [rbp-40h]

  (*(void (__fastcall **)(void **))(**(_QWORD **)(a2 + 72) + 40LL))(&v38);
  if ( (v49 & 1) != 0 )
  {
    v21 = (int)v38;
    a1[5].m128i_i8[8] |= 1u;
    a1->m128i_i32[0] = v21;
    a1->m128i_i64[1] = v39;
  }
  else
  {
    v5 = v47;
    v6 = v46;
    v7 = v45;
    v8 = v44;
    v9 = v43;
    if ( v48 )
    {
      v10 = (__m128i *)v38;
      a1[5].m128i_i8[8] &= ~1u;
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      if ( v10 == &v40 )
      {
        a1[1] = _mm_load_si128(&v40);
      }
      else
      {
        a1->m128i_i64[0] = (__int64)v10;
        a1[1].m128i_i64[0] = v40.m128i_i64[0];
      }
      v11 = v39;
      a1[3].m128i_i32[2] = v9;
      v12 = _mm_load_si128(&v41);
      a1[3].m128i_i32[3] = v8;
      a1->m128i_i64[1] = v11;
      v13 = v42;
      a1[4].m128i_i64[0] = v7;
      a1[3].m128i_i64[0] = v13;
      a1[4].m128i_i32[2] = v6;
      a1[4].m128i_i32[3] = v5;
      a1[5].m128i_i8[0] = 1;
      a1[2] = v12;
    }
    else
    {
      v27 = v44;
      v25 = a1 + 1;
      v22 = v41;
      v26 = v43;
      v24 = v42;
      v23 = v28;
      sub_2253560(v28, a4);
      v34 = v7;
      v15 = v26;
      v35 = v6;
      v16 = v27;
      v17 = (__m128i *)v28[0];
      v30 = _mm_loadh_ps((const double *)&v22.m128i_i64[1]);
      v31 = v24;
      v32 = v26;
      v33 = v27;
      v36 = v5;
      v37 = 0;
      a1[5].m128i_i8[8] &= ~1u;
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      if ( v17 == &v29 )
      {
        a1[1] = _mm_load_si128(&v29);
      }
      else
      {
        a1->m128i_i64[0] = (__int64)v17;
        a1[1].m128i_i64[0] = v29.m128i_i64[0];
      }
      v18 = v28[1];
      si128 = _mm_load_si128((const __m128i *)&v30);
      a1[3].m128i_i32[2] = v15;
      a1[3].m128i_i32[3] = v16;
      a1->m128i_i64[1] = v18;
      v20 = v31;
      a1[2] = si128;
      a1[3].m128i_i64[0] = v20;
      a1[4].m128i_i64[0] = v7;
      a1[4].m128i_i32[2] = v6;
      a1[4].m128i_i32[3] = v5;
      a1[5].m128i_i8[0] = 0;
      if ( (v49 & 1) == 0 && v38 != &v40 )
        operator delete(v38);
    }
  }
  return a1;
}
