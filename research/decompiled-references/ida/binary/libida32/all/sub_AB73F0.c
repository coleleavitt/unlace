void __fastcall sub_AB73F0(__int64 a1, const __m128i *a2, unsigned __int64 a3, unsigned __int64 a4, const char *a5)
{
  __m128i v6; // xmm3
  __int64 v7; // rax
  bool v8; // zf
  __m128i si128; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __m128i v15; // xmm7
  __m128i *v16; // r13
  __m128i v17; // xmm6
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm7
  __m128i v21; // xmm4
  __m128i v22; // xmm5
  const char *v23; // rdx
  __m128i *v24; // rdx
  __m128i v25; // xmm0
  void (__fastcall *v26)(__m128i *, __m128i *, __int64); // rax
  __m128i *v27; // rdi
  __m128i v28; // xmm4
  __m128i v29; // xmm5
  __m128i v30; // xmm6
  __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33; // xmm7
  __m128i v34; // xmm4
  __m128i v35; // xmm5
  const char *v36; // rdx
  __m128i *v37; // rdx
  __int64 v38; // rdx
  size_t v39; // r9
  size_t v40; // rax
  __int64 v41; // r9
  __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rdi
  void (__fastcall *v49)(__int64, __int64, __int64); // rax
  __int64 v50; // rax
  _BYTE *v51; // rax
  const __m128i *v52; // rbp
  __int64 v53; // r13
  const __m128i *v54; // rsi
  const char *v55; // [rsp+0h] [rbp-1E8h]
  unsigned __int64 v56; // [rsp+8h] [rbp-1E0h]
  __m128i v57; // [rsp+10h] [rbp-1D8h] BYREF
  __m128 v58; // [rsp+20h] [rbp-1C8h]
  _BYTE v59[24]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v60; // [rsp+48h] [rbp-1A0h]
  unsigned __int128 v61; // [rsp+50h] [rbp-198h] BYREF
  const char *v62; // [rsp+60h] [rbp-188h]
  __m128i v63; // [rsp+70h] [rbp-178h]
  __m128i v64; // [rsp+80h] [rbp-168h]
  __m128i v65; // [rsp+90h] [rbp-158h]
  const char *v66; // [rsp+A0h] [rbp-148h]
  __m128i v67; // [rsp+B0h] [rbp-138h] BYREF
  __m128i v68; // [rsp+C0h] [rbp-128h]
  __m128i v69; // [rsp+D0h] [rbp-118h]
  const char *v70; // [rsp+E0h] [rbp-108h]
  __int64 v71; // [rsp+F0h] [rbp-F8h]
  __m128i v72; // [rsp+F8h] [rbp-F0h] BYREF
  __m128i v73; // [rsp+108h] [rbp-E0h] BYREF
  __m128i v74; // [rsp+118h] [rbp-D0h] BYREF
  const char *v75; // [rsp+128h] [rbp-C0h]
  void *v76; // [rsp+130h] [rbp-B8h] BYREF
  __int64 v77; // [rsp+138h] [rbp-B0h]
  __m128i v78; // [rsp+140h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+150h] [rbp-98h] BYREF
  __m128i v80; // [rsp+158h] [rbp-90h] BYREF
  __m128i v81; // [rsp+168h] [rbp-80h] BYREF
  __m128i v82; // [rsp+178h] [rbp-70h] BYREF
  const char *v83; // [rsp+188h] [rbp-60h]
  void *v84; // [rsp+190h] [rbp-58h]
  __int64 v85; // [rsp+198h] [rbp-50h]
  __m128i v86[4]; // [rsp+1A0h] [rbp-48h] BYREF

  v6 = _mm_loadu_si128(a2);
  v7 = a2[1].m128i_i64[0];
  v61 = __PAIR128__(a4, a3);
  v8 = *(_BYTE *)(a1 + 1064) == 0;
  *(__m128i *)&v59[8] = v6;
  v60 = v7;
  si128 = _mm_load_si128((const __m128i *)&v59[16]);
  *(_QWORD *)v59 = a1;
  v10 = _mm_load_si128((const __m128i *)v59);
  v11 = _mm_load_si128((const __m128i *)&v61);
  v62 = a5;
  v63 = v10;
  v64 = si128;
  v65 = v11;
  v66 = a5;
  v67 = v10;
  v68 = si128;
  v69 = v11;
  v70 = a5;
  if ( !v8 )
  {
    *(_BYTE *)(a1 + 1064) = 0;
    v39 = 0;
    if ( a5 )
    {
      v56 = a4;
      v55 = a5;
      v40 = j__strlen(a5);
      a4 = v56;
      a5 = v55;
      v39 = v40;
    }
    sub_F2B6E0(a1 + 8, &v67.m128i_u64[1], v69.m128i_i64[0], a4, a5, v39);
    v42 = v67.m128i_i64[0];
    switch ( v67.m128i_i32[2] & 0x7FFFFFFF )
    {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        break;
      case 1:
        sub_AB4A40(v67.m128i_i64[0], v68.m128i_i64[0]);
        break;
      case 8:
        sub_AAE4E0(v67.m128i_i64[0] + 8, 0, 0, v68.m128i_i64[0], v67.m128i_i64[0], v41);
        break;
      case 9:
        v52 = (const __m128i *)v68.m128i_i64[0];
        v53 = v68.m128i_i64[0] + 24LL * v67.m128i_u32[3];
        if ( v68.m128i_i64[0] != v53 )
        {
          do
          {
            v54 = v52;
            v52 = (const __m128i *)((char *)v52 + 24);
            sub_AB2BB0(v42, v54, 0);
          }
          while ( (const __m128i *)v53 != v52 );
        }
        break;
    }
    v43 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v43 )
    {
      v44 = *(_QWORD *)(a1 + 24);
      LOBYTE(v79) = 1;
      v45 = v44 + 32 * v43 - 32;
      if ( !*(_QWORD *)(v45 + 16) )
        goto LABEL_41;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v45 + 24))(v45, &v79);
        v47 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
        *(_DWORD *)(a1 + 32) = v47;
        v48 = *(_QWORD *)(a1 + 24) + 32 * v47;
        v49 = *(void (__fastcall **)(__int64, __int64, __int64))(v48 + 16);
        if ( v49 )
          v49(v48, v48, 3);
        v50 = *(unsigned int *)(a1 + 32);
        if ( !(_DWORD)v50 )
          break;
        v46 = *(_QWORD *)(a1 + 24);
        LOBYTE(v79) = 1;
        v45 = v46 + 32 * v50 - 32;
        if ( !*(_QWORD *)(v45 + 16) )
          goto LABEL_41;
      }
    }
    v51 = *(_BYTE **)(a1 + 1072);
    *(_QWORD *)(a1 + 1080) = 0;
    *v51 = 0;
    sub_971800(*(_QWORD *)(a1 + 8), "\n");
    *(_BYTE *)(a1 + 1064) = 1;
    return;
  }
  v71 = a1 + 8;
  v72 = v10;
  v73 = si128;
  v74 = v11;
  v75 = a5;
  v76 = &v78;
  sub_AA6CE0(&v76, &byte_22CD811, (__int64)&byte_22CD811);
  if ( *(_BYTE *)(a1 + 1065) )
  {
    v28 = _mm_loadu_si128(&v72);
    v29 = _mm_loadu_si128(&v73);
    v30 = _mm_loadu_si128(&v74);
    v79 = v71;
    v80 = v28;
    v83 = v75;
    v84 = v86;
    v81 = v29;
    v82 = v30;
    if ( v76 == &v78 )
    {
      v86[0] = _mm_load_si128(&v78);
    }
    else
    {
      v84 = v76;
      v86[0].m128i_i64[0] = v78.m128i_i64[0];
    }
    v31 = v77;
    v77 = 0;
    v78.m128i_i8[0] = 0;
    v85 = v31;
    v76 = &v78;
    v58.m128_u64[0] = 0;
    v32 = operator new(0x60u);
    v33 = _mm_loadu_si128(&v80);
    v34 = _mm_loadu_si128(&v81);
    v35 = _mm_loadu_si128(&v82);
    *(_QWORD *)v32 = v79;
    v36 = v83;
    *(__m128i *)(v32 + 8) = v33;
    *(_QWORD *)(v32 + 56) = v36;
    *(_QWORD *)(v32 + 64) = v32 + 80;
    v37 = (__m128i *)v84;
    *(__m128i *)(v32 + 24) = v34;
    *(__m128i *)(v32 + 40) = v35;
    if ( v37 == v86 )
    {
      *(__m128i *)(v32 + 80) = _mm_load_si128(v86);
    }
    else
    {
      *(_QWORD *)(v32 + 64) = v37;
      *(_QWORD *)(v32 + 80) = v86[0].m128i_i64[0];
    }
    v38 = v85;
    v57.m128i_i64[0] = v32;
    v85 = 0;
    *(_QWORD *)(v32 + 72) = v38;
    v84 = v86;
    v86[0].m128i_i8[0] = 0;
    v58 = _mm_loadh_ps((const double *)off_2C4EF40);
    sub_AA95F0(a1 + 24, &v57);
    v26 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v58.m128_u64[0];
    if ( v58.m128_u64[0] )
      goto LABEL_9;
    goto LABEL_10;
  }
  v12 = *(unsigned int *)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 24);
  v57.m128i_i8[0] = 0;
  v14 = v13 + 32 * v12 - 32;
  if ( !*(_QWORD *)(v14 + 16) )
