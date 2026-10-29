void __fastcall sub_E608A0(__int64 *a1, __int64 a2, char *a3, int a4)
{
  __int64 v4; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // r15
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  bool v16; // al
  int v17; // eax
  __int64 v18; // rdi
  _BYTE *v19; // rax
  __int64 v20; // rdi
  _BYTE *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  _BYTE *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  size_t v30; // rax
  char *v31; // rcx
  __int64 v32; // r8
  size_t v33; // rax
  size_t v34; // rax
  size_t v35; // rax
  size_t v36; // rax
  size_t v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdi
  char v43; // dl
  unsigned __int64 v44; // r8
  char v45; // al
  size_t v46; // rax
  size_t v47; // rax
  __int64 v48; // rdi
  _BYTE *v49; // rax
  size_t v50; // rax
  size_t v51; // rax
  size_t v52; // rax
  size_t v53; // rax
  __int64 v54; // r12
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rbx
  __int64 v60; // rdi
  _BYTE *v61; // rax
  _BYTE *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r12
  __int64 v68; // r12
  __int64 *v69; // r12
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rsi
  size_t v73; // rax
  size_t v74; // rax
  size_t v75; // rax
  size_t v76; // rax
  size_t v77; // rax
  size_t v78; // rax
  __int64 v79; // rdi
  _BYTE *v80; // rax
  _BYTE *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  size_t v86; // rax
  int v87; // eax
  unsigned __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rax
  unsigned __int64 v91; // r12
  __int64 v92; // rdx
  __int64 v93; // rax
  unsigned __int64 v94; // r12
  __int64 v95; // rdx
  size_t v96; // rax
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdi
  _BYTE *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rsi
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  int v112; // eax
  __int64 *v113; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v114; // [rsp+8h] [rbp-C0h]
  void *v115; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v116; // [rsp+18h] [rbp-B0h]
  _BYTE v117[16]; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __m128i si128; // [rsp+38h] [rbp-90h]
  _BYTE v120[128]; // [rsp+48h] [rbp-80h] BYREF

  v4 = 0;
  v8 = sub_F47380(a2, *(_QWORD *)(*a1 + 8));
  v9 = v8;
  if ( (v8 & 8) != 0 )
    v4 = *(__int64 *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL));
  v10 = v8;
  v12 = sub_A4E300(*(_QWORD **)(*a1 + 8), v8);
  if ( v12 )
  {
    if ( a4 == 1 )
    {
      v18 = a1[1];
      v19 = *(_BYTE **)(v18 + 32);
      if ( *(_QWORD *)(v18 + 24) <= (unsigned __int64)v19 )
      {
        sub_2257CD0(v18, 65);
      }
      else
      {
        *(_QWORD *)(v18 + 32) = v19 + 1;
        *v19 = 65;
      }
    }
    else if ( (unsigned int)(a4 - 2) <= 1 )
    {
      sub_971800(a1[1], "$$B");
    }
LABEL_7:
    sub_E61EE0(a1, v12);
    return;
  }
  v13 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  v12 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)v14 > 0x2Cu )
  {
    v15 = v4 | v9 & 7;
LABEL_19:
    if ( a4 == 2 )
    {
      if ( !v15 )
        goto LABEL_14;
      v113 = (__int64 *)v13;
      sub_971800(a1[1], "$$C");
LABEL_38:
      v10 = v15;
      sub_E544F0((__int64)a1, v15, 0);
      v13 = (unsigned __int64)v113;
      v12 = *v113;
      goto LABEL_14;
    }
    if ( a4 == 3 )
    {
      v16 = 1;
      goto LABEL_29;
    }
    if ( a4 != 1 )
    {
LABEL_39:
      LOBYTE(v17) = *(_BYTE *)(v12 + 16);
      v11 = v15 & 0xFFFFFFFFFFFFFE3FLL;
      if ( (v15 & 0x1C0) != 0 )
        v15 &= 0xFFFFFFFFFFFFFE3FLL;
      goto LABEL_15;
    }
LABEL_23:
    if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 25 <= 1 )
    {
      v20 = a1[1];
      v21 = *(_BYTE **)(v20 + 32);
      if ( (unsigned __int64)v21 >= *(_QWORD *)(v20 + 24) )
      {
        sub_2257CD0(v20, 54);
      }
      else
      {
        *(_QWORD *)(v20 + 32) = v21 + 1;
        *v21 = 54;
      }
LABEL_26:
      sub_E5F3E0((__int64)a1, v12, nullptr, 0, 1);
      return;
    }
