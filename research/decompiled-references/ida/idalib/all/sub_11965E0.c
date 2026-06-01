void __fastcall sub_11965E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 si128,
        __m128i a8)
{
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  void *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rax
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  int v21; // r13d
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rdx
  unsigned int v25; // r12d
  __int64 v26; // rcx
  __int64 v27; // rbp
  _DWORD *v28; // rdi
  unsigned __int8 (*v29)(void); // rax
  int v30; // eax
  __int64 v31; // rax
  _QWORD *v32; // rbp
  _QWORD *v33; // r8
  unsigned __int32 v34; // r12d
  _QWORD *v35; // r13
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  _QWORD *v42; // rbx
  __int64 v43; // rbx
  __int64 *v44; // r8
  __int64 *v45; // r15
  __int64 i; // rax
  __int64 v47; // rbx
  __int64 v48; // rbp
  const __m128i *v49; // rdx
  __int64 v50; // rax
  const __m128i *v51; // r13
  __int64 v52; // r14
  void *v53; // r12
  int v54; // r12d
  __int64 v55; // r14
  _BYTE *v56; // r15
  unsigned int v57; // r13d
  const char **v58; // rbx
  const char *v59; // rbp
  _BYTE *v60; // rdx
  _BYTE *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  const __m128i *v65; // r13
  __int64 v66; // r14
  _QWORD *v67; // r12
  _QWORD *v68; // rbp
  _QWORD *v69; // rax
  __int64 *v70; // r12
  __int64 v71; // rdi
  size_t v72; // rax
  __int64 v73; // rax
  unsigned int v74; // [rsp+10h] [rbp-3C8h]
  __int64 v75; // [rsp+10h] [rbp-3C8h]
  __int64 v77; // [rsp+28h] [rbp-3B0h]
  __int64 *v78; // [rsp+28h] [rbp-3B0h]
  __int64 v79; // [rsp+28h] [rbp-3B0h]
  __int64 v80; // [rsp+28h] [rbp-3B0h]
  __int64 v81; // [rsp+28h] [rbp-3B0h]
  __int64 v82; // [rsp+30h] [rbp-3A8h]
  _QWORD *v83; // [rsp+30h] [rbp-3A8h]
  __int64 v84; // [rsp+38h] [rbp-3A0h]
  unsigned __int64 v87; // [rsp+58h] [rbp-380h]
  __int64 *v88; // [rsp+58h] [rbp-380h]
  __int64 v90; // [rsp+68h] [rbp-370h]
  __int64 *v91; // [rsp+78h] [rbp-360h]
  __int64 v92; // [rsp+80h] [rbp-358h]
  char *v94; // [rsp+98h] [rbp-340h]
  void *v95[2]; // [rsp+A0h] [rbp-338h] BYREF
  __int64 v96; // [rsp+B0h] [rbp-328h] BYREF
  void *ptr; // [rsp+C0h] [rbp-318h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-310h]
  _BYTE v99[128]; // [rsp+D0h] [rbp-308h] BYREF
  __m128i v100; // [rsp+150h] [rbp-288h] BYREF
  _BYTE v101[128]; // [rsp+160h] [rbp-278h] BYREF
  void *v102; // [rsp+1E0h] [rbp-1F8h] BYREF
  __m128 v103; // [rsp+1E8h] [rbp-1F0h] BYREF
  __int64 v104; // [rsp+1F8h] [rbp-1E0h] BYREF
  __int16 v105; // [rsp+200h] [rbp-1D8h]
  void *v106; // [rsp+280h] [rbp-158h] BYREF
  __m128 v107; // [rsp+288h] [rbp-150h] BYREF
  _QWORD *v108; // [rsp+298h] [rbp-140h] BYREF
  __int16 v109; // [rsp+2A0h] [rbp-138h]

  v8 = a6;
  v9 = *(_QWORD *)a5;
  ptr = v99;
  v98 = 0x1000000000LL;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD *)(v10 + 8);
  v12 = (void *)(v10 + 1760);
  v92 = v10;
  v91 = (__int64 *)v9;
  v84 = v11;
  sub_21B7CF0(a6, 3480);
  sub_21B7CF0(v8, 345);
  sub_11BB1A0(v8);
  sub_10DC5D0((__int64)&ptr, (__int64)"-cc1as");
  sub_10DC5D0((__int64)&ptr, (__int64)"-triple");
  v106 = v12;
  v109 = 260;
  v13 = sub_10DA6C0(v8, (__int64)&v106);
  sub_10DC5D0((__int64)&ptr, v13);
  (*(void (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(a1 + 24) + 576LL))(*(_QWORD *)(a1 + 24), v8, &ptr);
  sub_10DC5D0((__int64)&ptr, (__int64)"-filetype");
  sub_10DC5D0((__int64)&ptr, (__int64)"obj");
  sub_10DC5D0((__int64)&ptr, (__int64)"-main-file-name");
  v14 = sub_118A550(v8, v9);
  sub_10DC5D0((__int64)&ptr, v14);
  sub_11C8180(v95, v11, v8, v12, 1);
  if ( v95[1] )
  {
    sub_10DC5D0((__int64)&ptr, (__int64)"-target-cpu");
    v109 = 260;
    v106 = v95;
    v63 = sub_10DA6C0(v8, (__int64)&v106);
    sub_10DC5D0((__int64)&ptr, v63);
  }
  sub_11CCDF0(v11, v12, v8, &ptr, 1, 0);
  sub_10DCD30(v8, 0x626u);
  sub_21B7F70(v8, &ptr, 5);
  sub_21B7F70(v8, &ptr, 332);
  v15 = a3;
  if ( *(_DWORD *)(a3 + 8) )
  {
    do
    {
      v16 = *(__int64 **)(v15 + 16);
      v15 = *v16;
    }
    while ( *(_DWORD *)(*v16 + 8) );
  }
  LOBYTE(v17) = 0;
  sub_21B7CF0(v8, 36);
  v18 = sub_10DCD30(v8, 0x24u);
  v19 = v18;
  if ( v18 && !(unsigned __int8)sub_21B9810(v18, 1982) )
    v17 = sub_21B9810(v19, 2016) ^ 1;
  v20 = sub_11BFE90(v8);
  if ( v20 )
  {
    v21 = sub_1189FF0(v20, v8, (__int64 *)v84, *(_QWORD **)(a1 + 24));
    v22 = sub_10DCD30(v8, 0x7CBu);
    LOBYTE(v23) = v21;
    if ( !v22 )
      goto LABEL_11;
  }
  else
  {
    v21 = 0;
    v22 = sub_10DCD30(v8, 0x7CBu);
    if ( !v22 )
    {
LABEL_22:
      if ( (_BYTE)v17 )
      {
        v74 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 400LL))(*(_QWORD *)(a1 + 24));
        v24 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
        if ( !v74 )
        {
          v94 = (char *)sub_1196410(v8, (__int64)&ptr, v24);
          if ( (unsigned int)(*(_DWORD *)(v15 + 12) - 38) > 1 )
            goto LABEL_15;
          goto LABEL_91;
        }
      }
      else
      {
        v24 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
      }
      goto LABEL_24;
    }
  }
  v23 = v21 | sub_1189FF0(v22, v8, (__int64 *)v84, *(_QWORD **)(a1 + 24));
