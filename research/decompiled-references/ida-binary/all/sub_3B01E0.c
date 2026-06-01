__int64 __fastcall sub_3B01E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rsi
  double v13; // xmm4_8
  double v14; // xmm5_8
  __m128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  unsigned int v22; // r13d
  char tinfo_property; // al
  unsigned __int64 v24; // rdx
  const char *v25; // rcx
  unsigned int v26; // eax
  double v27; // xmm4_8
  double v28; // xmm5_8
  unsigned int v30; // eax
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  const char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  __m128i v37; // xmm0
  __int64 v38; // r13
  __m128i v39; // xmm0
  __int64 v40; // r13
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __m128i v44; // [rsp+0h] [rbp-188h] BYREF
  __int64 v45; // [rsp+10h] [rbp-178h] BYREF
  const char *v46; // [rsp+18h] [rbp-170h] BYREF
  __m128i v47; // [rsp+20h] [rbp-168h] BYREF
  const char *v48; // [rsp+30h] [rbp-158h] BYREF
  __m128i v49; // [rsp+38h] [rbp-150h]
  __int64 v50; // [rsp+48h] [rbp-140h]
  __m128i v51; // [rsp+50h] [rbp-138h]
  _QWORD v52[5]; // [rsp+60h] [rbp-128h] BYREF
  __m128 v53; // [rsp+88h] [rbp-100h]
  int v54; // [rsp+98h] [rbp-F0h]
  __int64 v55; // [rsp+A0h] [rbp-E8h]
  char v56; // [rsp+A8h] [rbp-E0h]
  __m128i v57; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE *v58; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v59; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+D8h] [rbp-B0h]
  __m128i v61; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-98h] BYREF
  __m128i v63; // [rsp+F8h] [rbp-90h] BYREF
  __m128i v64; // [rsp+108h] [rbp-80h] BYREF
  __m128i v65; // [rsp+118h] [rbp-70h] BYREF
  int v66; // [rsp+128h] [rbp-60h]
  __int64 v67; // [rsp+130h] [rbp-58h]
  char v68; // [rsp+138h] [rbp-50h]
  unsigned __int64 v69; // [rsp+148h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v45 = 0;
  copy_tinfo_t(&v45, a2, a3);
  v12 = 2;
  if ( (get_tinfo_property(v45, 2) & 0x3F) == 0x2D )
  {
    v30 = sub_3BC590(a1, &v45, (unsigned int)a3);
LABEL_19:
    v22 = v30;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(a1 + 8) == 25 )
  {
    v30 = sub_3AF960((__int64 *)a1, (__int64)&v45, a3, a4, a5, a6, a7, v13, v14, a10, a11);
    goto LABEL_19;
  }
  v15 = 0;
  v48 = nullptr;
  v50 = 0;
  v53.m128_u64[1] = 1;
  v54 = -1;
  v55 = 0;
  v56 = 0;
  v47 = 0;
  v49 = 0;
  v51 = 0;
  *(_OWORD *)v52 = 0;
  if ( a3 == -1 )
  {
    v46 = nullptr;
    if ( (unsigned __int8)sub_333FD0(&v46) )
    {
      v31 = *(_QWORD **)(a1 + 208);
      if ( v31[2] == -1 )
        v32 = 8LL * v31[24];
      else
        v32 = v31[29];
      v57 = (__m128i)(unsigned __int64)v32;
      v58 = nullptr;
      v59 = 0;
      v58 = (_BYTE *)qvector_reserve(&v58, 0, 1, 1);
      v59.m128i_i64[0] = 1;
      *v58 = 0;
      v60 = 0;
      v62 = 0;
      v61 = 0;
      copy_tinfo_t(&v62, &v46, v33);
      v34 = v46;
      v63.m128i_i64[0] = 0;
      v65.m128i_i64[1] = 1;
      v66 = -1;
      v67 = 0;
      v68 = 0;
      v35 = 8 * get_tinfo_size(0, v46, 0);
      v37 = _mm_loadl_epi64(&v57);
      a6 = (__m128)(unsigned __int64)v35;
      v38 = (__int64)v58;
      v57.m128i_i64[1] = v35;
      v58 = nullptr;
      v47 = _mm_unpacklo_epi64(v37, (__m128i)(unsigned __int64)v35);
      v39 = _mm_loadu_si128(&v59);
      v59 = 0;
      if ( v48 )
      {
        v44 = v39;
        v49.m128i_i64[0] = 0;
        qfree(v48, v34);
        v39 = _mm_load_si128(&v44);
      }
      a5 = 0;
      v48 = (const char *)v38;
      v49 = v39;
      v40 = v60;
      v41 = _mm_load_si128(&v61);
      v60 = 0;
      v61 = 0;
      if ( v50 )
      {
        v44 = v41;
        v51.m128i_i64[0] = 0;
        qfree(v50, v34);
        v41 = _mm_load_si128(&v44);
      }
      v12 = (__int64)&v62;
      v50 = v40;
      v51 = v41;
      copy_tinfo_t(v52, &v62, v36);
      v42 = _mm_loadu_si128(&v63);
      v54 = v66;
      *(__m128i *)&v52[1] = v42;
      v43 = _mm_loadu_si128(&v64);
      v55 = v67;
      *(__m128i *)&v52[3] = v43;
      v15 = (__m128)_mm_loadu_si128(&v65);
      v56 = v68;
      v53 = v15;
      clear_tinfo_t(&v62);
      if ( v60 )
      {
        v61.m128i_i64[0] = 0;
        *(double *)v15.m128_u64 = qfree(v60, (const char *)&v62);
      }
      if ( v58 )
      {
        v59.m128i_i64[0] = 0;
        *(double *)v15.m128_u64 = qfree(v58, (const char *)&v62, *(double *)v15.m128_u64);
      }
      clear_tinfo_t(&v46);
      goto LABEL_5;
    }
    clear_tinfo_t(&v46);
  }
  else
  {
    v12 = v45;
    v47.m128i_i64[0] = a3;
    if ( (unsigned int)find_tinfo_udt_member(&v47, v45, 1) != -1 )
    {
LABEL_5:
      v17 = itext(1174, v12, v16);
      v12 = 9;
      v22 = 1;
      if ( (unsigned __int8)sub_196F50(
                              (int)&v48,
                              9,
                              (int)"%s",
                              v17,
                              v18,
                              v19,
                              v15,
                              a5,
                              a6,
                              a7,
                              v20,
                              v21,
                              a10,
                              a11,
                              v44.m128i_i8[0]) )
      {
        tinfo_property = get_tinfo_property(v45, 2);
        v24 = a3;
        if ( (tinfo_property & 0x3F) != 0x1D )
          v24 = (unsigned __int64)v47.m128i_i64[0] >> 3;
        sub_28F600((__int64 *)&v48, (_DWORD *)a1, v24, *(double *)v15.m128_u64);
        if ( a3 == -1 )
        {
          v26 = set_tinfo_property4(&v45, 9, &v47, 1, -1, 256);
        }
        else
        {
          v25 = &s1;
          if ( v49.m128i_i64[0] )
            v25 = v48;
          v26 = set_tinfo_property4(&v45, 11, a3, v25, 0, 0);
        }
        v12 = v26;
        v22 = (unsigned __int8)sub_3AC490(
                                 (__int64 *)a1,
                                 v26,
                                 (__int64)"Failed to rename member",
                                 v15,
                                 a5,
                                 a6,
                                 a7,
                                 v27,
                                 v28,
                                 a10,
                                 a11);
      }
      goto LABEL_13;
    }
  }
  v22 = 0;
LABEL_13:
  clear_tinfo_t(v52);
  if ( v50 )
  {
    v51.m128i_i64[0] = 0;
    *(double *)v15.m128_u64 = qfree(v50, (const char *)v12);
  }
  if ( v48 )
  {
    v49.m128i_i64[0] = 0;
    qfree(v48, (const char *)v12, *(double *)v15.m128_u64);
  }
LABEL_17:
  clear_tinfo_t(&v45);
  return v22;
}
