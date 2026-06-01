void __fastcall sub_AB2BB0(__int64 a1, const __m128i *a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  __m128i v5; // xmm3
  __int64 v6; // rax
  bool v7; // zf
  __m128i si128; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm7
  __m128i *v15; // r13
  __m128i v16; // xmm6
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // xmm7
  __m128i v20; // xmm4
  __m128i v21; // xmm5
  __int64 v22; // rdx
  __m128i *v23; // rdx
  __m128i v24; // xmm0
  void (__fastcall *v25)(__m128i *, __m128i *, __int64); // rax
  __m128i *v26; // rdi
  __m128i v27; // xmm4
  __m128i v28; // xmm5
  __m128i v29; // xmm6
  __int64 v30; // rax
  __int64 v31; // rax
  __m128i v32; // xmm7
  __m128i v33; // xmm4
  __m128i v34; // xmm5
  __int64 v35; // rdx
  __m128i *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rdi
  void (__fastcall *v46)(__int64, __int64, __int64); // rax
  __int64 v47; // rax
  _BYTE *v48; // rax
  __int64 v49; // rbp
  __int64 v50; // r13
  __int64 v51; // rsi
  __m128i v52; // [rsp+0h] [rbp-1D8h] BYREF
  __m128 v53; // [rsp+10h] [rbp-1C8h]
  _BYTE v54[24]; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v55; // [rsp+38h] [rbp-1A0h]
  __m128i v56; // [rsp+40h] [rbp-198h] BYREF
  __int64 v57; // [rsp+50h] [rbp-188h]
  __m128i v58; // [rsp+60h] [rbp-178h]
  __m128i v59; // [rsp+70h] [rbp-168h]
  __m128i v60; // [rsp+80h] [rbp-158h]
  __int64 v61; // [rsp+90h] [rbp-148h]
  __m128i v62; // [rsp+A0h] [rbp-138h] BYREF
  __m128i v63; // [rsp+B0h] [rbp-128h]
  __m128i v64; // [rsp+C0h] [rbp-118h]
  __int64 v65; // [rsp+D0h] [rbp-108h]
  __int64 v66; // [rsp+E0h] [rbp-F8h]
  __m128i v67; // [rsp+E8h] [rbp-F0h] BYREF
  __m128i v68; // [rsp+F8h] [rbp-E0h] BYREF
  __m128i v69; // [rsp+108h] [rbp-D0h] BYREF
  __int64 v70; // [rsp+118h] [rbp-C0h]
  void *v71; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+128h] [rbp-B0h]
  __m128i v73; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+140h] [rbp-98h] BYREF
  __m128i v75; // [rsp+148h] [rbp-90h] BYREF
  __m128i v76; // [rsp+158h] [rbp-80h] BYREF
  __m128i v77; // [rsp+168h] [rbp-70h] BYREF
  __int64 v78; // [rsp+178h] [rbp-60h]
  void *v79; // [rsp+180h] [rbp-58h]
  __int64 v80; // [rsp+188h] [rbp-50h]
  __m128i v81[4]; // [rsp+190h] [rbp-48h] BYREF

  v4 = a1 + 8;
  v5 = _mm_loadu_si128(a2);
  v6 = a2[1].m128i_i64[0];
  v56 = (__m128i)a3;
  v7 = *(_BYTE *)(a1 + 1064) == 0;
  *(__m128i *)&v54[8] = v5;
  v55 = v6;
  si128 = _mm_load_si128((const __m128i *)&v54[16]);
  *(_QWORD *)v54 = a1;
  v9 = _mm_load_si128((const __m128i *)v54);
  v10 = _mm_load_si128(&v56);
  v57 = 0;
  v58 = v9;
  v59 = si128;
  v60 = v10;
  v61 = 0;
  v62 = v9;
  v63 = si128;
  v64 = v10;
  v65 = 0;
  if ( !v7 )
  {
    *(_BYTE *)(a1 + 1064) = 0;
    sub_F2B6E0(v4, &v62.m128i_u64[1], v64.m128i_i64[0], 0, 0, 0);
    v39 = v62.m128i_i64[0];
    switch ( v62.m128i_i32[2] & 0x7FFFFFFF )
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
        sub_AB4A40(v62.m128i_i64[0], v63.m128i_i64[0]);
        break;
      case 8:
        sub_AAE4E0(v62.m128i_i64[0] + 8, 0, 0, v63.m128i_i64[0], v62.m128i_i64[0], v38);
        break;
      case 9:
        v49 = v63.m128i_i64[0];
        v50 = v63.m128i_i64[0] + 24LL * v62.m128i_u32[3];
        if ( v63.m128i_i64[0] != v50 )
        {
          do
          {
            v51 = v49;
            v49 += 24;
            sub_AB2BB0(v39, v51, 0);
          }
          while ( v50 != v49 );
        }
        break;
    }
    v40 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v40 )
    {
      v41 = *(_QWORD *)(a1 + 24);
      LOBYTE(v74) = 1;
      v42 = v41 + 32 * v40 - 32;
      if ( !*(_QWORD *)(v42 + 16) )
        goto LABEL_39;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v42 + 24))(v42, &v74);
        v44 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
        *(_DWORD *)(a1 + 32) = v44;
        v45 = *(_QWORD *)(a1 + 24) + 32 * v44;
        v46 = *(void (__fastcall **)(__int64, __int64, __int64))(v45 + 16);
        if ( v46 )
          v46(v45, v45, 3);
        v47 = *(unsigned int *)(a1 + 32);
        if ( !(_DWORD)v47 )
          break;
        v43 = *(_QWORD *)(a1 + 24);
        LOBYTE(v74) = 1;
        v42 = v43 + 32 * v47 - 32;
        if ( !*(_QWORD *)(v42 + 16) )
          goto LABEL_39;
      }
    }
    v48 = *(_BYTE **)(a1 + 1072);
    *(_QWORD *)(a1 + 1080) = 0;
    *v48 = 0;
    sub_971800(*(_QWORD *)(a1 + 8), "\n");
    *(_BYTE *)(a1 + 1064) = 1;
    return;
  }
  v66 = v4;
  v67 = v9;
  v68 = si128;
  v69 = v10;
  v70 = 0;
  v71 = &v73;
  sub_AA6CE0(&v71, &byte_22CD811, (__int64)&byte_22CD811);
  if ( *(_BYTE *)(a1 + 1065) )
  {
    v27 = _mm_loadu_si128(&v67);
    v28 = _mm_loadu_si128(&v68);
    v29 = _mm_loadu_si128(&v69);
    v74 = v66;
    v75 = v27;
    v78 = v70;
    v79 = v81;
    v76 = v28;
    v77 = v29;
    if ( v71 == &v73 )
    {
      v81[0] = _mm_load_si128(&v73);
    }
    else
    {
      v79 = v71;
      v81[0].m128i_i64[0] = v73.m128i_i64[0];
    }
    v30 = v72;
    v72 = 0;
    v73.m128i_i8[0] = 0;
    v80 = v30;
    v71 = &v73;
    v53.m128_u64[0] = 0;
    v31 = operator new(0x60u);
    v32 = _mm_loadu_si128(&v75);
    v33 = _mm_loadu_si128(&v76);
    v34 = _mm_loadu_si128(&v77);
    *(_QWORD *)v31 = v74;
    v35 = v78;
    *(__m128i *)(v31 + 8) = v32;
    *(_QWORD *)(v31 + 56) = v35;
    *(_QWORD *)(v31 + 64) = v31 + 80;
    v36 = (__m128i *)v79;
    *(__m128i *)(v31 + 24) = v33;
    *(__m128i *)(v31 + 40) = v34;
    if ( v36 == v81 )
    {
      *(__m128i *)(v31 + 80) = _mm_load_si128(v81);
    }
    else
    {
      *(_QWORD *)(v31 + 64) = v36;
      *(_QWORD *)(v31 + 80) = v81[0].m128i_i64[0];
    }
    v37 = v80;
    v52.m128i_i64[0] = v31;
    v80 = 0;
    *(_QWORD *)(v31 + 72) = v37;
    v79 = v81;
    v81[0].m128i_i8[0] = 0;
    v53 = _mm_loadh_ps((const double *)off_2C4EF40);
    sub_AA95F0(a1 + 24, &v52);
    v25 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v53.m128_u64[0];
    if ( v53.m128_u64[0] )
      goto LABEL_9;
    goto LABEL_10;
  }
  v11 = *(unsigned int *)(a1 + 32);
  v12 = *(_QWORD *)(a1 + 24);
  v52.m128i_i8[0] = 0;
  v13 = v12 + 32 * v11 - 32;
  if ( !*(_QWORD *)(v13 + 16) )
