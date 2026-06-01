unsigned __int64 __fastcall sub_1E8F560(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 **a4,
        __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8,
        __m128i a9)
{
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  unsigned __int64 result; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // rdx
  const char *v22; // rax
  int v23; // ecx
  __int64 *v24; // rsi
  _QWORD **v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  int v28; // eax
  unsigned __int8 v29; // al
  _QWORD *v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 *v33; // rsi
  __int64 v34; // rax
  unsigned int v35; // ebx
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // eax
  _QWORD *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  bool v44; // al
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned int v47; // eax
  int v48; // ebx
  void *v49; // rax
  char v50; // cl
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  __int64 v54; // r9
  __int64 v55; // rax
  unsigned __int64 v56; // rsi
  __int64 v57; // rcx
  char v58; // al
  __int64 v59; // rax
  char v60; // dl
  _QWORD *v61; // rax
  const char *v62; // rax
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // rdx
  void *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  void *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  unsigned __int64 v84; // [rsp+0h] [rbp-138h]
  unsigned __int64 v85; // [rsp+0h] [rbp-138h]
  int v86; // [rsp+8h] [rbp-130h]
  __int64 v87; // [rsp+8h] [rbp-130h]
  __int64 v88; // [rsp+8h] [rbp-130h]
  __int64 v89; // [rsp+8h] [rbp-130h]
  unsigned int v90; // [rsp+10h] [rbp-128h]
  unsigned int v91; // [rsp+10h] [rbp-128h]
  char v92; // [rsp+10h] [rbp-128h]
  void *v93; // [rsp+10h] [rbp-128h]
  const char *v94; // [rsp+10h] [rbp-128h]
  __int64 v95; // [rsp+10h] [rbp-128h]
  __int64 v96; // [rsp+10h] [rbp-128h]
  char v97; // [rsp+18h] [rbp-120h]
  __int64 v98; // [rsp+18h] [rbp-120h]
  __int64 v99; // [rsp+18h] [rbp-120h]
  __int64 v100; // [rsp+20h] [rbp-118h] BYREF
  __int64 v101; // [rsp+28h] [rbp-110h] BYREF
  void *v102; // [rsp+30h] [rbp-108h] BYREF
  void *v103; // [rsp+38h] [rbp-100h]
  int v104; // [rsp+40h] [rbp-F8h]
  char v105; // [rsp+44h] [rbp-F4h]
  void *v106; // [rsp+70h] [rbp-C8h] BYREF
  __int64 *v107; // [rsp+78h] [rbp-C0h]
  _QWORD *v108; // [rsp+80h] [rbp-B8h]
  unsigned __int8 *v109[11]; // [rsp+90h] [rbp-A8h] BYREF
  char v110; // [rsp+E8h] [rbp-50h]
  unsigned int v111; // [rsp+F0h] [rbp-48h]
  char v112; // [rsp+F4h] [rbp-44h]

  v13 = sub_10CCE50(a2);
  v14 = v13;
  if ( !(unsigned __int8)sub_1E88390((__int64)a1, v13, a3, a5) )
    return 1;
  if ( a2 <= 64 )
  {
    v20 = **a4;
    v21 = v20;
    switch ( a2 )
    {
      case 0:
      case 19:
      case 21:
      case 29:
      case 32:
      case 33:
      case 34:
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
      case 45:
      case 46:
      case 47:
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 64:
        goto LABEL_3;
      case 1:
      case 22:
        if ( !sub_F63270(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL), v14, v20, v15, v16, v17) )
          goto LABEL_3;
        goto LABEL_5;
      case 2:
      case 3:
      case 4:
      case 63:
        v56 = v20 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_58;
      case 5:
      case 6:
      case 7:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 23:
      case 24:
      case 26:
      case 27:
      case 28:
      case 31:
      case 35:
      case 36:
      case 37:
      case 38:
      case 39:
        v21 = sub_ED7E80(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL), v20 & 0xFFFFFFFFFFFFFFF0LL, v20, v15)
            & 0xFFFFFFFFFFFFFFF0LL;
        v56 = v21;
LABEL_58:
        v57 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v56 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v58 = *(_BYTE *)(v57 + 16);
        if ( v58 == 5 || v58 == 13 && ((*(_WORD *)(v57 + 18) >> 3) & 0x1FF) == 0x1B3 )
          goto LABEL_3;
        v18 = sub_1E63CF0((__int64)a1, a3, v21, (__int64 *)((char *)&dword_0 + 1), 3970, v17) ^ 1;
        goto LABEL_6;
      case 8:
      case 18:
        v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v60 = *(_BYTE *)(v59 + 16);
        if ( (unsigned __int8)(v60 - 2) <= 4u || v60 == 13 && ((*(_WORD *)(v59 + 18) >> 3) & 0x1FF) == 0x1B3 )
          goto LABEL_3;
        goto LABEL_5;
      case 17:
      case 20:
      case 25:
        v61 = sub_F63270(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL), v14, v20, v15, v16, v17);
        if ( !v61 || *((_BYTE *)v61 + 73) >> 5 == 2 )
          goto LABEL_3;
