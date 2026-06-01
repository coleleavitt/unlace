void __fastcall sub_AB5120(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  _QWORD *v6; // r12
  __int64 v7; // rax
  char *v8; // r13
  const __m128i *v9; // rbp
  __int64 v10; // rax
  __m128i v11; // xmm3
  __int64 v12; // rdx
  bool v13; // zf
  __m128i si128; // xmm2
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm4
  __m128i v19; // xmm5
  __m128i v20; // xmm6
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // xmm7
  __m128i v24; // xmm4
  __m128i v25; // xmm5
  char *v26; // rdx
  __m128i *v27; // rdx
  __int64 v28; // rdx
  __m128i *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __m128i v35; // xmm7
  __m128i v36; // xmm4
  __m128i *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rax
  __m128i v40; // xmm5
  __m128i v41; // xmm6
  __m128i v42; // xmm7
  char *v43; // rdx
  __m128i *v44; // rdx
  __m128i v45; // xmm0
  void (__fastcall *v46)(__m128i *, __m128i *, __int64); // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdi
  __int64 v52; // rdi
  void (__fastcall *v53)(__int64, __int64, __int64); // rax
  __int64 v54; // rax
  _BYTE *v55; // rax
  __m128i v56; // [rsp+0h] [rbp-1D8h] BYREF
  __m128 v57; // [rsp+10h] [rbp-1C8h]
  _BYTE v58[24]; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v59; // [rsp+38h] [rbp-1A0h]
  __m128i v60; // [rsp+40h] [rbp-198h] BYREF
  char *v61; // [rsp+50h] [rbp-188h]
  __m128i v62; // [rsp+60h] [rbp-178h]
  __m128i v63; // [rsp+70h] [rbp-168h]
  __m128i v64; // [rsp+80h] [rbp-158h]
  char *v65; // [rsp+90h] [rbp-148h]
  _OWORD v66[3]; // [rsp+A0h] [rbp-138h] BYREF
  char *v67; // [rsp+D0h] [rbp-108h]
  __int64 v68; // [rsp+E0h] [rbp-F8h]
  __m128i v69; // [rsp+E8h] [rbp-F0h] BYREF
  __m128i v70; // [rsp+F8h] [rbp-E0h] BYREF
  __m128i v71; // [rsp+108h] [rbp-D0h] BYREF
  char *v72; // [rsp+118h] [rbp-C0h]
  void *v73; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v74; // [rsp+128h] [rbp-B0h]
  __m128i v75; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+140h] [rbp-98h] BYREF
  __m128i v77; // [rsp+148h] [rbp-90h] BYREF
  __m128i v78; // [rsp+158h] [rbp-80h] BYREF
  __m128i v79; // [rsp+168h] [rbp-70h] BYREF
  char *v80; // [rsp+178h] [rbp-60h]
  void *v81; // [rsp+180h] [rbp-58h]
  __int64 v82; // [rsp+188h] [rbp-50h]
  __m128i v83[4]; // [rsp+190h] [rbp-48h] BYREF

  v3 = sub_F34140(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 16) == 16 )
    {
      if ( *(_QWORD *)(v3 + 32) )
      {
        v5 = *(_QWORD *)(a2 + 16LL * *(unsigned int *)(a2 + 84) + 88);
        if ( v5 )
          sub_AAE4E0(a1 + 8, 0, 0, v5, a1, v4);
      }
    }
  }
  v6 = (_QWORD *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v6 )
  {
    v7 = (*(__int64 *)(a2 + 72) >> 1) & 3;
    if ( v7 == 1 )
    {
      v8 = "inherited from";
    }
    else
    {
      if ( v7 != 2 )
      {
        v8 = "previous";
        v6 = nullptr;
        if ( (_BYTE)byte_2CA2540 )
          goto LABEL_11;
        goto LABEL_27;
      }
      v6 = (_QWORD *)*v6;
      v8 = "previous";
    }
    if ( (_BYTE)byte_2CA2540 )
      goto LABEL_11;
LABEL_27:
    if ( __cxa_guard_acquire(&byte_2CA2540) )
    {
      qword_2CA2560 &= 0xFFFFFFFE00000000LL;
      qword_2CA2568 = 0;
      qword_2CA2578 = 0;
      __cxa_guard_release(&byte_2CA2540);
    }
LABEL_11:
    v9 = (const __m128i *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v9 )
    {
      v9 = (const __m128i *)&qword_2CA2560;
      goto LABEL_13;
    }
    v30 = (*(__int64 *)(a2 + 72) >> 1) & 3;
    if ( v30 == 1 )
    {
      v31 = v9[4].m128i_i64[1];
      v9 = nullptr;
      if ( v31 )
      {
        v9 = (const __m128i *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v31 >> 1) & 3) == 2 )
        {
          if ( v9 )
            goto LABEL_34;
        }
      }
    }
    else if ( v30 == 2 )
    {
LABEL_34:
      v9 = (const __m128i *)v9->m128i_i64[1];
    }
