unsigned __int64 __fastcall proxim_graph_t__::vfunc_34(__int64 *a1, int a2, __int64 *a3, char a4)
{
  unsigned __int64 v4; // r13
  __int64 v7; // rax
  __int64 (*v8)(void); // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbp
  __m128i v15; // xmm1
  __int64 v16; // rdi
  double v17; // xmm0_8
  __int64 v18; // rdi
  __m128i v19; // xmm1
  const char *v20; // rsi
  double v21; // xmm0_8
  __int64 v22; // rax
  __m128i v23; // xmm1
  __int64 v24; // rdi
  __int64 v25; // rdi
  __m128i v26; // xmm1
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // cc
  __int64 v31; // rdi
  int v32; // r13d
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rbx
  bool v37; // zf
  __int64 v38; // rbp
  __m128i v39; // xmm1
  __int64 v40; // rdi
  __int64 v41; // rdi
  __m128i v42; // xmm1
  __int64 v43; // rsi
  __m128i si128; // xmm0
  __int64 v45; // rax
  __m128i v46; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+18h] [rbp-D0h]
  __m128i v48; // [rsp+20h] [rbp-C8h] BYREF
  __int64 *v49; // [rsp+30h] [rbp-B8h] BYREF
  int v50; // [rsp+38h] [rbp-B0h]
  __int64 v51; // [rsp+40h] [rbp-A8h]
  __int64 v52; // [rsp+50h] [rbp-98h] BYREF
  __int128 v53; // [rsp+58h] [rbp-90h]
  const char *v54; // [rsp+70h] [rbp-78h] BYREF
  __int128 v55; // [rsp+78h] [rbp-70h]
  __int64 v56; // [rsp+90h] [rbp-58h] BYREF
  __m128i v57; // [rsp+98h] [rbp-50h] BYREF
  unsigned __int64 v58; // [rsp+A8h] [rbp-40h]

  v4 = a2;
  v58 = __readfsqword(0x28u);
  v49 = &idaplace_t___vtable;
  v7 = *a1;
  v50 = 0;
  v8 = *(__int64 (**)(void))(v7 + 296);
  if ( (char *)v8 == (char *)proxim_graph_t__::vfunc_37 )
  {
    v9 = -1;
    if ( a2 < (unsigned __int64)a1[35] )
      v9 = *(_QWORD *)(a1[34] + 40LL * a2);
  }
  else
  {
    v9 = v8();
  }
  v10 = a3[1];
  v11 = *a3;
  v51 = v9;
  if ( a3[2] < (unsigned __int64)(v10 + 1) )
  {
    v29 = qvector_reserve(a3, v11, v10 + 1, 272);
    v10 = a3[1];
    *a3 = v29;
    v11 = v29;
  }
  v46.m128i_i64[0] = (__int64)&v49;
  v12 = v11 + 272 * v10;
  *(_OWORD *)v12 = 0;
  *(_OWORD *)(v12 + 16) = 0;
  *(_OWORD *)(v12 + 56) = 0;
  *(_OWORD *)(v12 + 80) = 0;
  *(_OWORD *)(v12 + 96) = 0;
  *(_OWORD *)(v12 + 112) = 0;
  *(_OWORD *)(v12 + 136) = 0;
  *(_OWORD *)(v12 + 192) = 0;
  *(_OWORD *)(v12 + 216) = 0;
  *(_OWORD *)(v12 + 240) = 0;
  *(_QWORD *)(v12 + 32) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_QWORD *)(v12 + 72) = 0;
  *(_QWORD *)(v12 + 128) = 0;
  *(_QWORD *)(v12 + 184) = 0;
  *(_QWORD *)(v12 + 208) = 0;
  *(_QWORD *)(v12 + 232) = 0;
  *(_QWORD *)(v12 + 256) = -1;
  *(_QWORD *)(v12 + 264) = 0;
  *(_OWORD *)(v12 + 152) = 0;
  *(_OWORD *)(v12 + 168) = 0;
  ++a3[1];
  v13 = idaplace_t__clone(&v49);
  *(_BYTE *)(v12 + 32) = -1;
  *(_QWORD *)v12 = v13;
  *(_BYTE *)(v12 + 40) = 1;
  if ( v4 >= a1[35] )
  {
    *(_DWORD *)(v12 + 36) = calc_bg_color(-1);
    sub_2A6440(&v56, "+", a4);
    v14 = v56;
    v15 = _mm_loadu_si128(&v57);
    v56 = 0;
    v57 = 0;
    v16 = *(_QWORD *)(v12 + 8);
    if ( v16 )
    {
      *(_QWORD *)(v12 + 16) = 0;
      v46 = v15;
      v17 = qfree(v16, "+");
      v18 = v56;
      v19 = _mm_load_si128(&v46);
      *(_QWORD *)(v12 + 8) = v14;
      *(__m128i *)(v12 + 16) = v19;
      if ( v18 )
      {
        v57.m128i_i64[0] = 0;
        qfree(v18, "+", v17);
      }
    }
    else
    {
      *(_QWORD *)(v12 + 8) = v14;
      *(__m128i *)(v12 + 16) = v15;
    }
    return v58 - __readfsqword(0x28u);
  }
  v53 = 0;
  v52 = 0;
  v54 = nullptr;
  v55 = 0;
  if ( get_ea_name(&v52, v51, 0, 0) > 0 )
  {
    demangle_name(&v54, v52, 245612135, 2);
    if ( (unsigned __int64)v53 > 1 )
      goto LABEL_12;
  }
  else if ( (unsigned __int64)v53 > 1 )
  {
LABEL_12:
    *(_DWORD *)(v12 + 36) = -1;
LABEL_13:
    v20 = (const char *)v52;
    goto LABEL_14;
  }
  if ( (_DWORD)v51 == -1 )
  {
    v43 = v52;
    if ( *((_QWORD *)&v53 + 1) <= 0x11u )
    {
      v52 = qvector_reserve(&v52, v52, 18, 1);
      v43 = v52;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD300);
    *(_BYTE *)(v43 + 16) = 115;
    *(_QWORD *)&v53 = 18;
    *(__m128i *)v43 = si128;
    *(_BYTE *)(v52 + 17) = 0;
    v28 = v53;
  }
  else
  {
    if ( !(unsigned __int8)generate_disasm_line(&v52, v51, 0) )
      sub_169A50(&v52, (__int64)"0x%a", 0.0);
    v28 = v53;
  }
  *(_DWORD *)(v12 + 36) = -1;
  v20 = &s1;
  if ( v28 )
    goto LABEL_13;