LABEL_5:
        v18 = sub_1E63CF0((__int64)a1, a3, v20, (__int64 *)((char *)&dword_0 + 1), 3970, v17) ^ 1;
LABEL_6:
        if ( !v18 )
          return 1;
        goto LABEL_3;
      case 30:
        v53 = sub_ED7E80(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL), v20 & 0xFFFFFFFFFFFFFFF0LL, v20, v15)
            & 0xFFFFFFFFFFFFFFF0LL;
        v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v53 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v55 + 16) != 13 || ((*(_WORD *)(v55 + 18) >> 3) & 0x1FF) != 0x1B3)
          && (unsigned __int8)sub_1E63CF0((__int64)a1, a3, v53, (__int64 *)((char *)&dword_0 + 1), 3970, v54) )
        {
          return 1;
        }
        v23 = a5;
        if ( !(_DWORD)a5 )
          goto LABEL_20;
LABEL_15:
        v24 = *a4;
        if ( (*(_BYTE *)(*(_QWORD *)(**a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
          goto LABEL_34;
        v25 = a4 + 1;
        v26 = (__int64)&a4[(unsigned int)(v23 - 1) + 1];
        break;
    }
    do
    {
      if ( (_QWORD **)v26 == v25 )
      {
        if ( a2 == 40 )
          goto LABEL_26;
LABEL_20:
        v28 = 0;
        goto LABEL_21;
      }
      v27 = *v25++;
    }
    while ( (*(_BYTE *)(*(_QWORD *)(*v27 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 );
LABEL_34:
    if ( a2 == 40 )
    {
      BYTE4(v102) &= ~1u;
      LODWORD(v102) = 0;
      goto LABEL_38;
    }
    v28 = 1;
LABEL_21:
    v29 = sub_1E8DE10((__int64)a1, (unsigned int)a2, a3, (__int64)a4, a5, a6, a7, a8, a9, v28);
    v30 = (_QWORD *)a1[31];
    if ( (*(_BYTE *)(v30[290] + 1LL) & 8) != 0 )
      v31 = v30[2330];
    else
      v31 = v30[2340];
    return sub_C98650(v30, v31, a3, a2, a4, a5, a6, v29);
  }
  else
  {
LABEL_3:
    switch ( a2 )
    {
      case 5:
      case 9:
        v86 = 66;
        goto LABEL_11;
      case 6:
      case 12:
        v86 = 71;
        goto LABEL_11;
      case 7:
      case 14:
        v86 = 84;
        goto LABEL_11;
      case 10:
      case 11:
        v86 = 83;
        goto LABEL_11;
      case 13:
        v86 = 28;
        goto LABEL_11;
      case 15:
        v86 = 3;
        goto LABEL_11;
      case 37:
        v86 = 36;
        goto LABEL_11;
      case 74:
        v86 = 75;
LABEL_11:
        sub_168B9F0((__int64)&v106, a1 + 1, a3, 0x1AA8u, 0);
        v22 = sub_10CCE10(a2);
        if ( v110 )
        {
          sub_AE9DF0(v109, (__int64)v22, 1u);
        }
        else
        {
          if ( !v112 )
            goto LABEL_13;
          v94 = v22;
          v63 = sub_168B9E0(&v106);
          v66 = (__int64)v94;
          v67 = v63;
          v68 = v108;
          if ( v108 )
          {
            v98 = v67;
            v68 = (void *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, const char *))(*v108 + 32LL))(
                            v108,
                            *v108,
                            v67,
                            v94);
            v67 = v98;
            v66 = (__int64)v94;
          }
          v102 = v68;
          v95 = v66;
          v69 = sub_1587BC0(v67, (__int64 *)&v102, v67, v66, v64, v65);
          sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v111 + 8), v95, 1u);
        }
        v62 = sub_10CCE10(v86);
        v88 = (__int64)v62;
        if ( v110 )
        {
          sub_AE9DF0(v109, (__int64)v62, 1u);
        }
        else if ( v112 )
        {
          v70 = sub_168B9E0(&v106);
          v74 = v108;
          if ( v108 )
          {
            v96 = v70;
            v74 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v108 + 32LL))(v108);
            v70 = v96;
          }
          v102 = v74;
          v75 = sub_1587BC0(v70, (__int64 *)&v102, v70, v71, v72, v73);
          sub_AE9DF0((unsigned __int8 **)(*v75 + 32LL * v111 + 8), v88, 1u);
        }
LABEL_13:
        sub_15F7200(&v106);
LABEL_14:
        v23 = a5;
        if ( (_DWORD)a5 )
          goto LABEL_15;
        if ( a2 != 40 )
          goto LABEL_20;
        v24 = *a4;
        break;
      default:
        goto LABEL_14;
    }