LABEL_11:
  if ( !(_BYTE)v23 )
    goto LABEL_22;
  v24 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  if ( !(_BYTE)v21 )
  {
LABEL_24:
    v94 = (char *)sub_1196410(v8, (__int64)&ptr, v24);
    v30 = *(_DWORD *)(v15 + 12);
    if ( v30 != 39 && v30 != 38 )
      goto LABEL_14;
    goto LABEL_26;
  }
  v94 = (char *)sub_1196410(v8, (__int64)&ptr, v24);
  if ( (unsigned int)(*(_DWORD *)(v15 + 12) - 38) > 1 )
  {
LABEL_14:
    v74 = 0;
    goto LABEL_15;
  }
  if ( (_BYTE)v17 )
  {
LABEL_91:
    v74 = 4;
    goto LABEL_27;
  }
LABEL_26:
  v74 = 0;
LABEL_27:
  sub_118BCD0(*(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL), *(_QWORD *)(a1 + 24), (__int64 *)v8, (__int64)&ptr);
  sub_10DC5D0((__int64)&ptr, (__int64)"-dwarf-debug-producer");
  sub_10CD100((__int64)&v102);
  v109 = 260;
  v106 = &v102;
  v31 = sub_10DA6C0(v8, (__int64)&v106);
  sub_10DC5D0((__int64)&ptr, v31);
  if ( v102 != &v103.m128_u16[4] )
    operator delete(v102);
  sub_21B7F70(v8, &ptr, 2175);
