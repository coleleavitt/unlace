unsigned __int64 __fastcall sub_59C070(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 *v3; // rax
  unsigned __int64 *v4; // r12
  __int64 v5; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  char *v12; // rbp
  unsigned __int64 v13; // rax
  char v14; // r14
  __int64 v15; // rdi
  int v16; // eax
  unsigned __int64 *v17; // rax
  char *v18; // r15
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rax
  bool v23; // bl
  __int64 *v24; // rbx
  unsigned __int64 v25; // rbp
  __int64 byte; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  char *v29; // rax
  __int64 *v30; // r8
  char v31; // r11
  char v32; // r11
  unsigned __int64 v33; // r15
  __int64 v34; // rdx
  __int64 *v35; // rax
  char v36; // bl
  unsigned __int64 v37; // r12
  size_t v38; // rbp
  unsigned __int64 v39; // r15
  __int64 *v40; // rdi
  _BYTE *v41; // rax
  __int64 v42; // rsi
  __int64 *v43; // r8
  int v44; // eax
  __int64 *v45; // rax
  char v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  _BYTE *v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // rbp
  __int64 *v53; // r12
  unsigned __int64 v54; // r8
  char v55; // al
  char v56; // bp
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // rbp
  void *v59; // r8
  unsigned __int64 v60; // r14
  void *v61; // rax
  __int64 v62; // rax
  __int64 bytes; // rax
  char *v64; // rdi
  char v65; // r9
  __int64 v66; // r14
  __int64 v67; // r12
  __int64 v68; // rbp
  __int64 v69; // r13
  signed __int64 v70; // r15
  unsigned __int8 v71; // al
  int v72; // ebx
  __int64 v73; // r11
  unsigned __int64 v74; // rsi
  int v75; // eax
  char *v76; // r14
  __int64 *v77; // rbx
  char *v78; // r12
  __int64 v79; // rdi
  __int64 v80; // rax
  char v81; // r9
  unsigned __int64 v82; // rax
  char v83; // r11
  unsigned __int64 v84; // rax
  char v85; // r12
  int v86; // eax
  __int64 flags_by_size; // rcx
  __int64 v88; // rax
  char v89; // r9
  unsigned __int64 v90; // rax
  __int64 v91; // rbp
  __int64 i; // rbx
  __int64 v93; // rax
  __int64 *v94; // r10
  __int64 v95; // [rsp+8h] [rbp-180h] BYREF
  unsigned __int64 v96; // [rsp+10h] [rbp-178h]
  unsigned __int64 v97; // [rsp+18h] [rbp-170h]
  unsigned __int64 v98; // [rsp+20h] [rbp-168h]
  void *ptr; // [rsp+28h] [rbp-160h]
  __int64 *v100; // [rsp+30h] [rbp-158h]
  __int64 v101; // [rsp+38h] [rbp-150h]
  char v102; // [rsp+47h] [rbp-141h]
  __int64 v103; // [rsp+48h] [rbp-140h]
  int v104[2]; // [rsp+50h] [rbp-138h]
  void *v105; // [rsp+58h] [rbp-130h]
  __int64 v106; // [rsp+60h] [rbp-128h]
  __int64 v107; // [rsp+68h] [rbp-120h]
  __int64 v108; // [rsp+70h] [rbp-118h] BYREF
  __m128i si128; // [rsp+78h] [rbp-110h]
  __int64 v110; // [rsp+88h] [rbp-100h]
  __int64 v111; // [rsp+90h] [rbp-F8h]
  int v112[4]; // [rsp+A0h] [rbp-E8h] BYREF
  int v113[2]; // [rsp+B0h] [rbp-D8h]
  int v114[2]; // [rsp+B8h] [rbp-D0h]
  _BYTE s2[64]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE s1[72]; // [rsp+100h] [rbp-88h] BYREF
  unsigned __int64 v117; // [rsp+148h] [rbp-40h]

  v2 = (__int64)a1;
  v95 = a2;
  v117 = __readfsqword(0x28u);
  v3 = sub_505D70((__int64)(a1 + 203), a2);
  if ( !v3 )
  {
    v17 = sub_505EB0((__int64)(a1 + 203), v95);
    v5 = -1;
    if ( v17 )
      v5 = *v17;
    goto LABEL_5;
  }
  v4 = v3;
  if ( (*((_WORD *)v3 + 22) & 0x18) == 8 || (unsigned __int8)is_spec_ea(v95) )
  {
    v5 = v4[1];
LABEL_5:
    sub_3A4190((__int64)a1, (char *)v95, (char *)v5, 0xC8u);
    return 0;
  }
  v7 = sub_3BE900(a1, v95, 4);
  if ( (sub_631AD0(*a1, 10) & 0x80000) != 0 )
  {
    v108 = 0;
    v110 = 0;
    v111 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
    if ( (unsigned __int8)get_fixup(&v108, v95) )
    {
      if ( (_WORD)v108 == 2 && (sub_3BE900(a1, v95 - 2, 4) & 0x600) == 0 )
      {
        v8 = v95 - 2;
        if ( (unsigned __int8)sub_41D110((__int64)a1, v95 - 2, v95, 0, 0) )
          return get_item_end(v95, v8, v9, v10) - v95;
      }
      v8 = v95;
      if ( (unsigned __int8)sub_41D110((__int64)a1, v95, v95, 0, 0) )
        return get_item_end(v95, v8, v9, v10) - v95;
    }
    else if ( (unsigned __int8)get_fixup(&v108, v95 + 2) )
    {
      if ( (_WORD)v108 == 2 )
      {
        v8 = v95;
        if ( (unsigned __int8)sub_41D110((__int64)a1, v95, v95 + 2, 0, 0) )
          return get_item_end(v95, v8, v9, v10) - v95;
      }
    }
  }
  v96 = 1;
  if ( (unsigned __int8)sub_410280(a1, 0xFFFFFFFFFFFFFFFFLL, v95, v7, 1u) )
    return v96;
  v11 = sub_3792E0(0x1Bu, v95);
  if ( v11 )
    return v11;
  if ( a1[155] != a1[157] || (unsigned __int64)v95 < a1[158] || (v12 = (char *)a1[159], v95 >= (unsigned __int64)v12) )
  {
    v13 = sub_3C22F0(a1, v95, 15);
    a1[159] = v13;
    v12 = (char *)v13;
    *(__m128 *)(a1 + 157) = _mm_loadh_ps((const double *)&v95);
  }
  v15 = *a1;
  LOBYTE(v97) = *((_BYTE *)v4 + 184);
  v14 = v97;
  v16 = sub_631AD0(v15, 10);
  if ( v14 == 2 )
  {
    if ( (v16 & 0x40000000) == 0 )
      goto LABEL_22;
    v18 = &v12[-v95];
    sub_3BEB30((_QWORD *)v2, &v108, v95);
    v85 = v108;
    if ( !(_BYTE)v108 )
      goto LABEL_30;
    v86 = is_align_insn(v95);
    v96 = v86;
    if ( !v86 )
      goto LABEL_30;
    if ( (unsigned __int64)v18 < v96 )
    {
      v21 = 1;
      goto LABEL_155;
    }
    if ( v96 != 1 || v18 == (_BYTE *)&dword_0 + 1 )
    {
LABEL_149:
      v21 = 1;
      flags_by_size = get_flags_by_size(1);
      v88 = 1024;
      if ( flags_by_size )
        v88 = flags_by_size;
      v103 = v88;
      goto LABEL_42;
    }
    v91 = v95;
    for ( i = 1; (char *)i != v18; ++i )
    {
      sub_3BEB30((_QWORD *)v2, &v108, v91 + i);
      if ( v85 != (_BYTE)v108 )
      {
        v96 = i;
        goto LABEL_149;
      }
    }
    v21 = 1;
    v93 = get_flags_by_size(1);
    v96 = (unsigned __int64)v18;
    v103 = v93;
    if ( !v93 )
      v103 = 1024;
LABEL_42:
    v24 = (__int64 *)v95;
LABEL_54:
    v102 = sub_3C0260((_QWORD *)v2, (unsigned __int64)v24);
    v30 = (__int64 *)((char *)v24 + v96);
    if ( !v102 )
      goto LABEL_43;
    v31 = 0;
    if ( v21 > 0x40 )
    {
      s2[0] = 0;
      if ( v24 >= v30 || v96 < v21 )
      {
LABEL_136:
        if ( !under_debugger )
          interr(1199);
        BUG();
      }
      v103 = 1024;
      v32 = 0;
      v33 = 1;
      goto LABEL_59;
    }
    while ( 1 )
    {
      v33 = v21;
      v56 = v31;
      v57 = (unsigned __int64)v30;
      while ( 1 )
      {
        s2[0] = 0;
        if ( (unsigned __int64)v24 < v57 && v96 >= v21 )
          break;
        if ( v21 <= 1 )
          goto LABEL_136;
        v21 >>= 1;
        v103 = get_flags_by_size(v21);
        if ( !(unsigned __int8)sub_3C0260((_QWORD *)v2, (unsigned __int64)v24) )
        {
          v102 = v56;
          v30 = (__int64 *)v57;
          goto LABEL_43;
        }
        v33 = v21;
      }
      v32 = v56;
      v30 = (__int64 *)v57;
LABEL_59:
      v97 = (unsigned __int64)v24;
      LOBYTE(v104[0]) = v32;
      v98 = (unsigned __int64)v30;
      v34 = 512;
      if ( v96 / v21 <= 0x200 )
        v34 = v96 / v21;
      v35 = v24;
      v36 = v33;
      LOBYTE(v101) = v33 > 1;
      v37 = 0;
      ptr = (void *)v34;
      v38 = v33;
      v39 = (unsigned __int64)v35;
      while ( 2 )
      {
        if ( sub_3BFD20((__int64 *)v2, s1, v38, v39, 0, 0) != v38 )
        {
          v82 = v39;
          v24 = (__int64 *)v97;
          v54 = v98;
          v51 = v38;
          v83 = v102;
          v52 = v37;
          v53 = (__int64 *)v82;
          goto LABEL_134;
        }
        v43 = (__int64 *)s2;
        if ( v97 != v39 )
        {
          v43 = (__int64 *)s2;
          if ( *(_QWORD *)(*(_QWORD *)(v2 + 32) + 152LL) )
          {
            v100 = (__int64 *)s2;
            v44 = memcmp(s1, s2, v38);
            v43 = v100;
            if ( !v44 )
              goto LABEL_69;
          }
        }
        v45 = v43;
        v46 = v101 & (v37 != 0);
        if ( !v46 )
        {
          ++v37;
          v40 = v43;
          v41 = s1;
          if ( (unsigned int)v38 >= 8 )
            goto LABEL_77;
          goto LABEL_63;
        }
        do
        {
          if ( v45 == (__int64 *)((char *)v43 + v38) )
          {
            v49 = s1;
            do
            {
              if ( v49 == &s1[v38] )
                goto LABEL_62;
              ++v49;
            }
            while ( !*(v49 - 1) );
            v24 = (__int64 *)v97;
            v50 = v39;
            v51 = v38;
            v52 = v37;
            v53 = (__int64 *)v50;
            v54 = v98;
            v97 = v50 - v97;
            if ( !v97 )
              goto LABEL_86;
            goto LABEL_97;
          }
          v45 = (__int64 *)((char *)v45 + 1);
        }
        while ( !*((_BYTE *)v45 - 1) );
LABEL_62:
        ++v37;
        v40 = v43;
        v41 = s1;
        if ( (unsigned int)v38 < 8 )
          goto LABEL_63;
LABEL_77:
        LODWORD(v47) = 0;
        do
        {
          v48 = (unsigned int)v47;
          v47 = (unsigned int)(v47 + 8);
          *(__int64 *)((char *)v43 + v48) = *(_QWORD *)&s1[v48];
        }
        while ( (unsigned int)v47 < (v38 & 0xFFFFFFF8) );
        v40 = (__int64 *)((char *)v43 + v47);
        v41 = &s1[v47];
LABEL_63:
        v42 = 0;
        if ( (v36 & 4) != 0 )
        {
          *(_DWORD *)v40 = *(_DWORD *)v41;
          v42 = 4;
        }
        if ( (v36 & 2) != 0 )
        {
          *(_WORD *)((char *)v40 + v42) = *(_WORD *)&v41[v42];
          v42 += 2;
        }
        if ( (v36 & 1) != 0 )
          *((_BYTE *)v40 + v42) = v41[v42];
LABEL_69:
        v39 += v38;
        if ( v39 < v98 && v37 < (unsigned __int64)ptr )
          continue;
        break;
      }
      v84 = v39;
      v24 = (__int64 *)v97;
      v51 = v38;
      v54 = v98;
      v52 = v37;
      v83 = v104[0];
      v53 = (__int64 *)v84;
LABEL_134:
      v46 = v83;
      v97 = (char *)v53 - (char *)v24;
      if ( v53 != v24 )
        break;
      if ( v51 <= 1 )
        goto LABEL_136;
LABEL_86:
      v98 = v54;
      LOBYTE(v97) = v46;
      v21 = v51 >> 1;
      v103 = get_flags_by_size(v51 >> 1);
      v55 = sub_3C0260((_QWORD *)v2, (unsigned __int64)v24);
      v30 = (__int64 *)v98;
      if ( !v55 )
      {
        v102 = v97;
LABEL_43:
        v25 = v96;
        if ( v24 < v30 )
        {
          byte = find_byte((char *)v24 + 1, v96 - 1, 0, 4);
          if ( byte != -1 )
          {
            v27 = byte - (_QWORD)v24;
            v25 = (byte - (__int64)v24) % v21;
            if ( v27 == v27 % v21 )
            {
              v102 = 1;
              v21 = 1;
              v103 = 1024;
            }
            else
            {
              v25 = v27 - (byte - (__int64)v24) % v21;
            }
          }
        }
        v28 = *(_QWORD *)(v2 + 32);
        if ( !*(_QWORD *)(v28 + 160) && !*(_QWORD *)(v28 + 152) )
        {
          v58 = v25 / v21;
          if ( v58 > 0x200 )
            v58 = 512;
          v25 = v21 * v58;
        }
        goto LABEL_48;
      }
      v31 = v97;
    }
LABEL_97:
    v59 = (void *)(v54 - (_QWORD)v53);
    v60 = v97;
    LOBYTE(v98) = v46;
    v61 = nullptr;
    if ( v52 >= (unsigned __int64)ptr )
      v61 = v59;
    ptr = v61;
    if ( v97 - 17 > 0xFFEF )
      goto LABEL_129;
    v62 = qalloc(v97);
    if ( !v62 )
      goto LABEL_129;
    LOBYTE(v100) = v98;
    v98 = v62;
    bytes = get_bytes(v62, v60, v24, 0, 0);
    v64 = (char *)v98;
    v65 = (char)v100;
    if ( (int)bytes <= 0 )
    {
LABEL_128:
      LOBYTE(v98) = v65;
      qfree(v64);
LABEL_129:
      v80 = sub_59BCA0((__int64 *)v2, (unsigned __int64)v24, v97, v95);
      v81 = v98;
      v25 = v80;
      goto LABEL_130;
    }
    v101 = v51;
    v66 = v95;
    v106 = v2;
    v67 = (__int64)v24;
    LOBYTE(v98) = 0;
    v68 = -1;
    v69 = (__int64)v24 + (unsigned int)(bytes - 1) + 1;
    v70 = v64 - (char *)v24;
    *(_QWORD *)v104 = v24;
    v105 = v64;
    v107 = bytes;
    while ( 1 )
    {
      v71 = *(_BYTE *)(v70 + v67);
      if ( !v71 )
        break;
      if ( (v71 & 0x80u) != 0 )
        goto LABEL_107;
      v72 = v71;
      if ( !(unsigned __int8)is_valid_cp(v71, 1, 0) )
        goto LABEL_107;
      if ( v68 == -1 )
      {
        LOBYTE(v98) = 0;
        v68 = v67;
      }
      LOBYTE(v98) = (isalnum(v72) != 0) | v98;
LABEL_108:
      if ( v67 + 1 == v69 )
      {
        v73 = v69;
        v65 = (char)v100;
        v51 = v101;
        v24 = *(__int64 **)v104;
        v64 = (char *)v105;
        v2 = v106;
        if ( v95 == v68 || v68 == -1 || !ptr || (int)v107 != v97 )
          goto LABEL_128;
        v74 = (unsigned __int64)ptr;
        ptr = v105;
        *(_QWORD *)v104 = v67 + 1;
        if ( v74 > v97 )
          v74 = v97;
        v75 = get_bytes(v105, v74, v73, 0, 0);
        v64 = (char *)ptr;
        v65 = (char)v100;
        if ( v75 <= 0 )
          goto LABEL_128;
        LOBYTE(ptr) = (_BYTE)v100;
        v76 = v64;
        v100 = v24;
        v77 = *(__int64 **)v104;
        v101 = v67 + (unsigned int)(v75 - 1) + 2;
        v78 = &v64[~v67];
        while ( 1 )
        {
          v79 = *((unsigned __int8 *)v77 + (_QWORD)v78);
          if ( !(_BYTE)v79 )
            break;
          if ( (v79 & 0x80u) == 0LL )
          {
            v104[0] = *((unsigned __int8 *)v77 + (_QWORD)v78);
            if ( (unsigned __int8)is_valid_cp(v79, 1, 0) )
            {
              v77 = (__int64 *)((char *)v77 + 1);
              LOBYTE(v98) = (isalnum(v104[0]) != 0) | v98;
              if ( (__int64 *)v101 != v77 )
                continue;
            }
          }
          v65 = (char)ptr;
          v24 = v100;
          v64 = v76;
          goto LABEL_128;
        }
        v94 = v77;
        v65 = (char)ptr;
        v24 = v100;
        v64 = v76;
        if ( (unsigned __int64)v94 - v68 <= 0x10 || !(_BYTE)v98 )
          goto LABEL_128;
        LOBYTE(v98) = (_BYTE)ptr;
        v25 = v68 - (_QWORD)v100;
        qfree(v76);
        v89 = v98;
LABEL_160:
        LOBYTE(v98) = v89;
        v90 = sub_59BCA0((__int64 *)v2, (unsigned __int64)v24, v97, v95);
        v81 = v98;
        if ( v25 < v90 )
          goto LABEL_132;
        v25 = v90;
LABEL_130:
        if ( v25 == -1 )
        {
          v102 = v81;
          v25 = v97;
        }
LABEL_132:
        v21 = v51;
LABEL_48:
        remember_problem(13, v24, 0);
        *(_OWORD *)v112 = 0;
        *(_QWORD *)v113 = 0;
        *(_QWORD *)v114 = 0;
        sub_3D4400((__int64 *)v2, v24, v103, (char *)v25, (void *)0xFFFFFFFFFFFFFFFFLL, (const __m128i *)v112);
        if ( *(_QWORD *)v113 )
          (*(void (__fastcall **)(int *, int *, __int64))v113)(v112, v112, 3);
        v29 = *(char **)(v2 + 1240);
        if ( v29 == (char *)(v25 + *(_QWORD *)(v2 + 1256)) )
          *(__m128i *)(v2 + 1256) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)v29,
                                      (__m128i)((unsigned __int64)v24 + v25));
        if ( v102 )
          return (unsigned __int64)v24 - v95;
        v24 = (__int64 *)((char *)v24 + v25);
        v96 -= v25;
        if ( !v96 )
          return (unsigned __int64)v24 - v95;
        goto LABEL_54;
      }
      ++v67;
    }
    if ( v68 != -1 && v66 != v68 && (unsigned __int64)(v67 - v68) > 0x10 && (_BYTE)v98 )
    {
      v24 = *(__int64 **)v104;
      v51 = v101;
      LOBYTE(v98) = (_BYTE)v100;
      v2 = v106;
      qfree(v105);
      v89 = v98;
      v25 = v68 - (_QWORD)v24;
      goto LABEL_160;
    }
