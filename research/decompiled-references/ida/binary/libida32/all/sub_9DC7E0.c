void __fastcall sub_9DC7E0(_BYTE *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // r15
  unsigned __int8 v6; // al
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  int v14; // edx
  unsigned __int64 v15; // r14
  char v16; // bl
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64); // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  char v25; // al
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rbp
  unsigned int v29; // edx
  void **v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rax
  void **v35; // rbp
  __int64 v36; // rdx
  __m128 v37; // xmm4
  __int64 *v38; // rbx
  __int64 v39; // rax
  __m128i v40; // xmm2
  __m128 v41; // xmm1
  unsigned int v42; // eax
  __m128 **v43; // rax
  __m128 *v44; // r9
  int v45; // eax
  __m128i v46; // xmm3
  unsigned int v47; // eax
  unsigned __int64 *v48; // rax
  unsigned __int64 v49; // r9
  __int64 v50; // rdi
  unsigned int v51; // esi
  unsigned int v52; // ecx
  unsigned int v53; // edx
  __int64 *v54; // rbp
  __int64 *v55; // rbx
  __int64 v56; // rdi
  __int64 *v57; // rbp
  __int64 *v58; // rbx
  __int64 v59; // rdi
  void *v60; // rbx
  __int64 v61; // rsi
  void *v62; // rbx
  __int64 *v63; // rbp
  __int64 *v64; // rbx
  __int64 v65; // rdi
  __int64 *v66; // rbp
  __int64 *v67; // rbx
  __int64 v68; // rdi
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // r13
  __int64 v71; // rdi
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  _QWORD *v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rdx
  __m128i v82; // [rsp+0h] [rbp-228h] BYREF
  __int64 v83; // [rsp+18h] [rbp-210h] BYREF
  __m128i v84; // [rsp+20h] [rbp-208h] BYREF
  void **v85; // [rsp+30h] [rbp-1F8h]
  __m128 *v86; // [rsp+38h] [rbp-1F0h]
  __m128 v87; // [rsp+40h] [rbp-1E8h]
  __m128 *v88; // [rsp+50h] [rbp-1D8h]
  __m128 *v89; // [rsp+58h] [rbp-1D0h]
  void **v90; // [rsp+60h] [rbp-1C8h]
  void **v91; // [rsp+68h] [rbp-1C0h] BYREF
  void **v92; // [rsp+70h] [rbp-1B8h]
  __m128 *v93; // [rsp+78h] [rbp-1B0h]
  void **p_ptr; // [rsp+80h] [rbp-1A8h]
  int v95; // [rsp+8Ch] [rbp-19Ch]
  __m128i v96; // [rsp+90h] [rbp-198h] BYREF
  void *v97[2]; // [rsp+A0h] [rbp-188h] BYREF
  __int64 v98; // [rsp+B0h] [rbp-178h]
  void *v99[2]; // [rsp+C0h] [rbp-168h] BYREF
  __int64 v100; // [rsp+D0h] [rbp-158h]
  __m128 v101; // [rsp+E0h] [rbp-148h] BYREF
  void **v102; // [rsp+F0h] [rbp-138h]
  void *v103; // [rsp+100h] [rbp-128h] BYREF
  __int64 v104; // [rsp+108h] [rbp-120h]
  __int64 v105; // [rsp+110h] [rbp-118h]
  unsigned int v106; // [rsp+118h] [rbp-110h]
  void *v107; // [rsp+120h] [rbp-108h] BYREF
  __int64 *v108; // [rsp+128h] [rbp-100h]
  __int64 v109; // [rsp+130h] [rbp-F8h]
  void *v110; // [rsp+150h] [rbp-D8h] BYREF
  __int64 *v111; // [rsp+158h] [rbp-D0h]
  __int64 v112; // [rsp+160h] [rbp-C8h]
  void *v113; // [rsp+180h] [rbp-A8h] BYREF
  __int64 v114; // [rsp+188h] [rbp-A0h]
  __m128 *v115; // [rsp+190h] [rbp-98h]
  unsigned int v116; // [rsp+198h] [rbp-90h]
  __m128 v117; // [rsp+1A0h] [rbp-88h]
  void *ptr; // [rsp+1B0h] [rbp-78h] BYREF
  __int64 v119; // [rsp+1B8h] [rbp-70h]
  char v120; // [rsp+1C0h] [rbp-68h] BYREF

  v3 = a3;
  v83 = a2;
  p_ptr = &ptr;
  ptr = &v120;
  v119 = 0x600000000LL;
  v6 = a1[28] & 0x7F;
  if ( (unsigned int)v6 - 34 > 5 )
  {
    v95 = a3;
    if ( v6 == 18 || (v90 = &v113, v6 == 8) )
    {
      v73 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 64LL))(a1);
      v74 = (unsigned int)v119;
      v75 = (unsigned int)v119 + 1LL;
      if ( v75 > HIDWORD(v119) )
      {
        v82.m128i_i64[0] = v73;
        sub_22134E0(p_ptr, p_ptr + 2, v75, 8);
        v74 = (unsigned int)v119;
        v73 = v82.m128i_i64[0];
      }
      *((_QWORD *)ptr + v74) = v73;
      LODWORD(v119) = v119 + 1;
      v90 = &v113;
    }
    goto LABEL_34;
  }
  if ( (unsigned int)v6 - 35 <= 3 )
  {
    v7 = *(_QWORD *)(sub_B68470(a1 + 72) + 16);
    if ( (v7 & 4) != 0 )
      v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v8 )
      BUG();
    v9 = *(_QWORD *)(v8 + 64);
    if ( v9 )
    {
      if ( (*(_BYTE *)(v9 + 10) & 0x20) != 0 )
      {
        v10 = *(_QWORD *)(sub_B68470(a1 + 72) + 16);
        if ( (v10 & 4) != 0 )
          v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v11 )
          v11 -= 64LL;
        while ( 1 )
        {
          v12 = *(_QWORD *)(v11 + 16);
          v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v12 & 4) != 0 )
            v13 = *(_QWORD *)v13;
          v14 = *(_BYTE *)(v13 + 8) & 0x7F;
          if ( (unsigned int)(v14 - 59) > 2 )
            break;
          v11 = v13 - 64;
          if ( !v11 )
            goto LABEL_16;
        }
        if ( (unsigned int)(v14 - 34) <= 5 && v13 != 72 )
          goto LABEL_81;
      }
    }
  }
