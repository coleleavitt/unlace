__int64 __fastcall sub_1D75BD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        char a9)
{
  unsigned int v9; // ebp
  bool v10; // sf
  __int64 v11; // r14
  __int64 v12; // r15
  unsigned __int64 v13; // r11
  __int64 v15; // rax
  void **v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  int v19; // esi
  int v20; // r13d
  __int64 v21; // rcx
  char v22; // dl
  __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  char v25; // r14
  __int64 v26; // rsi
  __m128 v27; // xmm0
  __m128 v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // esi
  char v35; // cl
  __int64 v36; // rdx
  char *v37; // rdi
  __int64 v38; // r13
  __int64 v39; // r14
  void **v40; // r12
  __int64 *v42; // rcx
  __int64 *v43; // r8
  bool v44; // al
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rbp
  __int64 v49; // r14
  __int64 v50; // rsi
  __m128i si128; // xmm1
  __m128i v52; // xmm2
  char v53; // al
  __int64 v54; // rsi
  int v55; // eax
  __int64 *v56; // [rsp+0h] [rbp-238h] BYREF
  __int64 v57; // [rsp+8h] [rbp-230h]
  __int64 *v58; // [rsp+10h] [rbp-228h]
  unsigned __int64 v59; // [rsp+18h] [rbp-220h]
  void **v60; // [rsp+20h] [rbp-218h]
  __int64 *v61; // [rsp+28h] [rbp-210h] BYREF
  unsigned __int64 v62; // [rsp+30h] [rbp-208h]
  __int64 *v63; // [rsp+38h] [rbp-200h] BYREF
  unsigned __int64 v64; // [rsp+40h] [rbp-1F8h]
  char v65; // [rsp+4Bh] [rbp-1EDh]
  char v66; // [rsp+4Ch] [rbp-1ECh] BYREF
  __int64 v67; // [rsp+50h] [rbp-1E8h]
  __int64 v68; // [rsp+58h] [rbp-1E0h] BYREF
  int v69; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned int v70; // [rsp+64h] [rbp-1D4h]
  __int64 v71; // [rsp+68h] [rbp-1D0h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-1C8h] BYREF
  char v73; // [rsp+80h] [rbp-1B8h] BYREF
  __m128 v74; // [rsp+A0h] [rbp-198h] BYREF
  __m128 v75; // [rsp+B0h] [rbp-188h]
  __m128 v76; // [rsp+C0h] [rbp-178h]
  __m128 v77; // [rsp+D0h] [rbp-168h]
  __int64 v78; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-150h]
  __int64 v80; // [rsp+F0h] [rbp-148h] BYREF
  unsigned int v81; // [rsp+F8h] [rbp-140h]
  void *v82; // [rsp+130h] [rbp-108h] BYREF
  __int64 v83; // [rsp+138h] [rbp-100h]
  __int64 v84; // [rsp+140h] [rbp-F8h] BYREF
  __int64 v85; // [rsp+148h] [rbp-F0h]
  __int16 v86; // [rsp+150h] [rbp-E8h]
  char v87; // [rsp+152h] [rbp-E6h]
  __int64 v88; // [rsp+158h] [rbp-E0h]
  void *v89; // [rsp+170h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+178h] [rbp-C0h]
  char v91; // [rsp+180h] [rbp-B8h] BYREF

  v9 = 1;
  v10 = *(char *)(a2 + 28) < 0;
  v67 = a3;
  v68 = a2;
  v58 = a5;
  v57 = a6;
  v66 = a9;
  if ( v10 )
    return v9;
  v11 = *(_QWORD *)(a2 + 48);
  v12 = *(_QWORD *)(a2 + 56);
  v13 = a4;
  v59 = a4;
  v78 = a1;
  v15 = *(_QWORD *)(v11 + 48);
  v79 = 1;
  v71 = v15;
  v16 = (void **)&v80;
  do
  {
    *v16 = (void *)-4096LL;
    v16 += 2;
  }
  while ( v16 != &v82 );
  v17 = v67 == 0;
  v82 = &v84;
  v83 = 0x100000000LL;
  v18 = *(_QWORD *)(a1 + 11280);
  v86 = 0;
  v85 = v18;
  v56 = (__int64 *)&v89;
  v89 = &v91;
  v87 = 0;
  v88 = 0;
  *(_QWORD *)(a1 + 11280) = &v78;
  v90 = 0x400000000LL;
  v69 = 0;
  v60 = ptr;
  ptr[0] = &v73;
  ptr[1] = (void *)0x400000000LL;
  if ( v17 )
  {
LABEL_7:
    if ( !v66 )
      v59 = sub_1D3AE30(a1, v13, v71, 0);
    sub_18C74E0(a1, 0, 0, 4);
    LODWORD(v61) = *(_DWORD *)(a1 + 11200);
    LOBYTE(v62) = *(_BYTE *)(a1 + 12592);
    v65 = *(_BYTE *)(a1 + 11248);
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
    sub_1DBADC0(a1);
    if ( !v22 )
      *(_BYTE *)(a1 + 12592) = 1;
    *(_BYTE *)(a1 + 11248) = 0;
    v23 = (unsigned int)v90;
    v24 = *(_DWORD *)(v12 + 20) & 0x1FFFFFFF;
    if ( v24 != (unsigned int)v90 )
    {
      if ( v24 < (unsigned int)v90 )
        LODWORD(v90) = *(_DWORD *)(v12 + 20) & 0x1FFFFFFF;
      else
        sub_1D37240((__int64)v56, v24);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) != 0
      && (v46 = sub_C1D490(v11, v24, v23, v21), (v47 = sub_F57E80(*(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL))) != 0)
      && *(_BYTE *)(v47 + 16) == 16 )
    {
      v74 = (__m128)(unsigned __int64)a1;
      v25 = 1;
      v75.m128_u64[0] = 0;
      v75.m128_i32[2] = 0;
      v76.m128_u64[0] = 0;
      v76.m128_i16[4] = 256;
      v48 = sub_1D51630(&v74, v71, a7, a8);
      operator delete(v74.m128_u64[1], 16LL * v75.m128_u32[2], 8);
      v71 = (__int64)v48;
    }
    else
    {
      v25 = 0;
    }
    v64 = v59 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v59 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v71 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v9 = sub_1D6C080(a1, v12, v71, v59, v57, v56, 0x30u, 0, 0, nullptr);
      v31 = 1;
      if ( v9 )
        goto LABEL_26;
    }
    v63 = &v68;
    v26 = *(unsigned int *)(v57 + 16);
    v77.m128_u64[1] = a1;
    v27 = _mm_loadh_ps((const double *)&v63);
    v63 = (__int64 *)&v69;
    v74 = v27;
    v77.m128_u64[0] = (unsigned __int64)&v66;
    v28 = _mm_loadh_ps((const double *)&v63);
    v63 = (__int64 *)v57;
    v75 = v28;
    a7 = _mm_loadh_ps((const double *)&v63);
    v76 = a7;
    sub_15F0FC0(a1, v26, (__int64 (__fastcall *)(__int64))sub_1D81360, (__int64)&v74);
    v9 = v70;
    v31 = 1;
    if ( v70 )
      goto LABEL_26;
    if ( v25 )
    {
      if ( v66 )
      {
        v32 = sub_C1D490(*v58, v26, v29, v30);
        v33 = sub_F57E80(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v33 )
        {
          if ( (*(_QWORD *)(v33 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v33 + 17) & 4) == 0 )
          {
            v31 = sub_1D3EC30(a1, *v58, *(unsigned int *)(v57 + 16), 0);
            if ( v31 )
              goto LABEL_25;
          }
        }
      }
    }
    sub_190D5E0(a1, a7);
    if ( !v66 )
    {
      v43 = *(__int64 **)(*v58 + 48);
      v58 = v43;
      goto LABEL_52;
    }
    v45 = *v58;
    if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) < 0 )
    {
      if ( sub_B749D0(v45) )
      {
        v42 = v58;
        v54 = *v58;
        v55 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
        if ( (unsigned int)(v55 - 6) <= 1 || v55 == 4 )
        {
          if ( (unsigned __int8)sub_1D3AFC0(a1, v54, *(unsigned int *)(v57 + 16), (__int64)v58) )
          {
            v31 = 0;
LABEL_25:
            v9 = 16;
LABEL_26:
            v34 = (int)v61;
            v35 = v62;
            *(_BYTE *)(a1 + 11248) = v65;
            v36 = *(_QWORD *)(a1 + 264);
            *(_DWORD *)(a1 + 11200) = v34;
            *(_BYTE *)(a1 + 12592) = v35;
            if ( *(_DWORD *)(v36 + 204) == 5 )
              *(_BYTE *)(v36 + 194) = 1;
            if ( v20 )
              v20 = 3;
            *(_DWORD *)(v36 + 204) = v20;
            if ( v31 )
              sub_190D5E0(a1, a7);
            goto LABEL_32;
          }
          v53 = v66;
          v54 = *v58;
        }
        else
        {
          v53 = v66;
        }
      }
      else
      {
        v42 = v58;
        v53 = v66;
        v54 = *v58;
      }
      v43 = *(__int64 **)(v54 + 48);
      v58 = v43;
      if ( !v53 )
      {
LABEL_52:
        v63 = v43;
        v59 = sub_1D3AE30(a1, v59, (__int64)v43, 1);
        if ( v25 )
        {
          v58 = sub_1D521E0(a1, (__int64)v63, 0, a7, a8);
          v59 = (unsigned __int64)sub_1D521E0(a1, v59, 0, a7, a8);
        }
        if ( (v59 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          if ( !v66 )
          {
            v44 = !sub_A82490(*(_QWORD *)(a1 + 248), (__int64)v58, v59);
            goto LABEL_57;
          }
LABEL_62:
          v44 = !sub_1D3A950(a1, (__int64)v58, v59, (__int64)v42);
LABEL_57:
          if ( v44 )
          {
            v9 = 10;
            sub_F1D250((__int64)&v74, (__int64)v58, 0, 0);
            v49 = v57;
            v50 = v59;
            si128 = _mm_load_si128((const __m128i *)&v74);
            *(_QWORD *)(v57 + 200) = v75.m128_u64[0];
            *(__m128i *)(v49 + 184) = si128;
            sub_F1D250((__int64)&v74, v50, 0, 0);
            v52 = _mm_load_si128((const __m128i *)&v74);
            *(_QWORD *)(v49 + 224) = v75.m128_u64[0];
            v31 = 0;
            *(__m128i *)(v49 + 208) = v52;
            goto LABEL_26;
          }
        }
LABEL_58:
        v31 = 0;
        goto LABEL_26;
      }
    }
    else
    {
      v58 = *(__int64 **)(v45 + 48);
    }
    if ( v64 )
      goto LABEL_62;
    goto LABEL_58;
  }
  v62 = a4;
  v61 = &v68;
  v74 = _mm_loadh_ps((const double *)&v61);
  v61 = &v71;
  v75 = _mm_loadh_ps((const double *)&v56);
  v19 = *(_DWORD *)(v57 + 16);
  v76 = _mm_loadh_ps((const double *)&v61);
  v61 = (__int64 *)a1;
  a7 = _mm_loadh_ps((const double *)&v61);
  v77 = a7;
  sub_15F0FC0(a1, v19, (__int64 (__fastcall *)(__int64))sub_1D3EB10, (__int64)&v74);
  v9 = v70;
  if ( !v70 )
  {
    v13 = v62;
    v69 = v90;
    goto LABEL_7;
  }
LABEL_32:
  if ( ptr[0] != v60 + 2 )
    free(ptr[0]);
  if ( v89 != v56 + 2 )
    free(v89);
  v37 = (char *)v82;
  if ( !(_BYTE)v86 )
  {
    if ( (_DWORD)v83 )
    {
      v38 = 0;
      v39 = 8LL * (unsigned int)(v83 - 1) + 8;
      do
      {
        v40 = *(void ***)&v37[v38];
        if ( v40 )
        {
          if ( *v40 != v40 + 2 )
            free(*v40);
          operator delete(v40, 0x30u);
          v37 = (char *)v82;
        }
        v38 += 8;
      }
      while ( v39 != v38 );
    }
    LOBYTE(v86) = 1;
    *(_QWORD *)(v78 + 11280) = v85;
  }
  if ( v37 != (char *)&v84 )
    free(v37);
  if ( (v79 & 1) == 0 )
    operator delete(v80, 16LL * v81, 8);
  return v9;
}
