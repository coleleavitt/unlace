__int64 __fastcall sub_1A87C0(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // r15d
  char v16; // bp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rdx
  unsigned int v30; // ebp
  __int64 v31; // rax
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rsi
  __int64 v37; // rdx
  __m128i *v38; // r15
  __int64 v39; // rbx
  __m128i *v40; // rbp
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __m128i *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rbx
  const __m128i *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __m128i v54; // xmm0
  bool v55; // cf
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // rbx
  __m128i *v59; // r15
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __m128i *v62; // rdi
  __m128i *v63; // rbx
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rdx
  int v67; // eax
  const __m128i *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rcx
  const __m128i *v71; // rdx
  const __m128i *v72; // rax
  signed __int64 v73; // rax
  __int64 v74; // rsi
  const __m128i *v75; // rcx
  __m128i v76; // xmm0
  __int64 v77; // rax
  __int64 v78; // rcx
  void *v79; // r8
  const __m128i *v80; // rdi
  __int64 v81; // rcx
  __int64 v82; // rdx
  __m128i v83; // xmm0
  __int64 v84; // rdx
  __int64 v86; // [rsp+0h] [rbp-148h]
  __int64 v87; // [rsp+0h] [rbp-148h]
  __m128i *src; // [rsp+8h] [rbp-140h]
  __m128i *srca; // [rsp+8h] [rbp-140h]
  void *srcb; // [rsp+8h] [rbp-140h]
  __m128i v91; // [rsp+10h] [rbp-138h] BYREF
  __m128i v92; // [rsp+20h] [rbp-128h] BYREF
  __int64 v93; // [rsp+30h] [rbp-118h]
  _QWORD v94[5]; // [rsp+40h] [rbp-108h] BYREF
  char v95; // [rsp+68h] [rbp-E0h]
  __int64 v96; // [rsp+70h] [rbp-D8h]
  __int64 v97; // [rsp+78h] [rbp-D0h]
  __int64 v98; // [rsp+80h] [rbp-C8h]
  __int128 v99; // [rsp+88h] [rbp-C0h]
  __int64 v100; // [rsp+98h] [rbp-B0h]
  __int64 v101; // [rsp+A0h] [rbp-A8h]
  __int64 v102; // [rsp+A8h] [rbp-A0h]
  __int128 v103; // [rsp+B0h] [rbp-98h]
  __int64 v104; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v105; // [rsp+C8h] [rbp-80h]
  __int64 v106; // [rsp+D8h] [rbp-70h]
  __int64 v107; // [rsp+E0h] [rbp-68h]
  __int64 v108; // [rsp+E8h] [rbp-60h]
  __int64 v109; // [rsp+F0h] [rbp-58h]
  int v110; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v111; // [rsp+108h] [rbp-40h]

  v111 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 64);
  v10 = *(_QWORD *)(v8 + 280);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  v95 = 0;
  v110 = a4;
  v94[0] = off_4CB410;
  v11 = *(_QWORD *)(a1 + 104);
  memset(&v94[1], 0, 32);
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v100 = a1 + 64;
  v101 = a2;
  v102 = 0;
  v104 = 0;
  v106 = -1;
  v107 = a3;
  v109 = 0;
  v108 = v11;
  v99 = 0;
  v103 = 0;
  v105 = 0;
  sub_11C170(v10, (__int64)v94);
  v14 = *(_QWORD *)(a1 + 72);
  if ( !v14 )
  {
    if ( *(_BYTE *)(v10 + 320) )
      goto LABEL_5;
LABEL_50:
    LODWORD(v28) = 0;
    goto LABEL_51;
  }
  v56 = *(_QWORD *)(a1 + 64);
  v57 = 5 * v14;
  v58 = 40 * v14;
  v59 = (__m128i *)(v56 + 40 * v14);
  if ( (__m128i *)v56 != v59 )
  {
    v60 = 0xCCCCCCCCCCCCCCCDLL * (v58 >> 3);
    if ( v60 )
    {
      _BitScanReverse64(&v61, v60);
      src = *(__m128i **)(a1 + 64);
      sub_1A84D0(v56, v59, 2LL * (int)v61, v57, v12, v13);
      v62 = src;
      if ( v58 > 640 )
      {
        v63 = src + 40;
        sub_191D00(src, src + 40);
        do
        {
          v64 = (__int64)v63;
          v63 = (__m128i *)((char *)v63 + 40);
          sub_191C80(v64);
        }
        while ( v59 != v63 );
        goto LABEL_62;
      }
    }
    else
    {
      srca = *(__m128i **)(a1 + 64);
      sub_1A84D0(v56, v59, -2, v57, v12, v13);
      v62 = srca;
    }
    sub_191D00(v62, v59);
  }