LABEL_26:
    v32 = *v24;
    v33 = v24 + 1;
    v100 = v32;
    v34 = *(v33 - 1);
    v107 = v33;
    v106 = (void *)v34;
    v90 = sub_F6CE20((__int64 *)&v106);
    v35 = sub_F6CCB0((__int64 *)&v106, a7);
    v38 = sub_184EEF0(a1, v100, v35, v36, v37);
    if ( v38 )
    {
      v39 = (_QWORD *)a1[31];
      v91 = v38;
      v87 = sub_A63CE0(v39);
      v44 = sub_F65240(*(_QWORD *)(v87 & 0xFFFFFFFFFFFFFFF0LL), v100, v40, v41, v42, v43);
      LODWORD(v103) = 64;
      BYTE4(v103) = !v44;
      v102 = (void *)(v91 - 1);
      v47 = sub_AAC1F0((__int64)v39, v87, v91, v45, v46);
      v48 = (int)v103;
      if ( v47 == (_DWORD)v103 )
      {
        v49 = v102;
        v50 = BYTE4(v103);
      }
      else
      {
        v92 = BYTE4(v103);
        if ( BYTE4(v103) )
        {
          sub_2206D90(&v106, &v102, v47);
          v48 = (int)v107;
          v49 = v106;
          v50 = v92;
        }
        else
        {
          sub_2206DE0(&v106, &v102, v47);
          v48 = (int)v107;
          v49 = v106;
          v50 = 0;
        }
        if ( (unsigned int)v103 > 0x40 && v102 )
        {
          v97 = v50;
          v93 = v49;
          operator delete[](v102);
          v50 = v97;
          v49 = v93;
        }
      }
      BYTE4(v102) &= ~1u;
      LODWORD(v102) = 2;
      v103 = v49;
      v104 = v48;
      v105 = v50;
    }
    else
    {
      sub_168B9F0((__int64)&v106, a1 + 1, a3, 0xBECu, 0);
      v52 = sub_1605D30((__int64)&v106, &v100);
      if ( *(_BYTE *)(v52 + 120) )
      {
        v102 = (void *)__PAIR64__(v90, v35);
        LOBYTE(v103) = 1;
        sub_AEC610((__int64 *)(v52 + 32), (__int64 *)&v102);
      }
      else if ( *(_BYTE *)(v52 + 132) )
      {
        v89 = v52;
        v76 = sub_168B9E0((_QWORD *)v52);
        v79 = v89;
        v80 = v76;
        v81 = *(_QWORD *)(v89 + 16);
        if ( v81 )
        {
          v99 = v80;
          v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
          v80 = v99;
          v79 = v89;
        }
        v101 = v81;
        v82 = *sub_1587BC0(v80, &v101, v79, v80, v77, v78) + 32LL * *(unsigned int *)(v79 + 128);
        v102 = (void *)__PAIR64__(v90, v35);
        LOBYTE(v103) = 1;
        sub_AEC610((__int64 *)(v82 + 8), (__int64 *)&v102);
      }
      sub_15F7200(&v106);
      LODWORD(v102) = 0;
      BYTE4(v102) &= ~1u;
    }
LABEL_38:
    sub_A53C40((__int64)&v106, (int *)&v102);
    v51 = sub_A63CE0((_QWORD *)a1[31]);
    result = sub_C98A60((_QWORD *)a1[31], v51, a3, 0x28u, a4, a5, a6, (int *)&v106);
    if ( (unsigned int)v106 > 1 )
    {
      v84 = result;
      sub_A4F8E0((int *)&v106);
      result = v84;
    }
    if ( (unsigned int)v102 > 1 )
    {
      v85 = result;
      sub_A4F8E0((int *)&v102);
      return v85;
    }
  }
  return result;
}