LABEL_15:
  v25 = sub_11BCC10(*(_QWORD *)(a1 + 24), v8);
  sub_11BBD10(&ptr, v74);
  if ( v25 )
  {
    v105 = 265;
    v106 = "-dwarf-version=";
    v109 = 259;
    LODWORD(v102) = v25;
    sub_A41580(&v100, (const __m128i *)&v106, (const __m128i *)&v102, v26, 265, 259);
    v64 = sub_10DA6C0(v8, (__int64)&v100);
    sub_10DC5D0((__int64)&ptr, v64);
  }
  sub_118BB40((__int64 *)v84, (__int64)v12, v8, (__int64)&ptr, v25);
  sub_118F190(v8, (__int64)&ptr, (__int64 *)v84, *(_QWORD **)(a1 + 24));
  sub_11C59A0(&v106, *(_QWORD *)(a1 + 24), v8);
  v27 = sub_11BB370(v107.m128_u32[0]);
  if ( v27 )
  {
    sub_10DC5D0((__int64)&ptr, (__int64)"-mrelocation-model");
    sub_10DC5D0((__int64)&ptr, v27);
  }
  v28 = *(_DWORD **)(a1 + 24);
  v29 = *(unsigned __int8 (**)(void))(*(_QWORD *)v28 + 408LL);
  if ( (char *)v29 != (char *)sub_10D8230 )
  {
    if ( v29() )
    {
      v67 = *(_QWORD **)(v8 + 8);
      v100.m128i_i64[0] = (__int64)v101;
      v100.m128i_i64[1] = 0x1000000000LL;
      v68 = &v67[*(unsigned int *)(v8 + 16)];
      if ( v68 != v67 )
      {
        while ( !*v67 )
        {
          if ( v68 == ++v67 )
            goto LABEL_103;
        }
        while ( 1 )
        {
          sub_21B5A40(*v67, v8, &v100);
          v69 = v67 + 1;
          if ( v67 + 1 == v68 )
            break;
          if ( !v67[1] )
          {
            do
            {
              if ( v68 == ++v69 )
                goto LABEL_103;
            }
            while ( !*v69 );
          }
          v67 = v69;
        }
      }
LABEL_103:
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      v107 = si128;
      v106 = &v108;
      sub_11BB7F0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 136LL));
      v70 = (__int64 *)v100.m128i_i64[0];
      v81 = v100.m128i_i64[0] + 8LL * v100.m128i_u32[2];
      if ( v81 != v100.m128i_i64[0] )
      {
        do
        {
          while ( 1 )
          {
            a8 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
            v71 = *v70;
            v103 = (__m128)a8;
            v102 = &v104;
            sub_11BB7F0(v71);
            v72 = j__strlen(" ");
            sub_A1FE50(&v106, " ", &asc_22D9D59[v72]);
            sub_A1FE50(&v106, v102, (_BYTE *)v102 + v103.m128_u64[0]);
            if ( v102 == &v104 )
              break;
            free(v102);
            if ( (__int64 *)v81 == ++v70 )
              goto LABEL_106;
          }
          ++v70;
        }
        while ( (__int64 *)v81 != v70 );
      }
