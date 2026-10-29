__int64 __fastcall sub_156C6B0(const __m128i *a1, __int64 *a2, __int64 a3, __int64 *a4, double a5, __m128 a6)
{
  __int64 *v7; // rbx
  __m128i v8; // xmm0
  size_t v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // dl
  __int64 v15; // rsi
  char v16; // dl
  __int64 v17; // rcx
  char v18; // dl
  __int64 v19; // rdi
  char v20; // dl
  __int64 v21; // rsi
  char v22; // dl
  __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // rdi
  char v26; // dl
  __int64 v27; // r12
  char v28; // dl
  __int64 v29; // r13
  char v30; // dl
  int v31; // edx
  __int64 v32; // r14
  __int64 v33; // rax
  __int16 v34; // ax
  unsigned int v35; // r15d
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v38; // rbx
  __int8 v39; // dl
  int v40; // ebx
  __int64 v41; // rcx
  __int16 v42; // ax
  __int64 *v43; // r14
  __int64 *v44; // r15
  __int64 *v45; // rax
  __int64 *v46; // r14
  __int64 v47; // rbx
  char v48; // al
  __int64 v49; // rsi
  __int64 *v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  void *v53; // rdi
  __int64 v54; // rax
  int v55; // eax
  _DWORD *v56; // rax
  __int64 v57; // rdx
  _DWORD *v58; // rdi
  __int64 v59; // r10
  __int64 *v60; // rdi
  __int64 *v61; // rdi
  int *m128i_i32; // rsi
  bool v63; // zf
  unsigned __int8 **v64; // r14
  __int64 v65; // rsi
  __int64 v66; // rax
  int v67; // ecx
  __int64 v68; // rdi
  char *v69; // r14
  size_t v70; // rax
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  char v74; // bl
  char v75; // al
  char v76; // bl
  char v77; // al
  __int64 v78; // rbx
  char v79; // si
  char v80; // al
  __int64 v81; // rbx
  char v82; // cl
  char v83; // al
  __int64 v84; // rsi
  char v85; // bl
  char v86; // al
  __int64 v87; // rbx
  char v88; // si
  char v89; // al
  __int64 v90; // rsi
  char v91; // bl
  char v92; // al
  __int64 v93; // rcx
  char v94; // di
  char v95; // al
  __int64 v96; // rdi
  char v97; // cl
  char v98; // al
  __int16 v100; // ax
  __int64 v101; // rax
  __int64 v102; // r15
  unsigned __int8 **v103; // r15
  __int64 v104; // rsi
  int v105; // ecx
  unsigned __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // r14
  __int64 v109; // rsi
  __int64 *v110; // r14
  __int64 v111; // rbx
  __int64 *v112; // [rsp+8h] [rbp-150h] BYREF
  __int64 v113; // [rsp+10h] [rbp-148h]
  char v114; // [rsp+1Bh] [rbp-13Dh]
  char v115; // [rsp+1Ch] [rbp-13Ch]
  char v116; // [rsp+1Dh] [rbp-13Bh]
  char v117; // [rsp+1Eh] [rbp-13Ah]
  char v118; // [rsp+1Fh] [rbp-139h]
  __int64 v119; // [rsp+20h] [rbp-138h]
  __int64 v120; // [rsp+28h] [rbp-130h]
  __int64 v121; // [rsp+30h] [rbp-128h]
  __int64 v122; // [rsp+38h] [rbp-120h]
  __int64 v123; // [rsp+40h] [rbp-118h]
  __int64 v124; // [rsp+48h] [rbp-110h]
  __int64 v125; // [rsp+50h] [rbp-108h]
  __int64 v126; // [rsp+58h] [rbp-100h]
  __int64 *v127; // [rsp+60h] [rbp-F8h]
  __int64 *v128; // [rsp+68h] [rbp-F0h]
  char v129; // [rsp+70h] [rbp-E8h]
  char v130; // [rsp+71h] [rbp-E7h]
  char v131; // [rsp+72h] [rbp-E6h]
  char v132; // [rsp+73h] [rbp-E5h]
  unsigned int v133; // [rsp+74h] [rbp-E4h]
  unsigned __int64 v134; // [rsp+78h] [rbp-E0h]
  __int64 v135; // [rsp+88h] [rbp-D0h] BYREF
  void *v136; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v137; // [rsp+98h] [rbp-C0h]
  void *ptr[2]; // [rsp+B0h] [rbp-A8h] BYREF

  v7 = a2;
  v112 = a2;
  v113 = a3;
  v127 = a4;
  v8 = (__m128i)_mm_loadh_ps((const double *)&v112);
  v112 = (__int64 *)ptr;
  *(__m128i *)ptr = v8;
  v9 = j__strlen("ParseFunctionDefinition");
  v12 = sub_224AF30("ParseFunctionDefinition", v9, sub_1563B20, ptr, v10, v11);
  v13 = a1[20].m128i_i64[1];
  v129 = 0;
  v126 = v12;
  v119 = v13;
  if ( v13 )
  {
    v14 = *(_BYTE *)(v13 + 3) >> 5;
    *(_BYTE *)(v13 + 3) |= 0xA0u;
    v129 = v14 & 1;
  }
  v15 = a1[17].m128i_i64[1];
  v117 = 0;
  v120 = v15;
  if ( v15 )
  {
    v16 = *(_BYTE *)(v15 + 3) >> 5;
    *(_BYTE *)(v15 + 3) |= 0xA0u;
    v117 = v16 & 1;
  }
  v17 = a1[19].m128i_i64[0];
  v116 = 0;
  v121 = v17;
  if ( v17 )
  {
    v18 = *(_BYTE *)(v17 + 3) >> 5;
    *(_BYTE *)(v17 + 3) |= 0xA0u;
    v116 = v18 & 1;
  }
  v19 = a1[19].m128i_i64[1];
  v130 = 0;
  v122 = v19;
  if ( v19 )
  {
    v20 = *(_BYTE *)(v19 + 3) >> 5;
    *(_BYTE *)(v19 + 3) |= 0xA0u;
    v130 = v20 & 1;
  }
  v21 = a1[16].m128i_i64[1];
  v131 = 0;
  v123 = v21;
  if ( v21 )
  {
    v22 = *(_BYTE *)(v21 + 3) >> 5;
    *(_BYTE *)(v21 + 3) |= 0xA0u;
    v131 = v22 & 1;
  }
  v23 = a1[18].m128i_i64[0];
  v114 = 0;
  v124 = v23;
  if ( v23 )
  {
    v24 = *(_BYTE *)(v23 + 3) >> 5;
    *(_BYTE *)(v23 + 3) |= 0xA0u;
    v114 = v24 & 1;
  }
  v25 = a1[20].m128i_i64[0];
  v115 = 0;
  v125 = v25;
  if ( v25 )
  {
    v26 = *(_BYTE *)(v25 + 3) >> 5;
    *(_BYTE *)(v25 + 3) |= 0xA0u;
    v115 = v26 & 1;
  }
  v27 = a1[17].m128i_i64[0];
  v118 = 0;
  if ( v27 )
  {
    v28 = *(_BYTE *)(v27 + 3) >> 5;
    *(_BYTE *)(v27 + 3) |= 0xA0u;
    v118 = v28 & 1;
  }
  v29 = a1[18].m128i_i64[1];
  v132 = 0;
  if ( v29 )
  {
    v30 = *(_BYTE *)(v29 + 3) >> 5;
    *(_BYTE *)(v29 + 3) |= 0xA0u;
    v132 = v30 & 1;
  }
  v31 = *((_DWORD *)v7 + 34);
  v32 = v7[16];
  if ( v31 )
  {
    v33 = 1LL << *(_DWORD *)v32;
    if ( (v33 & 0xB7) == 0 && (v33 & 0x40) != 0 )
    {
      v56 = (_DWORD *)(v32 + 144);
      v57 = v32 + 144 + 144LL * (unsigned int)(v31 - 1);
      while ( v56 != (_DWORD *)v57 )
      {
        v58 = v56;
        v59 = 1LL << *v56;
        if ( (v59 & 0xB7) != 0 )
          break;
        v56 += 36;
        if ( (v59 & 0x40) == 0 )
        {
          v32 = (__int64)v58;
          break;
        }
      }
    }
  }
  if ( (**(_WORD **)(a1->m128i_i64[1] + 56) & 0x801) == 0 && !(unsigned int)sub_15AC7E0(*v7) )
  {
    sub_FC70B0((__int64)v112, a1[6].m128i_i64[1], *((_DWORD *)v7 + 20), 144);
    v54 = *(_QWORD *)(*v7 + 160);
    LOBYTE(v137) = 1;
    v136 = (void *)v54;
    sub_AEC610(v112, (__int64 *)&v136);
    sub_AEA040((__int64)v112);
    sub_15AE040(*v7, 7, *((unsigned int *)v7 + 20), v112, &v136, *(_QWORD *)(a1[6].m128i_i64[0] + 248) + 17464LL);
    v55 = *(_DWORD *)(*v7 + 160);
    if ( v55 )
      *((_DWORD *)v7 + 22) = v55;
  }
  if ( (*(_BYTE *)(v32 + 56) & 1) == 0 && *(_DWORD *)(v32 + 72) )
    sub_156A330(a1, (__int64)v7, v8, a6);
  v34 = a1[2].m128i_i16[0];
  if ( v34 != 24 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0 && (((v34 - 62) & 0xFFFD) == 0 || v34 == 150) )
    {
      if ( v34 == 64 )
        goto LABEL_31;
    }
    else
    {
      v43 = v112;
      sub_FC70B0((__int64)v112, a1[6].m128i_i64[1], a1[1].m128i_i32[0], 1617);
      sub_AEA040((__int64)v43);
      LOWORD(ptr[0]) = 24;
      sub_1566E40((__int64)a1, v43, 1, 3);
      if ( a1[2].m128i_i16[0] != 24 )
      {
        v40 = 0;
        v37 = 0;
        goto LABEL_108;
      }
    }
  }
  v44 = (__int64 *)v7[92];
  v45 = &v44[*((unsigned int *)v7 + 186)];
  if ( v45 == v44 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 108LL) & 0x20) != 0 )
      goto LABEL_64;
  }
  else
  {
    v128 = v7;
    v46 = v45;
    do
    {
      v47 = *v44;
      if ( (unsigned __int8)sub_15D8650(*v44) )
      {
        v48 = *(_BYTE *)(v47 + 34) & 0xF;
        if ( v48 != 2 && (*(_BYTE *)(v47 + 35) & 1) == 0 && v48 != 3 )
        {
          sub_FC70B0((__int64)v112, a1[6].m128i_i64[1], *(_DWORD *)(v47 + 24), 2063);
          v49 = v47;
          v50 = v112;
          sub_AE9DF0((unsigned __int8 **)v112, v49, 0x10u);
          sub_AEA040((__int64)v50);
        }
      }
      ++v44;
    }
    while ( v46 != v44 );
    v7 = v128;
    if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 108LL) & 0x20) != 0 && a1[2].m128i_i16[0] != 64 )
    {
LABEL_64:
      if ( *(_DWORD *)v113 != 1 || !(unsigned __int8)sub_17A5CD0(a1[6].m128i_i64[0], v7) )
        goto LABEL_31;
      sub_146B5E0((__int64 *)&v136, (__int64)a1, 0x400009u, 1, 0);
      *((_BYTE *)v7 + 720) = v7[90] & 0xF3 | 4;
      v51 = sub_17FE280(a1[6].m128i_i64[0]);
      v37 = v51;
      if ( !*((_BYTE *)v7 + 3024) )
      {
        sub_1818070(v7[333], v7[377], v51);
        *((_BYTE *)v7 + 3024) = 1;
      }
      v52 = *v7;
      if ( !*(_BYTE *)(v52 + 656) )
      {
        sub_1818070(*(_QWORD *)(v52 + 296), *(_QWORD *)(v52 + 648), 0);
        *(_BYTE *)(v52 + 656) = 1;
      }
      if ( a1[23].m128i_i8[1] )
      {
        if ( v37 )
        {
          if ( (unsigned __int8)sub_17A5D60(a1[6].m128i_i64[0], v37) && (unsigned __int8)sub_1534E60(a1) )
            goto LABEL_74;
          ptr[0] = v112 + 2;
          ptr[1] = (void *)0x400000000LL;
          sub_154F1E0((__int64)a1, (__int64)v112);
          goto LABEL_184;
        }
        if ( (unsigned __int8)sub_1534E60(a1) )
        {
LABEL_74:
          if ( v136 )
          {
            sub_1564F70((__int64)v136);
            v136 = nullptr;
          }
          v37 = sub_17A5DE0(a1[6].m128i_i64[0], v37);
          goto LABEL_77;
        }
        ptr[0] = v112 + 2;
        ptr[1] = (void *)0x400000000LL;
        sub_154F1E0((__int64)a1, (__int64)v112);
      }
      else
      {
        ptr[0] = v112 + 2;
        ptr[1] = (void *)0x400000000LL;
        sub_154F1E0((__int64)a1, (__int64)v112);
        if ( v37 )
        {
LABEL_184:
          v111 = sub_B8BF30(v37);
          sub_17B9710(a1[6].m128i_i64[0], v111, 0, 0);
          sub_1CB9980(a1[6].m128i_i64[0], v111, v37, v112);
        }
      }
      if ( ptr[0] != v112 + 2 )
        free(ptr[0]);
LABEL_77:
      v53 = v136;
      if ( !v136 )
      {
LABEL_79:
        v40 = 0;
        goto LABEL_108;
      }
LABEL_78:
      sub_1564F70((__int64)v53);
      goto LABEL_79;
    }
  }
