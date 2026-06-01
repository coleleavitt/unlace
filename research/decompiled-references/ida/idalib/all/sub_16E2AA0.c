__int64 __fastcall sub_16E2AA0(__int64 a1, __m128i *a2, __int64 a3, int a4, __m128i a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // r15d
  unsigned int v12; // eax
  unsigned int v13; // r13d
  unsigned __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // r15
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm4
  __m128i v28; // xmm5
  __m128i v29; // xmm6
  __m128i v30; // xmm7
  __m128i v31; // xmm1
  __int64 v32; // r8
  _WORD *v33; // r15
  __int64 v34; // rax
  int v35; // r9d
  __int64 v36; // rbx
  __int64 v37; // rax
  char v38; // dl
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // edx
  unsigned int v44; // ebp
  __int64 (__fastcall **v45)(); // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v50; // rdx
  __int64 (__fastcall **v51)(); // rax
  __int64 v52; // rsi
  int v53; // edx
  unsigned int v54; // r15d
  unsigned __int64 v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rdx
  int v58; // r9d
  __m128i v59; // xmm3
  __m128i v60; // xmm4
  __m128i v61; // xmm5
  __m128i v62; // xmm6
  __m128i v63; // xmm7
  __m128i v64; // xmm2
  __int64 v65; // r8
  _WORD *v66; // r15
  __int64 v67; // rax
  unsigned int v68; // eax
  int v69; // [rsp+28h] [rbp-2B0h]
  int v70; // [rsp+28h] [rbp-2B0h]
  __int64 v71; // [rsp+28h] [rbp-2B0h]
  __int64 v72; // [rsp+38h] [rbp-2A0h]
  _BYTE *v73; // [rsp+40h] [rbp-298h]
  unsigned int v74; // [rsp+48h] [rbp-290h]
  int v75; // [rsp+4Ch] [rbp-28Ch]
  __int64 v76; // [rsp+68h] [rbp-270h]
  int v77; // [rsp+70h] [rbp-268h]
  _BYTE *v78; // [rsp+80h] [rbp-258h] BYREF
  unsigned __int64 v79; // [rsp+88h] [rbp-250h]
  __int64 v80; // [rsp+A0h] [rbp-238h] BYREF
  unsigned __int64 v81; // [rsp+A8h] [rbp-230h]
  _DWORD v82[8]; // [rsp+C0h] [rbp-218h] BYREF
  __m128i v83; // [rsp+E0h] [rbp-1F8h] BYREF
  __int64 v84; // [rsp+F0h] [rbp-1E8h] BYREF
  __int64 (__fastcall **v85)(); // [rsp+100h] [rbp-1D8h] BYREF
  unsigned __int64 v86; // [rsp+108h] [rbp-1D0h]
  __int128 v87; // [rsp+110h] [rbp-1C8h]
  __int64 v88; // [rsp+120h] [rbp-1B8h]
  char v89; // [rsp+128h] [rbp-1B0h]
  int v90; // [rsp+12Ch] [rbp-1ACh]
  void **p_ptr; // [rsp+130h] [rbp-1A8h]
  __int64 (__fastcall **v92)(); // [rsp+140h] [rbp-198h] BYREF
  unsigned __int64 v93; // [rsp+148h] [rbp-190h]
  void *v94; // [rsp+158h] [rbp-180h]
  __int64 v95; // [rsp+168h] [rbp-170h] BYREF
  __m128i v96; // [rsp+180h] [rbp-158h] BYREF
  __m128i v97; // [rsp+190h] [rbp-148h]
  __m128i v98; // [rsp+1A0h] [rbp-138h]
  __m128i v99; // [rsp+1B0h] [rbp-128h]
  __m128i v100; // [rsp+1C0h] [rbp-118h]
  __m128i v101; // [rsp+1D0h] [rbp-108h]
  __m128 v102; // [rsp+1E0h] [rbp-F8h]
  __m128i v103; // [rsp+1F0h] [rbp-E8h]
  void *ptr; // [rsp+200h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+208h] [rbp-D0h] BYREF
  void *v106[2]; // [rsp+218h] [rbp-C0h] BYREF
  _BYTE v107[176]; // [rsp+228h] [rbp-B0h] BYREF

  v9 = a2[4].m128i_u32[0];
  if ( (unsigned int)v9 <= 0x26 && (v10 = 0x4001000001LL, _bittest64(&v10, v9)) )
  {
    if ( a2[1].m128i_i32[3] != 1 )
      return 1;
  }
  else
  {
    if ( !a2[7].m128i_i8[8] )
    {
      v11 = *(unsigned __int8 *)(a1 + 97);
      if ( (_BYTE)v11 )
      {
        *(_BYTE *)(a1 + 97) = 0;
        *(_BYTE *)(a1 + 96) = a2[6].m128i_i8[0];
      }
      else if ( *(_BYTE *)(a1 + 96) != a2[6].m128i_i8[0] )
      {
        v12 = sub_16B5B40(a1, a2[3].m128i_i64[0]);
        sub_16E11F0(a1, v12, a3, a4, *(double *)a5.m128i_i64);
        return v11;
      }
    }
    if ( a2[1].m128i_i32[3] != 1 )
    {
LABEL_9:
      if ( (unsigned int)v9 > 0x26 )
        goto LABEL_10;
LABEL_48:
      v50 = 0x4001000001LL;
      if ( _bittest64(&v50, v9) || a2[7].m128i_i8[8] )
        return 1;
      goto LABEL_11;
    }
  }
  if ( a2[2].m128i_i32[0] )
    goto LABEL_9;
  v51 = (__int64 (__fastcall **)())sub_16B5B90(
                                     a1,
                                     a2[1].m128i_i32[0] - (unsigned int)a2[2].m128i_u8[5],
                                     a2[1].m128i_i32[2] + (unsigned int)a2[2].m128i_u8[5]);
  v52 = a2[1].m128i_i64[0];
  v85 = v51;
  v96.m128i_i64[0] = (__int64)v51;
  ptr = v51;
  LODWORD(v51) = a2[2].m128i_u8[5];
  v106[0] = v107;
  LODWORD(v86) = v53;
  v96.m128i_i8[8] = v53;
  si128.m128i_i8[0] = v53;
  *(__int64 *)((char *)si128.m128i_i64 + 4) = 0;
  si128.m128i_i8[12] = 0;
  v106[1] = nullptr;
  v107[0] = 0;
  v107[16] = 0;
  v54 = sub_16B5B40(a1, (int)v52 - (int)v51);
  sub_168B9B0((__int64)&v96, *(_QWORD *)(a1 + 8) + 8LL, 7346);
  v55 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80));
  v56 = *(_QWORD *)(a1 + 8);
  v92 = v85;
  LODWORD(v93) = v86;
  sub_16DE8D0(
    v56,
    *(unsigned __int8 *)(a1 + 98),
    v55,
    (__int64)&v96,
    v54,
    *(double *)a5.m128i_i64,
    (__int64)v85,
    (__int64)v85,
    v86,
    (char *)&ptr,
    1);
  if ( v96.m128i_i64[0] && v96.m128i_i64[1] )
    sub_1580C40(v96.m128i_u64[1], v96.m128i_u64[0]);
  if ( v106[0] != v107 )
    operator delete(v106[0]);
  v9 = a2[4].m128i_u32[0];
  if ( (unsigned int)v9 <= 0x26 )
    goto LABEL_48;
