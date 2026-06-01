unsigned __int64 __fastcall sub_EC2530(
        __int64 a1,
        int *a2,
        __int64 *a3,
        unsigned int *a4,
        char **a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        __int128 a9,
        _QWORD *a10,
        void *a11,
        __m128i *a12,
        __int64 a13,
        __int64 *a14,
        __int64 a15,
        __int64 a16,
        __int128 a17,
        __int64 a18,
        int a19,
        int a20,
        int a21)
{
  __int64 *v22; // r15
  __int64 v23; // r12
  __int64 v24; // r13
  unsigned int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // ebx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  int v32; // r9d
  unsigned __int64 v33; // rbp
  int v34; // r8d
  __m128i v35; // xmm0
  int v36; // edx
  int v37; // esi
  __int64 v38; // rax
  __int64 v39; // rax
  __m128i si128; // xmm2
  __int64 v41; // rax
  __int64 v42; // rdx
  size_t v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int64 *v46; // rbx
  char *v47; // rsi
  _QWORD *v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rdx
  __int64 *v52; // r13
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // r14
  __int64 v56; // rcx
  unsigned __int64 *v57; // r15
  __int64 v58; // rcx
  __int64 v59; // rdx
  unsigned __int64 *v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // r12
  unsigned int v64; // r14d
  unsigned __int64 v65; // rbp
  unsigned __int64 *v66; // r13
  unsigned __int64 v67; // rbx
  unsigned __int64 *v68; // rax
  __int64 *v69; // rdi
  unsigned __int64 *v70; // r12
  unsigned __int64 *v71; // rdi
  unsigned __int64 *v73; // rsi
  __int64 v74; // rax
  __int64 *v75; // rax
  unsigned int *v76; // r11
  __int64 *v77; // rcx
  __int64 v78; // rdx
  const __m128i *v79; // r8
  __int64 v80; // rsi
  __m128i v81; // xmm1
  unsigned int *v82; // [rsp+0h] [rbp-158h]
  unsigned __int64 *v83; // [rsp+8h] [rbp-150h]
  __int64 *v84; // [rsp+10h] [rbp-148h]
  __m128i *v85; // [rsp+18h] [rbp-140h]
  __int64 *v86; // [rsp+20h] [rbp-138h]
  unsigned __int64 v87; // [rsp+28h] [rbp-130h]
  __int64 v88; // [rsp+30h] [rbp-128h]
  __int64 v89; // [rsp+38h] [rbp-120h]
  __int64 v90; // [rsp+40h] [rbp-118h]
  int *v91; // [rsp+48h] [rbp-110h]
  int *v92; // [rsp+50h] [rbp-108h]
  void *src; // [rsp+58h] [rbp-100h]
  __m128i v94; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v95; // [rsp+70h] [rbp-E8h]
  unsigned __int64 *v96; // [rsp+78h] [rbp-E0h]
  __int64 v97; // [rsp+80h] [rbp-D8h]
  char v98; // [rsp+88h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v100; // [rsp+A0h] [rbp-B8h]

  v22 = (__int64 *)a5;
  v91 = a2;
  v23 = a7;
  v24 = a13;
  v82 = a4;
  src = a11;
  v84 = a3;
  v85 = a12;
  v87 = (unsigned __int64)a6;
  v86 = a14;
  v90 = a8;
  v88 = a15;
  v89 = a16;
  LODWORD(v83) = a20;
  v25 = sub_EB5A30(a5, a6);
  v26 = a7 + 144 * a8;
  if ( v26 == a7 )
  {
    v29 = 0;
    v28 = 0;
  }
  else
  {
    v27 = a7;
    v28 = 0;
    do
    {
      v28 += *(_DWORD *)(v27 + 8);
      v27 += 144;
    }
    while ( v26 != v27 );
    v29 = 16LL * v28;
  }
  v92 = v91;
  v91 = (int *)v90;
  LODWORD(v90) = v25;
  v30 = 4LL * (v25 + (unsigned int)a8) + 8 * (v25 + (unsigned __int64)(unsigned int)(2 * (_DWORD)v82 + 1));
  v31 = sub_EBD890((__int64 *)(a1 + 2352), v29 + 8 * ((v30 != 0) + ((v30 - (v30 != 0)) >> 3)) + 152, 3u);
  v32 = v90;
  v33 = v31;
  v34 = (int)v91;
  v35 = _mm_loadu_si128((const __m128i *)&a17);
  v36 = v92[2];
  v100 = a18;
  v37 = *v92;
  v95 = a18;
  LODWORD(v31) = v92[1];
  *(__m128i *)ptr = v35;
  v94 = v35;
  *(_DWORD *)(v33 + 12) = v31;
  LODWORD(v31) = (_DWORD)v82;
  *(_DWORD *)(v33 + 4) = v36;
  *(_DWORD *)(v33 + 16) = v31;
  v38 = v88;
  *(_DWORD *)v33 = v37;
  *(_QWORD *)(v33 + 40) = v38;
  v39 = v89;
  *(_DWORD *)(v33 + 8) = 55;
  *(_QWORD *)(v33 + 48) = v39;
  si128 = _mm_load_si128((const __m128i *)ptr);
  *(_DWORD *)(v33 + 20) = v32;
  *(__m128i *)(v33 + 56) = si128;
  v41 = v100;
  *(_DWORD *)(v33 + 24) = v34;
  *(_QWORD *)(v33 + 72) = v41;
  *(_QWORD *)(v33 + 80) = 0x600000006LL;
  *(_QWORD *)(v33 + 88) = 0x600000006LL;
  *(_DWORD *)(v33 + 28) = v28;
  *(_BYTE *)(v33 + 32) = 1;
  *(_QWORD *)(v33 + 96) = 0x600000006LL;
  LODWORD(v41) = a19;
  v42 = (__int64)v85;
  *(_DWORD *)(v33 + 104) = 6;
  *(_DWORD *)(v33 + 136) = v41;
  LOBYTE(v41) = (_BYTE)v83;
  v43 = 4 * v42;
  *(_OWORD *)(v33 + 108) = 0;
  *(_BYTE *)(v33 + 140) = v41;
  LODWORD(v41) = a21;
  *(_QWORD *)(v33 + 124) = 0;
  *(_DWORD *)(v33 + 132) = 0;
  *(_QWORD *)(v33 + 144) = (unsigned int)v41;
  if ( v43 )
    memmove((void *)(v33 + 80), src, v43);
  v44 = 0;
  v45 = (4 * (__int64)v86) >> 2;
  if ( 4 * (__int64)v86 > 0 )
  {
    do
    {
      *(_DWORD *)(v33 + 4 * v44 + 108) = *(_DWORD *)(v24 + 4 * v44);
      ++v44;
    }
    while ( v45 - v44 > 0 );
  }
  v86 = (__int64 *)ptr;
  ptr[0] = v84;
  ptr[1] = v82;
  sub_EB8020((__int64)ptr, (char *)(v33 + 152));
  v46 = (unsigned __int64 *)&v98;
  v47 = (char *)(v33 + 8LL * *(unsigned int *)(v33 + 16) + 152);
  *(__m128i *)ptr = _mm_loadu_si128((const __m128i *)&a9);
  sub_EB8020((__int64)ptr, v47);
  v51 = a10;
  *(_QWORD *)(v33 + 8LL * (unsigned int)(2 * *(_DWORD *)(v33 + 16)) + 152) = a10;
  v85 = &v94;
  v94 = 0u;
  v52 = (__int64 *)&a5[v87];
  LODWORD(v95) = 0;
  v96 = (unsigned __int64 *)&v98;
  v97 = 0;
  if ( v52 == (__int64 *)a5 )
  {
    v57 = (unsigned __int64 *)&v98;
  }
  else
  {
    do
    {
      v53 = sub_EC2230((__int64)v85, v22, (__int64)v51, (__int64)v48, v49, v50);
      v54 = *(unsigned int *)(v23 + 8);
      v55 = *(_QWORD *)v23;
      v56 = *(unsigned int *)(v53 + 8);
      v51 = (_QWORD *)(v56 + 1);
      if ( v56 + 1 > (unsigned __int64)*(unsigned int *)(v53 + 12) )
      {
        v82 = (unsigned int *)v53;
        sub_2237220(v53, v53 + 16, v51, 16);
        v53 = (__int64)v82;
        v51 = (_QWORD *)(*(_QWORD *)v82 + 16LL * v82[2]);
        *v51 = v55;
        v51[1] = v54;
      }
      else
      {
        v48 = (_QWORD *)(*(_QWORD *)v53 + 16 * v56);
        *v48 = v55;
        v48[1] = v54;
      }
      ++v22;
      ++*(_DWORD *)(v53 + 8);
      v23 += 144;
    }
    while ( v52 != v22 );
    v57 = v96;
    v46 = &v96[19 * (unsigned int)v97];
  }
  v58 = *(unsigned int *)(v33 + 20);
  v59 = 8LL * (unsigned int)(2 * *(_DWORD *)(v33 + 16) + 1) + 152;
  v60 = (unsigned __int64 *)(v33 + v59);
  v61 = v59 + 8 * v58;
  v62 = v61 + 4LL * (unsigned int)(*(_DWORD *)(v33 + 24) + *(_DWORD *)(v33 + 20));
  v83 = v60;
  v82 = (unsigned int *)(v33 + v61 + 4 * v58);
  v63 = (v33 + v62 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v57 == v46 )
    goto LABEL_24;
  v87 = v33;
  v64 = 0;
  v65 = v33 + v61;
  v66 = v46;
  v84 = v86 + 2;
  do
  {
    while ( 1 )
    {
      v67 = *v57;
      ptr[0] = v84;
      ptr[1] = (void *)0x800000000LL;
      if ( !*((_DWORD *)v57 + 4) )
      {
        v68 = v83;
        v65 += 4LL;
        *v83 = v67;
        v69 = (__int64 *)ptr[0];
        v83 = v68 + 1;
        *(_DWORD *)(v65 - 4) = 0;
        goto LABEL_18;
      }
      v65 += 4LL;
      sub_EC0D40(v86, (__int64 *)v57 + 1);
      v73 = v83;
      v74 = LODWORD(ptr[1]);
      *v83 = v67;
      v69 = (__int64 *)ptr[0];
      *(_DWORD *)(v65 - 4) = v74;
      v75 = &v69[2 * v74];
      v83 = v73 + 1;
      if ( v69 != v75 )
        break;
LABEL_18:
      if ( v69 == v84 )
        goto LABEL_33;
LABEL_19:
      free(v69);
      v57 += 19;
      if ( v66 == v57 )
        goto LABEL_20;
    }
    v76 = v82;
    v77 = v69;
    do
    {
      v78 = v77[1];
      v79 = (const __m128i *)*v77;
      ++v76;
      v64 += v78;
      v78 *= 16;
      *(v76 - 1) = v64;
      v80 = v78 >> 4;
      if ( v78 > 0 )
      {
        do
        {
          v81 = _mm_loadu_si128(v79);
          v63 += 16LL;
          ++v79;
          *(__m128i *)(v63 - 16) = v81;
          --v80;
        }
        while ( v80 );
      }
      v77 += 2;
    }
    while ( v75 != v77 );
    v82 += (((unsigned __int64)v75 - 16 - (unsigned __int64)v69) >> 4) + 1;
    if ( v69 != v84 )
      goto LABEL_19;
LABEL_33:
    v57 += 19;
  }
  while ( v66 != v57 );
LABEL_20:
  v70 = v96;
  v33 = v87;
  v46 = &v96[19 * (unsigned int)v97];
  if ( v96 != v46 )
  {
    do
    {
      while ( 1 )
      {
        v46 -= 19;
        v71 = (unsigned __int64 *)v46[1];
        if ( v71 == v46 + 3 )
          break;
        free(v71);
        if ( v70 == v46 )
          goto LABEL_23;
      }
    }
    while ( v70 != v46 );
LABEL_23:
    v46 = v96;
  }
LABEL_24:
  if ( v46 != &v85[2].m128i_u64[1] )
    free(v46);
  operator delete(v94.m128i_i64[0], 16LL * (unsigned int)v95, 8);
  *(_DWORD *)(v33 + 136) = a19;
  *(_DWORD *)(v33 + 144) = a21;
  return v33;
}