LABEL_14:
  sub_2A6440(&v56, v20, a4);
  v21 = 0.0;
  v22 = v56;
  v23 = _mm_loadu_si128(&v57);
  v56 = 0;
  v57 = 0;
  v24 = *(_QWORD *)(v12 + 8);
  if ( v24 )
  {
    *(_QWORD *)(v12 + 16) = 0;
    v47 = v22;
    v48 = v23;
    v21 = qfree(v24, v20);
    v25 = v56;
    v26 = _mm_load_si128(&v48);
    *(_QWORD *)(v12 + 8) = v47;
    *(__m128i *)(v12 + 16) = v26;
    if ( v25 )
    {
      v57.m128i_i64[0] = 0;
      v21 = qfree(v25, v20, v21);
    }
    if ( (unsigned __int64)v55 <= 1 )
      goto LABEL_18;
    goto LABEL_32;
  }
  *(_QWORD *)(v12 + 8) = v22;
  v30 = (unsigned __int64)v55 <= 1;
  *(__m128i *)(v12 + 16) = v23;
  if ( !v30 )
  {
LABEL_32:
    v31 = a3[1];
    ++v50;
    v32 = *(_DWORD *)(v12 + 36);
    v33 = *a3;
    if ( a3[2] < (unsigned __int64)(v31 + 1) )
    {
      v45 = qvector_reserve(a3, v33, v31 + 1, 272);
      *a3 = v45;
      v31 = a3[1];
      v33 = v45;
    }
    v34 = 17 * v31;
    v35 = v46.m128i_i64[0];
    v36 = v33 + 16 * v34;
    *(_QWORD *)(v36 + 32) = 0xFFFFFFFF00000001LL;
    *(_QWORD *)(v36 + 40) = 0;
    *(_QWORD *)(v36 + 48) = 0;
    *(_QWORD *)(v36 + 72) = 0;
    *(_QWORD *)(v36 + 128) = 0;
    *(_QWORD *)(v36 + 184) = 0;
    *(_QWORD *)(v36 + 208) = 0;
    *(_QWORD *)(v36 + 232) = 0;
    *(_QWORD *)(v36 + 256) = -1;
    *(_QWORD *)(v36 + 264) = 0;
    *(_OWORD *)v36 = 0;
    *(_OWORD *)(v36 + 16) = 0;
    *(_OWORD *)(v36 + 56) = 0;
    *(_OWORD *)(v36 + 80) = 0;
    *(_OWORD *)(v36 + 96) = 0;
    *(_OWORD *)(v36 + 112) = 0;
    *(_OWORD *)(v36 + 136) = 0;
    *(_OWORD *)(v36 + 152) = 0;
    *(_OWORD *)(v36 + 168) = 0;
    *(_OWORD *)(v36 + 192) = 0;
    *(_OWORD *)(v36 + 216) = 0;
    *(_OWORD *)(v36 + 240) = 0;
    ++a3[1];
    *(_QWORD *)v36 = idaplace_t__clone(v35);
    v37 = (_QWORD)v55 == 0;
    v20 = &s1;
    *(_BYTE *)(v36 + 40) = 0;
    *(_DWORD *)(v36 + 36) = v32;
    *(_BYTE *)(v36 + 32) = -1;
    if ( !v37 )
      v20 = v54;
    sub_2A6440(&v56, v20, a4);
    v21 = 0.0;
    v38 = v56;
    v39 = _mm_loadu_si128(&v57);
    v56 = 0;
    v57 = 0;
    v40 = *(_QWORD *)(v36 + 8);
    if ( v40 )
    {
      *(_QWORD *)(v36 + 16) = 0;
      v46 = v39;
      v21 = qfree(v40, v20);
      v41 = v56;
      v42 = _mm_load_si128(&v46);
      *(_QWORD *)(v36 + 8) = v38;
      *(__m128i *)(v36 + 16) = v42;
      if ( v41 )
      {
        v57.m128i_i64[0] = 0;
        v21 = qfree(v41, v20, v21);
      }
    }
    else
    {
      *(_QWORD *)(v36 + 8) = v38;
      *(__m128i *)(v36 + 16) = v39;
    }
  }
LABEL_18:
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    v21 = qfree(v54, v20, v21);
  }
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52, v20, v21);
  }
  return v58 - __readfsqword(0x28u);
}
