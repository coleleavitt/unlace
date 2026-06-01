__int64 __fastcall sub_7D2250(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  int v6; // r15d
  __int64 v7; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  _OWORD *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  __m128 v14; // xmm0
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  _OWORD *v19; // rax
  __m128i v20; // xmm2
  __int64 v21; // rdi
  __m128i v22; // xmm3
  __int64 v23; // rax
  __m128i v24; // xmm1
  __m128i v25; // xmm4
  __m128i si128; // xmm0
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm5
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __int64 result; // rax
  __int64 v33; // rcx
  __m128i v34; // xmm0
  __int64 v35; // rax
  __m128i *v36; // r15
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rdx
  bool v40; // cf
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // rbp
  const __m128i *v46; // rcx
  void (__fastcall *v47)(__int64, __m512i *, __int64, const __m128i *); // rax
  const __m128i *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 v51; // rsi
  __int64 v52; // rsi
  __m128i v53; // xmm0
  __int64 v54; // r13
  struct _Unwind_Exception *v56; // [rsp+0h] [rbp-E8h]
  struct _Unwind_Exception *v57; // [rsp+0h] [rbp-E8h]
  __int64 v58; // [rsp+0h] [rbp-E8h]
  __int64 v59; // [rsp+8h] [rbp-E0h]
  __m128i v60; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v61; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+30h] [rbp-B8h]
  __int64 v63; // [rsp+38h] [rbp-B0h]
  __int64 v64; // [rsp+40h] [rbp-A8h]
  __int64 v65; // [rsp+48h] [rbp-A0h]
  _QWORD v66[2]; // [rsp+50h] [rbp-98h] BYREF
  __m128i v67; // [rsp+60h] [rbp-88h]
  _QWORD v68[2]; // [rsp+70h] [rbp-78h] BYREF
  __m128i v69; // [rsp+80h] [rbp-68h]
  __m512i v70; // [rsp+90h] [rbp-58h] BYREF

  sub_180C5A0(&v70, "euf");
  v60.m128i_i64[0] = a2 + 560;
  v6 = sub_15DA4C0(a2 + 560, &v70);
  sub_180C5A0(&v70, "euf");
  *(_BYTE *)(a1 + 8) = 0;
  v7 = v70.m512i_i64[0];
  *(_DWORD *)(a1 + 12) = v6;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)a1 = &off_1C6A700;
  *(_QWORD *)(a1 + 32) = off_1C6A900;
  *(_QWORD *)(a1 + 56) = off_1C6A958;
  *(_QWORD *)(a1 + 72) = off_1C6A9A8;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = off_1C6A980;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = a2;
  *(_QWORD *)(a1 + 152) = a3;
  *(_QWORD *)(a1 + 160) = a1;
  *(_BYTE *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  v59 = a1 + 160;
  sub_1170C30(a1 + 208);
  *(_QWORD *)(a1 + 792) = 0;
  *(_DWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 824) = 0;
  *(_OWORD *)(a1 + 776) = 0;
  *(_OWORD *)(a1 + 808) = 0;
  v62 = a1 + 832;
  v70.m512i_i64[0] = 0;
  sub_2527E0(a1 + 832, (__int64)&v70);
  sub_18572D0(&v70);
  v63 = a1 + 1592;
  sub_13D4D80(a1 + 1592, a2);
  *(_QWORD *)(a1 + 2176) = 0;
  *(_OWORD *)(a1 + 2128) = 0;
  *(_OWORD *)(a1 + 2144) = 0;
  *(_OWORD *)(a1 + 2160) = 0;
  v65 = a1 + 2144;
  sub_180C0A0(a1 + 2144);
  *(_QWORD *)(a1 + 2184) = 0;
  v64 = a1 + 2192;
  v70.m512i_i64[0] = 0;
  sub_14B7810(a1 + 2192, a2, (int)&v70, v8, v9, v10, a4);
  sub_18572D0(&v70);
  *(_QWORD *)(a1 + 2208) = a2;
  *(_QWORD *)(a1 + 2216) = 0;
  *(_QWORD *)(a1 + 2224) = 0;
  *(_QWORD *)(a1 + 2232) = a2;
  *(_QWORD *)(a1 + 2240) = a3;
  *(_QWORD *)(a1 + 2248) = 0;
  *(_QWORD *)(a1 + 2256) = 0;
  *(_QWORD *)(a1 + 2264) = 0;
  *(_QWORD *)(a1 + 2272) = 0;
  *(_DWORD *)(a1 + 2280) = 0;
  *(_QWORD *)(a1 + 2288) = a1 + 2304;
  *(_QWORD *)(a1 + 2296) = 0;
  *(_BYTE *)(a1 + 2304) = 0;
  *(_DWORD *)(a1 + 2368) = 0;
  *(_BYTE *)(a1 + 2424) = 0;
  *(_QWORD *)(a1 + 2432) = a2;
  *(_OWORD *)(a1 + 2320) = 0;
  *(_OWORD *)(a1 + 2336) = 0;
  *(_OWORD *)(a1 + 2352) = 0;
  *(_OWORD *)(a1 + 2376) = 0;
  *(_OWORD *)(a1 + 2392) = 0;
  *(_OWORD *)(a1 + 2408) = 0;
  v11 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 2440) = v11;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  *(_QWORD *)(a1 + 2448) = 8;
  *(_DWORD *)(a1 + 2456) = 0;
  *(_QWORD *)(a1 + 2464) = qword_1C7A350;
  sub_16511B0(a1 + 2472);
  *(_QWORD *)(a1 + 2520) = a2;
  *(_QWORD *)(a1 + 2464) = &off_1C63D10;
  sub_16669D0(a1 + 2528, a2);
  sub_16744A0(a1 + 2544, a2);
  sub_1684300(a1 + 2568, a2);
  sub_15C5470(a1 + 2584, a2);
  *(_QWORD *)(a1 + 2648) = a2;
  sub_180C5A0(&v70, "seq");
  v12 = sub_15DA4C0(v60.m128i_i64[0], &v70);
  v13 = sub_15D2690(a2, v12);
  *(__m128 *)(a1 + 2656) = _mm_loadh_ps((const double *)(v13 + 88));
  LODWORD(v13) = *(_DWORD *)(v13 + 16);
  *(_QWORD *)(a1 + 2728) = 0;
  v14 = _mm_loadh_ps((const double *)(a1 + 2648));
  *(_DWORD *)(a1 + 2672) = v13;
  *(_DWORD *)(a1 + 2696) = v13;
  *(_DWORD *)(a1 + 2720) = v13;
  v15 = *(_QWORD *)(a1 + 2648);
  *(_QWORD *)(a1 + 2744) = 0;
  *(_QWORD *)(a1 + 2736) = v15;
  *(_QWORD *)(a1 + 2752) = 0;
  *(_QWORD *)(a1 + 2760) = 0;
  *(_QWORD *)(a1 + 2768) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 2776) = 0;
  *(__m128 *)(a1 + 2680) = v14;
  *(__m128 *)(a1 + 2704) = v14;
  sub_15F01E0(a1 + 2784, a2);
  sub_1624F90(a1 + 2808, a2);
  *(_QWORD *)(a1 + 2848) = 0;
  *(_DWORD *)(a1 + 2840) = 0;
  *(_QWORD *)(a1 + 2864) = 0;
  *(_DWORD *)(a1 + 2856) = 0;
  *(_QWORD *)(a1 + 2880) = 0;
  *(_DWORD *)(a1 + 2872) = 0;
  *(_QWORD *)(a1 + 2896) = 0;
  *(_QWORD *)(a1 + 2904) = 0;
  *(_QWORD *)(a1 + 2912) = a2;
  *(_QWORD *)(a1 + 2920) = 0;
  *(_QWORD *)(a1 + 2928) = 0;
  sub_15C0990(a1 + 2936, a2);
  *(_BYTE *)(a1 + 3136) = 0;
  sub_7FA590(a1 + 3144, a2, (int)v56, v16, v17, v18, v56);
  *(_OWORD *)(a1 + 8224) = 0;
  *(_OWORD *)(a1 + 8240) = 0;
  *(_OWORD *)(a1 + 8256) = 0;
  *(_OWORD *)(a1 + 8272) = 0;
  sub_180C5A0(a1 + 8288, "euf");
  sub_180C5A0(a1 + 8296, "smt");
  *(_QWORD *)(a1 + 8304) = a2;
  *(_QWORD *)(a1 + 8312) = 0;
  *(_QWORD *)(a1 + 8320) = a2;
  *(_QWORD *)(a1 + 8328) = 0;
  *(_QWORD *)(a1 + 8336) = 0;
  *(_QWORD *)(a1 + 8344) = 0;
  *(_QWORD *)(a1 + 8352) = 0;
  *(_QWORD *)(a1 + 8360) = a2;
  *(_QWORD *)(a1 + 8368) = 0;
  v19 = (_OWORD *)sub_186B270(0x80u);
  v20 = _mm_loadl_epi64((const __m128i *)off_1C54920);
  v21 = v62;
  *v19 = 0;
  v22 = _mm_loadl_epi64((const __m128i *)off_1C54928);
  *(_QWORD *)(a1 + 8376) = v19;
  *(_QWORD *)(a1 + 8384) = 8;
  *(_DWORD *)(a1 + 8392) = 0;
  v19[1] = 0;
  v19[2] = 0;
  v19[3] = 0;
  v19[4] = 0;
  v19[5] = 0;
  v19[6] = 0;
  v19[7] = 0;
  *(_OWORD *)(a1 + 8400) = 0;
  v60 = _mm_unpacklo_epi64(v20, (__m128i)(unsigned __int64)sub_7CB090);
  v61 = _mm_unpacklo_epi64(v22, (__m128i)(unsigned __int64)sub_7CA010);
  sub_15B6B30(v21, v57);
  v23 = *(_QWORD *)(a1 + 24);
  if ( v23 && *(_BYTE *)(v23 + 352) )
    sub_7A4170(a1);
  sub_7F0DA0(v59, *(_DWORD *)(a1 + 1308) > 2u);
  v70.m512i_i64[0] = a1;
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 2096));
  *(_OWORD *)&v70.m512i_u64[1] = 0;
  v25 = _mm_load_si128(&v61);
  si128 = _mm_load_si128((const __m128i *)&v70);
  v66[1] = 0;
  *(__m128i *)(a1 + 2096) = si128;
  v27 = _mm_loadu_si128((const __m128i *)(a1 + 2112));
  v66[0] = a1;
  v67 = v25;
  *(__m128i *)v70.m512i_i8 = v24;
  *(__m128i *)&v70.m512i_u64[2] = v27;
  *(__m128i *)(a1 + 2112) = v25;
  if ( v27.m128i_i64[0] )
    ((void (__fastcall *)(__m512i *, __m512i *, __int64))v27.m128i_i64[0])(&v70, &v70, 3);
  v70.m512i_i64[0] = a1;
  v28 = _mm_loadu_si128((const __m128i *)(a1 + 1968));
  *(_OWORD *)&v70.m512i_u64[1] = 0;
  v29 = _mm_load_si128(&v60);
  v30 = _mm_load_si128((const __m128i *)&v70);
  v68[1] = 0;
  *(__m128i *)(a1 + 1968) = v30;
  v31 = _mm_loadu_si128((const __m128i *)(a1 + 1984));
  v68[0] = a1;
  v69 = v29;
  *(__m128i *)v70.m512i_i8 = v28;
  *(__m128i *)&v70.m512i_u64[2] = v31;
  *(__m128i *)(a1 + 1984) = v29;
  if ( v31.m128i_i64[0] )
    ((void (__fastcall *)(__m512i *, __m512i *, __int64))v31.m128i_i64[0])(&v70, &v70, 3);
  if ( *(_BYTE *)(a1 + 168) )
  {
    *(_OWORD *)v70.m512i_i8 = (unsigned __int64)a1;
    v33 = *(_QWORD *)(a1 + 1952);
    v34 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C54930), (__m128i)(unsigned __int64)sub_7C9CD0);
    *(__m128i *)&v70.m512i_u64[2] = v34;
    if ( v33 == *(_QWORD *)(a1 + 1960) )
    {
      v36 = *(__m128i **)(a1 + 1944);
      v37 = v33 - (_QWORD)v36;
      v38 = (v33 - (__int64)v36) >> 5;
      if ( v38 == 0x3FFFFFFFFFFFFFFLL )
        std::__throw_length_error("vector::_M_realloc_append");
      v39 = 1;
      if ( v38 )
        v39 = (v33 - (__int64)v36) >> 5;
      v40 = __CFADD__(v39, v38);
      v41 = v39 + v38;
      if ( v40 )
      {
        v58 = 0x7FFFFFFFFFFFFFE0LL;
        v42 = 0x7FFFFFFFFFFFFFE0LL;
      }
      else
      {
        if ( v41 > 0x3FFFFFFFFFFFFFFLL )
          v41 = 0x3FFFFFFFFFFFFFFLL;
        v58 = 32 * v41;
        v42 = 32 * v41;
      }
      v62 = v33;
      v43 = operator new(v42);
      v44 = v43 + v37;
      v45 = v43;
      v46 = (const __m128i *)v62;
      v47 = (void (__fastcall *)(__int64, __m512i *, __int64, const __m128i *))v70.m512i_i64[2];
      *(_QWORD *)(v44 + 16) = 0;
      *(_QWORD *)(v44 + 24) = 0;
      *(_OWORD *)v44 = 0;
      if ( v47 )
      {
        v47(v44, &v70, 2, v46);
        v46 = (const __m128i *)v62;
        *(__m128i *)(v44 + 16) = _mm_load_si128((const __m128i *)&v70.m512i_u64[2]);
      }
      v48 = v36;
      v49 = v45;
      v50 = v45;
      if ( v46 != v36 )
      {
        do
        {
          while ( 1 )
          {
            v51 = v48[1].m128i_i64[1];
            *(_QWORD *)(v49 + 16) = 0;
            *(_OWORD *)v49 = 0;
            *(_QWORD *)(v49 + 24) = v51;
            v52 = v48[1].m128i_i64[0];
            if ( !v52 )
              break;
            v53 = _mm_loadu_si128(v48);
            v48 += 2;
            *(_QWORD *)(v49 + 16) = v52;
            v49 += 32;
            *(__m128i *)(v49 - 32) = v53;
            if ( v46 == v48 )
              goto LABEL_30;
          }
          v48 += 2;
          v49 += 32;
        }
        while ( v46 != v48 );
LABEL_30:
        v50 = v45 + (char *)v46 - (char *)v36;
      }
      v54 = v50 + 32;
      if ( v36 )
        operator delete(v36, *(_QWORD *)(a1 + 1960) - (_QWORD)v36);
      *(_QWORD *)(a1 + 1944) = v45;
      *(_QWORD *)(a1 + 1952) = v54;
      *(_QWORD *)(a1 + 1960) = v45 + v58;
    }
    else
    {
      *(_QWORD *)(v33 + 16) = 0;
      *(_OWORD *)v33 = 0;
      v35 = v70.m512i_i64[0];
      *(__m128i *)(v33 + 16) = v34;
      *(_QWORD *)v33 = v35;
      *(_QWORD *)(a1 + 1952) += 32LL;
    }
    if ( v70.m512i_i64[2] )
      ((void (__fastcall *)(__m512i *, __m512i *, __int64))v70.m512i_i64[2])(&v70, &v70, 3);
  }
  if ( v69.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v69.m128i_i64[0])(v68, v68, 3);
  result = v67.m128i_i64[0];
  if ( v67.m128i_i64[0] )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))v67.m128i_i64[0])(v66, v66, 3);
  return result;
}

