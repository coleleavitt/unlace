void __fastcall sub_185D2A0(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r13
  _QWORD *v4; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // sf
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int8 v16; // al
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  void *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  void *v33; // r15
  char v34; // r13
  unsigned __int64 v35; // r12
  __int64 v36; // r9
  unsigned __int64 v37; // r14
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  __m128i *v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 *v52; // r13
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 *v59; // rsi
  unsigned __int64 v60; // rax
  __m128i *v61; // rdi
  unsigned int v62; // r15d
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rbp
  __int64 v66; // rsi
  __int64 v67; // rax
  void (*v68)(); // rdx
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __m128i v72; // xmm2
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __m128i si128; // xmm0
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // [rsp-18h] [rbp-348h]
  __int64 v85; // [rsp+0h] [rbp-330h] BYREF
  __int64 v86; // [rsp+8h] [rbp-328h]
  unsigned __int64 v87; // [rsp+10h] [rbp-320h]
  __m128 v88; // [rsp+18h] [rbp-318h] BYREF
  __int64 v89; // [rsp+28h] [rbp-308h] BYREF
  unsigned __int64 v90; // [rsp+30h] [rbp-300h]
  void **v91; // [rsp+38h] [rbp-2F8h]
  _BYTE *v92; // [rsp+40h] [rbp-2F0h]
  __int64 v93; // [rsp+48h] [rbp-2E8h]
  unsigned __int64 v94; // [rsp+50h] [rbp-2E0h]
  _QWORD *v95; // [rsp+58h] [rbp-2D8h]
  __int128 *v96; // [rsp+60h] [rbp-2D0h]
  bool v97; // [rsp+6Fh] [rbp-2C1h]
  unsigned __int64 v98; // [rsp+70h] [rbp-2C0h]
  int v99; // [rsp+84h] [rbp-2ACh] BYREF
  __int128 v100; // [rsp+88h] [rbp-2A8h] BYREF
  _QWORD v101[4]; // [rsp+98h] [rbp-298h] BYREF
  __m128i v102; // [rsp+B8h] [rbp-278h] BYREF
  __int64 v103; // [rsp+C8h] [rbp-268h]
  __int128 v104; // [rsp+D8h] [rbp-258h] BYREF
  __int128 v105; // [rsp+E8h] [rbp-248h]
  _BYTE v106[64]; // [rsp+F8h] [rbp-238h] BYREF
  void *v107; // [rsp+138h] [rbp-1F8h] BYREF
  __int64 v108; // [rsp+140h] [rbp-1F0h]
  char v109; // [rsp+148h] [rbp-1E8h] BYREF
  __m128i v110; // [rsp+188h] [rbp-1A8h] BYREF
  unsigned __int64 v111; // [rsp+198h] [rbp-198h]
  __int64 v112; // [rsp+1A0h] [rbp-190h]
  void *v113[2]; // [rsp+1A8h] [rbp-188h]
  __int64 v114; // [rsp+1B8h] [rbp-178h]
  __int64 v115; // [rsp+1C0h] [rbp-170h]
  __int64 v116; // [rsp+1C8h] [rbp-168h]
  char v117; // [rsp+1D0h] [rbp-160h]
  void **p_ptr; // [rsp+1D8h] [rbp-158h]
  __int64 (__fastcall **v119)(); // [rsp+1E8h] [rbp-148h] BYREF
  __m128i *v120; // [rsp+1F0h] [rbp-140h]
  unsigned __int64 v121; // [rsp+1F8h] [rbp-138h]
  __int64 v122; // [rsp+200h] [rbp-130h]
  void *v123[2]; // [rsp+208h] [rbp-128h]
  __int64 v124; // [rsp+218h] [rbp-118h]
  __int64 v125; // [rsp+220h] [rbp-110h]
  __int64 v126; // [rsp+228h] [rbp-108h]
  bool v127; // [rsp+230h] [rbp-100h]
  void **v128; // [rsp+238h] [rbp-F8h]
  void *ptr; // [rsp+248h] [rbp-E8h] BYREF
  __int64 v130; // [rsp+250h] [rbp-E0h] BYREF
  _QWORD v131[27]; // [rsp+258h] [rbp-D8h] BYREF

  if ( (*(_BYTE *)(a3 + 84) & 0x40) != 0 || *(char *)(a3 + 28) < 0 )
    return;
  v3 = a3 + 72;
  v4 = (_QWORD *)a3;
  v7 = sub_B72690(a3 + 72);
  v94 = v7;
  if ( !v7 )
    BUG();
  v10 = *(char *)(v7 - 36) < 0;
  v86 = v7 - 64;
  if ( v10 )
  {
    sub_B88650((__int64)v4, 1);
    return;
  }
  v92 = v106;
  sub_183ABA0((__int64)v106, (__int64)a1, v3, v7 - 64, v8, v9);
  v12 = (_QWORD *)(v4[6] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v12 + 16LL) != 26 )
    sub_F63050(*v12, a1, *v12, v11);
  sub_18B0530(a1, a2);
  v13 = (__int64)(v92 + 48);
  sub_1837F10(v92, v92 + 48, a2);
  if ( (*(_BYTE *)(a1[29] + 1) & 0x10) != 0 && (*((_BYTE *)v4 + 29) & 2) != 0 )
  {
    v13 = (__int64)v4;
    sub_185C730((__int64)a1, (__int64)v4);
  }
  v91 = &v107;
  v107 = &v109;
  v108 = 0x800000000LL;
  v16 = sub_B771C0((__int64)v4, v13, v14, v15);
  v18 = 0;
  v19 = *(_QWORD *)(v4[15] + 8LL * v16);
  v20 = *(_QWORD *)(v19 + 48);
  v21 = *(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v21 & 8) != 0 )
    v18 = *(__int64 *)((char *)&qword_18 + (v21 & 0xFFFFFFFFFFFFFFF0LL));
  v93 = *(_QWORD *)(v19 + 48);
  v89 = v18 | ((unsigned __int8)v20 | (unsigned __int8)v21) & 7;
  v22 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 43 )
  {
    v81 = sub_F68450(v22, v13, v20, v18, v17);
    v82 = 0;
    v93 = v81;
    v83 = *(_QWORD *)&byte_8[v81 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v83 & 8) != 0 )
      v82 = *(__int64 *)((char *)&qword_18 + (v83 & 0xFFFFFFFFFFFFFFF0LL));
    v89 = v82 | ((unsigned __int8)v93 | (unsigned __int8)v83) & 7;
  }
  if ( (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4) >> 32 )
    v87 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4) >> 32;
  else
    LODWORD(v87) = *((_DWORD *)v4 + 6);
  v101[0] = off_2BC6B28;
  v101[1] = v19;
  v101[2] = v93;
  v100 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  if ( (unsigned __int8)sub_B981D0(v4, v13) )
  {
    v26 = *(_QWORD *)v4[15];
    v85 = *(_QWORD *)(v26 + 48);
    v27 = *(_QWORD *)(v85 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
    {
      v85 = sub_F68450(v27, v13, v26, v23, v24);
      v26 = *(_QWORD *)v4[15];
    }
    *(_QWORD *)&v104 = off_2BC6B28;
    *((_QWORD *)&v104 + 1) = v26;
    *(_QWORD *)&v105 = v85;
    BYTE8(v105) = 1;
    v97 = 0;
    v96 = &v104;
  }
  else
  {
    v85 = (__int64)&v100;
    v88 = _mm_loadh_ps((const double *)&v85);
    v78 = sub_19A27D0(a1);
    si128 = _mm_load_si128((const __m128i *)&v88);
    BYTE8(v100) = 1;
    v85 = v78;
    *(_QWORD *)&v100 = off_2BC6B50;
    v80 = a1[29];
    v102 = si128;
    LOBYTE(v80) = *(_BYTE *)(v80 + 89);
    LOBYTE(v103) = 1;
    v97 = (v80 & 1) == 0;
    if ( BYTE8(v105) )
      v96 = &v104;
    else
      v96 = &v100;
  }
  v28 = sub_1845530(v86, v13, v26, v23, v24, v25);
  v33 = v29;
  if ( (void *)v28 == v29 )
  {
    v34 = 0;
    v48 = sub_B7E900(v86, v13, (__int64)v29, v30, v31, v32);
    if ( v48 )
      goto LABEL_34;
LABEL_48:
    v61 = (__m128i *)&v104;
    if ( !BYTE8(v105) )
    {
      v61 = (__m128i *)&v100;
      if ( (*(_BYTE *)(a1[29] + 89) & 1) == 0 )
        v61 = &v102;
    }
    v62 = v87;
    v63 = (*(__int64 (__fastcall **)(__m128i *, __int64 *, _QWORD))(v61->m128i_i64[0] + 16))(v61, a1, (unsigned int)v87);
    v64 = sub_1C46CA0(a1, v62, v63, 0);
    if ( v64 != 1 )
    {
      sub_183F100((__int64)v91, v64 & 0xFFFFFFFFFFFFFFFELL);
      sub_1C36400(a1, 0);
      v65 = sub_1C36480(a1, v62, v62, v107, (unsigned int)v108, 0);
      sub_1C36470(a1);
      sub_B74930((__int64)v4, v65 & 0xFFFFFFFFFFFFFFFELL);
      v66 = a1[31];
      sub_B8C4D0((__int64)v4, v66);
      v67 = sub_15F1120((__int64)a1);
      if ( v67 )
      {
        v68 = *(void (**)())(*(_QWORD *)v67 + 88LL);
        if ( v68 != nullsub_438 )
        {
          v66 = (__int64)v4;
          ((void (__fastcall *)(__int64, _QWORD *))v68)(v67, v4);
        }
      }
      goto LABEL_55;
    }
LABEL_75:
    v66 = 1;
    sub_B88650((__int64)v4, 1);
    goto LABEL_55;
  }
  v95 = v4;
  v34 = 0;
  v88.m128_u64[0] = (unsigned __int64)v101;
  v35 = v28;
  v90 = v85 & 0xFFFFFFFFFFFFFFF0LL;
  do
  {
    while ( 1 )
    {
      ptr = (void *)sub_1839D10(*(__int64 **)(v35 + 16), v13, (__int64)v29, v30, v31);
      v37 = sub_6D5440(&ptr);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 48 )
      {
        v34 = 1;
        goto LABEL_22;
      }
      v38 = a1[31];
      ptr = v131;
      v131[0] = v35;
      v130 = 0x400000001LL;
      v39 = sub_A70F20(v38, v37, v89);
      LODWORD(v112) = 1;
      v40 = a1[31];
      v110.m128i_i64[0] = (__int64)off_2BC6B78;
      v111 = v39;
      v110.m128i_i64[1] = v88.m128_u64[0];
      v41 = 0;
      v113[0] = &ptr;
      v42 = *(_QWORD *)(v90 + 8);
      if ( (v42 & 8) != 0 )
        v41 = *(__int64 *)((char *)&qword_18 + (v42 & 0xFFFFFFFFFFFFFFF0LL));
      v43 = sub_A70F20(v40, v37, v41 | ((unsigned __int8)v85 | (unsigned __int8)v42) & 7);
      v44 = (__m128i *)&v104;
      if ( !BYTE8(v105) )
        v44 = &v102;
      v120 = v44;
      v119 = off_2BC6B78;
      v121 = v43;
      LODWORD(v122) = 1;
      v123[0] = &ptr;
      v45 = sub_1844960((__int64)a1, v87, v37, &v119, (__int64)&v110, 1u, 1u);
      v36 = v84;
      if ( v45 == 1 )
      {
        v66 = 1;
        sub_B88650((__int64)v95, 1);
        if ( ptr != v131 )
          free(ptr);
        goto LABEL_55;
      }
      v30 = (unsigned int)v108;
      v13 = HIDWORD(v108);
      v46 = v45 & 0xFFFFFFFFFFFFFFFELL;
      v47 = (unsigned int)v108 + 1LL;
      if ( v47 > HIDWORD(v108) )
      {
        v98 = v46;
        v13 = (__int64)(v91 + 2);
        sub_2237220(v91, v91 + 2, v47, 8);
        v30 = (unsigned int)v108;
        v46 = v98;
      }
      v29 = v107;
      *((_QWORD *)v107 + v30) = v46;
      LODWORD(v108) = v108 + 1;
      if ( ptr != v131 )
        break;
LABEL_22:
      v35 += 24LL;
      if ( (void *)v35 == v33 )
        goto LABEL_33;
    }
    free(ptr);
    v35 += 24LL;
  }
  while ( (void *)v35 != v33 );