LABEL_10:
  if ( a2[7].m128i_i8[8] )
    return 1;
LABEL_11:
  v13 = a2[6].m128i_u32[1];
  if ( *(_DWORD *)(a1 + 40) > v13 )
    sub_16C5130((unsigned __int64 *)(a1 + 88), v13);
  if ( !sub_C9DF30(
          a2,
          *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL) + 17448LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL)) )
  {
    v57 = (__int64)&a2[2].m128i_i64[1];
    v58 = 6929;
LABEL_61:
    sub_16E0140(a1, (__int64)a2, v57, a3, a4, v58, *(double *)a5.m128i_i64);
    goto LABEL_16;
  }
  if ( sub_C9E1E0((__int64)a2) )
  {
    if ( sub_C9E250((__int64)a2) )
      goto LABEL_16;
    v57 = (__int64)&a2[2].m128i_i64[1];
    v58 = 6925;
    goto LABEL_61;
  }
  sub_16E05B0(a1, (__int64)a2, a3, a4, *(double *)a5.m128i_i64);
LABEL_16:
  if ( !(unsigned __int8)sub_C9E200((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL)) )
    sub_16E0920(a1, (__int64)&a2[2].m128i_i64[1], a3, a4, *(double *)a5.m128i_i64);
  if ( *(_DWORD *)(a1 + 56) > 1u )
    return 1;
  if ( v13 >= *(_DWORD *)(a1 + 40) )
  {
    v11 = sub_16E19E0(a1, (__int64)a2, (__int64)&a2[2].m128i_i64[1], a3, a4, v13, *(double *)a5.m128i_i64);
    if ( !(_BYTE)v11 )
      return v11;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * (*(_DWORD *)(a1 + 36) + v13));
  if ( !v14 )
    return 1;
  sub_EE5F60((__int64)v82, (__int64)a2, *(_QWORD **)(*(_QWORD *)(a1 + 8) + 248LL));
  if ( v82[0] == 1 )
    return 1;
  v17 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 248LL);
  v69 = sub_C9CA70((__int64)v82, v17, *(_QWORD *)(v14 + 8), v15, v16);
  v21 = sub_C00A40(v14, (__int64)v17, v18, v19, v20);
  v24 = *(_QWORD **)(a1 + 8);
  if ( v69 != 5 )
  {
    if ( v69 != 1 )
    {
      v25 = _mm_loadu_si128(a2 + 1);
      v26 = _mm_loadu_si128(a2 + 2);
      v27 = _mm_loadu_si128(a2 + 3);
      v96 = _mm_loadu_si128(a2);
      v28 = _mm_loadu_si128(a2 + 4);
      v29 = _mm_loadu_si128(a2 + 5);
      v30 = _mm_loadu_si128(a2 + 6);
      v31 = _mm_loadu_si128(a2 + 7);
      v97 = v25;
      v98 = v26;
      v99 = v27;
      v100 = v28;
      v101 = v29;
      v102 = (__m128)v30;
      v103 = v31;
      v32 = v24[31];
      v33 = (_WORD *)v24[29];
      v72 = v32;
      v34 = sub_BFB840(v14);
      v11 = sub_EE6620((__int64)&v96, *(_QWORD *)(v14 + 8), *(_QWORD *)(v34 + 8), v33, v72, *(double *)a5.m128i_i64);
      v35 = 2 * (v69 == 4) + 6916;
      goto LABEL_25;
    }
    return 1;
  }
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v24[33] + 32LL), 0x1B07u, v21, v24[33], v22, v23) == 1 )
    return 1;
  v59 = _mm_loadu_si128(a2 + 1);
  v60 = _mm_loadu_si128(a2 + 2);
  v61 = _mm_loadu_si128(a2 + 3);
  v96 = _mm_loadu_si128(a2);
  v62 = _mm_loadu_si128(a2 + 4);
  v63 = _mm_loadu_si128(a2 + 5);
  a5 = _mm_loadu_si128(a2 + 6);
  v64 = _mm_loadu_si128(a2 + 7);
  v97 = v59;
  v98 = v60;
  v99 = v61;
  v100 = v62;
  v101 = v63;
  v102 = (__m128)a5;
  v103 = v64;
  v65 = v24[31];
  v66 = (_WORD *)v24[29];
  v71 = v65;
  v67 = sub_BFB840(v14);
  v68 = sub_EE6620((__int64)&v96, *(_QWORD *)(v14 + 8), *(_QWORD *)(v67 + 8), v66, v71, *(double *)a5.m128i_i64);
  v35 = 6916;
  v11 = v68;