LABEL_41:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __m128i *))(v14 + 24))(v14, &v57);
  v15 = _mm_loadu_si128(&v73);
  v16 = (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * *(unsigned int *)(a1 + 32) - 32);
  v80 = _mm_loadu_si128(&v72);
  v17 = _mm_loadu_si128(&v74);
  v81 = v15;
  v79 = v71;
  v82 = v17;
  v83 = v75;
  v84 = v86;
  if ( v76 == &v78 )
  {
    v86[0] = _mm_load_si128(&v78);
  }
  else
  {
    v84 = v76;
    v86[0].m128i_i64[0] = v78.m128i_i64[0];
  }
  v18 = v77;
  v77 = 0;
  v78.m128i_i8[0] = 0;
  v85 = v18;
  v76 = &v78;
  v58.m128_u64[0] = 0;
  v19 = operator new(0x60u);
  v20 = _mm_loadu_si128(&v80);
  v21 = _mm_loadu_si128(&v81);
  v22 = _mm_loadu_si128(&v82);
  *(_QWORD *)v19 = v79;
  v23 = v83;
  *(__m128i *)(v19 + 8) = v20;
  *(_QWORD *)(v19 + 56) = v23;
  *(_QWORD *)(v19 + 64) = v19 + 80;
  v24 = (__m128i *)v84;
  *(__m128i *)(v19 + 24) = v21;
  *(__m128i *)(v19 + 40) = v22;
  if ( v24 == v86 )
  {
    *(__m128i *)(v19 + 80) = _mm_load_si128(v86);
  }
  else
  {
    *(_QWORD *)(v19 + 64) = v24;
    *(_QWORD *)(v19 + 80) = v86[0].m128i_i64[0];
  }
  v57.m128i_i64[0] = v19;
  v86[0].m128i_i8[0] = 0;
  v25 = _mm_load_si128(&v57);
  *(_QWORD *)(v19 + 72) = v85;
  v84 = v86;
  v85 = 0;
  v57 = _mm_loadu_si128(v16);
  v26 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v16[1].m128i_i64[0];
  *v16 = v25;
  v58.m128_u64[0] = (unsigned __int64)v26;
  v16[1].m128i_i64[0] = (__int64)sub_AA8360;
  v58.m128_u64[1] = v16[1].m128i_u64[1];
  v16[1].m128i_i64[1] = (__int64)sub_AB66A0;
  if ( v26 )
LABEL_9:
    v26(&v57, &v57, 3);
LABEL_10:
  if ( v84 != v86 )
    operator delete(v84);
  v27 = (__m128i *)v76;
  *(_BYTE *)(a1 + 1065) = 0;
  if ( v27 != &v78 )
    operator delete(v27);
}