LABEL_33:
  v4 = v95;
  v48 = sub_B7E900(v86, v13, (__int64)v29, v30, v31, v36);
  if ( !v48 )
    goto LABEL_47;
LABEL_34:
  v49 = v94;
  v89 = (__int64)v101;
  v88 = _mm_loadh_ps((const double *)&v89);
LABEL_35:
  if ( (*(_BYTE *)(v48 + 68) & 1) != 0 && !*(_QWORD *)(v48 + 40) )
    goto LABEL_46;
  v50 = *(_QWORD *)(v48 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v48 + 16) & 4) != 0 )
    v50 = *(_QWORD *)v50;
  if ( (*(_BYTE *)(v50 + 8) & 0x7Fu) - 58 > 3 )
    BUG();
  if ( *(_BYTE *)(v50 + 9) >> 5 == 2 )
  {
LABEL_46:
    while ( 1 )
    {
      v60 = *(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v48 = v60;
      if ( !v60 )
        break;
      if ( (*(_BYTE *)(v60 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_35;
    }
LABEL_47:
    if ( v34 )
      goto LABEL_75;
    goto LABEL_48;
  }
  if ( *(char *)(v48 + 28) < 0 )
  {
    v34 = 1;
    goto LABEL_46;
  }
  v51 = *(_QWORD *)(v48 + 48);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 <= 1 )
  {
    v52 = a1 + 1;
    sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v49 - 40), 0x14F4u, 0);
    v110.m128i_i64[0] = sub_A7AC20(a1[31], v86, v53, v54, v55, v56);
    v57 = sub_162B6D0((__int64)&ptr, v110.m128i_i64);
    v99 = 0;
LABEL_44:
    v58 = sub_1587D10(v57, &v99);
    v119 = *(__int64 (__fastcall ***)())(v48 + 40);
    sub_15894B0(v58, (__int64 *)&v119);
    sub_15F7200(&ptr);
    v59 = v52;
    v34 = 1;
    sub_168B9F0((__int64)&ptr, v59, *(_DWORD *)(v48 + 24), 0x67u, 0);
    sub_15F7200(&ptr);
    goto LABEL_46;
  }
  v69 = sub_A71450(a1[31], v51);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48
    && ((v69 & 1) != 0 || (byte_8[v69 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0) )
  {
    v52 = a1 + 1;
    sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v49 - 40), 0x14F4u, 0);
    v110.m128i_i64[0] = sub_A7AC20(a1[31], v86, v74, v75, v76, v77);
    v57 = sub_162B6D0((__int64)&ptr, v110.m128i_i64);
    v99 = 1;
    goto LABEL_44;
  }
  if ( sub_B781F0(v48) )
    goto LABEL_46;
  ptr = *(void **)(v48 + 48);
  v89 = sub_C1BEF0((__int64)&ptr, v51, v70, v71);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v89 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
    goto LABEL_46;
  sub_1838550((__int64)&ptr, (__int64)a1, *(_QWORD *)(v48 + 40), v87, 3);
  v119 = (__int64 (__fastcall **)())(v48 | (*(_BYTE *)(v48 + 29) >> 5) & 3);
  sub_1743080((__int64)&v130, (__int64)v119);
  LODWORD(ptr) = 2;
  sub_1A43500(&ptr);
  v72 = _mm_load_si128((const __m128i *)&v88);
  v112 = 0;
  v111 = v93;
  v119 = (__int64 (__fastcall **)())&off_2BC6BC8;
  v110 = v72;
  v120 = (__m128i *)v96;
  *(_OWORD *)v113 = 0;
  v121 = v85;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  p_ptr = &ptr;
  v122 = 0;
  *(_OWORD *)v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v127 = v97;
  v128 = &ptr;
  v73 = sub_1844960((__int64)a1, v87, v89, &v119, (__int64)&v110, 0, 1u);
  if ( v73 != 1 )
  {
    sub_183F100((__int64)v91, v73 & 0xFFFFFFFFFFFFFFFELL);
    v119 = (__int64 (__fastcall **)())&off_2BC6BC8;
    if ( HIDWORD(v124) )
      free(v123[1]);
    v110.m128i_i64[0] = (__int64)&off_2BC6BC8;
    if ( HIDWORD(v114) )
      free(v113[1]);
    sub_169D230((__int64)&ptr);
    goto LABEL_46;
  }
  sub_B88650((__int64)v4, 1);
  v66 = HIDWORD(v124);
  v119 = (__int64 (__fastcall **)())&off_2BC6BC8;
  if ( HIDWORD(v124) )
    free(v123[1]);
  v110.m128i_i64[0] = (__int64)&off_2BC6BC8;
  if ( HIDWORD(v114) )
    free(v113[1]);
  sub_169D230((__int64)&ptr);
LABEL_55:
  if ( v107 != v91 + 2 )
    free(v107);
  sub_185CCD0(v92, v66);
}