LABEL_39:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __m128i *))(v13 + 24))(v13, &v52);
  v14 = _mm_loadu_si128(&v68);
  v15 = (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * *(unsigned int *)(a1 + 32) - 32);
  v75 = _mm_loadu_si128(&v67);
  v16 = _mm_loadu_si128(&v69);
  v76 = v14;
  v74 = v66;
  v77 = v16;
  v78 = v70;
  v79 = v81;
  if ( v71 == &v73 )
  {
    v81[0] = _mm_load_si128(&v73);
  }
  else
  {
    v79 = v71;
    v81[0].m128i_i64[0] = v73.m128i_i64[0];
  }
  v17 = v72;
  v72 = 0;
  v73.m128i_i8[0] = 0;
  v80 = v17;
  v71 = &v73;
  v53.m128_u64[0] = 0;
  v18 = operator new(0x60u);
  v19 = _mm_loadu_si128(&v75);
  v20 = _mm_loadu_si128(&v76);
  v21 = _mm_loadu_si128(&v77);
  *(_QWORD *)v18 = v74;
  v22 = v78;
  *(__m128i *)(v18 + 8) = v19;
  *(_QWORD *)(v18 + 56) = v22;
  *(_QWORD *)(v18 + 64) = v18 + 80;
  v23 = (__m128i *)v79;
  *(__m128i *)(v18 + 24) = v20;
  *(__m128i *)(v18 + 40) = v21;
  if ( v23 == v81 )
  {
    *(__m128i *)(v18 + 80) = _mm_load_si128(v81);
  }
  else
  {
    *(_QWORD *)(v18 + 64) = v23;
    *(_QWORD *)(v18 + 80) = v81[0].m128i_i64[0];
  }
  v52.m128i_i64[0] = v18;
  v81[0].m128i_i8[0] = 0;
  v24 = _mm_load_si128(&v52);
  *(_QWORD *)(v18 + 72) = v80;
  v79 = v81;
  v80 = 0;
  v52 = _mm_loadu_si128(v15);
  v25 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v15[1].m128i_i64[0];
  *v15 = v24;
  v53.m128_u64[0] = (unsigned __int64)v25;
  v15[1].m128i_i64[0] = (__int64)sub_AA8360;
  v53.m128_u64[1] = v15[1].m128i_u64[1];
  v15[1].m128i_i64[1] = (__int64)sub_AB66A0;
  if ( v25 )
LABEL_9:
    v25(&v52, &v52, 3);
LABEL_10:
  if ( v79 != v81 )
    operator delete(v79);
  v26 = (__m128i *)v71;
  *(_BYTE *)(a1 + 1065) = 0;
  if ( v26 != &v73 )
    operator delete(v26);
}

