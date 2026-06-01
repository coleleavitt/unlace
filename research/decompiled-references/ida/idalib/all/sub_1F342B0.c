__int64 *__fastcall sub_1F342B0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbp
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 *v18; // r9
  unsigned int v19; // eax
  __int64 *v20; // r9
  char v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 *v29; // rdx
  __int64 v30; // rsi
  __int64 *v31; // rdi
  int v32; // eax
  __int64 v33; // rax
  __int64 *v34; // r15
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r15
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __m128i *v45; // rcx
  __m128i *p_si128; // rax
  __int64 *v47; // r15
  __int64 v48; // rax
  __int64 **v49; // rax
  __int64 **v50; // rax
  __int64 **v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 *v54; // r13
  unsigned __int64 v55; // rsi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int8 v65; // cl
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 *v72; // r9
  unsigned __int64 v73; // rax
  __int16 v74; // ax
  __int16 v75; // dx
  __int16 v76; // ax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // rsi
  unsigned __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  unsigned int v88; // edx
  __int64 *v89; // rsi
  __int64 v90; // r8
  __m128 *v91; // r9
  __int64 v92; // r10
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rbx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  const char *v99; // rax
  __int64 v100; // rdi
  __int64 v101; // rdi
  __int64 v102; // rsi
  int v103; // esi
  int v104; // r8d
  __int64 v105; // r9
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // [rsp+8h] [rbp-400h]
  __int64 *v109; // [rsp+10h] [rbp-3F8h] BYREF
  __int64 v110; // [rsp+18h] [rbp-3F0h]
  __int64 v111; // [rsp+20h] [rbp-3E8h]
  int v112; // [rsp+2Ch] [rbp-3DCh]
  __m128 v113; // [rsp+30h] [rbp-3D8h] BYREF
  __int64 *v114; // [rsp+40h] [rbp-3C8h]
  __int64 *v115; // [rsp+48h] [rbp-3C0h]
  int v116; // [rsp+5Ch] [rbp-3ACh] BYREF
  __int64 *v117; // [rsp+60h] [rbp-3A8h] BYREF
  __int64 v118; // [rsp+68h] [rbp-3A0h] BYREF
  __int64 v119; // [rsp+70h] [rbp-398h] BYREF
  char v120; // [rsp+78h] [rbp-390h]
  __int64 v121; // [rsp+80h] [rbp-388h] BYREF
  char v122; // [rsp+88h] [rbp-380h]
  _BYTE v123[32]; // [rsp+90h] [rbp-378h] BYREF
  __m128i v124[2]; // [rsp+B0h] [rbp-358h] BYREF
  __int16 v125; // [rsp+D0h] [rbp-338h]
  __m128i v126[2]; // [rsp+E0h] [rbp-328h] BYREF
  __int16 v127; // [rsp+100h] [rbp-308h]
  __m128i si128; // [rsp+110h] [rbp-2F8h] BYREF
  __m128i v129; // [rsp+120h] [rbp-2E8h]
  __int64 v130[6]; // [rsp+140h] [rbp-2C8h] BYREF
  int v131; // [rsp+170h] [rbp-298h]
  __int64 v132; // [rsp+178h] [rbp-290h]
  int v133; // [rsp+180h] [rbp-288h]
  __int64 v134; // [rsp+188h] [rbp-280h]
  __int64 v135; // [rsp+190h] [rbp-278h]
  char v136; // [rsp+198h] [rbp-270h]
  __int64 v137; // [rsp+1A0h] [rbp-268h] BYREF
  __int64 v138; // [rsp+1A8h] [rbp-260h]
  _QWORD *v139; // [rsp+1B0h] [rbp-258h]
  unsigned int v140; // [rsp+1B8h] [rbp-250h]
  void *ptr; // [rsp+1C0h] [rbp-248h]
  __int64 v142; // [rsp+1C8h] [rbp-240h]
  _BYTE v143[568]; // [rsp+1D0h] [rbp-238h] BYREF

  v116 = 0;
  v4 = sub_1F1F830(a1, a2, &v116);
  v6 = v5;
  v108 = (__int64)(v4 + 338);
  v7 = 8LL * v4[340] - *((unsigned int *)v4 + 684);
  v8 = *(_DWORD *)(a1 + 13208);
  *(_DWORD *)(a1 + 13208) = 1;
  v111 = v7;
  v112 = v8;
  v110 = a1 + 24;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 184LL))(a1 + 24);
  *((_DWORD *)v4 + 684) = 0;
  v4[340] = (v6 >> 3) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v6 & 0x3F) != 0 )
  {
    sub_A0B360((__int64)&v137, (__int64)(v4 + 338), v6 & 0x3F);
    if ( (v138 & 1) != 0 )
    {
      v16 = v137;
      v137 = 0;
      v130[0] = v16;
      sub_A0AE70(&v137);
      if ( v16 )
        sub_1F1EBA0("jumping", v130);
    }
    else
    {
      sub_A0AE70(&v137);
    }
  }
  v9 = *(_QWORD *)(a1 + 144);
  v130[4] = v6;
  v138 = a1;
  v137 = v9;
  ptr = v143;
  v142 = 0x4000000000LL;
  v139 = v4;
  v131 = v116;
  v140 = 0;
  v130[0] = a1;
  v130[1] = a1;
  v130[2] = (__int64)&v137;
  v130[3] = (__int64)v4;
  v130[5] = a2;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v136 = 0;
  sub_A0B360((__int64)&si128, (__int64)(v4 + 338), *((_DWORD *)v4 + 685));
  v120 = si128.m128i_i8[8] & 1 | v120 & 0xFE;
  v10 = si128.m128i_i64[0];
  if ( (si128.m128i_i8[8] & 1) != 0 )
  {
    si128.m128i_i64[0] = 0;
    v119 = v10;
  }
  else
  {
    LODWORD(v119) = si128.m128i_i32[0];
  }
  sub_A0AE70(si128.m128i_i64);
  if ( (v120 & 1) != 0 )
  {
    v106 = v119;
    v119 = 0;
    si128.m128i_i64[0] = v106;
    sub_1F1EBA0("reading code", si128.m128i_i64);
  }
  v11 = *(_QWORD **)(a1 + 144);
  v114 = &v121;
  v117 = nullptr;
  sub_1EACA30((__int64)&v121, (__int64)&v137, (__int64)(v4 + 338), v119);
  if ( (v122 & 1) != 0 )
  {
    v107 = v121;
    v121 = 0;
    v118 = v107;
    sub_2221210(v123, &v118);
    v126[0].m128i_i64[0] = (__int64)v123;
    v99 = "ASTReader::readDeclRecord failed reading decl code: ";
    v127 = 260;
    goto LABEL_166;
  }
  switch ( (int)v121 )
  {
    case 51:
      v18 = (__int64 *)sub_B7A670((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 52:
      v18 = (__int64 *)sub_B7A800((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 53:
      v18 = (__int64 *)sub_B80150((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 54:
      v18 = (__int64 *)sub_B80FB0((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 55:
      v18 = (__int64 *)sub_B7A270((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 56:
      v18 = (__int64 *)sub_B7CB30((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 57:
      v18 = sub_BA7D30(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 58:
      v18 = sub_BAF150(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 59:
      v18 = (__int64 *)sub_BAF510((unsigned __int64)v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 60:
      v18 = sub_BA8AF0(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 61:
      v18 = sub_BA8C60(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 62:
      v18 = sub_BA8EB0(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 63:
      v18 = sub_BA9010(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 64:
      v18 = sub_BA9320(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 65:
      v18 = sub_BA94C0(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 66:
      v18 = sub_BA9650(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 67:
      v18 = sub_BA9850(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 68:
      v18 = (__int64 *)sub_B77F90((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 69:
      v18 = sub_B9B0C0(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 70:
      v18 = sub_B9B180(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 71:
      v18 = sub_BBFEF0(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 72:
      v18 = (__int64 *)sub_B73260((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 73:
      v18 = (__int64 *)sub_B79A90((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 74:
      v18 = (__int64 *)sub_B74640((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 75:
      v57 = v140++;
      v18 = sub_B9AFB0(v11, a2, *((_QWORD *)ptr + v57), v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 76:
      v18 = sub_B9AD60(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 77:
      v18 = (__int64 *)sub_B7A950((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 78:
      v18 = (__int64 *)sub_B7AA10((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 79:
      v18 = (__int64 *)sub_B79DB0((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 80:
      v58 = v140++;
      v18 = (__int64 *)sub_B79F10((__int64)v11, a2, *((_QWORD *)ptr + v58));
      v117 = v18;
      goto LABEL_13;
    case 81:
      v59 = v140++;
      v18 = (__int64 *)sub_B7A090((__int64)v11, a2, *((_QWORD *)ptr + v59));
      v117 = v18;
      goto LABEL_13;
    case 86:
      v18 = (__int64 *)sub_B79630((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 87:
      v18 = (__int64 *)sub_BA4AC0((unsigned __int64)v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 88:
      v18 = sub_B99BD0((unsigned __int64)v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 89:
      v18 = sub_B9A410(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 90:
      v18 = sub_B9A590(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 91:
      v60 = v140++;
      v18 = sub_B9A710(v11, a2, *((_QWORD *)ptr + v60), v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 92:
      v18 = sub_B99F60((unsigned __int64)v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 93:
      v18 = sub_B9A1D0((unsigned __int64)v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 94:
      v18 = sub_B99A30(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 95:
      v18 = sub_B9A840(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 96:
      v18 = sub_B9A970(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 97:
      v18 = sub_B99840(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 98:
      v18 = (__int64 *)sub_B7B240((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 99:
      v18 = sub_B96B60(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 100:
      v18 = sub_B97810(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 101:
      v18 = sub_B97E10(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 102:
      v61 = v140++;
      v18 = sub_B98C10(v11, a2, *((_QWORD *)ptr + v61), v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 103:
      v18 = sub_B99290(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 104:
      v18 = sub_B99520(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 105:
      v18 = sub_B967F0(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 106:
      v62 = v140++;
      v18 = sub_BA5A30(v11, a2, *((_QWORD *)ptr + v62), v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 107:
      v18 = sub_BBF7E0(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 108:
      v18 = sub_BBE0B0((unsigned __int64)v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 109:
      v18 = sub_BBF200(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 110:
      v18 = sub_BBF730(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 111:
      v18 = sub_BBFC60((unsigned __int64)v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 112:
      v18 = sub_BBFD80(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 113:
      v18 = sub_BBFE50(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 114:
      v18 = sub_BBDE20((unsigned __int64)v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 115:
      v63 = v140++;
      v18 = sub_BBE370(v11, a2, *((_QWORD *)ptr + v63) != 0, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 116:
      v64 = v140++;
      v18 = sub_BBE900(v11, a2, *((_QWORD *)ptr + v64) != 0, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 117:
      v18 = sub_BBEF20(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 118:
      v18 = sub_BBFA10((unsigned __int64)v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 119:
      v18 = sub_BBF430(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 120:
      v18 = sub_B9AAA0(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 121:
      v18 = sub_B9ABE0(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 122:
      v54 = nullptr;
      sub_1EAD680(a1, "attempt to read a C++ base-specifier record as a declaration", 60);
      goto LABEL_48;
    case 123:
      v54 = nullptr;
      sub_1EAD680(a1, "attempt to read a C++ ctor initializer record as a declaration", 62);
      goto LABEL_48;
    case 124:
      v18 = (__int64 *)sub_B7A430((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 125:
      v65 = *((_QWORD *)ptr + v140) != 0;
      v66 = *((_QWORD *)ptr + v140 + 1);
      v140 += 2;
      v18 = sub_BBE9F0(v11, a2, v66, v65, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 126:
      v67 = v140++;
      v18 = sub_BBEFF0(v11, a2, *((_QWORD *)ptr + v67), v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 127:
      v18 = (__int64 *)sub_B7B0D0((__int64)v11, a2, *((_QWORD *)ptr + (unsigned int)v142 - 1));
      v117 = v18;
      goto LABEL_13;
    case 128:
      v68 = *((_QWORD *)ptr + v140 + 1);
      v140 += 3;
      v18 = sub_BB1AC0(v11, a2, v68);
      v117 = v18;
      goto LABEL_13;
    case 129:
      v69 = *((_QWORD *)ptr + v140);
      v140 += 3;
      v18 = sub_BB1F40(v11, a2, v69);
      v117 = v18;
      goto LABEL_13;
    case 130:
      v70 = *((_QWORD *)ptr + v140);
      v71 = *((_QWORD *)ptr + v140 + 1);
      v140 += 3;
      v18 = sub_BB1D10(v11, a2, v71, v70);
      v117 = v18;
      goto LABEL_13;
    case 131:
      v18 = (__int64 *)sub_B7AB40((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 132:
      v72 = sub_B8FF70(72, v11, a2, 0, v14, v15);
      v72[1] = 0;
      v72[2] = 0;
      *v72 = (__int64)off_2C02B30;
      v73 = v72[3] & 0xFFFF000000000000LL | 0x605200000000LL;
      v109 = v72;
      v72[3] = v73;
      v74 = sub_B8C0C0(82);
      v18 = v109;
      v75 = v74;
      v76 = *((_WORD *)v109 + 15);
      *((_BYTE *)v109 + 32) &= 0xF8u;
      *((_WORD *)v18 + 15) = v75 & 0x3FFF | v76 & 0xC000;
      if ( byte_2CD7310[0] )
      {
        v109 = v18;
        sub_B8B8D0(82);
        v18 = v109;
      }
      v18[8] = 0;
      *(_OWORD *)(v18 + 5) = 0;
      *v18 = (__int64)&off_2C03100;
      v117 = v18;
      goto LABEL_13;
    case 133:
      v18 = sub_B97930(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 134:
      v18 = sub_BA8810((unsigned __int64)v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 135:
      v18 = sub_BB2640(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 136:
      v77 = v140++;
      v18 = (__int64 *)sub_B79260((__int64)v11, a2, *((_QWORD *)ptr + v77));
      v117 = v18;
      goto LABEL_13;
    case 137:
      v78 = v140++;
      v18 = (__int64 *)sub_B79410((__int64)v11, a2, *((_QWORD *)ptr + v78));
      v117 = v18;
      goto LABEL_13;
    case 138:
      v79 = *((_QWORD *)ptr + v140);
      v140 += 3;
      v18 = sub_BB2460(v11, a2, v79);
      v117 = v18;
      goto LABEL_13;
    case 139:
      v18 = sub_BB2170(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 140:
      v18 = sub_B9B250(v11, a2, v12, v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 141:
      v18 = (__int64 *)sub_B7ACA0((__int64)v11, a2);
      v117 = v18;
      goto LABEL_13;
    case 142:
      v80 = v140++;
      v18 = sub_BBF630(v11, a2, *((_QWORD *)ptr + v80), v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 145:
      v81 = v140++;
      v18 = sub_BB0EE0(v11, a2, *((_QWORD *)ptr + v81), v13, v14, v15);
      v117 = v18;
      goto LABEL_13;
    case 146:
      v17 = v140++;
      v117 = sub_BB1180(v11, a2, *((_QWORD *)ptr + v17), v13, v14, v15);
      v18 = v117;
      goto LABEL_13;
    default:
      v18 = v117;
LABEL_13:
      v109 = v18;
      v19 = sub_1EAB3F0(a1, a2);
      v20 = v109;
      v21 = v19;
      v22 = *(_QWORD **)(*(_QWORD *)(a1 + 2728) + ((v19 >> 4) & 0xFFFFFF8));
      if ( !v22 )
      {
        v100 = *(_QWORD *)(a1 + 2744);
        v115 = (__int64 *)(*(_QWORD *)(a1 + 2728) + ((v19 >> 4) & 0xFFFFFF8));
        v113.m128_u64[0] = (unsigned __int64)v109;
        LODWORD(v109) = v19;
        v22 = (_QWORD *)sub_1F21B20((__int64 *)(v100 & 0xFFFFFFFFFFFFFFF8LL), 1024, 3u);
        *v115 = (__int64)v22;
        *v22 = 0;
        v22[127] = 0;
        memset(
          (void *)((unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL),
          0,
          8LL * (((unsigned int)v22 - (((_DWORD)v22 + 8) & 0xFFFFFFF8) + 1024) >> 3));
        v20 = (__int64 *)v113.m128_u64[0];
        v21 = (char)v109;
      }
      v23 = v21 & 0x7F;
      v22[v23] = v20;
      v24 = v11[283];
      v25 = v117;
      v26 = *(_QWORD *)(v24 + 80);
      v27 = *(_QWORD *)(v26 + 72);
      if ( (v27 & 1) != 0 )
      {
        v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
LABEL_17:
        v29 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
        v30 = (__int64)v29;
        if ( v28 && (v28 & 4) != 0 )
        {
          v30 = 0;
          if ( !v29 )
            goto LABEL_25;
          v31 = (__int64 *)*v29;
          v32 = *(_DWORD *)(*v29 + 12);
          if ( *((_DWORD *)v29 + 2) != v32 )
          {
            *((_DWORD *)v29 + 2) = v32;
            v33 = *v31;
            v113.m128_u64[0] = (unsigned __int64)v25;
            v109 = v29;
            (*(void (__fastcall **)(__int64 *, __int64))(v33 + 152))(v31, v26);
            v25 = (__int64 *)v113.m128_u64[0];
            v29 = v109;
          }
          v30 = v29[2];
        }
        goto LABEL_23;
      }
      v82 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v27 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v30 = 0;
        goto LABEL_25;
      }
      v83 = *(_QWORD *)(v26 + 72) & 2LL;
      v30 = (__int64)v82;
      if ( (_DWORD)v83 )
      {
        v84 = *(_QWORD *)(v24 + 80);
        v109 = v117;
        v85 = sub_6E2500(v82, v84, v83, (__int64)v117, v23, (__int64)v20);
        v25 = v109;
        v28 = v85 & 0xFFFFFFFFFFFFFFFELL;
        v27 = v28 | 1;
        *(_QWORD *)(v26 + 72) = v28 | 1;
        goto LABEL_17;
      }
LABEL_23:
      if ( v30 )
        v30 += 40;
LABEL_25:
      v109 = (__int64 *)&v117;
      v113.m128_u64[0] = (unsigned __int64)v130;
      v115 = v130;
      v113 = _mm_loadh_ps((const double *)&v109);
      sub_B8C080((__int64)v25, v30);
      si128 = _mm_load_si128((const __m128i *)&v113);
      sub_1EAC9E0(a1, v116, (__int64 (__fastcall *)(__int64))sub_1F57340, (__int64)&si128);
      v34 = v117;
      if ( !sub_B8E0B0((__int64)v117) )
        goto LABEL_33;
      v37 = sub_B8D340((__int64)v34);
      if ( !v37 )
        goto LABEL_33;
      si128 = 0;
      v129 = 0;
      sub_1F1EA40((__int64)v115, &si128);
      v38 = si128.m128i_i64[0];
      if ( si128.m128i_i64[0] )
        goto LABEL_28;
      v39 = si128.m128i_u64[1];
      if ( v129.m128i_i64[1] | si128.m128i_i64[1] | v129.m128i_i64[0] )
        goto LABEL_30;
      if ( (*((_BYTE *)v117 + 28) & 0x7F) != 0x18 )
        goto LABEL_31;
      v86 = *(unsigned int *)(a1 + 2792);
      v87 = *(_QWORD *)(a1 + 2776);
      if ( !(_DWORD)v86 )
        goto LABEL_177;
      v88 = (v86 - 1) & (((0xBF58476D1CE4E5B9LL * a2) >> 31) ^ (484763065 * a2));
      v89 = (__int64 *)(v87 + 40LL * v88);
      v90 = *v89;
      if ( a2 == *v89 )
        goto LABEL_151;
      v103 = 1;
      if ( v90 == -1 )
      {
LABEL_177:
        v115 = (__int64 *)(a1 + 2776);
        v113.m128_u64[0] = (unsigned __int64)v126;
        sub_1F336D0((__m128 *)v126, (__int64 *)(v87 + 40 * v86), (__int64 *)(v87 + 40 * v86), a1 + 2776, 1);
        v92 = (__int64)v115;
        v91 = (__m128 *)v113.m128_u64[0];
        v93 = v126[0].m128i_i64[0];
      }
      else
      {
        while ( 1 )
        {
          v104 = v103 + 1;
          v88 = (v86 - 1) & (v103 + v88);
          v89 = (__int64 *)(v87 + 40LL * v88);
          v105 = *v89;
          if ( a2 == *v89 )
            break;
          v103 = v104;
          if ( v105 == -1 )
            goto LABEL_177;
        }
LABEL_151:
        v115 = (__int64 *)(a1 + 2776);
        v113.m128_u64[0] = (unsigned __int64)v126;
        sub_1F336D0((__m128 *)v126, v89, (__int64 *)(v87 + 40 * v86), a1 + 2776, 1);
        v91 = (__m128 *)v113.m128_u64[0];
        v92 = (__int64)v115;
        v93 = v126[0].m128i_i64[0];
      }
      v94 = *(unsigned int *)(a1 + 2792);
      v113.m128_u64[0] = v93;
      sub_1F336D0(
        v91,
        (__int64 *)(*(_QWORD *)(a1 + 2776) + 40 * v94),
        (__int64 *)(*(_QWORD *)(a1 + 2776) + 40 * v94),
        v92,
        1);
      if ( v126[0].m128i_i64[0] != v113.m128_u64[0] )
      {
        si128 = _mm_loadu_si128((const __m128i *)(v113.m128_u64[0] + 8));
        v129 = _mm_loadu_si128((const __m128i *)(v113.m128_u64[0] + 24));
      }
      v38 = si128.m128i_i64[0];
      if ( !si128.m128i_i64[0] )
        goto LABEL_29;
LABEL_28:
      if ( (unsigned __int8)sub_1ED95A0(a1, (__int64)v4, v108, v38, a2, 0) )
        goto LABEL_159;
LABEL_29:
      v39 = si128.m128i_u64[1];
LABEL_30:
      if ( v39 && (unsigned __int8)sub_1ED95A0(a1, (__int64)v4, v108, v39, a2, 1) )
        goto LABEL_159;
LABEL_31:
      if ( !v129.m128i_i64[0] )
      {
        v40 = v129.m128i_u64[1];
        if ( !v129.m128i_i64[1] )
          goto LABEL_33;
LABEL_162:
        if ( (unsigned __int8)sub_1ED8E00(a1, (__int64)v4, v108, v40, v37) )
          goto LABEL_159;
        goto LABEL_33;
      }
      if ( (unsigned __int8)sub_1ED95A0(a1, (__int64)v4, v108, v129.m128i_u64[0], a2, 2) )
      {
LABEL_159:
        v54 = nullptr;
        goto LABEL_48;
      }
      v40 = v129.m128i_u64[1];
      if ( v129.m128i_i64[1] )
        goto LABEL_162;
LABEL_33:
      v41 = *(_QWORD *)(a1 + 2824);
      si128.m128i_i64[1] = a2;
      v42 = *(unsigned int *)(a1 + 2836);
      v129.m128i_i8[0] = 1;
      si128.m128i_i64[0] = (__int64)v117;
      v43 = *(unsigned int *)(a1 + 2832);
      v44 = v43 + 1;
      v45 = (__m128i *)(v41 + 24 * v43);
      p_si128 = &si128;
      if ( v44 > v42 )
      {
        v101 = a1 + 2824;
        v102 = a1 + 2840;
        if ( v41 > (unsigned __int64)&si128 || v45 <= &si128 )
        {
          sub_2237220(v101, v102, v44, 24);
          v44 = 3LL * *(unsigned int *)(a1 + 2832);
          v45 = (__m128i *)(*(_QWORD *)(a1 + 2824) + 24LL * *(unsigned int *)(a1 + 2832));
          p_si128 = &si128;
        }
        else
        {
          sub_2237220(v101, v102, v44, 24);
          v44 = *(_QWORD *)(a1 + 2824);
          p_si128 = (__m128i *)((char *)&si128 + v44 - v41);
          v45 = (__m128i *)(v44 + 24LL * *(unsigned int *)(a1 + 2832));
        }
      }
      *v45 = _mm_loadu_si128(p_si128);
      v47 = v117;
      v45[1].m128i_i64[0] = p_si128[1].m128i_i64[0];
      ++*(_DWORD *)(a1 + 2832);
      if ( (*((_BYTE *)v47 + 28) & 0x7F) != 0x14 )
        goto LABEL_45;
      v48 = v47[15];
      if ( !v48 )
      {
        sub_A794E0((__int64 *)(v47[12] + 88), v47[12], v44, (__int64)v45, v35, v36);
        v48 = v47[15];
      }
      v49 = (__int64 **)(v48 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v49 || v47 != *v49 )
      {
        if ( *(_BYTE *)(a1 + 4028) )
        {
          v50 = *(__int64 ***)(a1 + 4008);
          v51 = &v50[*(unsigned int *)(a1 + 4020)];
          if ( v50 == v51 )
            goto LABEL_45;
          while ( v47 != *v50 )
          {
            if ( v51 == ++v50 )
              goto LABEL_45;
          }
        }
        else if ( !sub_2236570(a1 + 4008, v47) )
        {
          goto LABEL_45;
        }
      }
      sub_1F33AD0(a1, a2, (__int64)v47, 0, v35, v36);
LABEL_45:
      v52 = *(_QWORD *)(a1 + 10448);
      if ( v52 == *(_QWORD *)(a1 + 10464) - 8LL )
      {
        sub_1F21300(a1 + 10400, v109);
      }
      else
      {
        v53 = v52 + 8;
        *(_QWORD *)(v53 - 8) = v117;
        *(_QWORD *)(a1 + 10448) = v53;
      }
      v54 = v117;
LABEL_48:
      sub_A0AE90(v114);
      sub_A0AE90(&v119);
      if ( ptr != v143 )
        free(ptr);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 192LL))(v110);
      v55 = v111;
      *(_DWORD *)(a1 + 13208) = v112;
      *((_DWORD *)v4 + 684) = 0;
      v4[340] = (v55 >> 3) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v55 & 0x3F) != 0 )
      {
        sub_A0B360((__int64)&si128, v108, v55 & 0x3F);
        if ( (si128.m128i_i8[8] & 1) == 0 )
        {
          sub_A0AE70(si128.m128i_i64);
          return v54;
        }
        v95 = si128.m128i_i64[0];
        si128.m128i_i64[0] = 0;
        sub_A0AE70(si128.m128i_i64);
        if ( !v95 )
          return v54;
        v118 = v95;
        sub_2221210(v123, &v118);
        v126[0].m128i_i64[0] = (__int64)v123;
        v99 = "Cursor should always be able to go back, failed: ";
        v127 = 260;
LABEL_166:
        v124[0].m128i_i64[0] = (__int64)v99;
        v125 = 259;
        sub_A41580(&si128, v124, v126, v96, v97, v98);
        sub_2221AD0(&si128, 1);
      }
      return v54;
  }
}