LABEL_106:
      sub_10DC5D0((__int64)&ptr, (__int64)"-dwarf-debug-flags");
      v105 = 261;
      v102 = v106;
      v103.m128_u64[0] = v107.m128_u64[0];
      v73 = sub_10DA6C0(v8, (__int64)&v102);
      sub_10DC5D0((__int64)&ptr, v73);
      if ( v106 != &v108 )
        free(v106);
      if ( (_BYTE *)v100.m128i_i64[0] != v101 )
        free((void *)v100.m128i_i64[0]);
    }
    v28 = *(_DWORD **)(a1 + 24);
  }
  switch ( v28[12] )
  {
    case 1:
    case 2:
    case 0x23:
    case 0x24:
      if ( (unsigned __int8)sub_21B7850(v8, 2333, 2578, 1) )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"-mllvm");
        sub_10DC5D0((__int64)&ptr, (__int64)"-arm-add-build-attributes");
      }
      break;
    case 3:
    case 4:
    case 5:
      if ( sub_10DCD30(v8, 0x9B2u) )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"-mllvm");
        sub_10DC5D0((__int64)&ptr, (__int64)"-aarch64-mark-bti-property");
      }
      break;
    case 0xC:
      if ( (unsigned __int8)sub_21B7850(v8, 2333, 2578, 1) )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"-mllvm");
        sub_10DC5D0((__int64)&ptr, (__int64)"-hexagon-add-build-attributes");
      }
      break;
    case 0xD:
    case 0xE:
      sub_118A730(a1, v8, (__int64)&ptr);
      break;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      sub_118A660(a1, v8, (__int64)&ptr);
      break;
    case 0x1B:
    case 0x1C:
      sub_118A7E0(a1, v8, (__int64)&ptr);
      break;
    case 0x25:
    case 0x26:
      sub_118D420(a1, v8, (__int64)&ptr);
      break;
    default:
      break;
  }
  sub_21B7CF0(v8, 16);
  sub_1190050((_QWORD *)a2, v8, (__int64)&ptr, *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL));
  sub_10DC500((__int64)&v106, v8, 0xDA2u);
  v32 = (_QWORD *)v107.m128_u64[0];
  v77 = v15;
  v33 = v106;
  v34 = v107.m128_u32[2];
  v35 = v108;
  v87 = v107.m128_u64[0] - 16;
  while ( v35 != v33 )
  {
    while ( 1 )
    {
      v36 = *v33;
      v37 = HIDWORD(v98);
      v38 = *(_QWORD *)(*v33 + 16LL);
      if ( !v38 )
        v38 = *v33;
      *(_BYTE *)(v38 + 44) |= 1u;
      v39 = **(_QWORD **)(v36 + 48);
      v40 = (unsigned int)v98;
      v41 = (unsigned int)v98 + 1LL;
      if ( v41 > v37 )
      {
        v83 = v33;
        sub_2237220(&ptr, v99, v41, 8);
        v40 = (unsigned int)v98;
        v33 = v83;
      }
      *((_QWORD *)ptr + v40) = v39;
      v42 = v33 + 1;
      LODWORD(v98) = v98 + 1;
      if ( v33 + 1 != v32 )
        break;
LABEL_46:
      v33 = v32;
      if ( v35 == v32 )
        goto LABEL_47;
    }
    if ( v34 )
    {
      while ( !*v42 || !(unsigned __int8)sub_21B9810(*v42, v34) )
      {
        if ( v32 == ++v42 )
          goto LABEL_46;
      }
      v33 = v42;
    }
    else
    {
      v33 = &v42[((v87 - (unsigned __int64)v33) >> 3) + 1];
    }
  }