LABEL_16:
  v15 = (unsigned __int64)a1;
  v16 = 0;
  if ( (unsigned __int8)sub_B5E4E0(a1) )
  {
LABEL_23:
    v95 = 0;
    v3 = 0;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v19 = *(_QWORD *)(v15 + 104);
    if ( (v19 & 1) != 0 )
    {
      if ( v16 )
        break;
      v69 = v19 & 0xFFFFFFFFFFFFFFFELL;
LABEL_86:
      v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      v16 = 1;
      v70 = v20;
      if ( v69 && (v69 & 4) != 0 && v20 )
      {
        v71 = *(_QWORD *)v20;
        v72 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
        if ( *(_DWORD *)(v70 + 8) != v72 )
        {
          *(_DWORD *)(v70 + 8) = v72;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v71 + 152LL))(v71, v15);
        }
        v20 = *(_QWORD *)(v70 + 16);
        v16 = 1;
      }
      goto LABEL_20;
    }
    if ( (v19 & 2) != 0 )
    {
      if ( v16 )
        break;
      v76 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
      v16 = 1;
      if ( !v76 )
      {
LABEL_115:
        v20 = 0;
        goto LABEL_20;
      }
      v77 = v76[2295];
      if ( v77 )
      {
        v78 = v76[294];
        v76[304] += 24LL;
        v79 = (v78 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v76[295] >= v79 + 24 && v78 )
        {
          v76[294] = v79 + 24;
          v80 = (v78 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v80 = sub_962430((__int64)(v76 + 294), 24, 24, 3, v17, v18);
          v79 = v80 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v80 = v77;
        v81 = v79 | 4;
        *(_DWORD *)(v80 + 8) = 0;
        *(_QWORD *)(v80 + 16) = v15;
      }
      else
      {
        v81 = v15 & 0xFFFFFFFFFFFFFFFBLL;
      }
      v69 = v81 & 0xFFFFFFFFFFFFFFFELL;
      v19 = v69 | 1;
      *(_QWORD *)(v15 + 104) = v69 | 1;
      goto LABEL_86;
    }
    v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v20 )
      goto LABEL_115;
LABEL_20:
    if ( a1 == (_BYTE *)v20 )
      break;
    v15 = v20;
    if ( !v20 )
      break;
    if ( (unsigned __int8)sub_B5E4E0(v20) )
      goto LABEL_23;
  }
  v95 = a3;
