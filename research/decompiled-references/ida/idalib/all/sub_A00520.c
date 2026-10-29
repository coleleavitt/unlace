void __fastcall sub_A00520(_BYTE *a1, __int64 a2, unsigned __int8 a3)
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
  void *v61; // rbx
  __int64 *v62; // rbp
  __int64 *v63; // rbx
  __int64 v64; // rdi
  __int64 *v65; // rbp
  __int64 *v66; // rbx
  __int64 v67; // rdi
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // r13
  __int64 v70; // rdi
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  _QWORD *v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rcx
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rdx
  __m128i v81; // [rsp+0h] [rbp-228h] BYREF
  __int64 v82; // [rsp+18h] [rbp-210h] BYREF
  __m128i v83; // [rsp+20h] [rbp-208h] BYREF
  void **v84; // [rsp+30h] [rbp-1F8h]
  __m128 *v85; // [rsp+38h] [rbp-1F0h]
  __m128 v86; // [rsp+40h] [rbp-1E8h]
  __m128 *v87; // [rsp+50h] [rbp-1D8h]
  __m128 *v88; // [rsp+58h] [rbp-1D0h]
  void **v89; // [rsp+60h] [rbp-1C8h]
  void **v90; // [rsp+68h] [rbp-1C0h] BYREF
  void **v91; // [rsp+70h] [rbp-1B8h]
  __m128 *v92; // [rsp+78h] [rbp-1B0h]
  void **p_ptr; // [rsp+80h] [rbp-1A8h]
  int v94; // [rsp+8Ch] [rbp-19Ch]
  __m128i v95; // [rsp+90h] [rbp-198h] BYREF
  void *v96[2]; // [rsp+A0h] [rbp-188h] BYREF
  __int64 v97; // [rsp+B0h] [rbp-178h]
  void *v98[2]; // [rsp+C0h] [rbp-168h] BYREF
  __int64 v99; // [rsp+D0h] [rbp-158h]
  __m128 v100; // [rsp+E0h] [rbp-148h] BYREF
  void **v101; // [rsp+F0h] [rbp-138h]
  void *v102; // [rsp+100h] [rbp-128h] BYREF
  __int64 v103; // [rsp+108h] [rbp-120h]
  __int64 v104; // [rsp+110h] [rbp-118h]
  unsigned int v105; // [rsp+118h] [rbp-110h]
  void *v106; // [rsp+120h] [rbp-108h] BYREF
  __int64 *v107; // [rsp+128h] [rbp-100h]
  __int64 v108; // [rsp+130h] [rbp-F8h]
  void *v109; // [rsp+150h] [rbp-D8h] BYREF
  __int64 *v110; // [rsp+158h] [rbp-D0h]
  __int64 v111; // [rsp+160h] [rbp-C8h]
  void *v112; // [rsp+180h] [rbp-A8h] BYREF
  __int64 v113; // [rsp+188h] [rbp-A0h]
  __m128 *v114; // [rsp+190h] [rbp-98h]
  unsigned int v115; // [rsp+198h] [rbp-90h]
  __m128 v116; // [rsp+1A0h] [rbp-88h]
  void *ptr; // [rsp+1B0h] [rbp-78h] BYREF
  __int64 v118; // [rsp+1B8h] [rbp-70h]
  char v119; // [rsp+1C0h] [rbp-68h] BYREF

  v3 = a3;
  v82 = a2;
  p_ptr = &ptr;
  ptr = &v119;
  v118 = 0x600000000LL;
  v6 = a1[28] & 0x7F;
  if ( (unsigned int)v6 - 34 > 5 )
  {
    v94 = a3;
    if ( v6 == 18 || (v89 = &v112, v6 == 8) )
    {
      v72 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 64LL))(a1);
      v73 = (unsigned int)v118;
      v74 = (unsigned int)v118 + 1LL;
      if ( v74 > HIDWORD(v118) )
      {
        v81.m128i_i64[0] = v72;
        sub_2237220(p_ptr, p_ptr + 2, v74, 8);
        v73 = (unsigned int)v118;
        v72 = v81.m128i_i64[0];
      }
      *((_QWORD *)ptr + v73) = v72;
      LODWORD(v118) = v118 + 1;
      v89 = &v112;
    }
    goto LABEL_34;
  }
  if ( (unsigned int)v6 - 35 <= 3 )
  {
    v7 = *(_QWORD *)(sub_B8C1B0(a1 + 72) + 16);
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
        v10 = *(_QWORD *)(sub_B8C1B0(a1 + 72) + 16);
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
  if ( (unsigned __int8)sub_B82220(a1) )
  {
LABEL_23:
    v94 = 0;
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
      v68 = v19 & 0xFFFFFFFFFFFFFFFELL;
LABEL_86:
      v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      v16 = 1;
      v69 = v20;
      if ( v68 && (v68 & 4) != 0 && v20 )
      {
        v70 = *(_QWORD *)v20;
        v71 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
        if ( *(_DWORD *)(v69 + 8) != v71 )
        {
          *(_DWORD *)(v69 + 8) = v71;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v70 + 152LL))(v70, v15);
        }
        v20 = *(_QWORD *)(v69 + 16);
        v16 = 1;
      }
      goto LABEL_20;
    }
    if ( (v19 & 2) != 0 )
    {
      if ( v16 )
        break;
      v75 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
      v16 = 1;
      if ( !v75 )
      {
LABEL_115:
        v20 = 0;
        goto LABEL_20;
      }
      v76 = v75[2295];
      if ( v76 )
      {
        v77 = v75[294];
        v75[304] += 24LL;
        v78 = (v77 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v75[295] >= v78 + 24 && v77 )
        {
          v75[294] = v78 + 24;
          v79 = (v77 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v79 = sub_986170((__int64)(v75 + 294), 24, 24, 3, v17, v18);
          v78 = v79 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v79 = v76;
        v80 = v78 | 4;
        *(_DWORD *)(v79 + 8) = 0;
        *(_QWORD *)(v79 + 16) = v15;
      }
      else
      {
        v80 = v15 & 0xFFFFFFFFFFFFFFFBLL;
      }
      v68 = v80 & 0xFFFFFFFFFFFFFFFELL;
      v19 = v68 | 1;
      *(_QWORD *)(v15 + 104) = v68 | 1;
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
    if ( (unsigned __int8)sub_B82220(v20) )
      goto LABEL_23;
  }
  v94 = a3;
LABEL_24:
  v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v21 == sub_6EF210 )
  {
    v89 = &v112;
    v22 = sub_B7F750(a1, &v112);
  }
  else
  {
    v22 = v21((__int64)a1);
    v89 = &v112;
  }
  v23 = (unsigned int)v118;
  v24 = (unsigned int)v118 + 1LL;
  if ( v24 > HIDWORD(v118) )
  {
    v81.m128i_i64[0] = v22;
    sub_2237220(p_ptr, p_ptr + 2, v24, 8);
    v23 = (unsigned int)v118;
    v22 = v81.m128i_i64[0];
  }
  *((_QWORD *)ptr + v23) = v22;
  v25 = a1[28];
  LODWORD(v118) = v118 + 1;
  if ( (v25 & 0x7F) == 0x26 )
  {
    v26 = sub_B98F20(a1) + 8LL * (unsigned __int16)(*((_DWORD *)a1 + 21) >> 13);
    v27 = sub_B98F20(a1);
    if ( v26 != v27 )
    {
      v28 = v27;
      v29 = v118;
      v30 = p_ptr + 2;
      do
      {
        v31 = *(_QWORD *)(*(_QWORD *)v28 + 8LL);
        v32 = v29;
        v33 = v29 + 1LL;
        if ( v33 > HIDWORD(v118) )
        {
          sub_2237220(p_ptr, v30, v33, 8);
          *((_QWORD *)ptr + (unsigned int)v118) = v31;
        }
        else
        {
          *((_QWORD *)ptr + v32) = v31;
        }
        v28 += 8;
        v29 = v118 + 1;
        LODWORD(v118) = v118 + 1;
      }
      while ( v26 != v28 );
    }
  }
LABEL_34:
  v97 = 0;
  *(_OWORD *)v96 = 0;
  *(_OWORD *)v98 = 0;
  v99 = 0;
  v34 = (_QWORD *)operator new(0x98u);
  v35 = (void **)ptr;
  v103 = 0;
  v34[1] = 16;
  *v34 = v34 + 3;
  v36 = (unsigned int)v118;
  *((_DWORD *)v34 + 4) = 0;
  *((_BYTE *)v34 + 20) = 1;
  v102 = v34;
  v104 = 0;
  v105 = 0;
  v84 = &v35[v36];
  if ( v35 == v84 )
  {
    v53 = 0;
    v52 = 0;
    v51 = 0;
    v50 = 0;
  }
  else
  {
    v85 = (__m128 *)&v95;
    v81.m128i_i64[0] = (__int64)v98;
    v90 = v96;
    v91 = &v102;
    v37 = _mm_loadh_ps((const double *)v81.m128i_i64);
    v92 = &v100;
    v83 = (__m128i)v37;
    do
    {
      while ( 1 )
      {
        v38 = (__int64 *)*v35;
        v39 = sub_B8C330(a1);
        v40 = _mm_load_si128(&v83);
        v81.m128i_i64[0] = v39;
        v112 = off_2C00B20;
        v41 = _mm_loadh_ps((const double *)&v82);
        v95 = v40;
        v114 = v85;
        LOWORD(v115) = 1;
        BYTE2(v115) = 1;
        v81 = (__m128i)v41;
        v116 = v41;
        LODWORD(v113) = 16777473;
        v42 = sub_AFA7A0(v38);
        BYTE1(v115) = 0;
        LODWORD(v106) = v42;
        LODWORD(v109) = 180;
        if ( (unsigned __int8)sub_AFA190(&v109, v42) )
        {
          if ( v38 )
          {
            v43 = (__m128 **)v114->m128_u64[0];
            v88 = v114;
            v44 = *v43;
            v86 = v116;
            v87 = v44;
            v45 = sub_AFA7A0(v38);
            v110 = v38;
            LODWORD(v109) = v45;
            if ( !((unsigned __int8 (__fastcall *)(__m128 *, void **, unsigned __int64, unsigned __int64))v87)(
                    v88,
                    &v109,
                    v86.m128_u64[0],
                    v86.m128_u64[1])
              || (BYTE1(v115) = 1, (_BYTE)v115) )
            {
              sub_BC97E0(v89, v38);
            }
          }
        }
        if ( v3 )
        {
          v46 = _mm_load_si128(&v81);
          BYTE2(v115) = 0;
          LODWORD(v113) = 16777473;
          v116 = (__m128)v46;
          v86.m128_u64[0] = (unsigned __int64)off_2B40988;
          v101 = v91;
          v112 = off_2C00B20;
          v100 = _mm_loadh_ps((const double *)&v90);
          v114 = v92;
          LOWORD(v115) = 1;
          v47 = sub_AFA7A0(v38);
          BYTE1(v115) = 0;
          LODWORD(v106) = v47;
          LODWORD(v109) = 180;
          if ( (unsigned __int8)sub_AFA190(&v109, v47) )
          {
            if ( v38 )
            {
              v48 = (unsigned __int64 *)v114->m128_u64[0];
              v87 = v114;
              v86.m128_u64[0] = v116.m128_u64[1];
              v49 = *v48;
              v81.m128i_i64[0] = v116.m128_u64[0];
              v86.m128_u64[1] = v49;
              LODWORD(v109) = sub_AFA7A0(v38);
              v110 = v38;
              if ( !((unsigned __int8 (__fastcall *)(__m128 *, void **, __int64, unsigned __int64))v86.m128_u64[1])(
                      v87,
                      &v109,
                      v81.m128i_i64[0],
                      v86.m128_u64[0]) )
                break;
              BYTE1(v115) = 1;
              if ( (_BYTE)v115 )
                break;
            }
          }
        }
        if ( v84 == ++v35 )
          goto LABEL_48;
      }
      ++v35;
      sub_BC97E0(v89, v38);
    }
    while ( v84 != v35 );
LABEL_48:
    v34 = v102;
    v50 = v103;
    v51 = v104;
    v52 = HIDWORD(v104);
    v53 = v105;
  }
  v112 = v34;
  v113 = v50;
  v109 = v98[0];
  v114 = (__m128 *)__PAIR64__(v52, v51);
  v110 = (__int64 *)v98[1];
  v115 = v53;
  v111 = v99;
  v102 = nullptr;
  v106 = v96[0];
  v103 = 0;
  v107 = (__int64 *)v96[1];
  v104 = 0;
  v105 = 0;
  *(_OWORD *)v98 = 0;
  v99 = 0;
  *(_OWORD *)v96 = 0;
  v108 = v97;
  v97 = 0;
  sub_9FCD80((__int64)a1, (__int64 *)&v106, (__int64 *)&v109, v89, v82, v94);
  v54 = v107;
  v55 = (__int64 *)v106;
  if ( v107 != v106 )
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
    v55 = (__int64 *)v106;
  }
  if ( v55 )
    operator delete(v55);
  v57 = v110;
  v58 = (__int64 *)v109;
  if ( v110 != v109 )
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
    v58 = (__int64 *)v109;
  }
  if ( v58 )
    operator delete(v58);
  operator delete(v113, 16LL * v115, 8);
  v60 = v112;
  if ( v112 )
  {
    if ( !*((_BYTE *)v112 + 20) )
      free(*(void **)v112);
    operator delete(v60, 0x98u);
  }
  operator delete(v103, 16LL * v105, 8);
  v61 = v102;
  if ( v102 )
  {
    if ( !*((_BYTE *)v102 + 20) )
      free(*(void **)v102);
    operator delete(v61, 0x98u);
  }
  v62 = (__int64 *)v98[1];
  v63 = (__int64 *)v98[0];
  if ( v98[1] != v98[0] )
  {
    do
    {
      while ( 1 )
      {
        v64 = *v63;
        if ( !*v63 )
          break;
        ++v63;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
        if ( v62 == v63 )
          goto LABEL_72;
      }
      ++v63;
    }
    while ( v62 != v63 );
LABEL_72:
    v63 = (__int64 *)v98[0];
  }
  if ( v63 )
    operator delete(v63);
  v65 = (__int64 *)v96[1];
  v66 = (__int64 *)v96[0];
  if ( v96[1] != v96[0] )
  {
    do
    {
      while ( 1 )
      {
        v67 = *v66;
        if ( !*v66 )
          break;
        ++v66;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
        if ( v65 == v66 )
          goto LABEL_78;
      }
      ++v66;
    }
    while ( v65 != v66 );
LABEL_78:
    v66 = (__int64 *)v96[0];
  }
  if ( v66 )
    operator delete(v66);
LABEL_81:
  if ( ptr != p_ptr + 2 )
    free(ptr);
}
