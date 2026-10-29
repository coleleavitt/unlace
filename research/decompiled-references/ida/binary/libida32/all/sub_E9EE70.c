__int64 __fastcall sub_E9EE70(
        __int64 a1,
        int *a2,
        unsigned int *a3,
        void *a4,
        char **a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        __int128 a9,
        void *a10,
        __int64 *a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14,
        __int64 a15,
        __int128 a16,
        __int64 a17)
{
  __int64 *v17; // r15
  __int64 v20; // r12
  __int64 v21; // r13
  unsigned int v22; // r11d
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  int v29; // r11d
  __int64 v30; // rbp
  int v31; // r9d
  __m128i v32; // xmm0
  int v33; // edx
  int v34; // esi
  unsigned int v35; // ecx
  __int64 *v36; // rax
  __int64 v37; // rax
  __m128i si128; // xmm2
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  char *v42; // rbx
  char *v43; // rsi
  _QWORD *v44; // rdx
  _QWORD *v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // r13
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // r14
  __int64 v52; // rcx
  char *v53; // r15
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rax
  char *v57; // rdi
  __int64 v58; // rax
  unsigned __int64 v59; // r8
  __int64 v60; // rbp
  char *v61; // r13
  unsigned __int64 v62; // r14
  unsigned int v63; // r12d
  __int64 v64; // rbx
  char *v65; // rax
  __int64 *v66; // rdi
  char *v67; // r12
  char *v68; // rdi
  char *v70; // rsi
  __int64 v71; // rax
  __int64 *v72; // rax
  unsigned int *v73; // r11
  __int64 *v74; // rcx
  __int64 v75; // rdx
  const __m128i *v76; // r8
  __int64 v77; // rsi
  __m128i v78; // xmm1
  unsigned int *v79; // [rsp+8h] [rbp-150h]
  char *v80; // [rsp+10h] [rbp-148h]
  __int64 *v81; // [rsp+18h] [rbp-140h]
  __int64 v82; // [rsp+20h] [rbp-138h]
  __int64 *v83; // [rsp+28h] [rbp-130h]
  __int64 v84; // [rsp+30h] [rbp-128h]
  __int64 v85; // [rsp+38h] [rbp-120h]
  int *v86; // [rsp+40h] [rbp-118h]
  unsigned int v87; // [rsp+4Ch] [rbp-10Ch]
  int *v88; // [rsp+50h] [rbp-108h]
  void *src; // [rsp+58h] [rbp-100h]
  __m128i v90; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v91; // [rsp+70h] [rbp-E8h]
  char *v92; // [rsp+78h] [rbp-E0h]
  __int64 v93; // [rsp+80h] [rbp-D8h]
  char v94; // [rsp+88h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v96; // [rsp+A0h] [rbp-B8h]

  v17 = (__int64 *)a5;
  v86 = a2;
  v80 = a6;
  src = a10;
  v20 = a7;
  v79 = a3;
  v81 = a11;
  v85 = a8;
  v21 = a12;
  v82 = a13;
  v83 = a14;
  v84 = a15;
  v22 = sub_E91CF0(a5, a6);
  v23 = a7 + 144 * a8;
  if ( v23 == a7 )
  {
    v26 = 0;
    v25 = 0;
  }
  else
  {
    v24 = a7;
    v25 = 0;
    do
    {
      v25 += *(_DWORD *)(v24 + 8);
      v24 += 144;
    }
    while ( v23 != v24 );
    v26 = 16LL * v25;
  }
  v88 = v86;
  v87 = v25;
  v86 = (int *)v85;
  v27 = 4LL * (v22 + (unsigned int)v85) + 8 * (v22 + (unsigned __int64)(unsigned int)(2 * (_DWORD)a4));
  LODWORD(v85) = v22;
  v28 = sub_E99B50((__int64 *)(a1 + 2352), v26 + 8 * ((v27 != 0) + ((v27 - (v27 != 0)) >> 3)) + 104, 3u);
  v29 = v85;
  v30 = v28;
  v31 = (int)v86;
  v32 = _mm_loadu_si128((const __m128i *)&a16);
  v33 = v88[2];
  v34 = *v88;
  v35 = v87;
  v96 = a17;
  v91 = a17;
  LODWORD(v28) = v88[1];
  *(__m128i *)ptr = v32;
  v90 = v32;
  *(_DWORD *)(v30 + 12) = v28;
  v36 = v83;
  *(_DWORD *)(v30 + 4) = v33;
  *(_QWORD *)(v30 + 40) = v36;
  v37 = v84;
  *(_DWORD *)v30 = v34;
  *(_QWORD *)(v30 + 48) = v37;
  si128 = _mm_load_si128((const __m128i *)ptr);
  *(_DWORD *)(v30 + 8) = 102;
  *(__m128i *)(v30 + 56) = si128;
  v39 = v96;
  *(_DWORD *)(v30 + 16) = (_DWORD)a4;
  *(_QWORD *)(v30 + 72) = v39;
  *(_DWORD *)(v30 + 20) = v29;
  *(_DWORD *)(v30 + 24) = v31;
  *(_DWORD *)(v30 + 28) = v35;
  *(_BYTE *)(v30 + 32) = 1;
  *(_QWORD *)(v30 + 80) = 0x200000002LL;
  *(_QWORD *)(v30 + 88) = 0;
  *(_DWORD *)(v30 + 96) = 0;
  if ( 4LL * (_QWORD)v81 )
    memmove((void *)(v30 + 80), src, 4LL * (_QWORD)v81);
  v40 = 0;
  v41 = (4 * v82) >> 2;
  if ( 4 * v82 > 0 )
  {
    do
    {
      *(_DWORD *)(v30 + 4 * v40 + 88) = *(_DWORD *)(v21 + 4 * v40);
      ++v40;
    }
    while ( v41 - v40 > 0 );
  }
  ptr[1] = a4;
  v83 = (__int64 *)ptr;
  ptr[0] = v79;
  sub_E942E0((__int64)ptr, (char *)(v30 + 104));
  v42 = &v94;
  v43 = (char *)(v30 + 8LL * *(unsigned int *)(v30 + 16) + 104);
  *(__m128i *)ptr = _mm_loadu_si128((const __m128i *)&a9);
  sub_E942E0((__int64)ptr, v43);
  v92 = &v94;
  v82 = (__int64)&v90;
  v90 = 0u;
  v48 = (__int64 *)&a5[(_QWORD)v80];
  LODWORD(v91) = 0;
  v93 = 0;
  if ( v48 == (__int64 *)a5 )
  {
    v53 = &v94;
  }
  else
  {
    do
    {
      v49 = sub_E9E4F0(v82, v17, (__int64)v44, (__int64)v45, v46, v47);
      v50 = *(unsigned int *)(v20 + 8);
      v51 = *(_QWORD *)v20;
      v52 = *(unsigned int *)(v49 + 8);
      v44 = (_QWORD *)(v52 + 1);
      if ( v52 + 1 > (unsigned __int64)*(unsigned int *)(v49 + 12) )
      {
        v79 = (unsigned int *)v49;
        sub_22134E0(v49, v49 + 16, v44, 16);
        v49 = (__int64)v79;
        v44 = (_QWORD *)(*(_QWORD *)v79 + 16LL * v79[2]);
        *v44 = v51;
        v44[1] = v50;
      }
      else
      {
        v45 = (_QWORD *)(*(_QWORD *)v49 + 16 * v52);
        *v45 = v51;
        v45[1] = v50;
      }
      ++v17;
      ++*(_DWORD *)(v49 + 8);
      v20 += 144;
    }
    while ( v48 != v17 );
    v53 = v92;
    v42 = &v92[152 * (unsigned int)v93];
  }
  v54 = *(unsigned int *)(v30 + 20);
  v55 = (unsigned int)(*(_DWORD *)(v30 + 24) + *(_DWORD *)(v30 + 20));
  v56 = 8LL * (unsigned int)(2 * *(_DWORD *)(v30 + 16)) + 104;
  v57 = (char *)(v30 + v56);
  v58 = v56 + 8 * v54;
  v80 = v57;
  v79 = (unsigned int *)(v30 + v58 + 4 * v54);
  v59 = (v30 + v58 + 4 * v55 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v53 == v42 )
    goto LABEL_24;
  v84 = v30;
  v60 = v30 + v58;
  v61 = v42;
  v81 = v83 + 2;
  v62 = v59;
  v63 = 0;
  do
  {
    while ( 1 )
    {
      v64 = *(_QWORD *)v53;
      ptr[0] = v81;
      ptr[1] = (void *)0x800000000LL;
      if ( !*((_DWORD *)v53 + 4) )
      {
        v65 = v80;
        v60 += 4;
        *(_QWORD *)v80 = v64;
        v66 = (__int64 *)ptr[0];
        v80 = v65 + 8;
        *(_DWORD *)(v60 - 4) = 0;
        goto LABEL_18;
      }
      v60 += 4;
      sub_E9D000(v83, (__int64 *)v53 + 1);
      v70 = v80;
      v71 = LODWORD(ptr[1]);
      *(_QWORD *)v80 = v64;
      v66 = (__int64 *)ptr[0];
      *(_DWORD *)(v60 - 4) = v71;
      v72 = &v66[2 * v71];
      v80 = v70 + 8;
      if ( v66 != v72 )
        break;
LABEL_18:
      if ( v66 == v81 )
        goto LABEL_33;
LABEL_19:
      free(v66);
      v53 += 152;
      if ( v61 == v53 )
        goto LABEL_20;
    }
    v73 = v79;
    v74 = v66;
    do
    {
      v75 = v74[1];
      v76 = (const __m128i *)*v74;
      ++v73;
      v63 += v75;
      v75 *= 16;
      *(v73 - 1) = v63;
      v77 = v75 >> 4;
      if ( v75 > 0 )
      {
        do
        {
          v78 = _mm_loadu_si128(v76);
          v62 += 16LL;
          ++v76;
          *(__m128i *)(v62 - 16) = v78;
          --v77;
        }
        while ( v77 );
      }
      v74 += 2;
    }
    while ( v72 != v74 );
    v79 += (((unsigned __int64)v72 - 16 - (unsigned __int64)v66) >> 4) + 1;
    if ( v66 != v81 )
      goto LABEL_19;
LABEL_33:
    v53 += 152;
  }
  while ( v61 != v53 );
LABEL_20:
  v67 = v92;
  v30 = v84;
  v42 = &v92[152 * (unsigned int)v93];
  if ( v92 != v42 )
  {
    do
    {
      while ( 1 )
      {
        v42 -= 152;
        v68 = *((char **)v42 + 1);
        if ( v68 == v42 + 24 )
          break;
        free(v68);
        if ( v67 == v42 )
          goto LABEL_23;
      }
    }
    while ( v67 != v42 );
LABEL_23:
    v42 = v92;
  }
LABEL_24:
  if ( v42 != (char *)(v82 + 40) )
    free(v42);
  operator delete();
  return v30;
}

