__int64 __fastcall sub_19DD340(
        __int64 *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 *a5,
        _QWORD *a6,
        __m128 a7,
        __m128 a8)
{
  _QWORD *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  _DWORD *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rdi
  _WORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int16 v25; // ax
  unsigned __int8 v26; // al
  char v27; // dl
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r13
  __int64 v40; // rax
  _QWORD *v41; // rax
  size_t v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  size_t v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  const char *v50; // rcx
  __int64 v51; // r12
  size_t v52; // rax
  _WORD *v53; // rdx
  _WORD *v54; // rsi
  __int16 v55; // ax
  _WORD *i; // rax
  size_t v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  size_t v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  const char *v65; // rcx
  __int64 v66; // r12
  size_t v67; // rax
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rax
  _QWORD *v82; // rax
  bool v84; // [rsp+8h] [rbp-180h]
  char v85; // [rsp+10h] [rbp-178h]
  char v86; // [rsp+18h] [rbp-170h]
  __int64 v87; // [rsp+18h] [rbp-170h]
  char *v88; // [rsp+18h] [rbp-170h]
  __int64 v89; // [rsp+18h] [rbp-170h]
  __int64 v90; // [rsp+20h] [rbp-168h]
  __int64 v91; // [rsp+20h] [rbp-168h]
  char *v92; // [rsp+20h] [rbp-168h]
  __int64 v93; // [rsp+20h] [rbp-168h]
  __int64 v94; // [rsp+20h] [rbp-168h]
  __int64 v95; // [rsp+20h] [rbp-168h]
  __int64 v96; // [rsp+20h] [rbp-168h]
  __int64 v97; // [rsp+28h] [rbp-160h]
  unsigned __int8 v98; // [rsp+37h] [rbp-151h] BYREF
  __int64 v99; // [rsp+38h] [rbp-150h] BYREF
  __int64 v100; // [rsp+40h] [rbp-148h] BYREF
  __int64 v101; // [rsp+4Ch] [rbp-13Ch] BYREF
  char v102; // [rsp+54h] [rbp-134h]
  __int64 v103; // [rsp+58h] [rbp-130h] BYREF
  char v104; // [rsp+60h] [rbp-128h]
  __int64 v105; // [rsp+64h] [rbp-124h] BYREF
  char v106; // [rsp+6Ch] [rbp-11Ch]
  unsigned __int64 v107; // [rsp+70h] [rbp-118h] BYREF
  char v108; // [rsp+78h] [rbp-110h]
  __int64 v109[3]; // [rsp+80h] [rbp-108h] BYREF
  void *v110; // [rsp+98h] [rbp-F0h]
  _BYTE v111[24]; // [rsp+A8h] [rbp-E0h] BYREF
  _BYTE v112[200]; // [rsp+C0h] [rbp-C8h] BYREF

  v13 = (_QWORD *)sub_168B6C0((__int64)a1);
  result = sub_191BD20(*a1, a6, a7, a8, v14, v15, v16, v17);
  if ( result == 1 )
    return result;
  v19 = (_DWORD *)(result & 0xFFFFFFFFFFFFFFFELL);
  v20 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFELL) + 8);
  v99 = *a5;
  v100 = v20;
  v21 = *(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v21 + 17) & 4) != 0 || (*v19 & 0x10000) != 0 )
  {
    v86 = 0;
    v84 = 0;
    v85 = a3 & 3;
LABEL_5:
    v22 = (_WORD *)sub_EEE9A0(48, v13, 8u);
    v23 = *a5;
    v24 = (__int64)v22;
    *v22 = *v22 & 0xFE00 | 0x50;
    if ( unk_2CD7484 )
    {
      v90 = v23;
      sub_EE9B50(80);
      v23 = v90;
    }
    *(_WORD *)(v24 + 1) &= 0xF801u;
    *(_QWORD *)(v24 + 8) = v23;
    *(_QWORD *)(v24 + 16) = v19;
    v25 = *(_WORD *)(v24 + 2);
    *(_QWORD *)(v24 + 24) = a5;
    *(_WORD *)(v24 + 2) = (8 * (v86 & 0x7F)) | v25 & 0xFC07;
    *(_QWORD *)v24 &= 0xF3FFFFFFuLL;
    v26 = sub_B62B80(v24);
    v27 = *(_BYTE *)(v24 + 1);
    *(_DWORD *)(v24 + 36) = a4;
    *(_BYTE *)(v24 + 1) = (v26 << 6) | v27 & 0x3F;
    *(_BYTE *)(v24 + 2) = *(_BYTE *)(v24 + 2) & 0xF8 | (v26 >> 2) & 7;
    *(_DWORD *)(v24 + 32) = a2;
    *(_BYTE *)(v24 + 40) = v85 | *(_BYTE *)(v24 + 40) & 0xFC;
    if ( v84 )
    {
      *(_WORD *)(*a1 + 4512) = 257;
      return sub_C0A3E0(v13, v99, 55, v24, 0, 0, 0);
    }
    return v24;
  }
  if ( (unsigned __int8)sub_F5EA40(v21) )
  {
    v84 = sub_F673B0(*(_QWORD *)(v100 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v84 )
    {
      v85 = 1;
      v86 = 2
          * (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 11)
          + 40;
      if ( a3 != 1 )
      {
        if ( a3 == 2 )
        {
          v42 = j__strlen("CFBridgingRelease");
          v98 = sub_19D2630(a1, "CFBridgingRelease", v42);
          sub_168B9F0((__int64)v112, a1, a4, 0xBCAu, 0);
          LODWORD(v103) = 2;
          v43 = sub_1587D10((__int64)v112, (int *)&v103);
          v44 = sub_1605D30(v43, &v100);
          LODWORD(v105) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                               & 0xFFFFFFFFFFFFFFF0LL)
                                   + 16LL) == 11;
          v45 = sub_1587D10(v44, (int *)&v105);
          v91 = sub_1605D30(v45, &v99);
          v109[0] = sub_EEC8C0((unsigned __int64)v19, (__int64)&v99, *(double *)a7.m128_u64);
          v46 = sub_1587DB0(v91, v109);
          if ( *(_BYTE *)(v46 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v46 + 32), 2, 2u);
          }
          else if ( *(_BYTE *)(v46 + 132) )
          {
            v93 = v46;
            v68 = sub_168B9E0((_QWORD *)v46);
            v71 = v93;
            v72 = v68;
            v73 = *(_QWORD *)(v93 + 16);
            if ( v73 )
            {
              v97 = v72;
              v73 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 32LL))(v73);
              v72 = v97;
              v71 = v93;
            }
            v94 = v71;
            v107 = v73;
            v74 = sub_1587BC0(v72, (__int64 *)&v107, v71, v72, v69, v70);
            sub_AE9DF0((unsigned __int8 **)(*v74 + 32LL * *(unsigned int *)(v94 + 128) + 8), 2, 2u);
          }
          sub_15F7200(v112);
          sub_168B9F0((__int64)v112, a1, a4, 0x168Eu, 0);
          v47 = j__strlen("__bridge");
          LODWORD(v101) = a4;
          HIDWORD(v101) = a4;
          v102 = 1;
          sub_19CF590((__int64)v109, v101, 1, "__bridge", v47);
          sub_1589170((__int64)v112, v109);
          if ( v110 != v111 )
            operator delete(v110);
          sub_15F7200(v112);
          sub_168B9F0((__int64)v112, a1, a4, 0x1690u, 0);
          v48 = sub_1605D30((__int64)v112, &v100);
          v49 = sub_15890D0(v48, &v98);
          v50 = "CFBridgingRelease ";
          v51 = v49;
          if ( !v98 )
            v50 = "__bridge_transfer ";
          v92 = (char *)v50;
          v52 = j__strlen(v50);
          LODWORD(v103) = a4;
          HIDWORD(v103) = a4;
          v104 = 1;
          sub_19CF590((__int64)v109, v103, 1, v92, v52);
          sub_1589170(v51, v109);
          if ( v110 != v111 )
            operator delete(v110);
          sub_15F7200(v112);
          v85 = 0;
          v84 = 0;
        }
        else
        {
          v84 = 0;
          v85 = a3 & 3;
        }
      }
      goto LABEL_5;
    }
  }
  if ( sub_F673B0(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL))
    && (unsigned __int8)sub_F5EA40(*(_QWORD *)(v100 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    if ( a3 == 1 )
    {
      v57 = j__strlen("CFBridgingRetain");
      LOBYTE(v101) = sub_19D2630(a1, "CFBridgingRetain", v57);
      sub_168B9F0((__int64)v112, a1, a4, 0xBCAu, 0);
      LODWORD(v103) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v100 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                           & 0xFFFFFFFFFFFFFFF0LL)
                               + 16LL) == 11;
      v58 = sub_1587D10((__int64)v112, (int *)&v103);
      v59 = sub_1605D30(v58, &v100);
      LODWORD(v105) = 2;
      v60 = sub_1587D10(v59, (int *)&v105);
      v87 = sub_1605D30(v60, &v99);
      v109[0] = sub_EEC8C0((unsigned __int64)v19, (__int64)&v99, *(double *)a7.m128_u64);
      v61 = sub_1587DB0(v87, v109);
      if ( *(_BYTE *)(v61 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v61 + 32), 1, 2u);
      }
      else if ( *(_BYTE *)(v61 + 132) )
      {
        v95 = v61;
        v76 = sub_168B9E0((_QWORD *)v61);
        v80 = v95;
        v89 = v76;
        v81 = *(_QWORD *)(v95 + 16);
        if ( v81 )
        {
          v81 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v81 + 32LL))(*(_QWORD *)(v95 + 16));
          v80 = v95;
        }
        v96 = v80;
        v107 = v81;
        v82 = sub_1587BC0(v89, (__int64 *)&v107, v80, v77, v78, v79);
        sub_AE9DF0((unsigned __int8 **)(*v82 + 32LL * *(unsigned int *)(v96 + 128) + 8), 1, 2u);
      }
      sub_15F7200(v112);
      sub_168B9F0((__int64)v112, a1, a4, 0x168Eu, 0);
      v62 = j__strlen("__bridge ");
      LODWORD(v105) = a4;
      HIDWORD(v105) = a4;
      v106 = 1;
      sub_19CF590((__int64)v109, v105, 1, "__bridge ", v62);
      sub_1589170((__int64)v112, v109);
      if ( v110 != v111 )
        operator delete(v110);
      sub_15F7200(v112);
      sub_168B9F0((__int64)v112, a1, a4, 0x168Fu, 0);
      v63 = sub_1605D30((__int64)v112, &v99);
      v64 = sub_15890D0(v63, (unsigned __int8 *)&v101);
      v65 = "CFBridgingRetain ";
      v66 = v64;
      if ( !(_BYTE)v101 )
        v65 = "__bridge_retained";
      v88 = (char *)v65;
      v67 = j__strlen(v65);
      LODWORD(v107) = a4;
      HIDWORD(v107) = a4;
      v108 = 1;
      sub_19CF590((__int64)v109, v107, 1, v88, v67);
      sub_1589170(v66, v109);
      if ( v110 != v111 )
        operator delete(v110);
      sub_15F7200(v112);
      v86 = 1;
      v85 = 0;
      v84 = 0;
    }
    else if ( a3 )
    {
      if ( a3 == 2 )
      {
        v19 = (_DWORD *)sub_C0A3E0(v13, v100, 54, (__int64)v19, 0, 0, 0);
        v86 = 1;
        v85 = 2;
        v84 = 0;
      }
      else
      {
        v86 = 1;
        v84 = 0;
        v85 = a3 & 3;
      }
    }
    else
    {
      v53 = v19;
      v54 = nullptr;
      v55 = *(_WORD *)v19 & 0x1FF;
      if ( v55 != 20 )
        goto LABEL_41;
LABEL_39:
      for ( i = *((_WORD **)v53 + 3); ; i = *((_WORD **)v53 + 2) )
      {
        v54 = v53;
        v53 = i;
        v55 = *i & 0x1FF;
        if ( v55 == 20 )
          goto LABEL_39;
LABEL_41:
        if ( ((v55 + 433) & 0x1FFu) > 9 )
          goto LABEL_42;
        if ( v55 == 79 && ((v53[1] >> 3) & 0x7F) == 0x38 )
          break;
      }
      v75 = *((_QWORD *)v53 + 2);
      if ( !v54 )
      {
        v19 = *((_DWORD **)v53 + 2);
LABEL_42:
        v86 = 1;
        v85 = 0;
        v84 = 0;
        goto LABEL_5;
      }
      if ( (*v54 & 0x1FF) == 0x14 )
        *((_QWORD *)v54 + 3) = v75;
      else
        *((_QWORD *)v54 + 2) = v75;
      v86 = 1;
      v85 = 0;
      v84 = 0;
    }
    goto LABEL_5;
  }
  sub_168B9F0((__int64)v112, a1, a2, 0xBC9u, 0);
  v28 = sub_1605D30((__int64)v112, &v100);
  v29 = (__int64)&v99;
  v30 = sub_1605D30(v28, &v99);
  v31 = v30;
  if ( *(_BYTE *)(v30 + 120) )
  {
    v29 = a3;
    sub_AE9DF0((unsigned __int8 **)(v30 + 32), a3, 2u);
  }
  else if ( *(_BYTE *)(v30 + 132) )
  {
    v39 = sub_168B9E0((_QWORD *)v30);
    v40 = *(_QWORD *)(v31 + 16);
    if ( v40 )
      v40 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v40 + 32LL))(*(_QWORD *)(v31 + 16));
    v109[0] = v40;
    v41 = sub_1587BC0(v39, v109, v35, v36, v37, v38);
    v29 = a3;
    sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * *(unsigned int *)(v31 + 128) + 8), a3, 2u);
  }
  v32 = (__int64)(a5 + 1);
  v105 = sub_EEC8C0((unsigned __int64)v19, v29, *(double *)a7.m128_u64);
  v33 = sub_1587DB0(v31, &v105);
  v34 = *(_QWORD *)(v32 - 8);
  v109[1] = v32;
  v109[0] = v34;
  LODWORD(v32) = sub_F6CE20(v109);
  v107 = __PAIR64__(v32, sub_F6CCB0(v109, a7));
  sub_1587DB0(v33, (__int64 *)&v107);
  sub_15F7200(v112);
  return 1;
}
