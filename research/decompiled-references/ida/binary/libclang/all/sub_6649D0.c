__int64 __fastcall sub_6649D0(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        const __m128i *a6,
        const __m128i *a7,
        __int64 a8,
        __int64 *a9,
        const __m128i *a10,
        __int64 *a11,
        __int64 *a12,
        __int64 *a13,
        char *a14)
{
  __m128i v16; // rax
  __m128i v17; // xmm1
  __int64 result; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  char v21; // al
  __int64 *v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rax
  __m128i si128; // xmm2
  bool v26; // zf
  __int16 v27; // ax
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  _QWORD *v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rax
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 v37; // rdx
  void *v38; // rdx
  unsigned __int8 **v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rsi
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  void (__fastcall ***v45)(_QWORD); // rdi
  _QWORD *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rax
  int v49; // eax
  _DWORD *v50; // rdi
  _DWORD *v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // rsi
  __m128i v55; // [rsp+0h] [rbp-3D8h]
  __m128i v56; // [rsp+10h] [rbp-3C8h]
  __m128i v57; // [rsp+38h] [rbp-3A0h]
  __m128i v58; // [rsp+90h] [rbp-348h] BYREF
  _QWORD *v59; // [rsp+A8h] [rbp-330h]
  __int64 *v60; // [rsp+B0h] [rbp-328h]
  _BYTE *v61; // [rsp+B8h] [rbp-320h]
  __int64 v62; // [rsp+C0h] [rbp-318h]
  __int64 v63; // [rsp+C8h] [rbp-310h]
  _QWORD *v64; // [rsp+D0h] [rbp-308h]
  __int64 v65; // [rsp+D8h] [rbp-300h]
  __int64 *v66; // [rsp+E0h] [rbp-2F8h]
  __m128i *v67; // [rsp+E8h] [rbp-2F0h]
  __int64 *v68; // [rsp+F0h] [rbp-2E8h]
  __int64 *v69; // [rsp+F8h] [rbp-2E0h]
  __int64 *v70; // [rsp+100h] [rbp-2D8h]
  _BYTE *v71; // [rsp+108h] [rbp-2D0h]
  unsigned __int8 **v72; // [rsp+110h] [rbp-2C8h]
  unsigned __int8 **v73; // [rsp+118h] [rbp-2C0h]
  __int64 v74; // [rsp+120h] [rbp-2B8h] BYREF
  char v75; // [rsp+130h] [rbp-2A8h]
  __m128i v76; // [rsp+140h] [rbp-298h] BYREF
  __int64 v77; // [rsp+150h] [rbp-288h]
  _BYTE v78[32]; // [rsp+160h] [rbp-278h] BYREF
  __m128i v79; // [rsp+180h] [rbp-258h] BYREF
  __int64 v80; // [rsp+190h] [rbp-248h]
  __int64 v81[4]; // [rsp+1A0h] [rbp-238h] BYREF
  __int64 v82[4]; // [rsp+1C0h] [rbp-218h] BYREF
  void *v83; // [rsp+1E0h] [rbp-1F8h] BYREF
  void *v84; // [rsp+1E8h] [rbp-1F0h]
  _QWORD v85[2]; // [rsp+1F0h] [rbp-1E8h] BYREF
  void *v86[2]; // [rsp+200h] [rbp-1D8h] BYREF
  _QWORD v87[2]; // [rsp+210h] [rbp-1C8h] BYREF
  _QWORD v88[3]; // [rsp+220h] [rbp-1B8h] BYREF
  _BYTE v89[24]; // [rsp+238h] [rbp-1A0h] BYREF
  __int64 v90[3]; // [rsp+250h] [rbp-188h] BYREF
  _BYTE v91[24]; // [rsp+268h] [rbp-170h] BYREF
  __m128i v92; // [rsp+280h] [rbp-158h] BYREF
  __m128i v93; // [rsp+290h] [rbp-148h] BYREF
  __m128i v94; // [rsp+2A0h] [rbp-138h] BYREF
  __int64 v95; // [rsp+2B0h] [rbp-128h]
  void *v96; // [rsp+2C0h] [rbp-118h] BYREF
  __m128i v97; // [rsp+2C8h] [rbp-110h]
  _BYTE v98[32]; // [rsp+2D8h] [rbp-100h] BYREF
  __m128i v99; // [rsp+2F8h] [rbp-E0h] BYREF
  __m128i v100; // [rsp+308h] [rbp-D0h] BYREF
  __m128i v101; // [rsp+318h] [rbp-C0h] BYREF
  __int16 v102; // [rsp+328h] [rbp-B0h]
  char v103; // [rsp+32Ah] [rbp-AEh]
  _BYTE ptr[24]; // [rsp+330h] [rbp-A8h] BYREF
  _BYTE v105[32]; // [rsp+348h] [rbp-90h] BYREF
  __m128i v106; // [rsp+368h] [rbp-70h]
  __m128i v107; // [rsp+378h] [rbp-60h]
  __m128i v108; // [rsp+388h] [rbp-50h]
  __int16 v109; // [rsp+398h] [rbp-40h]
  char v110; // [rsp+39Ah] [rbp-3Eh]

  v63 = a4;
  v64 = a5;
  v66 = a9;
  v67 = (__m128i *)a11;
  v60 = a12;
  v68 = a13;
  v16.m128i_i64[0] = sub_FC8E80(a1, a2, a3);
  *(_QWORD *)&ptr[16] = 0;
  v58 = v16;
  v17 = _mm_load_si128(&v58);
  v61 = ptr;
  *(__m128i *)ptr = v17;
  sub_64F120((__int64)&v74, (__int64)(a1 + 20), (__m128i *)ptr, (__int64 *)&ptr[16]);
  result = v74;
  v62 = v74;
  if ( *(_QWORD *)&ptr[16] )
    result = (***(__int64 (__fastcall ****)(_QWORD))&ptr[16])(*(_QWORD *)&ptr[16]);
  if ( v75 )
  {
    v19 = *a1;
    a1[10] += 416LL;
    v20 = ((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL) + 416;
    if ( a1[1] >= v20 && v19 )
    {
      *a1 = v20;
      v59 = (_QWORD *)((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v59 = (_QWORD *)sub_63DCB0((__int64)a1, 416, 4);
    }
    v21 = *a14;
    v83 = v85;
    LOBYTE(v70) = v21;
    sub_63E170((__int64 *)&v83, (_BYTE *)*v68, *v68 + v68[1]);
    v68 = v88;
    sub_646AF0(v88, v60);
    v22 = v60;
    v60 = (__int64 *)v89;
    sub_644390((__int64)v89, v22 + 3);
    v69 = (__int64 *)v78;
    sub_644390((__int64)v78, v67->m128i_i64);
    v23 = _mm_loadu_si128(a10);
    v24 = a10[1].m128i_i64[0];
    a10[1].m128i_i64[0] = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v77 = v24;
    v76 = v23;
    v72 = (unsigned __int8 **)&v96;
    *a10 = 0;
    v26 = *(_QWORD *)(a8 + 8) == 0;
    v71 = v98;
    v96 = v98;
    v97 = si128;
    if ( !v26 )
      sub_63DE60((__int64)v72, (unsigned __int8 **)a8);
    v27 = *(_WORD *)(a8 + 104);
    v99 = _mm_loadu_si128((const __m128i *)(a8 + 56));
    v28 = _mm_loadu_si128((const __m128i *)(a8 + 72));
    v102 = v27;
    LOBYTE(v27) = *(_BYTE *)(a8 + 106);
    v100 = v28;
    v29 = _mm_loadu_si128((const __m128i *)(a8 + 88));
    v103 = v27;
    v101 = v29;
    v30 = (_QWORD *)sub_FC8E80(a1, v63, v64);
    v31 = _mm_loadu_si128(a6);
    v64 = v30;
    v32 = a6[3].m128i_i64[0];
    v92 = v31;
    v33 = _mm_loadu_si128(a6 + 1);
    v95 = v32;
    v34 = a7[1].m128i_i64[0];
    v93 = v33;
    v35 = _mm_loadu_si128(a6 + 2);
    v80 = v34;
    v94 = v35;
    v36 = _mm_loadu_si128(a7);
    LODWORD(v63) = (unsigned __int8)v70;
    v65 = v37;
    v38 = v84;
    v86[0] = v87;
    v79 = v36;
    if ( v83 == v85 )
    {
      v49 = (_DWORD)v84 + 1;
      v50 = v87;
      v51 = v85;
      if ( (unsigned int)((_DWORD)v84 + 1) >= 8 )
      {
        LODWORD(v53) = 0;
        do
        {
          v54 = (unsigned int)v53;
          v53 = (unsigned int)(v53 + 8);
          *(_QWORD *)((char *)v87 + v54) = *(_QWORD *)((char *)v85 + v54);
        }
        while ( (unsigned int)v53 < (v49 & 0xFFFFFFF8) );
        v50 = (_DWORD *)((char *)v87 + v53);
        v51 = (_DWORD *)((char *)v85 + v53);
      }
      v52 = 0;
      if ( (v49 & 4) != 0 )
      {
        *v50 = *v51;
        v52 = 4;
      }
      if ( (v49 & 2) != 0 )
      {
        *(_WORD *)((char *)v50 + v52) = *(_WORD *)((char *)v51 + v52);
        v52 += 2;
      }
      if ( (v49 & 1) != 0 )
        *((_BYTE *)v50 + v52) = *((_BYTE *)v51 + v52);
    }
    else
    {
      v86[0] = v83;
      v87[0] = v85[0];
    }
    v86[1] = v38;
    v83 = v85;
    v84 = nullptr;
    LOBYTE(v85[0]) = 0;
    sub_646AF0(v90, v68);
    v70 = (__int64 *)v91;
    sub_644390((__int64)v91, v60);
    sub_644390((__int64)v82, v69);
    v67 = &v76;
    sub_644390((__int64)v81, v76.m128i_i64);
    v39 = (unsigned __int8 **)v105;
    *(_QWORD *)ptr = v105;
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( v97.m128i_i64[0] )
    {
      v73 = (unsigned __int8 **)v105;
      sub_63DE60((__int64)v61, v72);
      v39 = v73;
    }
    v40 = _mm_loadu_si128(&v99);
    v72 = v39;
    v41 = 29;
    v106 = v40;
    v42 = _mm_loadu_si128(&v100);
    v109 = v102;
    v107 = v42;
    v43 = _mm_loadu_si128(&v101);
    v110 = v103;
    v108 = v43;
    v57 = _mm_load_si128(&v79);
    v55 = _mm_load_si128(&v92);
    v56 = _mm_load_si128(&v93);
    v44 = _mm_load_si128(&v94);
    sub_6474F0(
      (__int64)v59,
      0x1Du,
      v58.m128i_i64[0],
      (_QWORD *)v58.m128i_i64[1],
      v64,
      v65,
      v55.m128i_i64[0],
      v55.m128i_i64[1],
      v56.m128i_i64[0],
      v56.m128i_i64[1],
      v44.m128i_i64[0],
      v44.m128i_i64[1],
      v95,
      v57.m128i_i64[0],
      v57.m128i_i64[1],
      v80,
      (__int64)v61,
      v66,
      v81,
      v82,
      (__int64)v90,
      (__int64)v86,
      v63);
    if ( *(unsigned __int8 ***)ptr != v72 )
      free(*(void **)ptr);
    sub_6441A0(v81);
    sub_6441A0(v82);
    sub_6441A0(v70);
    sub_647CF0(v90);
    if ( v86[0] != v87 )
    {
      v41 = v87[0] + 1LL;
      operator delete(v86[0], v87[0] + 1LL);
    }
    *v59 = &off_49931A8;
    if ( v96 != v71 )
      free(v96);
    sub_6441A0(v67->m128i_i64);
    sub_6441A0(v69);
    sub_6441A0(v60);
    sub_647CF0(v68);
    if ( v83 != v85 )
    {
      v41 = v85[0] + 1LL;
      operator delete(v83, v85[0] + 1LL);
    }
    v45 = *(void (__fastcall ****)(_QWORD))(v62 + 16);
    *(_QWORD *)(v62 + 16) = v59;
    if ( v45 )
      (**v45)(v45);
    v46 = v59;
    v47 = v59[11];
    if ( v47 && (unsigned int)(*(_DWORD *)(v47 + 356) - 2) <= 0x13 && (v48 = sub_FC8C50(v47, v41)) != 0 )
      return sub_FC8D50(v48, v46);
    else
      return sub_64B900((__int64)(a1 + 23), (__int64)v59);
  }
  return result;
}

