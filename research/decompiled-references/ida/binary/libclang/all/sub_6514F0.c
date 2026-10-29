__int64 __fastcall sub_6514F0(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        char *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 *a12,
        char *a13)
{
  unsigned __int8 **v14; // rbx
  void *v15; // r12
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  __int64 v18; // r13
  unsigned __int8 *v20; // rax
  unsigned __int64 v21; // rdx
  bool v22; // zf
  __int16 v23; // ax
  __m128i v24; // xmm1
  __m128i v25; // xmm1
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  char *v31; // rbp
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 *v34; // rdi
  __m128i v35; // xmm0
  __m128i v36; // xmm3
  __m128i v37; // xmm1
  __m128i v38; // xmm1
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i v42; // xmm0
  char v43; // al
  __m128i v44; // xmm0
  char v45; // al
  __m128i v46; // xmm0
  unsigned __int64 v47; // r12
  __int64 v48; // r14
  __int64 v49; // r12
  __int64 v50; // rcx
  __int64 v51; // r15
  __int64 v52; // rax
  __m128i v53; // xmm0
  __int64 v54; // rax
  _BYTE *v55; // rdi
  size_t v56; // rbx
  _BYTE *v57; // rbp
  __int64 v58; // rax
  char v59; // al
  _QWORD *v60; // rdx
  __int64 v61; // rax
  void (__fastcall ***v62)(_QWORD); // rdi
  __int64 v63; // rdi
  __int64 v64; // rax
  unsigned int v65; // ecx
  unsigned __int64 v66; // rsi
  char *v67; // rdx
  char *v68; // rdi
  unsigned int v69; // eax
  unsigned int v70; // edx
  __int64 v71; // rcx
  __int64 v72; // [rsp+8h] [rbp-290h]
  __int64 v74; // [rsp+10h] [rbp-288h]
  unsigned __int8 **p_ptr; // [rsp+20h] [rbp-278h]
  __int64 *v77; // [rsp+28h] [rbp-270h]
  __int64 *v78; // [rsp+30h] [rbp-268h]
  __int64 *v79; // [rsp+38h] [rbp-260h]
  __m128 v80; // [rsp+40h] [rbp-258h] BYREF
  __int64 v81; // [rsp+50h] [rbp-248h]
  __int64 v82; // [rsp+58h] [rbp-240h]
  __int64 v83; // [rsp+60h] [rbp-238h]
  __int64 v84; // [rsp+68h] [rbp-230h]
  __int64 v85; // [rsp+70h] [rbp-228h]
  __int64 v86; // [rsp+78h] [rbp-220h]
  __int64 v87; // [rsp+80h] [rbp-218h]
  __int64 v88; // [rsp+88h] [rbp-210h]
  char v89; // [rsp+96h] [rbp-202h]
  char v90; // [rsp+97h] [rbp-201h]
  _BYTE *v91; // [rsp+98h] [rbp-200h]
  _BYTE *v92; // [rsp+A0h] [rbp-1F8h]
  unsigned __int8 **v93; // [rsp+A8h] [rbp-1F0h]
  size_t v94; // [rsp+B8h] [rbp-1E0h]
  __int64 v95; // [rsp+C0h] [rbp-1D8h] BYREF
  char v96; // [rsp+D0h] [rbp-1C8h]
  _BYTE v97[32]; // [rsp+E0h] [rbp-1B8h] BYREF
  _BYTE v98[32]; // [rsp+100h] [rbp-198h] BYREF
  __int64 v99[4]; // [rsp+120h] [rbp-178h] BYREF
  _BYTE v100[32]; // [rsp+140h] [rbp-158h] BYREF
  void *v101; // [rsp+160h] [rbp-138h]
  __int64 v102; // [rsp+168h] [rbp-130h]
  char v103[16]; // [rsp+170h] [rbp-128h] BYREF
  void *v104; // [rsp+180h] [rbp-118h] BYREF
  __m128i si128; // [rsp+188h] [rbp-110h]
  _BYTE v106[32]; // [rsp+198h] [rbp-100h] BYREF
  __m128i v107; // [rsp+1B8h] [rbp-E0h] BYREF
  __m128i v108; // [rsp+1C8h] [rbp-D0h] BYREF
  __m128i v109; // [rsp+1D8h] [rbp-C0h] BYREF
  __int16 v110; // [rsp+1E8h] [rbp-B0h]
  char v111; // [rsp+1EAh] [rbp-AEh]
  void *ptr; // [rsp+1F0h] [rbp-A8h] BYREF
  __m128i v113; // [rsp+1F8h] [rbp-A0h] BYREF
  _BYTE v114[32]; // [rsp+208h] [rbp-90h] BYREF
  __m128i v115; // [rsp+228h] [rbp-70h] BYREF
  __m128i v116; // [rsp+238h] [rbp-60h] BYREF
  __m128i v117; // [rsp+248h] [rbp-50h] BYREF
  __int16 v118; // [rsp+258h] [rbp-40h]
  char v119; // [rsp+25Ah] [rbp-3Eh]

  v14 = (unsigned __int8 **)a1;
  ptr = (void *)sub_FC8E80(a1, a2, a3);
  v15 = ptr;
  v17 = v16;
  v113 = (__m128i)v16;
  p_ptr = (unsigned __int8 **)&ptr;
  sub_64F120((__int64)&v95, (__int64)(a1 + 20), (__m128i *)&ptr, &v113.m128i_i64[1]);
  v72 = v95;
  if ( v113.m128i_i64[1] )
    (**(void (__fastcall ***)(__int64))v113.m128i_i64[1])(v113.m128i_i64[1]);
  if ( !v96 )
  {
    v18 = *(_QWORD *)(v72 + 16);
    if ( (unsigned int)(*(_DWORD *)(v18 + 356) - 18) >= 4 )
      return 0;
    return v18;
  }
  v20 = (unsigned __int8 *)*a1;
  a1[10] += 392LL;
  v21 = ((unsigned __int64)(v20 + 15) & 0xFFFFFFFFFFFFFFF0LL) + 392;
  if ( a1[1] >= v21 && v20 )
  {
    *a1 = v21;
    v18 = (unsigned __int64)(v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v18 = sub_63DCB0((__int64)a1, 392, 4);
  }
  v90 = *a13;
  v77 = (__int64 *)v98;
  sub_644390((__int64)v98, a12);
  v78 = (__int64 *)v97;
  sub_644390((__int64)v97, a11);
  v22 = *(_QWORD *)(a8 + 8) == 0;
  v93 = (unsigned __int8 **)&v104;
  v92 = v106;
  v104 = v106;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( !v22 )
    sub_63DE60((__int64)v93, (unsigned __int8 **)a8);
  v23 = *(_WORD *)(a8 + 104);
  v107 = _mm_loadu_si128((const __m128i *)(a8 + 56));
  v24 = _mm_loadu_si128((const __m128i *)(a8 + 72));
  v110 = v23;
  LOBYTE(v23) = *(_BYTE *)(a8 + 106);
  v108 = v24;
  v25 = _mm_loadu_si128((const __m128i *)(a8 + 88));
  v111 = v23;
  v109 = v25;
  v26 = sub_FC8E80(a1, a4, a5);
  strcpy(v103, "public");
  v87 = v26;
  v27 = *a6;
  v88 = v28;
  v86 = v27;
  v29 = a6[1];
  v102 = 6;
  v85 = v29;
  v84 = a6[2];
  v83 = a6[3];
  v81 = a6[4];
  v30 = a6[5];
  v31 = v103;
  v101 = v103;
  v82 = v30;
  v32 = *(_QWORD *)(a7 + 8);
  v80 = _mm_loadh_ps((const double *)a7);
  v74 = v32;
  v33 = *(_QWORD *)(a7 + 16);
  v89 = *a9;
  v79 = (__int64 *)v100;
  sub_644390((__int64)v100, v77);
  v34 = v99;
  sub_644390((__int64)v99, v78);
  v35 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  v91 = v114;
  ptr = v114;
  v113 = v35;
  if ( si128.m128i_i64[0] )
  {
    v34 = (__int64 *)p_ptr;
    sub_63DE60((__int64)p_ptr, v93);
    v35 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  }
  v36 = _mm_load_si128((const __m128i *)&v80);
  v37 = _mm_loadu_si128(&v107);
  v118 = v110;
  v115 = v37;
  v38 = _mm_loadu_si128(&v108);
  v119 = v111;
  v116 = v38;
  v117 = _mm_loadu_si128(&v109);
  *(_QWORD *)v18 = &off_49F4B08;
  v39 = v87;
  *(_QWORD *)(v18 + 8) = v15;
  *(_QWORD *)(v18 + 24) = v39;
  v40 = v88;
  *(_QWORD *)(v18 + 16) = v17;
  *(_QWORD *)(v18 + 32) = v40;
  v41 = v86;
  *(__m128i *)(v18 + 88) = v36;
  *(_QWORD *)(v18 + 40) = v41;
  *(_QWORD *)(v18 + 48) = v85;
  *(_QWORD *)(v18 + 56) = v84;
  *(_QWORD *)(v18 + 64) = v83;
  *(_QWORD *)(v18 + 72) = v81;
  *(_QWORD *)(v18 + 80) = v82;
  *(_QWORD *)(v18 + 112) = v33;
  *(_QWORD *)(v18 + 104) = v74;
  *(_QWORD *)(v18 + 120) = v18 + 144;
  *(__m128i *)(v18 + 128) = v35;
  if ( v113.m128i_i64[0] )
  {
    v34 = (__int64 *)(v18 + 120);
    sub_63DE60(v18 + 120, p_ptr);
  }
  v42 = _mm_loadu_si128(&v115);
  *(_WORD *)(v18 + 224) = v118;
  v43 = v119;
  *(__m128i *)(v18 + 176) = v42;
  v44 = _mm_loadu_si128(&v116);
  *(_BYTE *)(v18 + 226) = v43;
  v45 = v89;
  *(__m128i *)(v18 + 192) = v44;
  v46 = _mm_loadu_si128(&v117);
  *(_BYTE *)(v18 + 232) = v45;
  *(__m128i *)(v18 + 208) = v46;
  v47 = a10[1] - *a10;
  *(_OWORD *)(v18 + 240) = 0;
  *(_QWORD *)(v18 + 256) = 0;
  if ( v47 )
  {
    if ( v47 > 0x7FFFFFFFFFFFFFD0LL )
      sub_555886(v34);
    v48 = operator new(v47);
  }
  else
  {
    v48 = 0;
  }
  *(_QWORD *)(v18 + 256) = v48 + v47;
  *(__m128i *)(v18 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v48, (__m128i)(unsigned __int64)v48);
  v49 = a10[1];
  v50 = *a10;
  if ( v49 != *a10 )
  {
    p_ptr = v14;
    v51 = v50;
    v80.m128_u64[0] = (unsigned __int64)v103;
    while ( 1 )
    {
      v55 = (_BYTE *)(v48 + 16);
      *(_QWORD *)v48 = v48 + 16;
      v56 = *(_QWORD *)(v51 + 8);
      v57 = *(_BYTE **)v51;
      v94 = v56;
      if ( v56 > 0xF )
        break;
      if ( v56 == 1 )
      {
        *(_BYTE *)(v48 + 16) = *v57;
        goto LABEL_23;
      }
      if ( v56 )
        goto LABEL_26;
LABEL_23:
      *(_QWORD *)(v48 + 8) = v56;
      v51 += 80;
      v48 += 80;
      v55[v56] = 0;
      v52 = *(_QWORD *)(v51 - 32);
      *(__m128i *)(v48 - 48) = _mm_loadu_si128((const __m128i *)(v51 - 48));
      v53 = _mm_loadu_si128((const __m128i *)(v51 - 24));
      *(_QWORD *)(v48 - 32) = v52;
      v54 = *(_QWORD *)(v51 - 8);
      *(__m128i *)(v48 - 24) = v53;
      *(_QWORD *)(v48 - 8) = v54;
      if ( v49 == v51 )
      {
        *(_QWORD *)(v18 + 248) = v48;
        v14 = p_ptr;
        v31 = (char *)v80.m128_u64[0];
        goto LABEL_30;
      }
    }
    v58 = std::string::_M_create();
    *(_QWORD *)v48 = v58;
    v55 = (_BYTE *)v58;
    *(_QWORD *)(v48 + 16) = v94;
LABEL_26:
    memcpy(v55, v57, v56);
    v56 = v94;
    v55 = *(_BYTE **)v48;
    goto LABEL_23;
  }
LABEL_30:
  sub_644390(v18 + 264, v99);
  sub_644390(v18 + 288, v79);
  v59 = v90;
  v60 = (_QWORD *)(v18 + 336);
  *(_QWORD *)(v18 + 320) = v18 + 336;
  *(_BYTE *)(v18 + 312) = v59;
  if ( v101 == v31 )
  {
    v61 = v102;
    v65 = v102 + 1;
    if ( (unsigned int)(v102 + 1) >= 8 )
    {
      *v60 = *(_QWORD *)v103;
      *(_QWORD *)((char *)v60 + v65 - 8) = *(_QWORD *)&v31[v65 - 8];
      v66 = (v18 + 344) & 0xFFFFFFFFFFFFFFF8LL;
      v67 = (char *)v60 - v66;
      v68 = (char *)(v31 - v67);
      if ( ((v65 + (_DWORD)v67) & 0xFFFFFFF8) >= 8 )
      {
        v69 = (v65 + (_DWORD)v67) & 0xFFFFFFF8;
        v70 = 0;
        do
        {
          v71 = v70;
          v70 += 8;
          *(_QWORD *)(v66 + v71) = *(_QWORD *)&v68[v71];
        }
        while ( v70 < v69 );
      }
      v61 = v102;
    }
    else if ( (v65 & 4) != 0 )
    {
      *(_DWORD *)v60 = *(_DWORD *)v103;
      *(_DWORD *)((char *)v60 + v65 - 4) = *(_DWORD *)&v31[v65 - 4];
      v61 = v102;
    }
    else if ( (_DWORD)v102 != -1 )
    {
      *(_BYTE *)v60 = v103[0];
      v61 = v102;
      if ( (v65 & 2) != 0 )
      {
        *(_WORD *)((char *)v60 + v65 - 2) = *(_WORD *)&v31[v65 - 2];
        v61 = v102;
      }
    }
  }
  else
  {
    *(_QWORD *)(v18 + 320) = v101;
    *(_QWORD *)(v18 + 336) = *(_QWORD *)v103;
    v61 = v102;
  }
  *(_QWORD *)(v18 + 328) = v61;
  *(_QWORD *)(v18 + 360) = 0;
  *(_QWORD *)(v18 + 352) = 0x1200000012LL;
  v101 = v31;
  v102 = 0;
  v103[0] = 0;
  if ( ptr != v91 )
    free(ptr);
  sub_6441A0(v99);
  sub_6441A0(v79);
  if ( v101 != v31 )
    operator delete(v101, *(_QWORD *)v103 + 1LL);
  *(_DWORD *)(v18 + 368) = 18;
  *(_OWORD *)(v18 + 376) = 0;
  *(_QWORD *)v18 = &off_4992FF0;
  if ( v104 != v92 )
    free(v104);
  sub_6441A0(v78);
  sub_6441A0(v77);
  v62 = *(void (__fastcall ****)(_QWORD))(v72 + 16);
  *(_QWORD *)(v72 + 16) = v18;
  if ( v62 )
    (**v62)(v62);
  v63 = *(_QWORD *)(v18 + 88);
  if ( v63 && (unsigned int)(*(_DWORD *)(v63 + 356) - 2) <= 0x13 && (v64 = sub_FC8C50()) != 0 )
    sub_FC8D50(v64, v18);
  else
    sub_64B900((__int64)(v14 + 23), v18);
  return v18;
}