LABEL_24:
  v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v21 == sub_6CEBD0 )
  {
    v90 = &v113;
    v22 = sub_B5BA10(a1, &v113);
  }
  else
  {
    v22 = v21((__int64)a1);
    v90 = &v113;
  }
  v23 = (unsigned int)v119;
  v24 = (unsigned int)v119 + 1LL;
  if ( v24 > HIDWORD(v119) )
  {
    v82.m128i_i64[0] = v22;
    sub_22134E0(p_ptr, p_ptr + 2, v24, 8);
    v23 = (unsigned int)v119;
    v22 = v82.m128i_i64[0];
  }
  *((_QWORD *)ptr + v23) = v22;
  v25 = a1[28];
  LODWORD(v119) = v119 + 1;
  if ( (v25 & 0x7F) == 0x26 )
  {
    v26 = sub_B751E0(a1) + 8LL * (unsigned __int16)(*((_DWORD *)a1 + 21) >> 13);
    v27 = sub_B751E0(a1);
    if ( v26 != v27 )
    {
      v28 = v27;
      v29 = v119;
      v30 = p_ptr + 2;
      do
      {
        v31 = *(_QWORD *)(*(_QWORD *)v28 + 8LL);
        v32 = v29;
        v33 = v29 + 1LL;
        if ( v33 > HIDWORD(v119) )
        {
          sub_22134E0(p_ptr, v30, v33, 8);
          *((_QWORD *)ptr + (unsigned int)v119) = v31;
        }
        else
        {
          *((_QWORD *)ptr + v32) = v31;
        }
        v28 += 8;
        v29 = v119 + 1;
        LODWORD(v119) = v119 + 1;
      }
      while ( v26 != v28 );
    }
  }
LABEL_34:
  v98 = 0;
  *(_OWORD *)v97 = 0;
  *(_OWORD *)v99 = 0;
  v100 = 0;
  v34 = (_QWORD *)operator new(0x98u);
  v35 = (void **)ptr;
  v104 = 0;
  v34[1] = 16;
  *v34 = v34 + 3;
  v36 = (unsigned int)v119;
  *((_DWORD *)v34 + 4) = 0;
  *((_BYTE *)v34 + 20) = 1;
  v103 = v34;
  v105 = 0;
  v106 = 0;
  v85 = &v35[v36];
  if ( v35 == v85 )
  {
    v53 = 0;
    v52 = 0;
    v51 = 0;
    v50 = 0;
  }
  else
  {
    v86 = (__m128 *)&v96;
    v82.m128i_i64[0] = (__int64)v99;
    v91 = v97;
    v92 = &v103;
    v37 = _mm_loadh_ps((const double *)v82.m128i_i64);
    v93 = &v101;
    v84 = (__m128i)v37;
    do
    {
      while ( 1 )
      {
        v38 = (__int64 *)*v35;
        v39 = sub_B685F0(a1);
        v40 = _mm_load_si128(&v84);
        v82.m128i_i64[0] = v39;
        v113 = off_2BD6B20;
        v41 = _mm_loadh_ps((const double *)&v83);
        v96 = v40;
        v115 = v86;
        LOWORD(v116) = 1;
        BYTE2(v116) = 1;
        v82 = (__m128i)v41;
        v117 = v41;
        LODWORD(v114) = 16777473;
        v42 = sub_AD6A60(v38);
        BYTE1(v116) = 0;
        LODWORD(v107) = v42;
        LODWORD(v110) = 180;
        if ( (unsigned __int8)sub_AD6450(&v110, v42) )
        {
          if ( v38 )
          {
            v43 = (__m128 **)v115->m128_u64[0];
            v89 = v115;
            v44 = *v43;
            v87 = v117;
            v88 = v44;
            v45 = sub_AD6A60(v38);
            v111 = v38;
            LODWORD(v110) = v45;
            if ( !((unsigned __int8 (__fastcall *)(__m128 *, void **, unsigned __int64, unsigned __int64))v88)(
                    v89,
                    &v110,
                    v87.m128_u64[0],
                    v87.m128_u64[1])
              || (BYTE1(v116) = 1, (_BYTE)v116) )
            {
              sub_BA5AA0(v90, v38);
            }
          }
        }
        if ( v3 )
        {
          v46 = _mm_load_si128(&v82);
          BYTE2(v116) = 0;
          LODWORD(v114) = 16777473;
          v117 = (__m128)v46;
          v87.m128_u64[0] = (unsigned __int64)off_2B169E8;
          v102 = v92;
          v113 = off_2BD6B20;
          v101 = _mm_loadh_ps((const double *)&v91);
          v115 = v93;
          LOWORD(v116) = 1;
          v47 = sub_AD6A60(v38);
          BYTE1(v116) = 0;
          LODWORD(v107) = v47;
          LODWORD(v110) = 180;
          if ( (unsigned __int8)sub_AD6450(&v110, v47) )
          {
            if ( v38 )
            {
              v48 = (unsigned __int64 *)v115->m128_u64[0];
              v88 = v115;
              v87.m128_u64[0] = v117.m128_u64[1];
              v49 = *v48;
              v82.m128i_i64[0] = v117.m128_u64[0];
              v87.m128_u64[1] = v49;
              LODWORD(v110) = sub_AD6A60(v38);
              v111 = v38;
              if ( !((unsigned __int8 (__fastcall *)(__m128 *, void **, __int64, unsigned __int64))v87.m128_u64[1])(
                      v88,
                      &v110,
                      v82.m128i_i64[0],
                      v87.m128_u64[0]) )
                break;
              BYTE1(v116) = 1;
              if ( (_BYTE)v116 )
                break;
            }
          }
        }
        if ( v85 == ++v35 )
          goto LABEL_48;
      }
      ++v35;
      sub_BA5AA0(v90, v38);
    }
    while ( v85 != v35 );
LABEL_48:
    v34 = v103;
    v50 = v104;
    v51 = v105;
    v52 = HIDWORD(v105);
    v53 = v106;
  }
  v113 = v34;
  v114 = v50;
  v110 = v99[0];
  v115 = (__m128 *)__PAIR64__(v52, v51);
  v111 = (__int64 *)v99[1];
  v116 = v53;
  v112 = v100;
  v103 = nullptr;
  v107 = v97[0];
  v104 = 0;
  v108 = (__int64 *)v97[1];
  v105 = 0;
  v106 = 0;
  *(_OWORD *)v99 = 0;
  v100 = 0;
  *(_OWORD *)v97 = 0;
  v109 = v98;
  v98 = 0;
  sub_9D9040((__int64)a1, (__int64 *)&v107, (__int64 *)&v110, v90, v83, v95);
  v54 = v108;
  v55 = (__int64 *)v107;
  if ( v108 != v107 )
  {
    do
    {
      while ( 1 )
      {
        v56 = *v55;
        if ( !*v55 )
          break;
        ++v55;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 32LL))(v56);
        if ( v54 == v55 )
          goto LABEL_52;
      }
      ++v55;
    }
    while ( v54 != v55 );
