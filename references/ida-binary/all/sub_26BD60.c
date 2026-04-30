__int64 __fastcall desktop_chooser_t__::vfunc_12(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  const char *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __m128 v25; // xmm0
  __int64 v26; // r12
  __m128 si128; // xmm1
  __m128 v29; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD v30[2]; // [rsp+10h] [rbp-A8h] BYREF
  char v31; // [rsp+20h] [rbp-98h]
  __int64 v32; // [rsp+30h] [rbp-88h] BYREF
  __int128 v33; // [rsp+38h] [rbp-80h]
  __int64 v34; // [rsp+50h] [rbp-68h] BYREF
  __m128i v35; // [rsp+58h] [rbp-60h] BYREF
  __int64 v36; // [rsp+70h] [rbp-48h] BYREF
  __int64 v37; // [rsp+78h] [rbp-40h]
  __m128 v38; // [rsp+80h] [rbp-38h]
  int v39; // [rsp+90h] [rbp-28h]
  unsigned __int64 v40; // [rsp+98h] [rbp-20h]

  v10 = *(_QWORD *)(a1 + 184);
  v40 = __readfsqword(0x28u);
  v31 = 0;
  v30[0] = 0;
  v30[1] = 0;
  v11 = v10 + 56 * a2;
  if ( (unsigned __int8)sub_267A80((__int64)v30, (const char *)v11, 0) )
  {
    v18 = &s1;
    v32 = 0;
    v33 = 0;
    if ( *(_QWORD *)(v11 + 8) )
      v18 = *(const char **)v11;
    sub_169A50(&v32, (__int64)"BUTTON CANCEL NONE\n%s\n\n<:t::200:::>", v18);
    v36 = 40;
    v37 = 0;
    v39 = 4;
    v38 = 0;
    sub_526660(&v34, v30);
    v25 = 0;
    v26 = v34;
    v34 = 0;
    si128 = (__m128)_mm_loadu_si128(&v35);
    v35 = 0;
    if ( v37 )
    {
      v29 = si128;
      v38.m128_u64[0] = 0;
      *(double *)v25.m128_u64 = qfree(v37, (const char *)v30);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v29);
      v37 = v26;
      v38 = si128;
      if ( v34 )
      {
        v35.m128i_i64[0] = 0;
        *(double *)v25.m128_u64 = qfree(v34, (const char *)v30, *(double *)v25.m128_u64);
      }
    }
    else
    {
      v37 = v26;
      v38 = si128;
    }
    sub_1697D0(v32, (__int64)&v36, v19, v20, v21, v22, v25, si128, a5, a6, v23, v24, a9, a10, v29.m128_i8[0]);
    if ( v37 )
    {
      v38.m128_u64[0] = 0;
      *(double *)v25.m128_u64 = qfree(v37, (const char *)&v36);
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32, (const char *)&v36, *(double *)v25.m128_u64);
    }
  }
  else
  {
    sub_169700(
      (int)"Bad desktop structure\n",
      v11,
      v12,
      v13,
      v14,
      v15,
      a3,
      a4,
      a5,
      a6,
      v16,
      v17,
      a9,
      a10,
      v29.m128_i8[0]);
  }
  jvalue_t_clear(v30);
  return 0;
}
