__m128i *__fastcall sub_2258B00(__m128i *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // rax
  double v4; // rdx
  __m128 *(__fastcall *v5)(__m128 *, double *, _QWORD **); // rcx
  int v6; // r8d
  __int64 v7; // rdx
  __int32 v8; // r12d
  __int32 v9; // r13d
  __int64 v10; // r14
  __int32 v11; // r15d
  __int64 v12; // rax
  __int32 v13; // r8d
  __m128 v14; // xmm0
  __int8 v15; // dl
  __int64 v16; // rax
  __m128i v17; // xmm1
  __int64 v18; // rax
  __int64 v20; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+10h] [rbp-D8h]
  __int32 v22; // [rsp+1Ch] [rbp-CCh]
  _QWORD *v23[4]; // [rsp+20h] [rbp-C8h] BYREF
  __int16 v24; // [rsp+40h] [rbp-A8h]
  _QWORD v25[2]; // [rsp+50h] [rbp-98h] BYREF
  __m128i v26; // [rsp+60h] [rbp-88h] BYREF
  __m128i v27; // [rsp+70h] [rbp-78h] BYREF
  __int64 v28; // [rsp+80h] [rbp-68h]
  __int32 v29; // [rsp+88h] [rbp-60h]
  __int32 v30; // [rsp+8Ch] [rbp-5Ch]
  __int64 v31; // [rsp+90h] [rbp-58h]
  __int32 v32; // [rsp+98h] [rbp-50h]
  __int32 v33; // [rsp+9Ch] [rbp-4Ch]
  __int8 v34; // [rsp+A0h] [rbp-48h]

  v2 = (_QWORD *)(a2 + 16);
  v3 = *(v2 - 1);
  v4 = *(double *)v3;
  v23[0] = v2;
  v5 = *(__m128 *(__fastcall **)(__m128 *, double *, _QWORD **))(*(_QWORD *)&v4 + 16LL);
  v24 = 260;
  if ( v5 == sub_22580F0 )
  {
    v6 = *(_DWORD *)(v3 + 104);
    v7 = *(_QWORD *)(v3 + 96);
    v8 = *(_DWORD *)(v3 + 124);
    v9 = *(_DWORD *)(v3 + 120);
    v10 = *(_QWORD *)(v3 + 112);
    v11 = *(_DWORD *)(v3 + 108);
    v12 = *(_QWORD *)(v3 + 88);
    v22 = v6;
    v21 = v7;
    v20 = v12;
    sub_2253560(v25, v23);
    v13 = v22;
    v14 = _mm_loadh_ps((const double *)&v20);
    v28 = v21;
    v15 = 0;
    v27 = (__m128i)v14;
  }
  else
  {
    v5((__m128 *)v25, (double *)v3, v23);
    v13 = v29;
    v11 = v30;
    v10 = v31;
    v9 = v32;
    v8 = v33;
    v15 = v34;
  }
  a1[5].m128i_i8[8] &= ~1u;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( (__m128i *)v25[0] == &v26 )
  {
    a1[1] = _mm_load_si128(&v26);
  }
  else
  {
    a1->m128i_i64[0] = v25[0];
    a1[1].m128i_i64[0] = v26.m128i_i64[0];
  }
  v16 = v25[1];
  v17 = _mm_load_si128(&v27);
  a1[3].m128i_i32[3] = v11;
  a1[4].m128i_i64[0] = v10;
  a1->m128i_i64[1] = v16;
  v18 = v28;
  a1[4].m128i_i32[2] = v9;
  a1[3].m128i_i64[0] = v18;
  a1[4].m128i_i32[3] = v8;
  a1[2] = v17;
  a1[3].m128i_i32[2] = v13;
  a1[5].m128i_i8[0] = v15;
  return a1;
}