LABEL_62:
  v65 = v108;
  if ( *(_QWORD *)(a1 + 104)
     + *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) >= v108 )
    v65 = *(_QWORD *)(a1 + 104)
        + *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  if ( !(unsigned __int8)sub_19A1B0(a1, a5 & (v106 == -1), v109, v65) )
  {
    v45 = *(_QWORD *)(a1 + 64);
    if ( v45 )
    {
      *(_QWORD *)(a1 + 72) = 0;
      qfree(v45);
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 80) = 0;
    }
    goto LABEL_50;
  }
  v66 = *(_QWORD *)(a1 + 16);
  v67 = *(_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(v66 + 8) != 3 )
    v67 += *(_DWORD *)(v66 + 48);
  if ( !v67 )
  {
    v68 = *(const __m128i **)(a1 + 64);
    v69 = v68[1].m128i_i64[1];
    if ( v69 == *(_QWORD *)(a1 + 104) )
    {
      if ( *(_BYTE *)(v10 + 320) )
      {
        if ( !under_debugger )
          sub_37EEE0(52526);
        goto LABEL_100;
      }
      if ( v106 != -1 && v69 != v106 )
      {
        if ( v69 >= v106 )
        {
          if ( !under_debugger )
            sub_37EEE0(51464);
        }
        else
        {
          v70 = *(_QWORD *)(a1 + 72);
          v71 = *(const __m128i **)(a1 + 64);
          v72 = (const __m128i *)((char *)v68 + 40 * v70);
          if ( v72 != v68 )
          {
            while ( v106 != v71[1].m128i_i64[1] )
            {
              v71 = (const __m128i *)((char *)v71 + 40);
              if ( v72 == v71 )
                goto LABEL_96;
            }
            if ( v72 != v71 )
            {
              v73 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v72 - (char *)v71) >> 3) - 1;
              if ( v73 >= 0 )
              {
                v74 = *(_QWORD *)(a1 + 64);
                v75 = v71;
                do
                {
                  v76 = _mm_loadu_si128(v75);
                  v74 += 40;
                  v75 = (const __m128i *)((char *)v75 + 40);
                  *(__m128i *)(v74 - 40) = v76;
                  *(__m128i *)(v74 - 24) = _mm_loadu_si128((const __m128i *)((char *)v75 - 24));
                  *(_QWORD *)(v74 - 8) = v75[-1].m128i_i64[1];
                  v55 = v73-- == 0;
                }
                while ( !v55 );
                v70 = *(_QWORD *)(a1 + 72);
              }
              *(_QWORD *)(a1 + 72) = v70 - 0xCCCCCCCCCCCCCCCDLL * (((char *)v71 - (char *)v68) >> 3);
              goto LABEL_5;
            }
          }
LABEL_96:
          if ( !under_debugger )
            sub_37EEE0(51465);
        }
LABEL_100:
        BUG();
      }
      if ( v68 )
      {
        *(_QWORD *)(a1 + 72) = 0;
        qfree(v68);
        *(_QWORD *)(a1 + 64) = 0;
        *(_QWORD *)(a1 + 80) = 0;
      }
    }
  }