LABEL_37:
    v113 = (__int64 *)v13;
    goto LABEL_38;
  }
  v15 = v4 | v9 & 7;
  v16 = ((0x1C0600000800uLL >> v14) & 1) == 0;
  if ( ((0x1C0600000800uLL >> v14) & 1) == 0 )
    goto LABEL_19;
  switch ( a4 )
  {
    case 1:
      goto LABEL_23;
    case 0:
      goto LABEL_39;
    case 3:
LABEL_29:
      v22 = v15 & 0xFFFFFFFFFFFFFFF7LL;
      v14 = v15 & 0xFFFFFFFFFFFFFE37LL;
      if ( (v15 & 0x1C0) != 0 )
        v22 = v15 & 0xFFFFFFFFFFFFFE37LL;
      v15 = v22;
      if ( !v22 || !v16 )
      {
        v17 = *(unsigned __int8 *)(v12 + 16);
        v11 = (unsigned int)(v17 - 47);
        if ( (unsigned int)v11 > 1 && (_BYTE)v17 != 57 )
          goto LABEL_15;
      }
      v23 = a1[1];
      v24 = *(_BYTE **)(v23 + 32);
      if ( (unsigned __int64)v24 >= *(_QWORD *)(v23 + 24) )
      {
        v114 = v13;
        sub_2257CD0(v23, 63);
        v13 = v114;
      }
      else
      {
        *(_QWORD *)(v23 + 32) = v24 + 1;
        *v24 = 63;
      }
      goto LABEL_37;
  }
LABEL_14:
  LOBYTE(v17) = *(_BYTE *)(v12 + 16);