LABEL_31:
  if ( !a1[129].m128i_i64[1] )
    goto LABEL_33;
  if ( *(_QWORD *)(v113 + 8) )
    goto LABEL_33;
  v100 = a1[2].m128i_i16[0];
  if ( v100 != 150 && v100 != 24 && v100 != 62 )
    goto LABEL_33;
  if ( (*(_BYTE *)(*(_QWORD *)(a1[6].m128i_i64[0] + 544) + 8LL) & 0x7F) != 0 )
    goto LABEL_33;
  sub_146B5E0(v112, (__int64)a1, 0x400009u, 1, 0);
  *((_BYTE *)v7 + 720) = v7[90] & 0xF3 | 4;
  v101 = sub_17FE280(a1[6].m128i_i64[0]);
  v37 = v101;
  if ( !*((_BYTE *)v7 + 3024) )
  {
    sub_1818070(v7[333], v7[377], v101);
    *((_BYTE *)v7 + 3024) = 1;
  }
  v102 = *v7;
  if ( !*(_BYTE *)(*v7 + 656) )
  {
    sub_1818070(*(_QWORD *)(v102 + 296), *(_QWORD *)(v102 + 648), 0);
    *(_BYTE *)(v102 + 656) = 1;
  }
  if ( v37 )
  {
    sub_14FA250((__int64)a1, v37);
    v53 = ptr[0];
    *(_BYTE *)(a1[129].m128i_i64[1] + 16) = 1;
    if ( !v53 )
    {
      v40 = 0;
      goto LABEL_108;
    }
    goto LABEL_78;
  }
  if ( ptr[0] )
    sub_1564F70((__int64)ptr[0]);
