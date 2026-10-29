__int64 __fastcall sub_1B1DB70(_QWORD *a1, unsigned __int64 a2, unsigned int a3, unsigned int a4, __m128 a5, __m128 a6)
{
  _BYTE *v6; // r14
  __int16 v10; // ax
  unsigned int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // edx
  unsigned int v14; // r15d
  __int64 v15; // rsi
  unsigned int v17; // r15d
  __int64 v18; // rax
  int v19; // r9d
  unsigned int v20; // r10d
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int16 *v28; // r13
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // rbp
  int v39; // eax
  __int64 v40; // r15
  int v41; // r13d
  _QWORD *v42; // rsi
  __int64 v43; // rbp
  __int16 v44; // ax
  int v45; // eax
  __int64 v46; // rdx
  unsigned __int64 v47; // r15
  __int64 v48; // r8
  int v49; // eax
  __int64 v50; // r15
  int v51; // r13d
  __int64 v52; // r12
  __int16 v53; // ax
  unsigned __int8 v54; // al
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  __int64 *v58; // rsi
  __int64 v59; // rdx
  unsigned __int8 v60; // al
  unsigned int v61; // ebp
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rbx
  void *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int64 v77; // r15
  unsigned __int64 v78; // r13
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 *v83; // rsi
  unsigned __int8 v84; // al
  __int64 v85; // rax
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rbx
  void *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // rax
  __int64 v102; // [rsp+0h] [rbp-228h]
  unsigned int v103; // [rsp+0h] [rbp-228h]
  __int64 v104; // [rsp+0h] [rbp-228h]
  unsigned int v105; // [rsp+0h] [rbp-228h]
  unsigned int v106; // [rsp+0h] [rbp-228h]
  unsigned int v107; // [rsp+0h] [rbp-228h]
  unsigned int v108; // [rsp+0h] [rbp-228h]
  unsigned int v109; // [rsp+0h] [rbp-228h]
  unsigned int v110; // [rsp+8h] [rbp-220h]
  unsigned int v111; // [rsp+8h] [rbp-220h]
  int v112; // [rsp+8h] [rbp-220h]
  unsigned __int64 v113; // [rsp+10h] [rbp-218h]
  unsigned int v114; // [rsp+10h] [rbp-218h]
  int v115; // [rsp+10h] [rbp-218h]
  unsigned int v116; // [rsp+10h] [rbp-218h]
  unsigned __int64 v117; // [rsp+18h] [rbp-210h]
  int v118; // [rsp+18h] [rbp-210h]
  unsigned __int64 v119; // [rsp+18h] [rbp-210h]
  __int64 v120; // [rsp+20h] [rbp-208h] BYREF
  __int64 v121; // [rsp+28h] [rbp-200h] BYREF
  __int64 v122; // [rsp+30h] [rbp-1F8h] BYREF
  __int64 v123; // [rsp+38h] [rbp-1F0h] BYREF
  void *v124[2]; // [rsp+40h] [rbp-1E8h] BYREF
  _BYTE v125[128]; // [rsp+50h] [rbp-1D8h] BYREF
  void *v126[2]; // [rsp+D0h] [rbp-158h] BYREF
  _BYTE v127[128]; // [rsp+E0h] [rbp-148h] BYREF
  void *ptr[2]; // [rsp+160h] [rbp-C8h] BYREF
  _QWORD v129[2]; // [rsp+170h] [rbp-B8h] BYREF
  unsigned __int8 *v130[11]; // [rsp+180h] [rbp-A8h] BYREF
  char v131; // [rsp+1D8h] [rbp-50h]
  unsigned int v132; // [rsp+1E0h] [rbp-48h]
  char v133; // [rsp+1E4h] [rbp-44h]

  v10 = *(_WORD *)a2;
  v120 = 0;
  v121 = 0;
  if ( ((v10 + 509) & 0x1FFu) > 0x7E )
  {
    v11 = sub_EEB7E0(a2, a2, *(double *)a5.m128_u64);
    v12 = 0;
    v13 = v11;
    LODWORD(v120) = v11;
    HIDWORD(v120) = v11;
    v14 = v11;
    v121 = v120;
LABEL_3:
    v15 = *a1;
    LOBYTE(v6) = a4 != 0 && a3 != 0;
    if ( !(_BYTE)v6 )
    {
      LODWORD(v6) = sub_B8E180(*(_QWORD *)(v15 + 544));
      if ( (_BYTE)v6 )
      {
LABEL_5:
        a1[4] = 0;
        *((_OWORD *)a1 + 1) = 0;
        return (unsigned int)v6;
      }
LABEL_11:
      LODWORD(v6) = 1;
      return (unsigned int)v6;
    }
    v102 = v12;
    sub_168B9F0((__int64)ptr, (__int64 *)(v15 + 8), v13, a3, 0);
    sub_15884C0((__int64)ptr, &v120);
    sub_15F7200(ptr);
    v58 = (__int64 *)(*a1 + 8LL);
    sub_168B9F0((__int64)ptr, v58, v14, a4, 0);
    if ( v131 )
    {
      sub_AE9DF0(v130, v102, 2u);
    }
    else if ( v133 )
    {
      v67 = sub_168B9E0(ptr);
      v71 = v102;
      v72 = v67;
      v73 = (void *)v129[0];
      if ( v129[0] )
      {
        v73 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v129[0] + 32LL))(
                        v129[0],
                        v58,
                        *(_QWORD *)v129[0],
                        v69,
                        v70,
                        v102);
        v71 = v102;
      }
      v104 = v71;
      v126[0] = v73;
      v74 = sub_1587BC0(v72, (__int64 *)v126, v68, v69, v70, v71);
      sub_AE9DF0((unsigned __int8 **)(*v74 + 32LL * v132 + 8), v104, 2u);
    }
    sub_15884C0((__int64)ptr, &v121);
    sub_15F7200(ptr);
    return (unsigned int)v6;
  }
  v6 = (_BYTE *)sub_BFBAE0(a2);
  if ( !sub_F61140(*(_QWORD *)(*((_QWORD *)v6 + 1) & 0xFFFFFFFFFFFFFFF0LL), a2, v22, v23, v24, v25)
    && (*(_DWORD *)v6 & 0x8000) == 0 )
  {
    v37 = sub_EEB7E0((unsigned __int64)v6, a2, *(double *)a5.m128_u64);
    v12 = 3;
    v13 = v37;
    LODWORD(v120) = v37;
    HIDWORD(v120) = v37;
    v14 = v37;
    v121 = v120;
    goto LABEL_3;
  }
  v28 = (unsigned __int16 *)sub_BFBAE0((unsigned __int64)v6);
  v29 = *v28;
  LOWORD(v29) = v29 & 0x1FF;
  if ( (_WORD)v29 == 119 )
  {
    v30 = (v28[1] >> 3) & 0x3F;
    v31 = v30 - 13;
    v32 = v30 - 20;
    if ( ((v28[1] >> 3) & 0x3Fu) >= 0x1D )
      v32 = v31;
    *((_DWORD *)a1 + 11) = v32;
    *((_DWORD *)a1 + 12) = *((_DWORD *)v28 + 1);
    a1[3] = *((_QWORD *)v28 + 3);
    v33 = sub_BFB9F0(*((_QWORD *)v28 + 2));
    *((_BYTE *)a1 + 40) = 1;
    a1[2] = v33;
    goto LABEL_17;
  }
  v59 = (unsigned int)(v29 + 394);
  LOWORD(v59) = (v29 + 394) & 0x1FF;
  if ( (unsigned __int16)v59 > 1u )
  {
    if ( (_WORD)v29 == 4 )
    {
      v60 = *((_BYTE *)v28 + 2) >> 3;
      if ( v60 > 3u )
      {
        v105 = *((_DWORD *)v28 + 1);
        v75 = sub_EEC8C0((unsigned __int64)v28, a2, *(double *)a5.m128_u64);
        v12 = 2;
        v13 = v105;
        v120 = v75;
        v14 = *((_DWORD *)v28 + 1);
        LODWORD(v121) = v14;
        HIDWORD(v121) = v14;
        goto LABEL_3;
      }
      *((_BYTE *)a1 + 52) = v60 <= 1u;
      *((_DWORD *)a1 + 11) = (((*((_BYTE *)v28 + 2) >> 3) & 0x1D) != 0) + 5;
      v61 = *((_DWORD *)v28 + 1);
      *((_DWORD *)a1 + 12) = v61;
      v62 = sub_BFB9F0(*((_QWORD *)v28 + 2));
      v63 = *a1;
      a2 = v61;
      a1[2] = v62;
      v64 = sub_18C1B30(v63, v61, 1);
      *((_BYTE *)a1 + 40) = 1;
      a1[3] = v64 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v65 = *(_DWORD *)v6 >> 14;
      if ( (v65 & 2) == 0 )
      {
        v103 = sub_C00A40((unsigned __int64)v6, a2, v59, v26, v27);
        v66 = sub_EEC8C0((unsigned __int64)v6, a2, *(double *)a5.m128_u64);
        v13 = v103;
        v12 = 1;
        v120 = v66;
        v121 = v66;
        v14 = v103;
        goto LABEL_3;
      }
      if ( (v65 & 0x10) != 0 )
      {
        v106 = sub_C00A40((unsigned __int64)v6, a2, v59, v26, v27);
        v76 = sub_EEC8C0((unsigned __int64)v6, a2, *(double *)a5.m128_u64);
        v13 = v106;
        v12 = 8;
        v120 = v76;
        v121 = v76;
        v14 = v106;
        goto LABEL_3;
      }
    }
LABEL_17:
    LODWORD(v6) = sub_B8E180(*(_QWORD *)(*a1 + 544LL));
    if ( (_BYTE)v6 )
    {
      a1[4] = 0;
      LODWORD(v6) = 0;
      *((_OWORD *)a1 + 1) = 0;
      return (unsigned int)v6;
    }
    if ( a1[3] )
    {
      v38 = a1[2];
      if ( v38 )
      {
        v39 = sub_C00A40(a1[2], a2, v34, v35, v36);
        v40 = *(_QWORD *)(v38 + 8);
        v41 = v39;
        v42 = *(_QWORD **)(*a1 + 248LL);
        v43 = sub_EEE9A0(24, v42, 8u);
        *(_WORD *)v43 = *(_WORD *)v43 & 0xFE00 | 0x1A;
        if ( unk_2CD7484 )
          sub_EE9B50(26);
        v44 = *(_WORD *)(v43 + 1);
        *(_QWORD *)(v43 + 8) = v40;
        *(_DWORD *)(v43 + 4) = v41;
        v44 &= 0xF801u;
        *(_QWORD *)(v43 + 16) = 0;
        *(_WORD *)(v43 + 1) = v44;
        *(_BYTE *)(v43 + 2) = HIBYTE(v44) & 0xF7;
        v45 = sub_B62360(v43);
        *(_BYTE *)(v43 + 1) = ((_BYTE)v45 << 6) | *(_BYTE *)(v43 + 1) & 0x3F;
        v46 = *(_BYTE *)(v43 + 2) & 0xF8;
        *(_BYTE *)(v43 + 2) = *(_BYTE *)(v43 + 2) & 0xF8 | ((unsigned __int8)v45 >> 2) & 7;
        v47 = a1[3];
        v49 = sub_C00A40(v47, (__int64)v42, v46, (unsigned int)(v45 << 6), v48);
        v50 = *(_QWORD *)(v47 + 8);
        v51 = v49;
        v52 = sub_EEE9A0(24, *(_QWORD **)(*a1 + 248LL), 8u);
        *(_WORD *)v52 = *(_WORD *)v52 & 0xFE00 | 0x1A;
        if ( unk_2CD7484 )
          sub_EE9B50(26);
        v53 = *(_WORD *)(v52 + 1);
        *(_QWORD *)(v52 + 8) = v50;
        *(_QWORD *)(v52 + 16) = 0;
        v53 &= 0xF801u;
        *(_DWORD *)(v52 + 4) = v51;
        *(_WORD *)(v52 + 1) = v53;
        *(_BYTE *)(v52 + 2) = HIBYTE(v53) & 0xF7;
        v54 = sub_B62360(v52);
        *(_BYTE *)(v52 + 1) = (v54 << 6) | *(_BYTE *)(v52 + 1) & 0x3F;
        *(_BYTE *)(v52 + 2) = *(_BYTE *)(v52 + 2) & 0xF8 | (v54 >> 2) & 7;
        if ( !*((_BYTE *)a1 + 40) )
        {
          v55 = v43;
          v43 = v52;
          v52 = v55;
        }
        v56 = sub_1928110(*a1, *((unsigned int *)a1 + 12), *((_DWORD *)a1 + 11), v43, v52, 0, a5, a6);
        if ( v56 != 1 )
        {
          v57 = sub_1BFA490(*a1, v56 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(a1[2] + 8LL), 6, 0);
          if ( v57 != 1 )
          {
            a1[4] = v57 & 0xFFFFFFFFFFFFFFFELL;
            return (unsigned int)v6;
          }
        }
        goto LABEL_11;
      }
    }
    return (unsigned int)v6;
  }
  v122 = 0;
  v123 = 0;
  if ( ((v28[1] >> 3) & 0x3F) == 0x15 )
  {
    v77 = *((_QWORD *)v28 + 2);
    a1[2] = v77;
    v78 = *((_QWORD *)v28 + 3);
    v6 = (_BYTE *)sub_BFBAE0(v78);
    if ( ((*(_WORD *)v6 + 394) & 0x1FFu) <= 1 )
    {
      v84 = (*((_WORD *)v6 + 1) >> 3) & 0x3F;
      if ( ((v84 + 62) & 0x3Fu) <= 6 || (unsigned int)v84 - 16 <= 2 )
      {
        *((_DWORD *)a1 + 11) = v84;
        *((_DWORD *)a1 + 12) = *((_DWORD *)v6 + 1);
        v113 = *((_QWORD *)v6 + 2);
        v117 = *((_QWORD *)v6 + 3);
        v124[0] = v125;
        v126[0] = v127;
        ptr[0] = v129;
        v124[1] = (void *)0x2000000000LL;
        v126[1] = (void *)0x2000000000LL;
        ptr[1] = (void *)0x2000000000LL;
        v86 = sub_BFBAE0(v77);
        sub_F1A490(v86, (__int64)v124, *(_QWORD *)(*a1 + 248LL), 1, 0);
        v87 = sub_BFBAE0(v113);
        sub_F1A490(v87, (__int64)v126, *(_QWORD *)(*a1 + 248LL), 1, 0);
        v88 = sub_BFBAE0(v117);
        sub_F1A490(v88, (__int64)ptr, *(_QWORD *)(*a1 + 248LL), 1, 0);
        a2 = (unsigned __int64)v126;
        if ( (unsigned __int8)sub_2222ED0(v124, v126) )
        {
          *((_BYTE *)a1 + 40) = 1;
          v20 = 0;
          v17 = 0;
          v19 = 9;
          a1[3] = v117;
        }
        else
        {
          a2 = (unsigned __int64)ptr;
          if ( (unsigned __int8)sub_2222ED0(v124, ptr) )
          {
            *((_BYTE *)a1 + 40) = 0;
            v20 = 0;
            v17 = 0;
            v19 = 9;
            a1[3] = v113;
          }
          else
          {
            v17 = *((_DWORD *)v6 + 1);
            v97 = sub_EEC8C0((unsigned __int64)v6, (__int64)ptr, *(double *)a5.m128_u64);
            v98 = a1[2];
            v122 = v97;
            v119 = v98;
            v116 = sub_C00A40(v98, (__int64)ptr, v99, v98, v100);
            v101 = sub_EEC8C0(v119, (__int64)ptr, *(double *)a5.m128_u64);
            v19 = 7;
            v20 = v116;
            v123 = v101;
          }
        }
        if ( ptr[0] != v129 )
        {
          v118 = v19;
          v114 = v20;
          free(ptr[0]);
          v19 = v118;
          v20 = v114;
        }
        if ( v126[0] != v127 )
        {
          v115 = v19;
          v111 = v20;
          free(v126[0]);
          v19 = v115;
          v20 = v111;
        }
        v6 = v125;
        if ( v124[0] != v125 )
        {
          v112 = v19;
          v108 = v20;
          free(v124[0]);
          v19 = v112;
          v20 = v108;
        }
        if ( v19 == 9 )
        {
          if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544LL)) )
          {
            a5 = 0;
            a1[4] = 0;
            *((_OWORD *)a1 + 1) = 0;
          }
          goto LABEL_17;
        }
      }
      else
      {
        v17 = *((_DWORD *)v6 + 1);
        v85 = sub_EEC8C0((unsigned __int64)v6, a2, *(double *)a5.m128_u64);
        v19 = 6;
        v122 = v85;
        v20 = *((_DWORD *)v6 + 1);
        LODWORD(v123) = v20;
        HIDWORD(v123) = v20;
      }
    }
    else
    {
      v17 = sub_C00A40(v78, a2, v79, v80, v81);
      v82 = sub_EEC8C0(v78, a2, *(double *)a5.m128_u64);
      v20 = v17;
      v19 = 5;
      v122 = v82;
      v123 = v82;
    }
  }
  else
  {
    v17 = *((_DWORD *)v28 + 1);
    v18 = sub_EEC8C0((unsigned __int64)v28, a2, *(double *)a5.m128_u64);
    v19 = 4;
    v122 = v18;
    v20 = v17;
    LODWORD(v123) = v17;
    HIDWORD(v123) = v17;
  }
  v21 = *a1;
  LOBYTE(v6) = a4 != 0 && a3 != 0;
  if ( !(_BYTE)v6 )
  {
    LODWORD(v6) = sub_B8E180(*(_QWORD *)(v21 + 544));
    if ( (_BYTE)v6 )
      goto LABEL_5;
    goto LABEL_11;
  }
  v110 = v19;
  v107 = v20;
  sub_168B9F0((__int64)ptr, (__int64 *)(v21 + 8), v17, a3, 0);
  sub_15884C0((__int64)ptr, &v122);
  sub_15F7200(ptr);
  v83 = (__int64 *)(*a1 + 8LL);
  sub_168B9F0((__int64)ptr, v83, v107, a4, 0);
  if ( v131 )
  {
    sub_AE9DF0(v130, v110, 2u);
  }
  else if ( v133 )
  {
    v89 = sub_168B9E0(ptr);
    v93 = v110;
    v94 = v89;
    v95 = (void *)v129[0];
    if ( v129[0] )
    {
      v95 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v129[0] + 32LL))(
                      v129[0],
                      v83,
                      *(_QWORD *)v129[0],
                      v91,
                      v92,
                      v110);
      v93 = v110;
    }
    v109 = v93;
    v126[0] = v95;
    v96 = sub_1587BC0(v94, (__int64 *)v126, v90, v91, v92, v93);
    sub_AE9DF0((unsigned __int8 **)(*v96 + 32LL * v132 + 8), v109, 2u);
  }
  sub_15884C0((__int64)ptr, &v123);
  sub_15F7200(ptr);
  return (unsigned int)v6;
}