LABEL_15:
  switch ( (char)v17 )
  {
    case 3:
      goto LABEL_7;
    case 7:
      sub_E62440(a1, v12, a3);
      return;
    case 10:
      sub_E61BD0(a1, v12);
      return;
    case 11:
      v68 = *(_QWORD *)(v12 + 32);
      sub_E547F0(a1[1], v15);
      sub_E54680((__int64)a1, v15, v68);
      v69 = (__int64 *)(v68 & 0xFFFFFFFFFFFFFFF0LL);
      sub_971800(a1[1], "_E");
      v72 = *v69;
      if ( *(_BYTE *)(*v69 + 16) != 26 )
        v72 = sub_F3F310(*v69, v72, v70, v71);
      sub_E5F3E0((__int64)a1, v72, nullptr, 0, 1);
      return;
    case 13:
      sub_E58D00(a1, v12, a3);
      return;
    case 14:
      sub_E62700(a1, v12, a3);
      return;
    case 15:
      v73 = j__strlen("decltype()");
      v31 = "decltype()";
      v32 = v73;
      goto LABEL_48;
    case 16:
      v74 = j__strlen("'auto' type");
      v31 = "'auto' type";
      v32 = v74;
      goto LABEL_48;
    case 17:
      v75 = j__strlen("deduced class template specialization type");
      v31 = "deduced class template specialization type";
      v32 = v75;
      goto LABEL_48;
    case 18:
      v30 = j__strlen("dependent address space type");
      v31 = "dependent address space type";
      v32 = v30;
      goto LABEL_48;
    case 19:
      v33 = j__strlen("DependentBitInt type");
      v31 = "DependentBitInt type";
      v32 = v33;
      goto LABEL_48;
    case 20:
      v34 = j__strlen("dependent name type");
      v31 = "dependent name type";
      v32 = v34;
      goto LABEL_48;
    case 21:
      v35 = j__strlen("dependent-sized extended vector type");
      v31 = "dependent-sized extended vector type";
      v32 = v35;
      goto LABEL_48;
    case 22:
      v36 = j__strlen("dependent template specialization type");
      v31 = "dependent template specialization type";
      v32 = v36;
      goto LABEL_48;
    case 23:
      v37 = j__strlen("dependent-sized vector type");
      v31 = "dependent-sized vector type";
      v32 = v37;
      goto LABEL_48;
    case 25:
      v38 = a1[1];
      goto LABEL_55;
    case 26:
      v39 = *(_QWORD *)(v12 + 16);
      if ( (v39 & 0x1000000) != 0 )
      {
        v40 = *(unsigned __int16 *)(v12 + 22);
        v41 = (v39 & 0x40000000) != 0;
        v42 = 8 * v40 + 48;
        v43 = *(_BYTE *)(v12 + 19);
        if ( (v43 & 0x40) != 0 )
          v41 += (*(_BYTE *)(((v12 + v42 + ((v43 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v44 = ((v12 + v42 + ((SBYTE3(v39) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v41;
        v45 = ((unsigned __int8)v43 >> 1) & 0xF;
        if ( v45 != 2 )
          __asm { jmp     rdx }
        v97 = v44 + 8LL * (*(_WORD *)((v12 + v42 + ((v43 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
        if ( (v39 & 0x20000000) != 0 )
          v97 += v40;
        v98 = *(_QWORD *)((v97 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else
      {
        v98 = *(_BYTE *)(v12 + 18) >> 5;
      }
      v38 = a1[1];
      if ( !v98 && (*(_BYTE *)(v12 + 18) & 0x18) == 0 )
      {
LABEL_55:
        sub_971800(v38, "$$A6");
        goto LABEL_26;
      }
      v99 = *(_QWORD *)(v38 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v38 + 24) - v99) > 5 )
      {
        *(_DWORD *)v99 = 943793188;
        *(_WORD *)(v99 + 4) = 16448;
        *(_QWORD *)(v38 + 32) += 6LL;
      }
      else
      {
        sub_22581D0(v38, "$$A8@@", 6);
      }
      sub_E5F3E0((__int64)a1, v12, nullptr, 1, 1);
      break;
    case 31:
      sub_E629C0(a1, v12, a3);
      return;
    case 32:
      v53 = j__strlen("dependent-sized matrix type");
      v31 = "dependent-sized matrix type";
      v32 = v53;
      goto LABEL_48;
    case 33:
      v54 = *(_QWORD *)(v12 + 32);
      sub_E547F0(a1[1], v15);
      v55 = v15;
      sub_E54680((__int64)a1, v15, v54);
      v59 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v59 + 16) == 26
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
        && (v59 = sub_F3F310(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL), v55, v56, v57)) != 0 )
      {
        v60 = a1[1];
        v61 = *(_BYTE **)(v60 + 32);
        if ( (unsigned __int64)v61 >= *(_QWORD *)(v60 + 24) )
        {
          v55 = 56;
          sub_2257CD0(v60, 56);
        }
        else
        {
          v62 = v61 + 1;
          *(_QWORD *)(v60 + 32) = v61 + 1;
          *v61 = 56;
        }
        v63 = sub_F3DED0(v12, v55, v62, v57, v58);
        sub_E5E850(a1, v63, 0, v64, v65, v66);
        sub_E5F3E0((__int64)a1, v59, nullptr, 1, 1);
      }
      else
      {
        v102 = *(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL];
        v103 = 0;
        if ( (v102 & 8) != 0 )
          v103 = *(__int64 *)((char *)&qword_18 + (v102 & 0xFFFFFFFFFFFFFFF0LL));
        v104 = v103 | ((unsigned __int8)v54 | (unsigned __int8)v102) & 7;
        sub_E544F0((__int64)a1, v104, 1);
        v108 = sub_F3DED0(v12, v104, v105, v106, v107);
        sub_E5E850(a1, v108, 0, v109, v110, v111);
        sub_E608A0(a1, v54, a3, 0);
      }
      return;
    case 34:
      v67 = *(_QWORD *)(v12 + 32);
      if ( ((v15 >> 6) & 7) - 2 > 2 )
      {
        sub_E547F0(a1[1], v15);
LABEL_121:
        sub_E54680((__int64)a1, v15, v67);
LABEL_102:
        sub_E608A0(a1, v67, a3, 1);
      }
      else
      {
        sub_E62D00(a1, *(_QWORD *)(v12 + 32), v15, a3);
      }
      return;
    case 35:
      sub_E63060(a1, v12, v15, a3);
      return;
    case 36:
      v79 = a1[1];
      v80 = *(_BYTE **)(v79 + 32);
      if ( (unsigned __int64)v80 >= *(_QWORD *)(v79 + 24) )
      {
        v10 = 85;
        sub_2257CD0(v79, 85);
      }
      else
      {
        v81 = v80 + 1;
        *(_QWORD *)(v79 + 32) = v80 + 1;
        *v80 = 85;
      }
      v82 = sub_F3E8D0(v12, v10, v81, v14, v13);
      sub_E5E850(a1, v82, 0, v83, v84, v85);
      return;
    case 38:
      v86 = j__strlen("pack expansion");
      v31 = "pack expansion";
      v32 = v86;
      goto LABEL_48;
    case 39:
      sub_E547F0(a1[1], v15);
      v87 = sub_F3A3B0(v12);
      sub_E608A0(a1, *(_QWORD *)(v12 + 8LL * (unsigned int)(v87 - 1) + 64), a3, 1);
      return;
    case 41:
      sub_E63B00(a1, v12, a3);
      return;
    case 42:
      v67 = *(_QWORD *)(v12 + 32);
      sub_E547F0(a1[1], v15);
      sub_E54680((__int64)a1, v15, v67);
      v88 = HIDWORD(v15);
      if ( v88 )
      {
        sub_971800(a1[1], "__ptrauth");
        sub_E56120((__int64)a1, (void *)((unsigned __int16)v88 >> 6));
        sub_E56120((__int64)a1, (void *)((v88 >> 1) & 1));
        sub_E56120((__int64)a1, (void *)(v88 >> 16));
      }
      v89 = *(_QWORD *)&byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v89 & 8) == 0 )
        goto LABEL_102;
      v112 = (unsigned __int64)(v67 & 7
                              | (unsigned int)(v89 & 7)
                              | *(_DWORD *)((char *)&qword_18 + (v89 & 0xFFFFFFFFFFFFFFF0LL))) >> 9;
      if ( (unsigned int)(v112 - 16) <= 2 || !v112 )
        goto LABEL_102;
      sub_E63E00(
        a1,
        v67,
        v67 & 7
      | *(_QWORD *)&byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
      | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)),
        a3);
      return;
    case 43:
      v90 = v12;
      while ( 1 )
      {
        v67 = *(_QWORD *)(v90 + 32);
        if ( (*(_BYTE *)(v90 + 18) & 0x10) == 0 )
          break;
        v91 = v67 & 0xFFFFFFFFFFFFFFF0LL;
        v90 = *(_QWORD *)v91;
        v92 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v91 + 16LL) - 43;
        if ( (unsigned int)v92 > 1 )
          v90 = sub_F3F310(v90, v10, v92, v14);
      }
      v100 = a1[1];
      v101 = *(_BYTE **)(v100 + 32);
      if ( (unsigned __int64)v101 >= *(_QWORD *)(v100 + 24) )
      {
        sub_2257CD0(v100, 65);
      }
      else
      {
        *(_QWORD *)(v100 + 32) = v101 + 1;
        *v101 = 65;
      }
      goto LABEL_121;
    case 44:
      v93 = v12;
      while ( 1 )
      {
        v67 = *(_QWORD *)(v93 + 32);
        if ( (*(_BYTE *)(v93 + 18) & 0x10) == 0 )
          break;
        v94 = v67 & 0xFFFFFFFFFFFFFFF0LL;
        v93 = *(_QWORD *)v94;
        v95 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v94 + 16LL) - 43;
        if ( (unsigned int)v95 > 1 )
          v93 = sub_F3F310(v93, v10, v95, v14);
      }
      sub_971800(a1[1], "$$Q");
      goto LABEL_121;
    case 45:
      v96 = j__strlen("substituted parameter pack");
      v31 = "substituted parameter pack";
      v32 = v96;
      goto LABEL_48;
    case 47:
    case 48:
      v25 = sub_F3D1D0(v12, v10, v11, v14, v13);
      sub_E5EEC0(a1, v25, v26, v27, v28, v29);
      return;
    case 49:
      v78 = j__strlen("template specialization type");
      v31 = "template specialization type";
      v32 = v78;
      goto LABEL_48;
    case 50:
      v48 = a1[1];
      v49 = *(_BYTE **)(v48 + 32);
      if ( (unsigned __int64)v49 >= *(_QWORD *)(v48 + 24) )
      {
        sub_2257CD0(v48, 63);
      }
      else
      {
        *(_QWORD *)(v48 + 32) = v49 + 1;
        *v49 = 63;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
      ptr = v120;
      v50 = j__strlen("<TTPT_");
      sub_9FC110(&ptr, "<TTPT_", &aTtpt[v50]);
      sub_E55160((__int64 *)&v115, *(_WORD *)(v12 + 20) & 0x7FFF);
      sub_9FC110(&ptr, v115, (_BYTE *)v115 + v116);
      if ( v115 != v117 )
        operator delete(v115);
      v51 = j__strlen("_");
      sub_9FC110(&ptr, "_", &aObjcMetaclass[v51 + 16]);
      sub_E55160((__int64 *)&v115, *(unsigned __int16 *)(v12 + 22));
      sub_9FC110(&ptr, v115, (_BYTE *)v115 + v116);
      if ( v115 != v117 )
        operator delete(v115);
      v52 = j__strlen(">");
      sub_9FC110(&ptr, ">", &asc_22F4A90[v52 + 2]);
      sub_E58770((__int64)a1, ptr, si128.m128i_u64[0]);
      if ( ptr != v120 )
        free(ptr);
      return;
    case 51:
      v47 = j__strlen("typeof(expression)");
      v31 = "typeof(expression)";
      v32 = v47;
      goto LABEL_48;
    case 52:
      v46 = j__strlen("typeof(type)");
      v31 = "typeof(type)";
      v32 = v46;
      goto LABEL_48;
    case 54:
      v77 = j__strlen("unary transform type");
      v31 = "unary transform type";
      v32 = v77;
      goto LABEL_48;
    case 55:
      v76 = j__strlen("unresolved dependent type");
      v31 = "unresolved dependent type";
      v32 = v76;
LABEL_48:
      sub_E55260((__int64)&ptr, *a1, (unsigned int)a3, v31, v32);
      v115 = a3;
      LOBYTE(v116) = 1;
      sub_AC88D0((__int64 *)&ptr, (__int64 *)&v115);
      sub_AC6300((__int64)&ptr);
      return;
    case 57:
    case 58:
      sub_E641E0(a1, v12, a3);
      return;
    default:
      return;
  }
}

