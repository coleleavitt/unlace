__int64 __fastcall sub_27EE00(
        const __m128i *a1,
        unsigned __int64 a2,
        char a3,
        __int64 *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __m128i v13; // xmm0
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(__int64, __int64, __int64, __int64, double); // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r14
  unsigned __int64 *v24; // rax
  __int64 (*v25)(); // rax
  int v26; // r8d
  __m128i *v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r14d
  double v31; // xmm4_8
  double v32; // xmm5_8
  const char *v33; // rcx
  void (*v34)(); // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 (*v40)(); // rdx
  __int64 (__fastcall *v41)(__int64, unsigned int); // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 v45; // r14
  unsigned int v46; // eax
  __m128i *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rcx
  const __m128i *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __m128i v58; // xmm0
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 m128i_i64; // [rsp+0h] [rbp-248h]
  unsigned __int64 v69; // [rsp+8h] [rbp-240h] BYREF
  __m128i v70; // [rsp+10h] [rbp-238h] BYREF
  __m128i v71; // [rsp+20h] [rbp-228h]
  __int64 v72; // [rsp+30h] [rbp-218h]
  __int64 v73; // [rsp+38h] [rbp-210h]
  __int128 v74; // [rsp+40h] [rbp-208h]
  __int64 v75; // [rsp+50h] [rbp-1F8h]
  __int64 v76; // [rsp+58h] [rbp-1F0h]
  int v77; // [rsp+60h] [rbp-1E8h]
  __int64 v78; // [rsp+68h] [rbp-1E0h]
  int v79; // [rsp+70h] [rbp-1D8h]
  __int64 v80; // [rsp+78h] [rbp-1D0h]
  int v81; // [rsp+80h] [rbp-1C8h]
  __int64 v82; // [rsp+88h] [rbp-1C0h]
  int v83; // [rsp+90h] [rbp-1B8h]
  __int64 v84; // [rsp+98h] [rbp-1B0h]
  __int128 v85; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v86; // [rsp+B0h] [rbp-198h]
  __int64 v87; // [rsp+B8h] [rbp-190h]
  __int64 v88; // [rsp+C0h] [rbp-188h]
  char v89; // [rsp+C8h] [rbp-180h] BYREF
  unsigned __int64 v90; // [rsp+208h] [rbp-40h] BYREF

  v69 = a2;
  v90 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v13.m128i_i64[0] = 0;
  v70 = 0;
  getinf_buf(26, &v70, 16);
  v17 = v69;
  if ( v69 < v70.m128i_i64[0] || v69 >= v70.m128i_i64[1] )
  {
    v17 = *(_QWORD *)(get_eah(v69, &v70, v16) + 16) & v69;
    v69 = v17;
  }
  if ( !(unsigned __int8)is_mapped(v17) )
  {
    return 0;
  }
  else
  {
    if ( !a4 )
      a4 = &qword_8CC7A0;
    v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, double))(a1->m128i_i64[0] + 720);
    if ( v19 == sub_27DFE0 )
    {
      v20 = *(_QWORD *)(sub_1EA680((__int64)a1[24].m128i_i64, (__int64)&v70, (__int64)sub_27DFE0, v18, 0.0) + 40);
      v23 = sub_27DC40((__int64)a1, v20);
    }
    else
    {
      v20 = 0;
      v23 = ((__int64 (__fastcall *)(const __m128i *, _QWORD, __int64 (__fastcall *)(__int64, __int64, __int64, __int64, double)))v19)(
              a1,
              0,
              sub_27DFE0);
    }
    if ( (unsigned int)sub_1EB590((__int64)a1, v20, v21, v22, 0.0) == 3 )
    {
      v38 = a1[56].m128i_i64[1];
      if ( v38 )
      {
        v39 = *(_QWORD *)v38;
        v40 = *(__int64 (**)())(*(_QWORD *)v38 + 328LL);
        if ( v40 != sub_27CEF0 )
        {
          if ( ((unsigned __int8 (__fastcall *)(__int64, unsigned __int64))v40)(v38, v69) && v69 == v23 )
          {
            v30 = 1;
            sub_479090(QT::QCoreApplication::self + 2, a1, 1);
            return v30;
          }
          v38 = a1[56].m128i_i64[1];
          v39 = *(_QWORD *)v38;
        }
        v41 = *(__int64 (__fastcall **)(__int64, unsigned int))(v39 + 736);
        if ( v41 == sub_1E66D0 )
          v44 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v39 + 656))(v38, 0, 0, 1);
        else
          v44 = v41(v38, 0);
        if ( v44 != -1 && v23 != v44 )
        {
          m128i_i64 = (__int64)a1[24].m128i_i64;
          v45 = *(_QWORD *)(sub_1EA680((__int64)a1[24].m128i_i64, 0, v42, v43, 0.0) + 40);
          v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 112LL))(v45);
          v47 = nullptr;
          if ( get_place_class(&v70, 0, v46) && (v70.m128i_i8[0] & 1) != 0 )
          {
            v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
            *(_QWORD *)(v50 + 16) = v44;
            v51 = v50;
            *(_DWORD *)(v50 + 8) = 0;
            v54 = (const __m128i *)sub_1EA6A0(m128i_i64, 0, v52, v53, 0.0);
            v58 = _mm_loadu_si128(v54);
            v73 = v51;
            v70 = v58;
            v13 = _mm_loadu_si128(v54 + 1);
            v59 = v54[2].m128i_i64[0];
            v71 = v13;
            v72 = v59;
            if ( v51 )
            {
              v47 = &v70;
              v73 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
              sub_1F1140(m128i_i64, &v70, 7u, *(double *)v13.m128i_i64, v60, v61, v62);
              if ( v73 )
                *(double *)v13.m128i_i64 = qfree(v73, v70.m128i_i8);
              *(double *)v13.m128i_i64 = qfree(v51, v70.m128i_i8, *(double *)v13.m128i_i64);
            }
            else
            {
              v47 = &v70;
              sub_1F1140(m128i_i64, &v70, 7u, *(double *)v13.m128i_i64, v55, v56, v57);
              if ( v73 )
                *(double *)v13.m128i_i64 = qfree(v73, v70.m128i_i8);
            }
          }
          v63 = sub_1EA680(m128i_i64, (__int64)v47, v48, v49, *(double *)v13.m128i_i64);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v63 + 40) + 128LL))(*(_QWORD *)(v63 + 40));
        }
      }
    }
    v86 = -1;
    v24 = (unsigned __int64 *)&v89;
    v87 = 0;
    v88 = 0;
    v85 = -1;
    do
    {
      *(_WORD *)v24 = 0;
      v24 += 5;
      *((_WORD *)v24 - 19) = 0;
      *((_WORD *)v24 - 18) = 0;
      *((_DWORD *)v24 - 2) = 0;
      *((_WORD *)v24 - 17) = 0;
      *((_OWORD *)v24 - 2) = 0;
      *(v24 - 2) = 0;
    }
    while ( v24 != &v90 );
    if ( dword_8CC5F0
      && (get_flags_ex(v69, 4) & 0x600) == 0
      && a1[46].m128i_i8[5]
      && get_debug_name(0, &v69, 0) > 0
      && (int)decode_insn(&v85, v69, v64, v65, v66, v67, 0.0) > 0
      && sub_1E73C0(0x20u, &v85, 1) >= 0 )
    {
      v70.m128i_i64[1] = -1;
      v71.m128i_i64[0] = 512;
      v70.m128i_i64[0] = v69;
      LOWORD(v73) = 0;
      v71.m128i_i64[1] = -1;
      v72 = 0;
      v75 = 0xFFFFFFFFLL;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      v81 = 0;
      v82 = 0;
      v83 = 0;
      v84 = 0;
      v74 = 0;
      add_func_ex(&v70);
    }
    v25 = *(__int64 (**)())(a1->m128i_i64[0] + 576);
    if ( v25 == sub_27CF00 || (v26 = ((__int64 (__fastcall *)(const __m128i *, double))v25)(a1, 0.0), v26 < 0) )
      v26 = *(_DWORD *)&word_8BCE1C;
    v27 = &v70;
    v71.m128i_i64[0] = 0;
    v71.m128i_i64[1] = -1;
    v72 = 0;
    v73 = 0;
    v70 = 0;
    v30 = sub_27DCD0(a1, (__int64)&v70, v69, -1, v26, 1u, 0.0);
    if ( v30 == 1 )
    {
      if ( *((int *)a4 + 7) >= 0 )
      {
        v71.m128i_i16[6] = *((_DWORD *)a4 + 7);
        a4 = nullptr;
      }
      v27 = &v70;
      sub_1FFC10(
        (__int64)a1,
        &v70,
        ((a3 & 2) == 0 ? 3 : 1) | (4 * (a3 & 1u)),
        0,
        v28,
        v29,
        0.0,
        a6,
        a7,
        a8,
        v31,
        v32,
        a11,
        a12);
      if ( a4 )
      {
        v33 = &s1;
        v34 = *(void (**)())(a1->m128i_i64[0] + 1112);
        if ( a4[1] )
          v33 = (const char *)*a4;
        if ( v34 != nullsub_68 )
        {
          v27 = (__m128i *)*((unsigned int *)a4 + 6);
          ((void (__fastcall *)(const __m128i *, __m128i *, const char *))v34)(a1, v27, v33);
        }
      }
      if ( !(unsigned __int8)sub_1F6250((__int64)a1) && a1 == (const __m128i *)qword_8CC7C0 )
        sub_27EC10((__int64)a1, (__int64)v27, 0.0, v35, v36);
    }
    if ( v73 )
      qfree(v73, v27->m128i_i8);
  }
  return v30;
}
