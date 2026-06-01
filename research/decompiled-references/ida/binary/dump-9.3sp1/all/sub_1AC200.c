__int64 __fastcall sub_1AC200(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int8 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __m128i v12; // xmm0
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // r15d
  char v21; // bp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rdx
  unsigned int v32; // ebp
  __int64 v33; // rax
  unsigned __int64 v34; // rbp
  __int64 v35; // rax
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
  int v66; // eax
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rcx
  const __m128i *v70; // rdx
  __int64 v71; // rax
  signed __int64 v72; // rax
  const __m128i *v73; // rcx
  __m128i v74; // xmm0
  __int64 v75; // rax
  __int64 v76; // rcx
  void *v77; // r8
  const __m128i *v78; // rdi
  __int64 v79; // rcx
  __int64 v80; // rdx
  __m128i v81; // xmm0
  __int64 v83; // [rsp+0h] [rbp-148h]
  __int64 v84; // [rsp+0h] [rbp-148h]
  __m128i *src; // [rsp+8h] [rbp-140h]
  __m128i *srca; // [rsp+8h] [rbp-140h]
  void *srcb; // [rsp+8h] [rbp-140h]
  __m128i v88; // [rsp+10h] [rbp-138h] BYREF
  __m128i v89; // [rsp+20h] [rbp-128h] BYREF
  __int64 v90; // [rsp+30h] [rbp-118h]
  _QWORD v91[5]; // [rsp+40h] [rbp-108h] BYREF
  char v92; // [rsp+68h] [rbp-E0h]
  __int64 v93; // [rsp+70h] [rbp-D8h]
  __int64 v94; // [rsp+78h] [rbp-D0h]
  __int64 v95; // [rsp+80h] [rbp-C8h]
  __int128 v96; // [rsp+88h] [rbp-C0h]
  __int64 v97; // [rsp+98h] [rbp-B0h]
  __int64 v98; // [rsp+A0h] [rbp-A8h]
  __int64 v99; // [rsp+A8h] [rbp-A0h]
  __int128 v100; // [rsp+B0h] [rbp-98h]
  __int64 v101; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v102; // [rsp+C8h] [rbp-80h]
  __int64 v103; // [rsp+D8h] [rbp-70h]
  __int64 v104; // [rsp+E0h] [rbp-68h]
  __int64 v105; // [rsp+E8h] [rbp-60h]
  __int64 v106; // [rsp+F0h] [rbp-58h]
  int v107; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v108; // [rsp+108h] [rbp-40h]

  v108 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(v9 + 280);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  v12 = 0;
  v92 = 0;
  v107 = a4;
  v91[0] = off_4DE2B0;
  v13 = *(_QWORD *)(a1 + 104);
  v14 = (unsigned __int64)v91;
  memset(&v91[1], 0, 32);
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v97 = a1 + 64;
  v98 = a2;
  v99 = 0;
  v101 = 0;
  v103 = -1;
  v104 = a3;
  v106 = 0;
  v105 = v13;
  v96 = 0;
  v100 = 0;
  v102 = 0;
  sub_11FBB0(v11, (__int64)v91);
  v19 = *(_QWORD *)(a1 + 72);
  if ( !v19 )
  {
    if ( *(_BYTE *)(v11 + 320) )
      goto LABEL_5;
LABEL_50:
    LODWORD(v30) = 0;
    goto LABEL_51;
  }
  v56 = *(_QWORD *)(a1 + 64);
  v57 = 5 * v19;
  v58 = 40 * v19;
  v59 = (__m128i *)(v56 + 40 * v19);
  if ( (__m128i *)v56 != v59 )
  {
    v60 = 0xCCCCCCCCCCCCCCCDLL * (v58 >> 3);
    if ( v60 )
    {
      _BitScanReverse64(&v61, v60);
      src = *(__m128i **)(a1 + 64);
      sub_1ABF10(v56, v59, 2LL * (int)v61, v57, v17, v18);
      v62 = src;
      if ( v58 > 640 )
      {
        v63 = src + 40;
        sub_195740(src, src + 40);
        do
        {
          v64 = (__int64)v63;
          v63 = (__m128i *)((char *)v63 + 40);
          sub_1956C0(v64);
        }
        while ( v59 != v63 );
        goto LABEL_62;
      }
    }
    else
    {
      srca = *(__m128i **)(a1 + 64);
      sub_1ABF10(v56, v59, -2, v57, v17, v18);
      v62 = srca;
    }
    sub_195740(v62, v59);
  }
LABEL_62:
  v65 = v105;
  if ( *(_QWORD *)(a1 + 104)
     + *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) >= v105 )
    v65 = *(_QWORD *)(a1 + 104)
        + *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v14 = a5 & (v103 == -1);
  if ( !(unsigned __int8)sub_19DBF0(a1, a5 & (v103 == -1), v106, v65) )
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
  v15 = *(_QWORD *)(a1 + 16);
  v66 = *(_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(v15 + 8) != 3 )
    v66 += *(_DWORD *)(v15 + 48);
  if ( !v66 )
  {
    v67 = *(_QWORD *)(a1 + 64);
    v68 = *(_QWORD *)(v67 + 24);
    if ( v68 == *(_QWORD *)(a1 + 104) )
    {
      if ( *(_BYTE *)(v11 + 320) )
      {
        if ( !under_debugger )
          sub_383060(52526);
        goto LABEL_100;
      }
      v14 = v103;
      if ( v103 != -1 && v68 != v103 )
      {
        if ( v68 >= v103 )
        {
          if ( !under_debugger )
            sub_383060(51464);
        }
        else
        {
          v69 = *(_QWORD *)(a1 + 72);
          v70 = *(const __m128i **)(a1 + 64);
          v71 = v67 + 40 * v69;
          if ( v71 != v67 )
          {
            while ( v103 != v70[1].m128i_i64[1] )
            {
              v70 = (const __m128i *)((char *)v70 + 40);
              if ( (const __m128i *)v71 == v70 )
                goto LABEL_96;
            }
            if ( (const __m128i *)v71 != v70 )
            {
              v14 = 0xCCCCCCCCCCCCCCCDLL;
              v72 = 0xCCCCCCCCCCCCCCCDLL * ((v71 - (__int64)v70) >> 3) - 1;
              if ( v72 >= 0 )
              {
                v14 = *(_QWORD *)(a1 + 64);
                v73 = v70;
                do
                {
                  v74 = _mm_loadu_si128(v73);
                  v14 += 40LL;
                  v73 = (const __m128i *)((char *)v73 + 40);
                  *(__m128i *)(v14 - 40) = v74;
                  v12 = _mm_loadu_si128((const __m128i *)((char *)v73 - 24));
                  *(__m128i *)(v14 - 24) = v12;
                  *(_QWORD *)(v14 - 8) = v73[-1].m128i_i64[1];
                  v55 = v72-- == 0;
                }
                while ( !v55 );
                v69 = *(_QWORD *)(a1 + 72);
              }
              v15 = ((__int64)v70->m128i_i64 - v67) >> 3;
              v16 = v69 - 0xCCCCCCCCCCCCCCCDLL * v15;
              *(_QWORD *)(a1 + 72) = v16;
              goto LABEL_5;
            }
          }
LABEL_96:
          if ( !under_debugger )
            sub_383060(51465);
        }
LABEL_100:
        BUG();
      }
      if ( v67 )
      {
        *(_QWORD *)(a1 + 72) = 0;
        qfree(v67);
        *(_QWORD *)(a1 + 64) = 0;
        *(_QWORD *)(a1 + 80) = 0;
      }
    }
  }