LABEL_47:
  v43 = v77;
  sub_21B7F70(v8, &ptr, 2465);
  if ( v74 && *(_DWORD *)(a4 + 8) == 1 )
    sub_11930D0(v8, (__int64)&ptr, v94, *(char **)a4);
  v44 = *(__int64 **)(a2 + 152);
  v78 = &v44[*(unsigned int *)(a2 + 160)];
  if ( v78 != v44 )
  {
    v82 = v43;
    v90 = v8;
    v45 = *(__int64 **)(a2 + 152);
    do
    {
      v75 = *v45;
      for ( i = *(_QWORD *)(*v45 + 8); *(_DWORD *)(i + 8); i = **(_QWORD **)(i + 16) )
        ;
      if ( i == v82 && *(_DWORD *)(v75 + 64) )
      {
        v88 = v45;
        v54 = 0;
        v55 = 0;
        v56 = *(_BYTE **)(v75 + 56);
        v57 = *(_DWORD *)(v75 + 64);
        while ( 1 )
        {
          v58 = (const char **)&v56[8 * v55];
          v59 = *v58;
          if ( *v58 )
          {
            if ( strlen(*v58) > 0x11
              && !(*(_QWORD *)v59 ^ 0x2D7463656A626F2DLL | *((_QWORD *)v59 + 1) ^ 0x6D616E2D656C6966LL)
              && *((_WORD *)v59 + 8) == 15717
              && *(_DWORD *)(a4 + 8) == 1 )
            {
              break;
            }
          }
          v55 = (unsigned int)(v54 + 1);
          v54 = v55;
          if ( (unsigned int)v55 >= v57 )
          {
            v45 = v88;
            goto LABEL_55;
          }
        }
        v60 = &v56[8 * v55];
        v61 = v56;
        v45 = v88;
        v103.m128_u64[0] = 0x1000000000LL;
        v102 = &v103.m128_u16[4];
        sub_118FFD0((__int64)&v102, v61, v60);
        sub_11930D0(v90, (__int64)&v102, v94, *(char **)a4);
        sub_118FFD0(
          (__int64)&v102,
          (_BYTE *)(*(_QWORD *)(v75 + 56) + 8 * v55 + 8),
          (_BYTE *)(*(_QWORD *)(v75 + 56) + 8LL * *(unsigned int *)(v75 + 64)));
        v107.m128_u64[0] = 0x1000000000LL;
        v106 = &v107.m128_u16[4];
        if ( v103.m128_i32[0] )
          sub_10DED70(&v106, (char **)&v102);
        sub_10E02C0((char ***)(v75 + 56), (char ***)&v106);
        if ( v106 != &v107.m128_u16[4] )
          free(v106);
        if ( v102 != &v103.m128_u16[4] )
          free(v102);
      }
LABEL_55:
      ++v45;
    }
    while ( v78 != v45 );
    v8 = v90;
  }
  sub_10DC5D0((__int64)&ptr, (__int64)"-o");
  sub_10DC5D0((__int64)&ptr, *(_QWORD *)a4);
  v47 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)sub_118C150((__int64 *)v84, v8, (__int64 *)&v102) == 1 && *(_DWORD *)(v47 + 68) == 3 )
  {
    sub_10DC5D0((__int64)&ptr, (__int64)"-split-dwarf-output");
    v62 = sub_11C11C0(a3, v8, v91, a4);
    sub_10DC5D0((__int64)&ptr, v62);
  }
  if ( (unsigned int)(*(_DWORD *)(v92 + 1792) - 25) <= 1 && (unsigned __int8)sub_11BC630(v84, v8) )
    sub_118B4C0(v84, v8, (__int64)&ptr, 1);
  sub_10DC5D0((__int64)&ptr, *v91);
  if ( !*(_QWORD *)(v84 + 928) )
  {
    v48 = *(_QWORD *)(v84 + 1160);
    v49 = *(const __m128i **)a5;
    v50 = *(unsigned int *)(a5 + 8);
    goto LABEL_63;
  }
  v48 = *(_QWORD *)(v84 + 1160);
  v49 = *(const __m128i **)a5;
  v50 = *(unsigned int *)(a5 + 8);
  if ( (*(_BYTE *)(v84 + 920) & 2) != 0 )
  {
LABEL_63:
    v51 = v49;
    v52 = v50;
    v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 136LL);
    v53 = (void *)operator new(0x208u);
    sub_1106AE0((__int64)v53, a3, a1, 0, (__int64)"@", v79, (__int64)&ptr, v51, v52, a4, 1, v48);
    goto LABEL_64;
  }
  v65 = *(const __m128i **)a5;
  v66 = *(unsigned int *)(a5 + 8);
  v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 136LL);
  v53 = (void *)operator new(0x208u);
  sub_1106E40((__int64)v53, a3, a1, 0, (__int64)"@", v80, (__int64)&ptr, v65, v66, a4, 1, v48);
LABEL_64:
  v106 = v53;
  sub_118A0F0(a2, (__int64 *)&v106, si128, *(double *)a8.m128i_i64);
  if ( v106 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v106 + 8LL))(v106);
  if ( v95[0] != &v96 )
    operator delete(v95[0]);
  if ( ptr != v99 )
    free(ptr);
}
