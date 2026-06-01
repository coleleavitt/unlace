__int64 __fastcall sub_658D90(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        const __m128i *a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 a12,
        __int64 a13,
        unsigned __int8 *a14)
{
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // esi
  bool v24; // zf
  __int16 v25; // ax
  __m128i v26; // xmm1
  __m128i v27; // xmm1
  __int64 v28; // rax
  __m128i v29; // xmm1
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __m128i v33; // xmm1
  __m128i v34; // xmm1
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  void (__fastcall ***v38)(_QWORD); // rdi
  __int64 v39; // rdi
  __int64 v40; // rax
  int v41; // edx
  _DWORD *v42; // r8
  _DWORD *v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  __m128i v47; // [rsp+0h] [rbp-458h]
  __m128i v48; // [rsp+10h] [rbp-448h]
  __m128i v49; // [rsp+38h] [rbp-420h]
  __int64 v50; // [rsp+90h] [rbp-3C8h]
  __int64 v53; // [rsp+B0h] [rbp-3A8h]
  unsigned __int8 v54; // [rsp+D8h] [rbp-380h]
  __int64 v55; // [rsp+E0h] [rbp-378h]
  __int64 v56; // [rsp+E8h] [rbp-370h]
  __int64 v57; // [rsp+110h] [rbp-348h] BYREF
  char v58; // [rsp+120h] [rbp-338h]
  __int64 v59[4]; // [rsp+130h] [rbp-328h] BYREF
  __int64 v60[4]; // [rsp+150h] [rbp-308h] BYREF
  __m128i v61; // [rsp+170h] [rbp-2E8h] BYREF
  __int64 v62; // [rsp+180h] [rbp-2D8h]
  __int64 v63[4]; // [rsp+190h] [rbp-2C8h] BYREF
  __int64 v64[4]; // [rsp+1B0h] [rbp-2A8h] BYREF
  void *v65; // [rsp+1D0h] [rbp-288h]
  __int64 v66; // [rsp+1D8h] [rbp-280h]
  _QWORD v67[2]; // [rsp+1E0h] [rbp-278h] BYREF
  void *v68[2]; // [rsp+1F0h] [rbp-268h] BYREF
  _QWORD v69[2]; // [rsp+200h] [rbp-258h] BYREF
  __m128i v70; // [rsp+210h] [rbp-248h] BYREF
  __m128i v71; // [rsp+220h] [rbp-238h] BYREF
  __m128i v72; // [rsp+230h] [rbp-228h] BYREF
  __int64 v73; // [rsp+240h] [rbp-218h]
  void *v74; // [rsp+250h] [rbp-208h] BYREF
  __m128i si128; // [rsp+258h] [rbp-200h]
  _BYTE v76[32]; // [rsp+268h] [rbp-1F0h] BYREF
  __m128i v77; // [rsp+288h] [rbp-1D0h] BYREF
  __m128i v78; // [rsp+298h] [rbp-1C0h] BYREF
  __m128i v79; // [rsp+2A8h] [rbp-1B0h] BYREF
  __int16 v80; // [rsp+2B8h] [rbp-1A0h]
  char v81; // [rsp+2BAh] [rbp-19Eh]
  void *ptr; // [rsp+2C0h] [rbp-198h] BYREF
  __m128i v83; // [rsp+2C8h] [rbp-190h]
  _BYTE v84[32]; // [rsp+2D8h] [rbp-180h] BYREF
  __m128i v85; // [rsp+2F8h] [rbp-160h]
  __m128i v86; // [rsp+308h] [rbp-150h]
  __m128i v87; // [rsp+318h] [rbp-140h]
  __int16 v88; // [rsp+328h] [rbp-130h]
  char v89; // [rsp+32Ah] [rbp-12Eh]
  __m128i v90; // [rsp+330h] [rbp-128h] BYREF
  __int64 v91[10]; // [rsp+340h] [rbp-118h] BYREF
  char *v92; // [rsp+390h] [rbp-C8h] BYREF
  __int64 v93; // [rsp+398h] [rbp-C0h]
  char v94; // [rsp+3A0h] [rbp-B8h] BYREF

  v53 = sub_FC8E80(a1, a2, a3);
  v17 = v16;
  v90.m128i_i64[0] = v53;
  v90.m128i_i64[1] = v16;
  v91[0] = 0;
  sub_64F120((__int64)&v57, (__int64)(a1 + 20), &v90, v91);
  v50 = v57;
  if ( v91[0] )
    (**(void (__fastcall ***)(__int64))v91[0])(v91[0]);
  if ( v58 )
  {
    v20 = *a1;
    a1[10] += 712;
    v18 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( a1[1] >= (unsigned __int64)(v18 + 712) && v20 )
      *a1 = v18 + 712;
    else
      v18 = sub_63DCB0((__int64)a1, 712, 4);
    v21 = *(_QWORD *)(a13 + 8);
    v54 = *a14;
    v65 = v67;
    v22 = a13 + 16;
    if ( *(_QWORD *)a13 == a13 + 16 )
    {
      v41 = v21 + 1;
      v42 = v67;
      v43 = (_DWORD *)(a13 + 16);
      if ( (unsigned int)(v21 + 1) >= 8 )
      {
        LODWORD(v45) = 0;
        do
        {
          v46 = (unsigned int)v45;
          v45 = (unsigned int)(v45 + 8);
          *(_QWORD *)((char *)v67 + v46) = *(_QWORD *)(v22 + v46);
        }
        while ( (unsigned int)v45 < (v41 & 0xFFFFFFF8) );
        v42 = (_DWORD *)((char *)v67 + v45);
        v43 = (_DWORD *)(v22 + v45);
      }
      v44 = 0;
      if ( (v41 & 4) != 0 )
      {
        *v42 = *v43;
        v44 = 4;
      }
      if ( (v41 & 2) != 0 )
      {
        *(_WORD *)((char *)v42 + v44) = *(_WORD *)((char *)v43 + v44);
        v44 += 2;
      }
      if ( (v41 & 1) != 0 )
        *((_BYTE *)v42 + v44) = *((_BYTE *)v43 + v44);
    }
    else
    {
      v65 = *(void **)a13;
      v67[0] = *(_QWORD *)(a13 + 16);
    }
    v66 = v21;
    v90.m128i_i64[0] = (__int64)v91;
    *(_QWORD *)a13 = v22;
    *(_QWORD *)(a13 + 8) = 0;
    *(_BYTE *)(a13 + 16) = 0;
    v23 = *(_DWORD *)(a12 + 8);
    v90.m128i_i64[1] = 0x100000000LL;
    if ( v23 )
      sub_649B50((__int64)&v90, a12);
    v93 = 0x100000000LL;
    v92 = &v94;
    if ( *(_DWORD *)(a12 + 104) )
      sub_64AB70((__int64)&v92, a12 + 96);
    sub_644390((__int64)v60, a11);
    sub_644390((__int64)v59, a10);
    v24 = *(_QWORD *)(a8 + 8) == 0;
    v74 = v76;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( !v24 )
      sub_63DE60((__int64)&v74, (unsigned __int8 **)a8);
    v25 = *(_WORD *)(a8 + 104);
    v77 = _mm_loadu_si128((const __m128i *)(a8 + 56));
    v26 = _mm_loadu_si128((const __m128i *)(a8 + 72));
    v80 = v25;
    LOBYTE(v25) = *(_BYTE *)(a8 + 106);
    v78 = v26;
    v27 = _mm_loadu_si128((const __m128i *)(a8 + 88));
    v81 = v25;
    v79 = v27;
    v28 = sub_FC8E80(a1, a4, a5);
    v29 = _mm_loadu_si128(a6);
    v68[0] = v69;
    v30 = v28;
    v56 = v31;
    v32 = a6[3].m128i_i64[0];
    v70 = v29;
    v33 = _mm_loadu_si128(a6 + 1);
    v73 = v32;
    v71 = v33;
    v72 = _mm_loadu_si128(a6 + 2);
    v34 = _mm_loadu_si128(a7);
    v55 = v30;
    v62 = a7[1].m128i_i64[0];
    v61 = v34;
    sub_63E170((__int64 *)v68, v65, (__int64)v65 + v66);
    sub_644390((__int64)v64, v60);
    sub_644390((__int64)v63, v59);
    ptr = v84;
    v83 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( si128.m128i_i64[0] )
      sub_63DE60((__int64)&ptr, (unsigned __int8 **)&v74);
    v85 = _mm_loadu_si128(&v77);
    v35 = _mm_loadu_si128(&v78);
    v88 = v80;
    v86 = v35;
    v36 = _mm_loadu_si128(&v79);
    v89 = v81;
    v87 = v36;
    v49 = _mm_load_si128(&v61);
    v47 = _mm_load_si128(&v70);
    v48 = _mm_load_si128(&v71);
    v37 = _mm_load_si128(&v72);
    sub_645BA0(
      v18,
      v53,
      v17,
      v55,
      v56,
      (__int64)&ptr,
      v47.m128i_i64[0],
      v47.m128i_i64[1],
      v48.m128i_i64[0],
      v48.m128i_i64[1],
      v37.m128i_i64[0],
      v37.m128i_i64[1],
      v73,
      v49.m128i_i64[0],
      v49.m128i_i64[1],
      v62,
      a9,
      v63,
      v64,
      0xCu,
      (__int64)v68,
      v54,
      0);
    if ( ptr != v84 )
      free(ptr);
    sub_6441A0(v63);
    sub_6441A0(v64);
    if ( v68[0] != v69 )
      operator delete(v68[0], v69[0] + 1LL);
    *(_QWORD *)(v18 + 480) = 0x100000000LL;
    *(_QWORD *)v18 = &off_49F4D70;
    *(_QWORD *)(v18 + 472) = v18 + 488;
    if ( v90.m128i_i32[2] )
      sub_64A2B0(v18 + 472, (__int64)&v90);
    *(_QWORD *)(v18 + 576) = 0x100000000LL;
    *(_QWORD *)(v18 + 568) = v18 + 584;
    if ( (_DWORD)v93 )
      sub_64B430(v18 + 568, (__int64 *)&v92);
    if ( v74 != v76 )
      free(v74);
    sub_6441A0(v59);
    sub_6441A0(v60);
    sub_6469C0((__int64)&v92);
    sub_646940((__int64)&v90);
    if ( v65 != v67 )
      operator delete(v65, v67[0] + 1LL);
    v38 = *(void (__fastcall ****)(_QWORD))(v50 + 16);
    *(_QWORD *)(v50 + 16) = v18;
    if ( v38 )
      (**v38)(v38);
    v39 = *(_QWORD *)(v18 + 88);
    if ( v39 && (unsigned int)(*(_DWORD *)(v39 + 356) - 2) <= 0x13 && (v40 = sub_FC8C50()) != 0 )
      sub_FC8D50(v40, v18);
    else
      sub_64B900((__int64)(a1 + 23), v18);
  }
  else
  {
    v18 = *(_QWORD *)(v50 + 16);
    if ( *(_DWORD *)(v18 + 356) != 12 )
      return 0;
  }
  return v18;
}