LABEL_5:
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( !(_QWORD)v100 )
    goto LABEL_47;
  do
  {
    v23 = sub_19E1E0(v99 + 48 * v22, v12, v14, v15, v16);
    v15 = *(_QWORD *)(a1 + 72);
    v14 = *(_QWORD *)(a1 + 64);
    v26 = v23;
    v16 = v14 + 40 * v15;
    if ( v14 == v16 )
      goto LABEL_30;
    v27 = *(_QWORD *)(a1 + 64);
    while ( v26 != *(_QWORD *)(v27 + 24) )
    {
      v27 += 40;
      if ( v27 == v16 )
        goto LABEL_30;
    }
    if ( v16 == v27 )
    {
LABEL_30:
      v89.m128i_i64[1] = v26;
      v34 = *(_QWORD *)(a1 + 80);
      v89.m128i_i64[0] = -1;
      ++v15;
      LOBYTE(v90) = 0;
      v88 = 0;
      if ( (unsigned __int64)&v88 >= v14 && (v14 += 40 * v34, (unsigned __int64)&v88 < v14) )
      {
        if ( v34 < v15 )
        {
          v14 = 0;
          v75 = qvector_reserve(a1 + 64, 0, v15, 40);
          v76 = *(_QWORD *)(a1 + 72);
          v77 = *(void **)(a1 + 80);
          *(_QWORD *)(a1 + 80) = v34;
          v78 = *(const __m128i **)(a1 + 64);
          v79 = v76 - 1;
          if ( v79 >= 0 )
          {
            v80 = v75;
            do
            {
              v81 = _mm_loadu_si128(v78);
              v80 += 40;
              v78 = (const __m128i *)((char *)v78 + 40);
              *(__m128i *)(v80 - 40) = v81;
              *(__m128i *)(v80 - 24) = _mm_loadu_si128((const __m128i *)((char *)v78 - 24));
              v14 = v78[-1].m128i_u64[1];
              *(_QWORD *)(v80 - 8) = v14;
              v55 = v79-- == 0;
            }
            while ( !v55 );
            v78 = *(const __m128i **)(a1 + 64);
          }
          srcb = v77;
          v84 = v75;
          qfree((__int64)v78);
          v24 = (__int64)srcb;
          v15 = 5LL * *(_QWORD *)(a1 + 72);
          *(_QWORD *)(a1 + 64) = v84;
          *(_QWORD *)(a1 + 80) = srcb;
          v16 = v84 + 8 * v15;
        }
        v12 = 0;
        *(_QWORD *)(v16 + 16) = -1;
        *(_QWORD *)(v16 + 24) = v26;
        *(_BYTE *)(v16 + 32) = 0;
        *(_OWORD *)v16 = 0;
      }
      else
      {
        if ( v34 < v15 )
        {
          v14 = 0;
          v47 = qvector_reserve(a1 + 64, 0, v15, 40);
          v48 = *(_QWORD *)(a1 + 72);
          v49 = v47;
          v50 = *(const __m128i **)(a1 + 64);
          v51 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 80) = v34;
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
              v14 = v50[-1].m128i_u64[1];
              *(_QWORD *)(v53 - 8) = v14;
              v55 = v52-- == 0;
            }
            while ( !v55 );
            v50 = *(const __m128i **)(a1 + 64);
          }
          v83 = v51;
          qfree((__int64)v50);
          *(_QWORD *)(a1 + 64) = v49;
          *(_QWORD *)(a1 + 80) = v83;
          v16 = v49 + 40LL * *(_QWORD *)(a1 + 72);
        }
        v35 = v90;
        *(__m128i *)v16 = _mm_load_si128(&v88);
        v12 = _mm_load_si128(&v89);
        *(_QWORD *)(v16 + 32) = v35;
        *(__m128i *)(v16 + 16) = v12;
      }
      ++*(_QWORD *)(a1 + 72);
      v21 = 1;
    }
    v22 = ++v20;
  }
  while ( v20 < (unsigned __int64)v100 );
  v28 = *(_QWORD *)(a1 + 72);
  if ( v21 )
  {
    v38 = *(__m128i **)(a1 + 64);
    v39 = 40 * v28;
    v40 = (__m128i *)((char *)v38 + 40 * v28);
    if ( v38 != v40 )
    {
      v41 = 0xCCCCCCCCCCCCCCCDLL * (v39 >> 3);
      if ( v41 )
      {
        _BitScanReverse64(&v42, v41);
        sub_1ABF10(*(_QWORD *)(a1 + 64), v40, 2LL * (int)v42, v16, v24, v25);
        if ( v39 > 640 )
        {
          v43 = v38 + 40;
          sub_195740(v38, v38 + 40);
          do
          {
            v44 = (__int64)v43;
            v43 = (__m128i *)((char *)v43 + 40);
            sub_1956C0(v44);
          }
          while ( v40 != v43 );
          goto LABEL_47;
        }
      }
      else
      {
        sub_1ABF10(*(_QWORD *)(a1 + 64), v40, -2, v16, v24, v25);
      }
      sub_195740(v38, v40);
LABEL_47:
      v28 = *(_QWORD *)(a1 + 72);
    }
  }
  v29 = v106;
  if ( v105 >= v106 )
    v29 = v105;
  v30 = v29;
  if ( v28 )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v28 - 16);
    v37 = 0;
    if ( v36 >= 0 )
      v37 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v28 - 16);
    if ( v37 >= v30 )
    {
LABEL_21:
      v32 = v28 - 2;
      if ( (int)v28 - 2 >= 0 )
      {
        v30 = 40LL * v32;
        do
        {
          while ( !(unsigned __int8)sub_317040(&v101, *(_QWORD *)(*(_QWORD *)(a1 + 64) + v30 + 24)) )
          {
            --v32;
            v30 -= 40;
            if ( v32 == -1 )
              goto LABEL_28;
          }
          v33 = *(_QWORD *)(a1 + 72);
          if ( (__int64)(0xCCCCCCCCCCCCCCCDLL * ((40 * v33 - v30) >> 3) - 2) >= 0 )
          {
            memmove(
              (void *)(v30 + *(_QWORD *)(a1 + 64)),
              (const void *)(v30 + *(_QWORD *)(a1 + 64) + 40),
              40 * v33 - v30 - 40);
            v33 = *(_QWORD *)(a1 + 72);
          }
          --v32;
          v30 -= 40;
          *(_QWORD *)(a1 + 72) = v33 - 1;
        }
        while ( v32 != -1 );
LABEL_28:
        v28 = *(_QWORD *)(a1 + 72);
      }
      goto LABEL_29;
    }
    if ( (unsigned __int8)sub_317040(&v101, v36) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 16) = v30;
      goto LABEL_20;
    }
LABEL_19:
    sub_1999C0((const __m128i **)(a1 + 64), v30, 0, 0);
LABEL_20:
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 8) = 2;
    v28 = *(_QWORD *)(a1 + 72);
    goto LABEL_21;
  }
  v31 = *(_QWORD *)(a1 + 104) + *(_DWORD *)(a1 + 112) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  if ( v31 < 0 )
    v31 = 0;
  if ( v31 < v30 )
    goto LABEL_19;
LABEL_29:
  LOBYTE(v30) = v28 != 0;
LABEL_51:
  sub_196C40(v91);
  return (unsigned int)v30;
}
