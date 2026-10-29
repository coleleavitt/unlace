unsigned __int64 __fastcall sub_1DCD40(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 si128; // xmm0
  __int64 v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm0
  __int64 v27; // rbp
  const __m128i *v28; // rbx
  __m128i v29; // xmm0
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm0
  __int64 v36; // rbp
  const __m128i *v37; // rbx
  __m128i v38; // xmm0
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // r9
  __m128 v44; // xmm0
  __int64 v45; // rbp
  int *v46; // r12
  unsigned __int64 v47; // r13
  int v48; // r14d
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  __m128i v54; // xmm6
  __m128 v55; // xmm2
  const QT::QString *v56; // r15
  __int64 v57; // r8
  __int64 v58; // r9
  __m128i v59; // xmm4
  __int64 v60; // rax
  __int64 v61; // rsi
  const char *v62; // rsi
  _QWORD *v63; // rdi
  _QWORD *v64; // rbx
  _QWORD *v65; // r14
  __int64 v66; // rbx
  __int64 v67; // r15
  _QWORD *v68; // r14
  void *v69; // rbp
  __int64 v70; // rdi
  __int64 v71; // rdi
  __m128 v72; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v73; // [rsp+10h] [rbp-E8h] BYREF
  __m128 *v74; // [rsp+20h] [rbp-D8h]
  __int64 v75; // [rsp+28h] [rbp-D0h]
  __int64 v76; // [rsp+30h] [rbp-C8h]
  void **v77; // [rsp+38h] [rbp-C0h]
  __int64 *v78; // [rsp+40h] [rbp-B8h]
  __int64 v79; // [rsp+48h] [rbp-B0h]
  char v80[8]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v81; // [rsp+58h] [rbp-A0h] BYREF
  __m128 v82; // [rsp+60h] [rbp-98h] BYREF
  __int64 v83; // [rsp+70h] [rbp-88h]
  __int64 v84; // [rsp+80h] [rbp-78h] BYREF
  __int128 v85; // [rsp+88h] [rbp-70h]
  _QWORD *v86; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v87; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  if ( !(unsigned __int8)netnode_inited() )
  {
    if ( !under_debugger )
      interr(40608, a10, v10, v11, a1);
    BUG();
  }
  netnode_check(v80, "$ desktops", 0, 0);
  if ( !(unsigned __int8)netnode_exist(v80) )
  {
    v81 = -1;
    netnode_check(&v81, "$ qregistry", 0, 1);
    v77 = (void **)&v86;
    sub_1CC990((__int64)&v86, "<Database>");
    v74 = &v82;
    v83 = 0;
    v82 = 0;
    sub_1D5280((__m128i *)&v82, 0, (const __m128i *)&v86, v13, v14, v15);
    si128 = (__m128)_mm_load_si128((const __m128i *)&v82);
    v19 = v83;
    if ( !si128.m128_u64[0] || *(int *)si128.m128_u64[0] > 1 )
    {
      v82 = si128;
      sub_1B21C0((__m128i *)v74, 0, 0, 0, v16, v17);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v82);
      v19 = v83;
    }
    v72 = si128;
    sub_16D970(v77);
    sub_1CC990((__int64)v77, "<Database debugger>");
    v20 = _mm_load_si128((const __m128i *)&v72);
    v83 = v19;
    v82 = (__m128)v20;
    sub_1D5280((__m128i *)v74, v19, (const __m128i *)v77, v21, v22, v23);
    v26 = (__m128)_mm_load_si128((const __m128i *)&v82);
    v27 = v83;
    if ( !v26.m128_u64[0] || *(int *)v26.m128_u64[0] > 1 )
    {
      v82 = v26;
      sub_1B21C0((__m128i *)v74, 0, 0, 0, v24, v25);
      v26 = (__m128)_mm_load_si128((const __m128i *)&v82);
      v27 = v83;
    }
    v28 = (const __m128i *)v77;
    v72 = v26;
    sub_16D970(v77);
    sub_1CC990((__int64)v28, "<Current Database>");
    v29 = _mm_load_si128((const __m128i *)&v72);
    v83 = v27;
    v82 = (__m128)v29;
    sub_1D5280((__m128i *)v74, v27, v28, v30, v31, v32);
    v35 = (__m128)_mm_load_si128((const __m128i *)&v82);
    v36 = v83;
    if ( !v35.m128_u64[0] || *(int *)v35.m128_u64[0] > 1 )
    {
      v82 = v35;
      sub_1B21C0((__m128i *)v74, 0, 0, 0, v33, v34);
      v35 = (__m128)_mm_load_si128((const __m128i *)&v82);
      v36 = v83;
    }
    v37 = (const __m128i *)v77;
    v72 = v35;
    sub_16D970(v77);
    sub_1CC990((__int64)v37, "<Current Database debugger>");
    v38 = _mm_load_si128((const __m128i *)&v72);
    v83 = v36;
    v82 = (__m128)v38;
    sub_1D5280((__m128i *)v74, v36, v37, v39, v40, v41);
    v44 = (__m128)_mm_load_si128((const __m128i *)&v82);
    v45 = v83;
    v46 = (int *)v44.m128_u64[0];
    if ( !v44.m128_u64[0] || (a8 = _mm_movehl_ps(a8, v44), v47 = a8.m128_u64[0], *(int *)v44.m128_u64[0] > 1) )
    {
      v82 = v44;
      sub_1B21C0((__m128i *)v74, 0, 0, 0, v42, v43);
      v47 = v82.m128_u64[1];
      v46 = (int *)v82.m128_u64[0];
      v45 = v83;
    }
    sub_16D970(v77);
    v84 = 0;
    v85 = 0;
    if ( v45 <= 0 )
    {
      v78 = &v84;
    }
    else
    {
      v48 = 0;
      v78 = &v84;
      do
      {
        v51 = operator new(0x80u);
        if ( v46 && *v46 <= 1 )
        {
          a8 = (__m128)v47;
          v79 = v47;
          v73 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v46, (__m128i)v47);
        }
        else
        {
          v82.m128_u64[0] = (unsigned __int64)v46;
          v82.m128_u64[1] = v47;
          v83 = v45;
          sub_1B21C0((__m128i *)v74, 0, 0, 0, v52, v53);
          v54 = _mm_load_si128((const __m128i *)&v82);
          v45 = v83;
          v79 = v82.m128_i64[1];
          v73 = v54;
        }
        v55 = (__m128)_mm_load_si128(&v73);
        *(_OWORD *)(v51 + 16) = 0;
        a8 = _mm_movehl_ps(a8, v55);
        *(_QWORD *)(v51 + 32) = 0;
        v47 = a8.m128_u64[0];
        v75 = 24LL * v48;
        v56 = (const QT::QString *)(a8.m128_u64[0] + v75);
        *(_QWORD *)(v51 + 48) = 0;
        *(_QWORD *)v51 = &deskcfg_target_t___vtable;
        *(_DWORD *)(v51 + 40) = 0;
        v72.m128_u64[0] = v55.m128_u64[0];
        sub_1CD1B0(v51, 0, v49, v50, 0.0);
        *(_QWORD *)(v51 + 56) = 0;
        *(_QWORD *)v51 = &ida_deskcfg_t___vtable;
        *(_QWORD *)(v51 + 96) = 0;
        *(_QWORD *)(v51 + 120) = 0;
        *(_OWORD *)(v51 + 64) = 0;
        *(_OWORD *)(v51 + 80) = 0;
        *(_OWORD *)(v51 + 104) = 0;
        v76 = v51 + 104;
        sub_1CFF10((const __m128i *)v51, v56, 0.0, (__m128)0LL);
        if ( !v72.m128_u64[0] || (v46 = (int *)v72.m128_u64[0], *(int *)v72.m128_u64[0] > 1) )
        {
          v59 = _mm_load_si128(&v73);
          v83 = v45;
          v82 = (__m128)v59;
          sub_1B21C0((__m128i *)v74, 0, 0, 0, v57, v58);
          v47 = v82.m128_u64[1];
          v46 = (int *)v82.m128_u64[0];
          v45 = v83;
          v56 = (const QT::QString *)(v82.m128_u64[1] + v75);
        }
        QT::QString::operator=(v51 + 104, v56);
        v60 = v85;
        v61 = v84;
        if ( *((_QWORD *)&v85 + 1) < (unsigned __int64)(v85 + 1) )
        {
          v84 = qvector_reserve(v78, v84, v85 + 1, 8);
          v61 = v84;
          v60 = v85;
        }
        ++v48;
        *(_QWORD *)(v61 + 8 * v60) = v51;
        *(_QWORD *)&v85 = v85 + 1;
      }
      while ( v48 < v45 );
    }
    v62 = (const char *)v78;
    v86 = nullptr;
    v87 = 0;
    sub_1DC380((__int64 *)v77, v78);
    v63 = v86;
    v64 = &v86[8 * (_QWORD)v87];
    if ( v64 != v86 )
    {
      v65 = v86;
      do
      {
        v62 = (const char *)(v65 + 1);
        sub_268730(*v65, v65 + 1, 0);
        v65 += 8;
      }
      while ( v64 != v65 );
      v63 = v86;
    }
    if ( v63 )
    {
      if ( (_QWORD)v87 )
      {
        v72.m128_u64[0] = v45;
        v66 = 0;
        v67 = v87;
        do
        {
          v68 = &v63[8 * v66];
          v69 = (void *)*v68;
          if ( *v68 )
          {
            jvalue_t_clear(*v68);
            v62 = (const char *)&off_18;
            operator delete(v69, 0x18u);
          }
          v70 = v68[5];
          if ( v70 )
          {
            v68[6] = 0;
            qfree(v70, v62);
          }
          v71 = v68[1];
          if ( v71 )
          {
            v68[2] = 0;
            qfree(v71, v62);
          }
          ++v66;
          v63 = v86;
        }
        while ( v67 != v66 );
        v45 = v72.m128_u64[0];
      }
      *(_QWORD *)&v87 = 0;
      qfree(v63, v62);
    }
    sub_1CD2F0(v78, v62);
    v82.m128_u64[0] = (unsigned __int64)v46;
    v82.m128_u64[1] = v47;
    v83 = v45;
    sub_1AF880((__int64)v74);
  }
  return v88 - __readfsqword(0x28u);
}
