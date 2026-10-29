_BYTE *__fastcall sub_E5F3E0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  char v6; // r14
  __int64 v8; // rbp
  __int64 v10; // r13
  unsigned int v11; // r15d
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  char v15; // al
  bool v16; // zf
  char v17; // al
  char v18; // al
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r14
  char v22; // al
  __int64 v23; // rdi
  _BYTE *v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdi
  _BYTE *result; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbp
  _BYTE *v35; // rax
  char v36; // al
  unsigned __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  _BYTE *v40; // rax
  unsigned __int8 v41; // al
  char *v42; // rbp
  size_t v43; // rax
  __int64 v44; // rdi
  _BYTE *v45; // rax
  char v46; // al
  unsigned __int64 v47; // rdx
  _BYTE *v48; // rdx
  __int64 v49; // rbp
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rdi
  _BYTE *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  _BYTE *v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 v62; // rsi
  __int64 v63; // rbp
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdi
  __int64 **v69; // rax
  __int64 *v70; // rdx
  unsigned __int64 v71; // rax
  __int64 *v72; // rcx
  __int64 v73; // rbp
  __int64 *v74; // rax
  unsigned __int8 v75; // al
  int v76; // eax
  bool v77; // r14
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  unsigned int v82; // edi
  __int64 *v83; // rsi
  __int64 v84; // r9
  unsigned __int64 v85; // rax
  __int64 *v86; // rdx
  __int64 *v87; // rax
  __int64 v88; // rcx
  char *v89; // r14
  size_t v90; // rax
  __m128i *v91; // rax
  unsigned int v92; // r14d
  int v93; // esi
  int v94; // r9d
  __int64 v95; // r10
  char v96; // cl
  __int64 v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rdi
  __int64 v100; // r8
  char v101; // cl
  unsigned __int64 v102; // r8
  unsigned __int64 v103; // r8
  char v104; // r9
  char v105; // al
  __int64 v106; // rax
  unsigned __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  unsigned int *v110; // rax
  __int64 v111; // rdi
  _BYTE *v112; // rax
  __int64 *v113; // rax
  __int64 v114; // rdx
  int v115; // eax
  char v116; // al
  __int64 v117; // rdi
  _BYTE *v118; // rax
  const char *v119; // rsi
  __int64 v120; // rax
  _QWORD *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // [rsp+8h] [rbp-F0h]
  char v126; // [rsp+10h] [rbp-E8h]
  __int64 *v127; // [rsp+10h] [rbp-E8h]
  bool v128; // [rsp+18h] [rbp-E0h]
  __int32 v129; // [rsp+18h] [rbp-E0h]
  char v130; // [rsp+20h] [rbp-D8h]
  int v131; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v133; // [rsp+28h] [rbp-D0h]
  __int64 v134; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v135[2]; // [rsp+50h] [rbp-A8h] BYREF
  void *v136[2]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v137[16]; // [rsp+70h] [rbp-88h] BYREF
  void *v138[2]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v139; // [rsp+90h] [rbp-68h] BYREF
  __m128 v140; // [rsp+A0h] [rbp-58h] BYREF
  _OWORD v141[4]; // [rsp+B0h] [rbp-48h] BYREF

  v5 = 0;
  v6 = a4;
  v8 = a2;
  if ( *(_BYTE *)(a2 + 16) == 26 )
    v5 = a2;
  v130 = a4;
  v125 = 0;
  v10 = v5;
  if ( !a3 )
  {
    v11 = (*(_WORD *)(a2 + 20) >> 2) & 0x3F;
LABEL_30:
    if ( !v6 )
    {
      v25 = v11;
      sub_E568F0((__int64 *)a1, v11, v125);
      goto LABEL_32;
    }
    v19 = *(_QWORD *)(v10 + 16);
    v126 = 0;
    v130 = 0;
    v128 = 0;
    v20 = v19 >> 24;
    if ( (v19 & 0x1000000) == 0 )
      goto LABEL_15;
    goto LABEL_142;
  }
  v125 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a3 + 16LL))(a3);
  v11 = (*(_WORD *)(a2 + 20) >> 2) & 0x3F;
  if ( (a3[28] & 0x7Fu) - 35 > 3 )
    goto LABEL_30;
  v12 = *(_QWORD *)(sub_B68470((__int64)(a3 + 72)) + 16);
  if ( (v12 & 4) != 0 )
    v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v13 )
    BUG();
  v14 = *(_QWORD *)(v13 + 64);
  v128 = 0;
  if ( v14 )
    v128 = (*(_BYTE *)(v14 + 10) & 0x20) != 0;
  v15 = sub_B744C0(a3, a2);
  v16 = v15 == 0;
  v126 = v15;
  v17 = a3[28];
  if ( !v16 )
  {
    v18 = v17 & 0x7F;
    if ( v18 == 36 )
      goto LABEL_146;
    if ( v18 != 38 )
    {
      v126 = 0;
      v130 = 0;
      goto LABEL_14;
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 3) > 1 )
    {
LABEL_146:
      v105 = v126;
      v126 = 0;
      v130 = v105;
      v19 = *(_QWORD *)(v10 + 16);
      v20 = v19 >> 24;
      if ( (v19 & 0x1000000) == 0 )
        goto LABEL_15;
      goto LABEL_142;
    }
    goto LABEL_59;
  }
  v36 = v17 & 0x7F;
  if ( v36 == 36 )
    goto LABEL_62;
  if ( v36 == 38 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 3) > 1 )
      goto LABEL_62;
    v126 = v6;