LABEL_33:
  v128 = &v135;
  sub_146B5E0(&v135, (__int64)a1, 0x400009u, 1, 0);
  if ( a1[2].m128i_i16[0] != 64 )
  {
    v133 = 0;
    v35 = 0;
    v134 = 0;
    goto LABEL_35;
  }
  v60 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v60, a1[1].m128i_i32);
  v61 = (__int64 *)a1->m128i_i64[1];
  m128i_i32 = a1[1].m128i_i32;
  v63 = a1[2].m128i_i16[0] == 131;
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  if ( !v63 )
  {
    sub_14634E0(v61, m128i_i32);
    v64 = (unsigned __int8 **)v112;
    v35 = 1;
    v65 = a1[6].m128i_i64[1];
    v66 = *(_QWORD *)(a1->m128i_i64[1] + 56);
    v133 = a1[2].m128i_u32[2];
    v67 = -((*(_BYTE *)(v66 + 1) & 0x10) == 0);
    LOBYTE(v67) = v67 & 0x6E;
    sub_FC70B0((__int64)v112, v65, v133, v67 + 2114);
    sub_AE9DF0(v64, 0, 2u);
    v68 = (__int64)v64;
    v69 = "default";
    sub_AEA040(v68);
    v63 = a1[2].m128i_i16[0] == 66;
    v134 = 0;
    if ( !v63 )
      goto LABEL_90;
    v108 = 0;
LABEL_181:
    sub_FC70B0((__int64)v112, a1[6].m128i_i64[1], v133, 1585);
    v109 = v108;
    v110 = v112;
    sub_AE9DF0((unsigned __int8 **)v112, v109, 2u);
    sub_AEA040((__int64)v110);
    LOWORD(ptr[0]) = 63;
    sub_1566E40((__int64)a1, v110, 1, 0);
    goto LABEL_35;
  }
  sub_14634E0(v61, m128i_i32);
  v103 = (unsigned __int8 **)v112;
  v104 = a1[6].m128i_i64[1];
  v105 = -((*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) == 0);
  LOBYTE(v105) = v105 & 0x6E;
  v133 = a1[2].m128i_u32[2];
  sub_FC70B0((__int64)v112, v104, v133, v105 + 2114);
  sub_AE9DF0(v103, 1, 2u);
  sub_AEA040((__int64)v103);
  v106 = sub_1476BD0((__int64)a1, *(double *)v8.m128i_i64);
  v63 = a1[2].m128i_i16[0] == 66;
  v134 = v106;
  if ( v63 )
  {
    v108 = 1;
    v35 = 2;
    goto LABEL_181;
  }
  v35 = 2;
  v69 = "delete";