LABEL_13:
    v10 = sub_EFA7D0(v9);
    v11 = _mm_loadu_si128(v9);
    v12 = v9[1].m128i_i64[0];
    *(_QWORD *)v58 = a1;
    v60.m128i_i64[0] = v10;
    v13 = *(_BYTE *)(a1 + 1064) == 0;
    *(__m128i *)&v58[8] = v11;
    si128 = _mm_load_si128((const __m128i *)v58);
    v59 = v12;
    v15 = _mm_load_si128((const __m128i *)&v58[16]);
    v60.m128i_i64[1] = (__int64)v6;
    v16 = _mm_load_si128(&v60);
    v61 = v8;
    v62 = si128;
    v63 = v15;
    v64 = v16;
    v65 = v8;
    v66[0] = si128;
    v66[1] = v15;
    v66[2] = v16;
    v67 = v8;
    if ( v13 )
    {
      v72 = v8;
      v69 = si128;
      v70 = v15;
      v71 = v16;
      v68 = a1 + 8;
      v73 = &v75;
      v17 = sub_AA6CD0(v9);
      sub_AA6CE0(&v73, &byte_22CD811, (__int64)(&byte_22CD811 + v17));
      if ( *(_BYTE *)(a1 + 1065) )
      {
        v18 = _mm_loadu_si128(&v69);
        v19 = _mm_loadu_si128(&v70);
        v20 = _mm_loadu_si128(&v71);
        v76 = v68;
        v77 = v18;
        v80 = v72;
        v81 = v83;
        v78 = v19;
        v79 = v20;
        if ( v73 == &v75 )
        {
          v83[0] = _mm_load_si128(&v75);
        }
        else
        {
          v81 = v73;
          v83[0].m128i_i64[0] = v75.m128i_i64[0];
        }
        v21 = v74;
        v74 = 0;
        v75.m128i_i8[0] = 0;
        v82 = v21;
        v73 = &v75;
        v57.m128_u64[0] = 0;
        v22 = operator new(0x60u);
        v23 = _mm_loadu_si128(&v77);
        v24 = _mm_loadu_si128(&v78);
        v25 = _mm_loadu_si128(&v79);
        *(_QWORD *)v22 = v76;
        v26 = v80;
        *(__m128i *)(v22 + 8) = v23;
        *(_QWORD *)(v22 + 56) = v26;
        *(_QWORD *)(v22 + 64) = v22 + 80;
        v27 = (__m128i *)v81;
        *(__m128i *)(v22 + 24) = v24;
        *(__m128i *)(v22 + 40) = v25;
        if ( v27 == v83 )
        {
          *(__m128i *)(v22 + 80) = _mm_load_si128(v83);
        }
        else
        {
          *(_QWORD *)(v22 + 64) = v27;
          *(_QWORD *)(v22 + 80) = v83[0].m128i_i64[0];
        }
        v28 = v82;
        v56.m128i_i64[0] = v22;
        v82 = 0;
        *(_QWORD *)(v22 + 72) = v28;
        v81 = v83;
        v83[0].m128i_i8[0] = 0;
        v57 = _mm_loadh_ps((const double *)off_2C4EF40);
        sub_AA95F0(a1 + 24, &v56);
        if ( v57.m128_u64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v57.m128_u64[0])(&v56, &v56, 3);
LABEL_21:
        if ( v81 != v83 )
          operator delete(v81);
        v29 = (__m128i *)v73;
        *(_BYTE *)(a1 + 1065) = 0;
        if ( v29 != &v75 )
          operator delete(v29);
        return;
      }
      v32 = *(unsigned int *)(a1 + 32);
      v33 = *(_QWORD *)(a1 + 24);
      v56.m128i_i8[0] = 0;
      v34 = v33 + 32 * v32 - 32;
      if ( *(_QWORD *)(v34 + 16) )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v34 + 24))(v34, &v56);
        v35 = _mm_loadu_si128(&v70);
        v36 = _mm_loadu_si128(&v71);
        v37 = (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * *(unsigned int *)(a1 + 32) - 32);
        v77 = _mm_loadu_si128(&v69);
        v78 = v35;
        v76 = v68;
        v79 = v36;
        v80 = v72;
        v81 = v83;
        if ( v73 == &v75 )
        {
          v83[0] = _mm_load_si128(&v75);
        }
        else
        {
          v81 = v73;
          v83[0].m128i_i64[0] = v75.m128i_i64[0];
        }
        v38 = v74;
        v74 = 0;
        v75.m128i_i8[0] = 0;
        v82 = v38;
        v73 = &v75;
        v57.m128_u64[0] = 0;
        v39 = operator new(0x60u);
        v40 = _mm_loadu_si128(&v77);
        v41 = _mm_loadu_si128(&v78);
        v42 = _mm_loadu_si128(&v79);
        *(_QWORD *)v39 = v76;
        v43 = v80;
        *(__m128i *)(v39 + 8) = v40;
        *(_QWORD *)(v39 + 56) = v43;
        *(_QWORD *)(v39 + 64) = v39 + 80;
        v44 = (__m128i *)v81;
        *(__m128i *)(v39 + 24) = v41;
        *(__m128i *)(v39 + 40) = v42;
        if ( v44 == v83 )
        {
          *(__m128i *)(v39 + 80) = _mm_load_si128(v83);
        }
        else
        {
          *(_QWORD *)(v39 + 64) = v44;
          *(_QWORD *)(v39 + 80) = v83[0].m128i_i64[0];
        }
        v56.m128i_i64[0] = v39;
        v83[0].m128i_i8[0] = 0;
        v45 = _mm_load_si128(&v56);
        *(_QWORD *)(v39 + 72) = v82;
        v81 = v83;
        v82 = 0;
        v56 = _mm_loadu_si128(v37);
        v46 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v37[1].m128i_i64[0];
        *v37 = v45;
        v57.m128_u64[0] = (unsigned __int64)v46;
        v37[1].m128i_i64[0] = (__int64)sub_AA8360;
        v57.m128_u64[1] = v37[1].m128i_u64[1];
        v37[1].m128i_i64[1] = (__int64)sub_AB66A0;
        if ( v46 )
          v46(&v56, &v56, 3);
        goto LABEL_21;
      }