LABEL_25:
  if ( !(_BYTE)v11 )
  {
    v70 = v35;
    v42 = sub_16B5B90(a1, a3, a4);
    LODWORD(v81) = v43;
    v80 = v42;
    v44 = sub_EEB7E0(v14, a3, *(double *)a5.m128i_i64);
    sub_168B9B0((__int64)&v85, *(_QWORD *)(a1 + 8) + 8LL, v70);
    sub_C9E420((__m128i *)&ptr, (__int64)v82, *(__int64 **)(*(_QWORD *)(a1 + 8) + 248LL));
    sub_AEC220((unsigned __int8 **)&v85, ptr, si128.m128i_i64[0]);
    sub_AE9DF0((unsigned __int8 **)&v85, *(_QWORD *)(v14 + 8), 8u);
    sub_16B71B0((unsigned __int8 **)&v85, 0);
    v45 = (__int64 (__fastcall **)())sub_EEC8C0(v14, 0, *(double *)a5.m128i_i64);
    LOBYTE(v93) = 1;
    v92 = v45;
    sub_AEC610((__int64 *)&v85, (__int64 *)&v92);
    sub_1582CA0((__int64)&v92, (_BYTE **)&v85);
    v46 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80));
    v47 = *(_QWORD *)(a1 + 8);
    v83.m128i_i64[0] = v80;
    v48 = *(unsigned __int8 *)(a1 + 98);
    v83.m128i_i32[2] = v81;
    sub_16E1DA0(v47, v48, v46, (__int64)&v92, v44, 0, *(double *)a5.m128i_i64, v80, v81, nullptr, 0);
    if ( v92 && v93 )
      sub_1580C40(v93, (unsigned __int64)v92);
    if ( ptr != &si128.m128i_u64[1] )
      operator delete(ptr);
    if ( v85 && v86 )
      sub_1580C40(v86, (unsigned __int64)v85);
    return 1;
  }
  v75 = v35;
  ptr = v106;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v87 = 0;
  v85 = &off_2BEBEE0;
  p_ptr = &ptr;
  LODWORD(v86) = 2;
  v89 = 0;
  v90 = 1;
  v88 = 0;
  sub_A1F700(&v85);
  sub_EE6960((__int64)&v96, (__int64)&v85);
  v36 = (__int64)p_ptr[1];
  v73 = *p_ptr;
  v37 = sub_16B5B90(a1, a3, a4);
  sub_16BA3D0((__int64)&v92, v37, v38, v73, v36);
  v39 = sub_16B5B90(a1, a3, a4);
  v77 = v40;
  v76 = v39;
  v74 = sub_EEB7E0(v14, a3, 0.0);
  sub_168B9B0((__int64)&v78, *(_QWORD *)(a1 + 8) + 8LL, v75);
  sub_C9E420(&v83, (__int64)v82, *(__int64 **)(*(_QWORD *)(a1 + 8) + 248LL));
  sub_AEC220(&v78, v83.m128i_i64[0], v83.m128i_i64[1]);
  sub_AE9DF0(&v78, *(_QWORD *)(v14 + 8), 8u);
  sub_16B71B0(&v78, 0);
  v41 = sub_EEC8C0(v14, 0, 0.0);
  LOBYTE(v81) = 1;
  v80 = v41;
  sub_AEC610((__int64 *)&v78, &v80);
  sub_1582CA0((__int64)&v80, &v78);
  sub_16E1DA0(
    *(_QWORD *)(a1 + 8),
    *(unsigned __int8 *)(a1 + 98),
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
    (__int64)&v80,
    v74,
    0,
    0.0,
    v76,
    v77,
    (char *)&v92,
    1);
  if ( v80 && v81 )
    sub_1580C40(v81, v80);
  if ( (__int64 *)v83.m128i_i64[0] != &v84 )
    operator delete((void *)v83.m128i_i64[0]);
  if ( v78 && v79 )
    sub_1580C40(v79, (unsigned __int64)v78);
  if ( v94 != &v95 )
    operator delete(v94);
  v85 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v85);
  if ( ptr != v106 )
    free(ptr);
  return v11;
}