LABEL_90:
  v70 = j__strlen(v69);
  if ( (unsigned __int8)sub_1569A00((__int64)a1, 0x3Fu, 15, v69, v70, v8, *(double *)a6.m128_u64) )
  {
    LOWORD(ptr[0]) = 63;
    sub_1566E40((__int64)a1, v112, 1, 0);
  }
LABEL_35:
  sub_15F3080(v112, a1[6].m128i_i64[0]);
  LOWORD(v136) = 0;
  v36 = a1[6].m128i_i64[0];
  v137 = 0;
  v37 = sub_17FF080(v36, v35);
  if ( (_BYTE)v136 )
  {
    if ( !v35 )
      sub_1567F60((__int64)a1);
    if ( v37
      && (*(_BYTE *)(v37 + 28) & 0x7Fu) - 34 <= 5
      && (*(_BYTE *)(v37 + 80) & 0x7Fu) - 35 <= 3
      && ((v71 = *(_QWORD *)(sub_B8C1B0(v37 + 72) + 16), (v71 & 4) == 0)
        ? (v72 = v71 & 0xFFFFFFFFFFFFFFF8LL)
        : (v72 = *(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF8LL)),
          v72
       && v72 != 64
       && (v73 = *(_QWORD *)(v72 + 64)) != 0
       && (*(_BYTE *)(v73 + 10) & 0x20) != 0
       && (unsigned int)sub_B77890(v37) == 42) )
    {
      v40 = 0;
    }
    else
    {
      v40 = 0;
      sub_190D5E0(a1[6].m128i_i64[0]);
    }
    goto LABEL_106;
  }
  if ( !*((_BYTE *)v7 + 3024) )
  {
    sub_1818070(v7[333], v7[377], v37);
    *((_BYTE *)v7 + 3024) = 1;
  }
  v38 = *v7;
  if ( !*(_BYTE *)(v38 + 656) )
  {
    sub_1818070(*(_QWORD *)(v38 + 296), *(_QWORD *)(v38 + 648), 0);
    *(_BYTE *)(v38 + 656) = 1;
  }
  if ( v35 )
  {
    sub_1890940(a1[6].m128i_i64[0], v37, v133, v35, v134);
    v107 = 0;
    if ( v37 )
      v107 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v37 + 64LL))(v37, v37, 0);
    v40 = 0;
    sub_17EEDE0(a1[6].m128i_i64[0], v37, v107, 0);
    goto LABEL_106;
  }
  v39 = a1[23].m128i_i8[1];
  if ( v37 )
  {
    v40 = 0;
    if ( (*(_BYTE *)(v37 + 28) & 0x7F) == 0x47 )
    {
      v41 = *(_QWORD *)(v37 + 56);
      if ( (*(_BYTE *)(*(_QWORD *)(v41 + 8LL * ((*(_DWORD *)(v41 + 20) & 0x1FFFFFFFu) - 1) + 24) + 29LL) & 2) != 0
        && (*(_BYTE *)(*(_QWORD *)(v41 + 24) + 29LL) & 2) != 0 )
      {
        ++a1[159].m128i_i32[1];
        v40 = 1;
      }
    }
    if ( !v39 || !(unsigned __int8)sub_17A5D60(a1[6].m128i_i64[0], v37) )
      goto LABEL_47;
  }
  else
  {
    v40 = 0;
    if ( !v39 )
      goto LABEL_47;
  }
  if ( (unsigned __int8)sub_1534E60(a1) )
  {
    if ( v135 )
    {
      sub_1564F70(v135);
      v135 = 0;
    }
    sub_17A5DE0(a1[6].m128i_i64[0], v37);
    v37 = sub_17EEDE0(a1[6].m128i_i64[0], v37, 0, 0);
    goto LABEL_106;
  }