LABEL_56:
      std::__throw_bad_function_call();
    }
    *(_BYTE *)(a1 + 1064) = 0;
    sub_AB4AB0((__int64)v66);
    v47 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v47 )
    {
      v48 = *(_QWORD *)(a1 + 24);
      LOBYTE(v76) = 1;
      v49 = v48 + 32 * v47 - 32;
      if ( !*(_QWORD *)(v49 + 16) )
        goto LABEL_56;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v49 + 24))(v49, &v76);
        v51 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
        *(_DWORD *)(a1 + 32) = v51;
        v52 = *(_QWORD *)(a1 + 24) + 32 * v51;
        v53 = *(void (__fastcall **)(__int64, __int64, __int64))(v52 + 16);
        if ( v53 )
          v53(v52, v52, 3);
        v54 = *(unsigned int *)(a1 + 32);
        if ( !(_DWORD)v54 )
          break;
        v50 = *(_QWORD *)(a1 + 24);
        LOBYTE(v76) = 1;
        v49 = v50 + 32 * v54 - 32;
        if ( !*(_QWORD *)(v49 + 16) )
          goto LABEL_56;
      }
    }
    v55 = *(_BYTE **)(a1 + 1072);
    *(_QWORD *)(a1 + 1080) = 0;
    *v55 = 0;
    sub_971800(*(_QWORD *)(a1 + 8), "\n");
    *(_BYTE *)(a1 + 1064) = 1;
  }
}