LABEL_107:
    v68 = -1;
    goto LABEL_108;
  }
  if ( (v16 & 0x20000000) == 0 )
  {
LABEL_22:
    sub_3A4190(v2, (char *)v95, v12, 0xC8u);
    return 0;
  }
  v18 = &v12[-v95];
  sub_3BEB30((_QWORD *)v2, &v108, v95);
LABEL_30:
  v19 = v95;
  v20 = sub_59BB00((_QWORD *)v2, v95);
  v21 = v20;
  if ( ((v20 - 1) & v19) == 0 )
  {
LABEL_155:
    v96 = (unsigned __int64)v18;
    v23 = (unsigned __int64)v18 < v21;
    goto LABEL_38;
  }
  do
    v21 >>= 1;
  while ( (v95 & (v21 - 1)) != 0 );
  v22 = (v95 + (int)v20 - 1) & -(int)v20;
  if ( v22 < v95 )
    v22 = v95;
  if ( v22 <= (unsigned __int64)v12 )
    v12 = (char *)v22;
  v11 = sub_59BF40(v95, v7, (unsigned __int64)v12, (_BYTE)v97 == 2);
  if ( v11 )
    return v11;
  v96 = (unsigned __int64)&v12[-v95];
  v23 = (unsigned __int64)&v12[-v95] < v21;
LABEL_38:
  v103 = get_flags_by_size(v21);
  if ( !v103 || v23 )
  {
    v103 = 1024;
    v21 = 1;
  }
  else
  {
    v96 -= v96 % v21;
  }
  if ( v96 )
    goto LABEL_42;
  return v96;
}