LABEL_47:
  v42 = a1[2].m128i_i16[0];
  if ( v42 == 150 )
  {
    v37 = sub_15372E0((__int64)a1, v37, v128, 0.0, a6);
  }
  else
  {
    if ( v42 == 62 )
    {
      sub_14A5C50((__int64)a1, v37, (__m128i)0LL, *(double *)a6.m128_u64);
      if ( a1[2].m128i_i16[0] != 24 )
      {
        if ( v135 )
        {
          sub_1564F70(v135);
          v135 = 0;
        }
        sub_17F10E0(a1[6].m128i_i64[0], v37, 0);
        goto LABEL_106;
      }
    }
    else
    {
      sub_187CD10(a1[6].m128i_i64[0], v37);
    }
    if ( v127 )
      sub_146DD70((__int64)a1, v127, v37, 0, 1);
    v37 = sub_153D670((__int64)a1, v37, v128, 0.0, a6);
  }
LABEL_106:
  sub_15F30C0(v112);
  if ( v135 )
    sub_1564F70(v135);
LABEL_108:
  a1[159].m128i_i32[1] -= v40;
  if ( v29 )
  {
    v74 = v132;
    v75 = (32 * v132) | *(_BYTE *)(v29 + 3) & 0xDF;
    *(_BYTE *)(v29 + 3) = v75;
    if ( v74 )
      *(_BYTE *)(v29 + 3) = v75 | 0x80;
    else
      sub_145BE00(v29);
  }
  if ( v27 )
  {
    v76 = v118;
    v77 = (32 * v118) | *(_BYTE *)(v27 + 3) & 0xDF;
    *(_BYTE *)(v27 + 3) = v77;
    if ( v76 )
      *(_BYTE *)(v27 + 3) = v77 | 0x80;
    else
      sub_145BE00(v27);
  }
  v78 = v125;
  if ( v125 )
  {
    v79 = v115;
    LOBYTE(v112) = *(_BYTE *)(v125 + 3);
    v80 = (32 * v115) | (unsigned __int8)v112 & 0xDF;
    *(_BYTE *)(v125 + 3) = v80;
    if ( v79 )
      *(_BYTE *)(v78 + 3) = v80 | 0x80;
    else
      sub_145BE00(v78);
  }
  v81 = v124;
  if ( v124 )
  {
    v82 = v114;
    LOBYTE(v112) = *(_BYTE *)(v124 + 3);
    v83 = (32 * v114) | (unsigned __int8)v112 & 0xDF;
    *(_BYTE *)(v124 + 3) = v83;
    if ( v82 )
      *(_BYTE *)(v81 + 3) = v83 | 0x80;
    else
      sub_145BE00(v81);
  }
  v84 = v123;
  if ( v123 )
  {
    v85 = v131;
    LOBYTE(v112) = *(_BYTE *)(v123 + 3);
    v86 = (32 * v131) | (unsigned __int8)v112 & 0xDF;
    *(_BYTE *)(v123 + 3) = v86;
    if ( v85 )
      *(_BYTE *)(v84 + 3) = v86 | 0x80;
    else
      sub_145BE00(v84);
  }
  v87 = v122;
  if ( v122 )
  {
    v88 = v130;
    LOBYTE(v112) = *(_BYTE *)(v122 + 3);
    v89 = (32 * v130) | (unsigned __int8)v112 & 0xDF;
    *(_BYTE *)(v122 + 3) = v89;
    if ( v88 )
      *(_BYTE *)(v87 + 3) = v89 | 0x80;
    else
      sub_145BE00(v87);
  }
  v90 = v121;
  if ( v121 )
  {
    v91 = v116;
    LOBYTE(v112) = *(_BYTE *)(v121 + 3);
    v92 = (32 * v116) | (unsigned __int8)v112 & 0xDF;
    *(_BYTE *)(v121 + 3) = v92;
    if ( v91 )
      *(_BYTE *)(v90 + 3) = v92 | 0x80;
    else
      sub_145BE00(v90);
  }
  v93 = v120;
  if ( v120 )
  {
    v94 = v117;
    LOBYTE(v112) = *(_BYTE *)(v120 + 3);
    v95 = (32 * v117) | (unsigned __int8)v112 & 0xDF;
    *(_BYTE *)(v120 + 3) = v95;
    if ( v94 )
      *(_BYTE *)(v93 + 3) = v95 | 0x80;
    else
      sub_145BE00(v93);
  }
  v96 = v119;
  if ( v119 )
  {
    v97 = v129;
    LOBYTE(v112) = *(_BYTE *)(v119 + 3);
    v98 = (32 * v129) | (unsigned __int8)v112 & 0xDF;
    *(_BYTE *)(v119 + 3) = v98;
    if ( v97 )
      *(_BYTE *)(v96 + 3) = v98 | 0x80;
    else
      sub_145BE00(v96);
  }
  if ( v126 )
    sub_224D6D0(v126);
  return v37;
}