LABEL_59:
    if ( *(_BYTE **)(a1 + 16) == a3 || sub_E54D40((__int64)a3) == *(_QWORD *)(a1 + 16) )
    {
      a2 = 0;
      v11 = sub_A40930(*(_QWORD *)(*(_QWORD *)a1 + 8LL), 0, 1, 0);
      v116 = v126;
      v126 = 1;
      v130 = v116;
    }
    else
    {
      v46 = v126;
      v126 = 0;
      v130 = v46;
    }
LABEL_62:
    if ( !v130 )
    {
      v25 = v11;
      sub_E568F0((__int64 *)a1, v11, v125);
      if ( (a3[28] & 0x7F) == 0x24 )
        goto LABEL_23;
LABEL_64:
      v28 = *(_QWORD *)(a1 + 8);
      goto LABEL_65;
    }
    goto LABEL_14;
  }
  if ( !v6 )
  {
    v25 = v11;
    sub_E568F0((__int64 *)a1, v11, v125);
    goto LABEL_41;
  }
  v130 = 0;
LABEL_14:
  v19 = *(_QWORD *)(v10 + 16);
  v20 = v19 >> 24;
  if ( (v19 & 0x1000000) == 0 )
  {
LABEL_15:
    if ( *(_BYTE *)(v10 + 16) == 26
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
      && sub_F3F310(v10, a2, v20, a4) )
    {
      LOBYTE(v21) = *(_BYTE *)(v10 + 18) >> 5;
    }
    else
    {
      LOBYTE(v21) = 0;
    }
    goto LABEL_17;
  }
