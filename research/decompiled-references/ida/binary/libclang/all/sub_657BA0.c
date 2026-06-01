__int64 __fastcall sub_657BA0(
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
  int v21; // esi
  bool v22; // zf
  __int16 v23; // ax
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __m128i v29; // xmm0
  _DWORD *v30; // rcx
  __m128i v31; // xmm0
  void *v32; // rdx
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  void (__fastcall ***v36)(_QWORD); // rdi
  __int64 v37; // rdi
  __int64 v38; // rax
  int v39; // eax
  _DWORD *v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rsi
  __m128i v44; // [rsp+0h] [rbp-458h]
  __m128i v45; // [rsp+10h] [rbp-448h]
  __m128i v46; // [rsp+38h] [rbp-420h]
  __int64 v47; // [rsp+98h] [rbp-3C0h]
  __int64 v50; // [rsp+C0h] [rbp-398h]
  unsigned __int8 v51; // [rsp+E0h] [rbp-378h]
  __int64 v52; // [rsp+E8h] [rbp-370h]
  __int64 v53; // [rsp+F0h] [rbp-368h]
  __int64 v54; // [rsp+110h] [rbp-348h] BYREF
  char v55; // [rsp+120h] [rbp-338h]
  __int64 v56[4]; // [rsp+130h] [rbp-328h] BYREF
  __int64 v57[4]; // [rsp+150h] [rbp-308h] BYREF
  __m128i v58; // [rsp+170h] [rbp-2E8h] BYREF
  __int64 v59; // [rsp+180h] [rbp-2D8h]
  __int64 v60[4]; // [rsp+190h] [rbp-2C8h] BYREF
  __int64 v61[4]; // [rsp+1B0h] [rbp-2A8h] BYREF
  void *v62; // [rsp+1D0h] [rbp-288h] BYREF
  void *v63; // [rsp+1D8h] [rbp-280h]
  _QWORD v64[2]; // [rsp+1E0h] [rbp-278h] BYREF
  void *v65[2]; // [rsp+1F0h] [rbp-268h] BYREF
  _QWORD v66[2]; // [rsp+200h] [rbp-258h] BYREF
  __m128i v67; // [rsp+210h] [rbp-248h] BYREF
  __m128i v68; // [rsp+220h] [rbp-238h] BYREF
  __m128i v69; // [rsp+230h] [rbp-228h] BYREF
  __int64 v70; // [rsp+240h] [rbp-218h]
  void *v71; // [rsp+250h] [rbp-208h] BYREF
  __m128i si128; // [rsp+258h] [rbp-200h]
  _BYTE v73[32]; // [rsp+268h] [rbp-1F0h] BYREF
  __m128i v74; // [rsp+288h] [rbp-1D0h] BYREF
  __m128i v75; // [rsp+298h] [rbp-1C0h] BYREF
  __m128i v76; // [rsp+2A8h] [rbp-1B0h] BYREF
  __int16 v77; // [rsp+2B8h] [rbp-1A0h]
  char v78; // [rsp+2BAh] [rbp-19Eh]
  void *ptr; // [rsp+2C0h] [rbp-198h] BYREF
  __m128i v80; // [rsp+2C8h] [rbp-190h]
  _BYTE v81[32]; // [rsp+2D8h] [rbp-180h] BYREF
  __m128i v82; // [rsp+2F8h] [rbp-160h]
  __m128i v83; // [rsp+308h] [rbp-150h]
  __m128i v84; // [rsp+318h] [rbp-140h]
  __int16 v85; // [rsp+328h] [rbp-130h]
  char v86; // [rsp+32Ah] [rbp-12Eh]
  __m128i v87; // [rsp+330h] [rbp-128h] BYREF
  __int64 v88[10]; // [rsp+340h] [rbp-118h] BYREF
  char *v89; // [rsp+390h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+398h] [rbp-C0h]
  char v91; // [rsp+3A0h] [rbp-B8h] BYREF

  v50 = sub_FC8E80(a1, a2, a3);
  v17 = v16;
  v87.m128i_i64[0] = v50;
  v87.m128i_i64[1] = v16;
  v88[0] = 0;
  sub_64F120((__int64)&v54, (__int64)(a1 + 20), &v87, v88);
  v47 = v54;
  if ( v88[0] )
    (**(void (__fastcall ***)(__int64))v88[0])(v88[0]);
  if ( v55 )
  {
    v20 = *a1;
    a1[10] += 712;
    v18 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( a1[1] >= (unsigned __int64)(v18 + 712) && v20 )
      *a1 = v18 + 712;
    else
      v18 = sub_63DCB0((__int64)a1, 712, 4);
    v51 = *a14;
    v62 = v64;
    sub_63E170((__int64 *)&v62, *(_BYTE **)a13, *(_QWORD *)a13 + *(_QWORD *)(a13 + 8));
    v87.m128i_i64[0] = (__int64)v88;
    v21 = *(_DWORD *)(a12 + 8);
    v87.m128i_i64[1] = 0x100000000LL;
    if ( v21 )
      sub_649B50((__int64)&v87, a12);
    v90 = 0x100000000LL;
    v89 = &v91;
    if ( *(_DWORD *)(a12 + 104) )
      sub_64AB70((__int64)&v89, a12 + 96);
    sub_644390((__int64)v57, a11);
    sub_644390((__int64)v56, a10);
    v22 = *(_QWORD *)(a8 + 8) == 0;
    v71 = v73;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( !v22 )
      sub_63DE60((__int64)&v71, (unsigned __int8 **)a8);
    v23 = *(_WORD *)(a8 + 104);
    v74 = _mm_loadu_si128((const __m128i *)(a8 + 56));
    v24 = _mm_loadu_si128((const __m128i *)(a8 + 72));
    v77 = v23;
    LOBYTE(v23) = *(_BYTE *)(a8 + 106);
    v75 = v24;
    v25 = _mm_loadu_si128((const __m128i *)(a8 + 88));
    v78 = v23;
    v76 = v25;
    v26 = sub_FC8E80(a1, a4, a5);
    v53 = v27;
    v28 = a6[3].m128i_i64[0];
    v67 = _mm_loadu_si128(a6);
    v29 = _mm_loadu_si128(a6 + 1);
    v70 = v28;
    v68 = v29;
    v52 = v26;
    v30 = v64;
    v69 = _mm_loadu_si128(a6 + 2);
    v31 = _mm_loadu_si128(a7);
    v32 = v63;
    v59 = a7[1].m128i_i64[0];
    v65[0] = v66;
    v58 = v31;
    if ( v62 == v64 )
    {
      v39 = (_DWORD)v63 + 1;
      v40 = v66;
      if ( (unsigned int)((_DWORD)v63 + 1) >= 8 )
      {
        LODWORD(v42) = 0;
        do
        {
          v43 = (unsigned int)v42;
          v42 = (unsigned int)(v42 + 8);
          *(_QWORD *)((char *)v66 + v43) = *(_QWORD *)((char *)v64 + v43);
        }
        while ( (unsigned int)v42 < (v39 & 0xFFFFFFF8) );
        v40 = (_DWORD *)((char *)v66 + v42);
        v30 = (_DWORD *)((char *)v64 + v42);
      }
      v41 = 0;
      if ( (v39 & 4) != 0 )
      {
        *v40 = *v30;
        v41 = 4;
      }
      if ( (v39 & 2) != 0 )
      {
        *(_WORD *)((char *)v40 + v41) = *(_WORD *)((char *)v30 + v41);
        v41 += 2;
      }
      if ( (v39 & 1) != 0 )
        *((_BYTE *)v40 + v41) = *((_BYTE *)v30 + v41);
    }
    else
    {
      v65[0] = v62;
      v66[0] = v64[0];
    }
    v65[1] = v32;
    LOBYTE(v64[0]) = 0;
    v62 = v64;
    v63 = nullptr;
    sub_644390((__int64)v61, v57);
    sub_644390((__int64)v60, v56);
    ptr = v81;
    v80 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( si128.m128i_i64[0] )
      sub_63DE60((__int64)&ptr, (unsigned __int8 **)&v71);
    v82 = _mm_loadu_si128(&v74);
    v33 = _mm_loadu_si128(&v75);
    v85 = v77;
    v83 = v33;
    v34 = _mm_loadu_si128(&v76);
    v86 = v78;
    v84 = v34;
    v46 = _mm_load_si128(&v58);
    v44 = _mm_load_si128(&v67);
    v45 = _mm_load_si128(&v68);
    v35 = _mm_load_si128(&v69);
    sub_645BA0(
      v18,
      v50,
      v17,
      v52,
      v53,
      (__int64)&ptr,
      v44.m128i_i64[0],
      v44.m128i_i64[1],
      v45.m128i_i64[0],
      v45.m128i_i64[1],
      v35.m128i_i64[0],
      v35.m128i_i64[1],
      v70,
      v46.m128i_i64[0],
      v46.m128i_i64[1],
      v59,
      a9,
      v60,
      v61,
      0xAu,
      (__int64)v65,
      v51,
      0);
    if ( ptr != v81 )
      free(ptr);
    sub_6441A0(v60);
    sub_6441A0(v61);
    if ( v65[0] != v66 )
      operator delete(v65[0], v66[0] + 1LL);
    *(_QWORD *)(v18 + 480) = 0x100000000LL;
    *(_QWORD *)v18 = &off_49F4D20;
    *(_QWORD *)(v18 + 472) = v18 + 488;
    if ( v87.m128i_i32[2] )
      sub_64A2B0(v18 + 472, (__int64)&v87);
    *(_QWORD *)(v18 + 576) = 0x100000000LL;
    *(_QWORD *)(v18 + 568) = v18 + 584;
    if ( (_DWORD)v90 )
      sub_64B430(v18 + 568, (__int64 *)&v89);
    if ( v71 != v73 )
      free(v71);
    sub_6441A0(v56);
    sub_6441A0(v57);
    sub_6469C0((__int64)&v89);
    sub_646940((__int64)&v87);
    if ( v62 != v64 )
      operator delete(v62, v64[0] + 1LL);
    v36 = *(void (__fastcall ****)(_QWORD))(v47 + 16);
    *(_QWORD *)(v47 + 16) = v18;
    if ( v36 )
      (**v36)(v36);
    v37 = *(_QWORD *)(v18 + 88);
    if ( v37 && (unsigned int)(*(_DWORD *)(v37 + 356) - 2) <= 0x13 && (v38 = sub_FC8C50()) != 0 )
      sub_FC8D50(v38, v18);
    else
      sub_64B900((__int64)(a1 + 23), v18);
  }
  else
  {
    v18 = *(_QWORD *)(v47 + 16);
    if ( *(_DWORD *)(v18 + 356) != 10 )
      return 0;
  }
  return v18;
}