LABEL_5:
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( !(_QWORD)v103 )
    goto LABEL_47;
  do
  {
    v18 = sub_19A7A0(v102 + 48 * v17);
    v21 = *(_QWORD *)(a1 + 72);
    v22 = *(_QWORD *)(a1 + 64);
    v23 = v18;
    v24 = v22 + 40 * v21;
    if ( v22 == v24 )
      goto LABEL_30;
    v25 = *(_QWORD *)(a1 + 64);
    while ( v23 != *(_QWORD *)(v25 + 24) )
    {
      v25 += 40;
      if ( v25 == v24 )
        goto LABEL_30;
    }
    if ( v24 == v25 )
    {
LABEL_30:
      v92.m128i_i64[1] = v23;
      v32 = *(_QWORD *)(a1 + 80);
      v92.m128i_i64[0] = -1;
      v33 = v21 + 1;
      LOBYTE(v93) = 0;
      v91 = 0;
      if ( (unsigned __int64)&v91 >= v22 && (unsigned __int64)&v91 < v22 + 40 * v32 )
      {
        if ( v32 < v33 )
        {
          v77 = qvector_reserve(a1 + 64, 0, v33, 40);
          v78 = *(_QWORD *)(a1 + 72);
          v79 = *(void **)(a1 + 80);
          *(_QWORD *)(a1 + 80) = v32;
          v80 = *(const __m128i **)(a1 + 64);
          v81 = v78 - 1;
          if ( v81 >= 0 )
          {
            v82 = v77;
            do
            {
              v83 = _mm_loadu_si128(v80);
              v82 += 40;
              v80 = (const __m128i *)((char *)v80 + 40);
              *(__m128i *)(v82 - 40) = v83;
              *(__m128i *)(v82 - 24) = _mm_loadu_si128((const __m128i *)((char *)v80 - 24));
              *(_QWORD *)(v82 - 8) = v80[-1].m128i_i64[1];
              v55 = v81-- == 0;
            }
            while ( !v55 );
            v80 = *(const __m128i **)(a1 + 64);
          }
          srcb = v79;
          v87 = v77;
          qfree(v80);
          v19 = (__int64)srcb;
          v84 = 5LL * *(_QWORD *)(a1 + 72);
          *(_QWORD *)(a1 + 64) = v87;
          *(_QWORD *)(a1 + 80) = srcb;
          v24 = v87 + 8 * v84;
        }
        *(_QWORD *)(v24 + 16) = -1;
        *(_QWORD *)(v24 + 24) = v23;
        *(_BYTE *)(v24 + 32) = 0;
        *(_OWORD *)v24 = 0;
      }
      else
      {
        if ( v32 < v33 )
        {
          v47 = qvector_reserve(a1 + 64, 0, v33, 40);
          v48 = *(_QWORD *)(a1 + 72);
          v49 = v47;
          v50 = *(const __m128i **)(a1 + 64);
          v51 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 80) = v32;
          v52 = v48 - 1;
          if ( v52 >= 0 )
          {
            v53 = v49;
            do
            {
              v54 = _mm_loadu_si128(v50);
              v53 += 40;
              v50 = (const __m128i *)((char *)v50 + 40);
              *(__m128i *)(v53 - 40) = v54;
              *(__m128i *)(v53 - 24) = _mm_loadu_si128((const __m128i *)((char *)v50 - 24));
              *(_QWORD *)(v53 - 8) = v50[-1].m128i_i64[1];
              v55 = v52-- == 0;
            }
            while ( !v55 );
            v50 = *(const __m128i **)(a1 + 64);
          }
          v86 = v51;
          qfree(v50);
          *(_QWORD *)(a1 + 64) = v49;
          *(_QWORD *)(a1 + 80) = v86;
          v24 = v49 + 40LL * *(_QWORD *)(a1 + 72);
        }
        v34 = v93;
        *(__m128i *)v24 = _mm_load_si128(&v91);
        v35 = _mm_load_si128(&v92);
        *(_QWORD *)(v24 + 32) = v34;
        *(__m128i *)(v24 + 16) = v35;
      }
      ++*(_QWORD *)(a1 + 72);
      v16 = 1;
    }
    v17 = ++v15;
  }
  while ( v15 < (unsigned __int64)v103 );
  v26 = *(_QWORD *)(a1 + 72);
  if ( v16 )
  {
    v38 = *(__m128i **)(a1 + 64);
    v39 = 40 * v26;
    v40 = (__m128i *)((char *)v38 + 40 * v26);
    if ( v38 != v40 )
    {
      v41 = 0xCCCCCCCCCCCCCCCDLL * (v39 >> 3);
      if ( v41 )
      {
        _BitScanReverse64(&v42, v41);
        sub_1A84D0(*(_QWORD *)(a1 + 64), v40, 2LL * (int)v42, v24, v19, v20);
        if ( v39 > 640 )
        {
          v43 = v38 + 40;
          sub_191D00(v38, v38 + 40);
          do
          {
            v44 = (__int64)v43;
            v43 = (__m128i *)((char *)v43 + 40);
            sub_191C80(v44);
          }
          while ( v40 != v43 );
          goto LABEL_47;
        }
      }
      else
      {
        sub_1A84D0(*(_QWORD *)(a1 + 64), v40, -2, v24, v19, v20);
      }
      sub_191D00(v38, v40);
LABEL_47:
      v26 = *(_QWORD *)(a1 + 72);
    }
  }
  v27 = v109;
  if ( v108 >= v109 )
    v27 = v108;
  v28 = v27;
  if ( v26 )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v26 - 16);
    v37 = 0;
    if ( v36 >= 0 )
      v37 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v26 - 16);
    if ( v37 >= v28 )
    {
LABEL_21:
      v30 = v26 - 2;
      if ( (int)v26 - 2 >= 0 )
      {
        v28 = 40LL * v30;
        do
        {
          while ( !(unsigned __int8)sub_312EC0(&v104, *(_QWORD *)(*(_QWORD *)(a1 + 64) + v28 + 24)) )
          {
            --v30;
            v28 -= 40;
            if ( v30 == -1 )
              goto LABEL_28;
          }
          v31 = *(_QWORD *)(a1 + 72);
          if ( (__int64)(0xCCCCCCCCCCCCCCCDLL * ((40 * v31 - v28) >> 3) - 2) >= 0 )
          {
            memmove(
              (void *)(v28 + *(_QWORD *)(a1 + 64)),
              (const void *)(v28 + *(_QWORD *)(a1 + 64) + 40),
              40 * v31 - v28 - 40);
            v31 = *(_QWORD *)(a1 + 72);
          }
          --v30;
          v28 -= 40;
          *(_QWORD *)(a1 + 72) = v31 - 1;
        }
        while ( v30 != -1 );
LABEL_28:
        v26 = *(_QWORD *)(a1 + 72);
      }
      goto LABEL_29;
    }
    if ( (unsigned __int8)sub_312EC0(&v104, v36) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 16) = v28;
      goto LABEL_20;
    }
LABEL_19:
    sub_195F80((unsigned __int64 *)(a1 + 64), v28, 0, 0);
LABEL_20:
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 8) = 2;
    v26 = *(_QWORD *)(a1 + 72);
    goto LABEL_21;
  }
  v29 = *(_QWORD *)(a1 + 104) + *(_DWORD *)(a1 + 112) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  if ( v29 < 0 )
    v29 = 0;
  if ( v29 < v28 )
    goto LABEL_19;
LABEL_29:
  LOBYTE(v28) = v26 != 0;
LABEL_51:
  sub_193200(v94);
  return (unsigned int)v28;
}