LABEL_142:
  v96 = v20;
  v97 = *(unsigned __int16 *)(v10 + 22);
  v98 = (v20 & 0x40) != 0;
  v99 = 8 * v97 + 48;
  v100 = v10 + v99 + ((v96 >> 5) & 4) + 7;
  v101 = *(_BYTE *)(v10 + 19);
  v102 = v100 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v101 & 0x40) != 0 )
    v98 += (*(_BYTE *)(((v10 + v99 + ((v101 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
  v103 = v102 + 8 * v98;
  v104 = ((unsigned __int8)v101 >> 1) & 0xF;
  if ( v104 != 2 )
    __asm { jmp     rdx }
  v107 = v103 + 8LL * (*(_WORD *)((v10 + ((v101 >> 5) & 4) + v99 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
  if ( (v19 & 0x20000000) != 0 )
    v107 += v97;
  v21 = *(_QWORD *)((v107 + 7) & 0xFFFFFFFFFFFFFFF8LL);
LABEL_17:
  sub_E54680(a1, v21, 0);
  v22 = (*(_BYTE *)(v10 + 18) >> 3) & 3;
  if ( v22 == 1 )
  {
    v111 = *(_QWORD *)(a1 + 8);
    v112 = *(_BYTE **)(v111 + 32);
    if ( (unsigned __int64)v112 >= *(_QWORD *)(v111 + 24) )
    {
      sub_2257CD0(v111, 71);
    }
    else
    {
      *(_QWORD *)(v111 + 32) = v112 + 1;
      *v112 = 71;
    }
  }
  else if ( v22 == 2 )
  {
    v23 = *(_QWORD *)(a1 + 8);
    v24 = *(_BYTE **)(v23 + 32);
    if ( (unsigned __int64)v24 >= *(_QWORD *)(v23 + 24) )
    {
      sub_2257CD0(v23, 72);
    }
    else
    {
      *(_QWORD *)(v23 + 32) = v24 + 1;
      *v24 = 72;
    }
  }
  sub_E544F0(a1, v21, 0);
  v25 = v11;
  sub_E568F0((__int64 *)a1, v11, v125);
  if ( !v130 )
  {
LABEL_41:
    if ( v128 )
    {
      if ( (a3[28] & 0x7F) != 0x25 )
      {
        v140.m128_u64[0] = *(_QWORD *)(v8 + 24);
        v34 = sub_F34140(*(_QWORD *)(v140.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL));
        if ( v34 )
        {
          v28 = *(_QWORD *)(a1 + 8);
          v35 = *(_BYTE **)(v28 + 32);
          v37 = *(_QWORD *)(v28 + 24);
          if ( *(_BYTE *)(v34 + 16) == 16 )
          {
            if ( (unsigned __int64)v35 < v37 )
              goto LABEL_46;
            goto LABEL_36;
          }
        }
        else
        {
          v28 = *(_QWORD *)(a1 + 8);
          v35 = *(_BYTE **)(v28 + 32);
          v37 = *(_QWORD *)(v28 + 24);
        }
        if ( (unsigned __int64)v35 >= v37 )
          goto LABEL_55;
LABEL_77:
        *(_QWORD *)(v28 + 32) = v35 + 1;
        *v35 = 64;
        goto LABEL_78;
      }
      sub_E608A0(a1, *(_QWORD *)(v8 + 24), v125, 3);
      goto LABEL_78;
    }
LABEL_32:
    v140.m128_u64[0] = *(_QWORD *)(v8 + 24);
    v30 = sub_F34140(*(_QWORD *)(v140.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL));
    v34 = v30;
    if ( v30 && *(_BYTE *)(v30 + 16) == 16 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 2320LL) + 152LL) <= 0xB71AFFFu )
      {
LABEL_35:
        v28 = *(_QWORD *)(a1 + 8);
        v35 = *(_BYTE **)(v28 + 32);
        if ( (unsigned __int64)v35 < *(_QWORD *)(v28 + 24) )
        {
LABEL_46:
          *(_QWORD *)(v28 + 32) = v35 + 1;
          *v35 = 63;
          goto LABEL_47;
        }
LABEL_36:
        sub_2257CD0(v28, 63);
LABEL_47:
        LOBYTE(v38) = 0;
        if ( (v140.m128_i8[0] & 8) != 0 )
          v38 = *(__int64 *)((char *)&qword_18 + (v140.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL));
        sub_E544F0(a1, v140.m128_i8[0] & 7 | v38, 0);
        v39 = *(_QWORD *)(a1 + 8);
        v40 = *(_BYTE **)(v39 + 32);
        if ( (unsigned __int64)v40 >= *(_QWORD *)(v39 + 24) )
        {
          sub_2257CD0(v39, 63);
        }
        else
        {
          *(_QWORD *)(v39 + 32) = v40 + 1;
          *v40 = 63;
        }
        v41 = *(_BYTE *)(v34 + 18);
        v42 = "<decltype-auto>";
        if ( ((v41 >> 3) & 3) != 1 )
          v42 = "<auto>";
        v43 = j__strlen(v42);
        sub_E58770(a1, v42, v43);
LABEL_54:
        v28 = *(_QWORD *)(a1 + 8);
        v35 = *(_BYTE **)(v28 + 32);
        if ( (unsigned __int64)v35 >= *(_QWORD *)(v28 + 24) )
          goto LABEL_55;
        goto LABEL_77;
      }
      v120 = v140.m128_u64[0];
      while ( 1 )
      {
        v121 = (_QWORD *)(v120 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v121 + 16LL) != 42 )
          break;
        v120 = sub_F44710(*v121, v25, v31, v32, v33);
        v31 = *(_QWORD *)&byte_8[v120 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v31 & 8) != 0 )
        {
          v31 &= 0xFFFFFFFFFFFFFFF0LL;
          v32 = *(_QWORD *)(v31 + 24);
          if ( (v32 & 0xFFFFFE00) != 0 )
            goto LABEL_35;
        }
      }
      if ( a3 )
      {
        if ( !sub_B53DB0((__int64)a3) )
          goto LABEL_54;
        if ( sub_B53DB0((__int64)a3) )
        {
          v122 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_B53DB0((__int64)a3) + 48) + 112LL) + 48LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v122 + 16) != 26 )
            v122 = sub_F3F310(v122, v25, v123, v124);
          v140.m128_u64[0] = *(_QWORD *)(v122 + 24);
        }
      }
      sub_E5EFA0((__int64 *)a1, v140.m128_i64[0], 3);
    }
    else
    {
      v106 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v140.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v106 + 16) == 13 && ((*(_WORD *)(v106 + 18) >> 3) & 0x1FF) == 0x1B3 )
        v140.m128_u64[0] = sub_6B4E70(&v140);
      sub_E608A0(a1, v140.m128_u64[0], v125, 3);
    }