LABEL_52:
    v55 = (__int64 *)v107;
  }
  if ( v55 )
    operator delete(v55);
  v57 = v111;
  v58 = (__int64 *)v110;
  if ( v111 != v110 )
  {
    do
    {
      while ( 1 )
      {
        v59 = *v58;
        if ( !*v58 )
          break;
        ++v58;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
        if ( v58 == v57 )
          goto LABEL_58;
      }
      ++v58;
    }
    while ( v57 != v58 );
LABEL_58:
    v58 = (__int64 *)v110;
  }
  if ( v58 )
    operator delete(v58);
  operator delete();
  v60 = v113;
  if ( v113 )
  {
    if ( !*((_BYTE *)v113 + 20) )
      free(*(void **)v113);
    operator delete(v60, 0x98u);
  }
  v61 = 16LL * v106;
  operator delete();
  v62 = v103;
  if ( v103 )
  {
    if ( !*((_BYTE *)v103 + 20) )
      free(*(void **)v103);
    v61 = 152;
    operator delete(v62, 0x98u);
  }
  v63 = (__int64 *)v99[1];
  v64 = (__int64 *)v99[0];
  if ( v99[1] != v99[0] )
  {
    do
    {
      while ( 1 )
      {
        v65 = *v64;
        if ( !*v64 )
          break;
        ++v64;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 32LL))(v65, v61);
        if ( v63 == v64 )
          goto LABEL_72;
      }
      ++v64;
    }
    while ( v63 != v64 );
LABEL_72:
    v64 = (__int64 *)v99[0];
  }
  if ( v64 )
    operator delete(v64);
  v66 = (__int64 *)v97[1];
  v67 = (__int64 *)v97[0];
  if ( v97[1] != v97[0] )
  {
    do
    {
      while ( 1 )
      {
        v68 = *v67;
        if ( !*v67 )
          break;
        ++v67;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v68 + 32LL))(v68, v61);
        if ( v66 == v67 )
          goto LABEL_78;
      }
      ++v67;
    }
    while ( v66 != v67 );
LABEL_78:
    v67 = (__int64 *)v97[0];
  }
  if ( v67 )
    operator delete(v67);
LABEL_81:
  if ( ptr != p_ptr + 2 )
    free(ptr);
}

