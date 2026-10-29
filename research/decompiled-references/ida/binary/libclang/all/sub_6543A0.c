__int64 __fastcall sub_6543A0(
        unsigned __int64 *a1,
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
        unsigned __int8 *a13)
{
  void *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // r12
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  bool v24; // zf
  __int16 v25; // ax
  __m128i v26; // xmm1
  __m128i v27; // xmm1
  __int64 v28; // rax
  __m128i v29; // xmm1
  __int64 v30; // rdx
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  void (__fastcall ***v35)(_QWORD); // rdi
  __int64 v36; // rdi
  __int64 v37; // rax
  int v38; // edx
  _DWORD *v39; // r8
  _DWORD *v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdi
  __m128i v44; // [rsp+0h] [rbp-358h]
  __m128i v45; // [rsp+10h] [rbp-348h]
  __m128i v46; // [rsp+38h] [rbp-320h]
  __int64 v47; // [rsp+98h] [rbp-2C0h]
  unsigned __int8 v50; // [rsp+D0h] [rbp-288h]
  __int64 v51; // [rsp+E0h] [rbp-278h]
  __int64 v52; // [rsp+E8h] [rbp-270h]
  __int64 v53; // [rsp+100h] [rbp-258h] BYREF
  char v54; // [rsp+110h] [rbp-248h]
  __int64 v55[4]; // [rsp+120h] [rbp-238h] BYREF
  __int64 v56[4]; // [rsp+140h] [rbp-218h] BYREF
  __m128i v57; // [rsp+160h] [rbp-1F8h] BYREF
  __int64 v58; // [rsp+170h] [rbp-1E8h]
  __int64 v59[4]; // [rsp+180h] [rbp-1D8h] BYREF
  __int64 v60[4]; // [rsp+1A0h] [rbp-1B8h] BYREF
  void *v61; // [rsp+1C0h] [rbp-198h]
  __int64 v62; // [rsp+1C8h] [rbp-190h]
  _QWORD v63[2]; // [rsp+1D0h] [rbp-188h] BYREF
  void *v64[2]; // [rsp+1E0h] [rbp-178h] BYREF
  _QWORD v65[2]; // [rsp+1F0h] [rbp-168h] BYREF
  __m128i v66; // [rsp+200h] [rbp-158h] BYREF
  __m128i v67; // [rsp+210h] [rbp-148h] BYREF
  __m128i v68; // [rsp+220h] [rbp-138h] BYREF
  __int64 v69; // [rsp+230h] [rbp-128h]
  void *v70; // [rsp+240h] [rbp-118h] BYREF
  __m128i si128; // [rsp+248h] [rbp-110h]
  _BYTE v72[32]; // [rsp+258h] [rbp-100h] BYREF
  __m128i v73; // [rsp+278h] [rbp-E0h] BYREF
  __m128i v74; // [rsp+288h] [rbp-D0h] BYREF
  __m128i v75; // [rsp+298h] [rbp-C0h] BYREF
  __int16 v76; // [rsp+2A8h] [rbp-B0h]
  char v77; // [rsp+2AAh] [rbp-AEh]
  void *ptr; // [rsp+2B0h] [rbp-A8h] BYREF
  __m128i v79; // [rsp+2B8h] [rbp-A0h] BYREF
  _BYTE v80[32]; // [rsp+2C8h] [rbp-90h] BYREF
  __m128i v81; // [rsp+2E8h] [rbp-70h]
  __m128i v82; // [rsp+2F8h] [rbp-60h]
  __m128i v83; // [rsp+308h] [rbp-50h]
  __int16 v84; // [rsp+318h] [rbp-40h]
  char v85; // [rsp+31Ah] [rbp-3Eh]

  ptr = (void *)sub_FC8E80(a1, a2, a3);
  v15 = ptr;
  v17 = v16;
  v79 = (__m128i)(unsigned __int64)v16;
  sub_64F120((__int64)&v53, (__int64)(a1 + 20), (__m128i *)&ptr, &v79.m128i_i64[1]);
  v47 = v53;
  if ( v79.m128i_i64[1] )
    (**(void (__fastcall ***)(__int64))v79.m128i_i64[1])(v79.m128i_i64[1]);
  if ( v54 )
  {
    v20 = *a1;
    a1[10] += 472LL;
    v21 = ((v20 + 15) & 0xFFFFFFFFFFFFFFF0LL) + 472;
    if ( a1[1] >= v21 && v20 )
    {
      *a1 = v21;
      v18 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v18 = sub_63DCB0((__int64)a1, 472, 4);
    }
    v22 = *(_QWORD *)(a12 + 8);
    v50 = *a13;
    v61 = v63;
    v23 = a12 + 16;
    if ( *(_QWORD *)a12 == a12 + 16 )
    {
      v38 = v22 + 1;
      v39 = v63;
      v40 = (_DWORD *)(a12 + 16);
      if ( (unsigned int)(v22 + 1) >= 8 )
      {
        LODWORD(v42) = 0;
        do
        {
          v43 = (unsigned int)v42;
          v42 = (unsigned int)(v42 + 8);
          *(_QWORD *)((char *)v63 + v43) = *(_QWORD *)(v23 + v43);
        }
        while ( (unsigned int)v42 < (v38 & 0xFFFFFFF8) );
        v39 = (_DWORD *)((char *)v63 + v42);
        v40 = (_DWORD *)(v23 + v42);
      }
      v41 = 0;
      if ( (v38 & 4) != 0 )
      {
        *v39 = *v40;
        v41 = 4;
      }
      if ( (v38 & 2) != 0 )
      {
        *(_WORD *)((char *)v39 + v41) = *(_WORD *)((char *)v40 + v41);
        v41 += 2;
      }
      if ( (v38 & 1) != 0 )
        *((_BYTE *)v39 + v41) = *((_BYTE *)v40 + v41);
    }
    else
    {
      v61 = *(void **)a12;
      v63[0] = *(_QWORD *)(a12 + 16);
    }
    v62 = v22;
    *(_QWORD *)a12 = v23;
    *(_QWORD *)(a12 + 8) = 0;
    *(_BYTE *)(a12 + 16) = 0;
    sub_644390((__int64)v56, a11);
    sub_644390((__int64)v55, a10);
    v24 = *(_QWORD *)(a8 + 8) == 0;
    v70 = v72;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( !v24 )
      sub_63DE60((__int64)&v70, (unsigned __int8 **)a8);
    v25 = *(_WORD *)(a8 + 104);
    v73 = _mm_loadu_si128((const __m128i *)(a8 + 56));
    v26 = _mm_loadu_si128((const __m128i *)(a8 + 72));
    v76 = v25;
    LOBYTE(v25) = *(_BYTE *)(a8 + 106);
    v74 = v26;
    v27 = _mm_loadu_si128((const __m128i *)(a8 + 88));
    v77 = v25;
    v75 = v27;
    v51 = sub_FC8E80(a1, a4, a5);
    v28 = a6[3].m128i_i64[0];
    v66 = _mm_loadu_si128(a6);
    v29 = _mm_loadu_si128(a6 + 1);
    v69 = v28;
    v67 = v29;
    v52 = v30;
    v68 = _mm_loadu_si128(a6 + 2);
    v31 = _mm_loadu_si128(a7);
    v58 = a7[1].m128i_i64[0];
    v57 = v31;
    v64[0] = v65;
    sub_63E170((__int64 *)v64, v61, (__int64)v61 + v62);
    sub_644390((__int64)v60, v56);
    sub_644390((__int64)v59, v55);
    ptr = v80;
    v79 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( si128.m128i_i64[0] )
      sub_63DE60((__int64)&ptr, (unsigned __int8 **)&v70);
    v81 = _mm_loadu_si128(&v73);
    v32 = _mm_loadu_si128(&v74);
    v84 = v76;
    v82 = v32;
    v33 = _mm_loadu_si128(&v75);
    v85 = v77;
    v83 = v33;
    v46 = _mm_load_si128(&v57);
    v44 = _mm_load_si128(&v66);
    v45 = _mm_load_si128(&v67);
    v34 = _mm_load_si128(&v68);
    sub_645BA0(
      v18,
      (__int64)v15,
      v17,
      v51,
      v52,
      (__int64)&ptr,
      v44.m128i_i64[0],
      v44.m128i_i64[1],
      v45.m128i_i64[0],
      v45.m128i_i64[1],
      v34.m128i_i64[0],
      v34.m128i_i64[1],
      v69,
      v46.m128i_i64[0],
      v46.m128i_i64[1],
      v58,
      a9,
      v59,
      v60,
      0xBu,
      (__int64)v64,
      v50,
      0);
    if ( ptr != v80 )
      free(ptr);
    sub_6441A0(v59);
    sub_6441A0(v60);
    if ( v64[0] != v65 )
      operator delete(v64[0], v65[0] + 1LL);
    *(_QWORD *)v18 = &off_49F4D48;
    if ( v70 != v72 )
      free(v70);
    sub_6441A0(v55);
    sub_6441A0(v56);
    if ( v61 != v63 )
      operator delete(v61, v63[0] + 1LL);
    v35 = *(void (__fastcall ****)(_QWORD))(v47 + 16);
    *(_QWORD *)(v47 + 16) = v18;
    if ( v35 )
      (**v35)(v35);
    v36 = *(_QWORD *)(v18 + 88);
    if ( v36 && (unsigned int)(*(_DWORD *)(v36 + 356) - 2) <= 0x13 && (v37 = sub_FC8C50()) != 0 )
      sub_FC8D50(v37, v18);
    else
      sub_64B900((__int64)(a1 + 23), v18);
  }
  else
  {
    v18 = *(_QWORD *)(v47 + 16);
    if ( *(_DWORD *)(v18 + 356) != 11 )
      return 0;
  }
  return v18;
}