LABEL_78:
    if ( v10 )
      goto LABEL_79;
LABEL_56:
    v44 = *(_QWORD *)(a1 + 8);
    v45 = *(_BYTE **)(v44 + 32);
    if ( (unsigned __int64)v45 >= *(_QWORD *)(v44 + 24) )
      goto LABEL_153;
    *(_QWORD *)(v44 + 32) = v45 + 1;
    *v45 = 64;
    goto LABEL_83;
  }
  if ( (a3[28] & 0x7F) != 0x24 )
    goto LABEL_64;
LABEL_23:
  if ( *(_BYTE **)(a1 + 16) != a3 && sub_E54D40((__int64)a3) != *(_QWORD *)(a1 + 16) )
    goto LABEL_64;
  v27 = *(_DWORD *)(a1 + 24);
  v28 = *(_QWORD *)(a1 + 8);
  if ( !v27 )
  {
    v119 = "PEAXI@Z";
    if ( !*(_BYTE *)(a1 + 592) )
      v119 = "PAXI@Z";
    return (_BYTE *)sub_971800(v28, v119);
  }
  if ( v27 == 1 )
    return (_BYTE *)sub_971800(v28, "XXZ");
LABEL_65:
  v35 = *(_BYTE **)(v28 + 32);
  v47 = *(_QWORD *)(v28 + 24);
  if ( v126 )
  {
    if ( v47 <= (unsigned __int64)v35 )
    {
      v25 = 88;
      sub_2257CD0(v28, 88);
    }
    else
    {
      v48 = v35 + 1;
      *(_QWORD *)(v28 + 32) = v35 + 1;
      *v35 = 88;
    }
    if ( *(_DWORD *)(a1 + 24) == 4 )
    {
      v117 = *(_QWORD *)(a1 + 8);
      v118 = *(_BYTE **)(v117 + 32);
      if ( (unsigned __int64)v118 >= *(_QWORD *)(v117 + 24) )
      {
        sub_2257CD0(v117, 88);
      }
      else
      {
        *(_QWORD *)(v117 + 32) = v118 + 1;
        *v118 = 88;
      }
      goto LABEL_86;
    }
    v49 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    v50 = *(_QWORD *)(*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v50 + 16) != 43 )
      goto LABEL_72;
    while ( 1 )
    {
      v51 = *(_QWORD *)(v50 + 32);
      if ( (*(_BYTE *)(v50 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v25 = v51 & 0xFFFFFFFFFFFFFFF0LL;
        v50 = *(_QWORD *)v25;
        v48 = (_BYTE *)((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v25 + 16LL) - 43);
        if ( (unsigned int)v48 <= 1 )
          break;
LABEL_72:
        v52 = sub_F3F310(v50, v25, v48, v26);
        v51 = *(_QWORD *)(v52 + 32);
        if ( (*(_BYTE *)(v52 + 18) & 0x10) == 0 )
          goto LABEL_73;
      }
    }
LABEL_73:
    v53 = sub_A4F2F0(v49, v51, 1u);
    sub_E61530(a1, v53, v125);
    v54 = *(_QWORD *)(a1 + 8);
    v55 = *(_BYTE **)(v54 + 32);
    if ( (unsigned __int64)v55 >= *(_QWORD *)(v54 + 24) )
    {
      sub_2257CD0(v54, 64);
      goto LABEL_86;
    }
    *(_QWORD *)(v54 + 32) = v55 + 1;
    *v55 = 64;
    v56 = *(_QWORD *)(a1 + 8);
    result = *(_BYTE **)(v56 + 32);
    if ( (unsigned __int64)result >= *(_QWORD *)(v56 + 24) )
      return (_BYTE *)sub_2257CD0(v56, 90);
    goto LABEL_87;
  }
  if ( v47 > (unsigned __int64)v35 )
    goto LABEL_77;
LABEL_55:
  sub_2257CD0(v28, 64);
  if ( !v10 )
    goto LABEL_56;
LABEL_79:
  v131 = *(unsigned __int16 *)(v10 + 22);
  if ( !*(_WORD *)(v10 + 22) )
  {
    v57 = *(_QWORD *)(v10 + 16);
    v44 = *(_QWORD *)(a1 + 8);
    v58 = *(_BYTE **)(v44 + 32);
    v59 = *(_QWORD *)(v44 + 24);
    if ( (v57 & 0x80000000LL) != 0 )
      goto LABEL_89;
    if ( (unsigned __int64)v58 >= v59 )
    {
      sub_2257CD0(v44, 88);
    }
    else
    {
      *(_QWORD *)(v44 + 32) = v58 + 1;
      *v58 = 88;
    }
    goto LABEL_83;
  }
  v61 = 0;
  do
  {
    if ( v61 )
    {
      v62 = *(_QWORD *)(v10 + 8 * v61 + 48);
      v63 = 8 * v61;
      sub_E61530(a1, v62, v125);
      if ( !a3 )
        goto LABEL_94;
    }
    else
    {
      if ( !a3 )
      {
        sub_E61530(a1, *(_QWORD *)(v10 + 48), v125);
        goto LABEL_94;
      }
      if ( *(_DWORD *)(**((_QWORD **)a3 + 15) + 100LL) )
        sub_971800(*(_QWORD *)(a1 + 8), "_V");
      v62 = *(_QWORD *)(v10 + 48);
      v63 = 0;
      sub_E61530(a1, v62, v125);
    }
    v68 = *(_QWORD *)(*((_QWORD *)a3 + 15) + v63);
    if ( (*(_BYTE *)(v68 + 29) & 1) == 0 )
      goto LABEL_94;
    v69 = (__int64 **)sub_B68690(v68, v62, v64, v65, v66, v67);
    v70 = *v69;
    v71 = (unsigned __int64)&(*v69)[*((unsigned int *)v69 + 2)];
    if ( (unsigned __int64)v70 >= v71 )
    {
      if ( v70 == (__int64 *)v71 )
        goto LABEL_94;
      if ( *(_WORD *)(*(_QWORD *)v71 + 36LL) == 102 )
      {
LABEL_106:
        v73 = *v70;
        if ( *(_WORD *)(*v70 + 36) != 102 )
        {
          v74 = v70 + 1;
          do
            v73 = *v74++;
          while ( *(_WORD *)(v73 + 36) != 102 );
        }
        v129 = *(_DWORD *)(v73 + 40);
        v75 = *(_BYTE *)(v73 + 34);
        if ( (v75 & 0xF0) != 0xF0 )
        {
          if ( v75 >> 4 != 3 )
            goto LABEL_111;
LABEL_119:
          v77 = 1;
LABEL_114:
          v140.m128_i8[4] = v77;
          v140.m128_i32[0] = v129;
          v78 = sub_E578A0((_QWORD *)(a1 + 544), (int *)&v140);
          v79 = *(_QWORD *)(a1 + 368);
          v127 = (__int64 *)(a1 + 368);
          v80 = *(unsigned int *)(a1 + 384);
          v81 = v78 + 32;
          v134 = v81;
          if ( !(_DWORD)v80 )
            goto LABEL_141;
          v82 = (v80 - 1) & (((unsigned int)v81 >> 9) ^ ((unsigned int)v81 >> 4));
          v83 = (__int64 *)(v79 + 16LL * v82);
          v84 = *v83;
          if ( *v83 == v81 )
            goto LABEL_116;
          v93 = 1;
          if ( v84 == -4096 )
          {
LABEL_141:
            sub_E09990(
              &v140,
              (__int64 *)(v79 + 16LL * (unsigned int)v80),
              (__int64 *)(v79 + 16LL * (unsigned int)v80),
              (__int64)v127,
              1);
            v85 = v140.m128_u64[0];
          }
          else
          {
            while ( 1 )
            {
              v94 = v93 + 1;
              v82 = (v80 - 1) & (v93 + v82);
              v83 = (__int64 *)(v79 + 16LL * v82);
              v95 = *v83;
              if ( v81 == *v83 )
                break;
              v93 = v94;
              if ( v95 == -4096 )
                goto LABEL_141;
            }
LABEL_116:
            sub_E09990(&v140, v83, (__int64 *)(16 * v80 + v79), (__int64)v127, 1);
            v85 = v140.m128_u64[0];
          }
          v133 = v85;
          v86 = (__int64 *)(*(_QWORD *)(a1 + 368) + 16LL * *(unsigned int *)(a1 + 384));
          sub_E09990(&v140, v86, v86, (__int64)v127, 1);
          if ( v140.m128_u64[0] == v133 )
          {
            v16 = !v77;
            v89 = "__pass_object_size";
            if ( !v16 )
              v89 = "__pass_dynamic_object_size";
            v136[0] = v137;
            v90 = j__strlen(v89);
            sub_E54F70(v136, v89, (__int64)&v89[v90]);
            v135[0] = "__clang";
            v135[1] = 7;
            sub_E55160((__int64 *)v138, v129);
            v91 = (__m128i *)sub_978080(v138, 0, 0, (_BYTE *)v136[0], (size_t)v136[1]);
            v140.m128_u64[0] = (unsigned __int64)v141;
            if ( (__m128i *)v91->m128i_i64[0] == &v91[1] )
            {
              v141[0] = _mm_loadu_si128(v91 + 1);
            }
            else
            {
              v140.m128_u64[0] = v91->m128i_i64[0];
              *(_QWORD *)&v141[0] = v91[1].m128i_i64[0];
            }
            v140.m128_u64[1] = v91->m128i_u64[1];
            v91->m128i_i64[0] = (__int64)v91[1].m128i_i64;
            v91->m128i_i64[1] = 0;
            v91[1].m128i_i8[0] = 0;
            sub_E58B30(a1, 4, v140.m128_u64[0], v140.m128_u64[1], (__int64)v135, 1);
            if ( (_OWORD *)v140.m128_u64[0] != v141 )
              operator delete((void *)v140.m128_u64[0]);
            if ( v138[0] != &v139 )
              operator delete(v138[0]);
            v92 = *(_DWORD *)(a1 + 376);
            if ( v92 <= 9 )
            {
              if ( (unsigned __int8)sub_E57620(v127, &v134, &v140) )
              {
                v110 = (unsigned int *)(v140.m128_u64[0] + 8);
              }
              else
              {
                v113 = sub_E5B9A0((__int64)v127, &v134, (__int64 *)v140.m128_u64[0], (__int64)&v134, v108, v109);
                v114 = v134;
                *((_DWORD *)v113 + 2) = 0;
                v110 = (unsigned int *)(v113 + 1);
                *((_QWORD *)v110 - 1) = v114;
              }
              *v110 = v92;
            }
            if ( v136[0] != v137 )
              operator delete(v136[0]);
          }
          else
          {
            sub_2257BD0(*(_QWORD *)(a1 + 8), *(unsigned int *)(v133 + 8));
          }
          goto LABEL_94;
        }
        if ( (unsigned int)sub_F83A90(v73) == 3 )
          goto LABEL_119;
        v75 = *(_BYTE *)(v73 + 34);
        if ( (v75 & 0xF0) == 0xF0 )
        {
          if ( (unsigned int)sub_F83A90(v73) == 4 )
            goto LABEL_119;
          v75 = *(_BYTE *)(v73 + 34);
          if ( (v75 & 0xF0) == 0xF0 )
          {
            v76 = sub_F83A90(v73);
            goto LABEL_113;
          }
        }
        else
        {
LABEL_111:
          if ( v75 >> 4 == 4 )
            goto LABEL_119;
        }
        v76 = v75 >> 4;
LABEL_113:
        v77 = v76 == 5;
        goto LABEL_114;
      }
      v87 = (__int64 *)(v71 + 8);
      while ( v70 != v87 )
      {
        v88 = *v87++;
        if ( *(_WORD *)(v88 + 36) == 102 )
          goto LABEL_106;
      }
    }
    else
    {
      v72 = v70;
      while ( *(_WORD *)(*v72 + 36) != 102 )
      {
        if ( (__int64 *)v71 == ++v72 )
          goto LABEL_94;
      }
      if ( (__int64 *)v71 != v72 )
        goto LABEL_106;
    }
LABEL_94:
    ++v61;
  }
  while ( v131 != (_DWORD)v61 );
  v44 = *(_QWORD *)(a1 + 8);
  v57 = *(_QWORD *)(v10 + 16);
  v58 = *(_BYTE **)(v44 + 32);
  v59 = *(_QWORD *)(v44 + 24);
LABEL_89:
  if ( (v57 & 0x80000000LL) == 0 )
  {
    if ( (unsigned __int64)v58 < v59 )
    {
      *(_QWORD *)(v44 + 32) = v58 + 1;
      *v58 = 64;
      goto LABEL_83;
    }
LABEL_153:
    sub_2257CD0(v44, 64);
    goto LABEL_83;
  }
  if ( (unsigned __int64)v58 >= v59 )
  {
    sub_2257CD0(v44, 90);
  }
  else
  {
    *(_QWORD *)(v44 + 32) = v58 + 1;
    *v58 = 90;
  }
LABEL_83:
  if ( a5 )
  {
    v60 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 2320LL);
    if ( (*(_BYTE *)(v60 + 1) & 0x40) != 0 && *(_DWORD *)(v60 + 152) > 0xB657AFFu )
    {
      v115 = sub_F3F320(v10);
      v56 = *(_QWORD *)(a1 + 8);
      if ( !v115 )
        return (_BYTE *)sub_971800(v56, "_E");
      result = *(_BYTE **)(v56 + 32);
      if ( (unsigned __int64)result >= *(_QWORD *)(v56 + 24) )
        return (_BYTE *)sub_2257CD0(v56, 90);
LABEL_87:
      *(_QWORD *)(v56 + 32) = result + 1;
      *result = 90;
      return result;
    }
  }
LABEL_86:
  v56 = *(_QWORD *)(a1 + 8);
  result = *(_BYTE **)(v56 + 32);
  if ( (unsigned __int64)result < *(_QWORD *)(v56 + 24) )
    goto LABEL_87;
  return (_BYTE *)sub_2257CD0(v56, 90);
}

