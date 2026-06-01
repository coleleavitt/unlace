__int64 __fastcall sub_2044110(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  void (*v5)(); // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdi
  char v9; // al
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 (__fastcall **v15)(); // rcx
  __int64 v16; // rdi
  _BYTE *v17; // rax
  __int64 v18; // rdi
  _BYTE *v19; // rax
  __int64 v20; // rdi
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rdi
  _BYTE *v25; // rax
  _BYTE *v26; // rdx
  size_t v27; // rdx
  const char *v28; // rbp
  __int64 v29; // rdi
  _BYTE *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  __int16 v35; // bp
  __int64 v36; // rax
  __int16 v37; // ax
  _DWORD *v38; // rbp
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rdi
  _BYTE *v43; // rax
  __int64 v44; // rbx
  __int64 result; // rax
  size_t v46; // rax
  __int64 v47; // rdi
  _BYTE *v48; // rax
  __int64 v49; // rbp
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdi
  _BYTE *v58; // rax
  __int64 v59; // rdi
  _BYTE *v60; // rax
  _BYTE *v61; // rsi
  __int64 v62; // rsi
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r15
  _BYTE *v67; // rdi
  size_t v68; // r9
  unsigned __int64 v69; // rax
  _BYTE *v70; // rdi
  size_t v71; // rax
  size_t v72; // r9
  _BYTE *v73; // rdx
  unsigned __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // r15
  __int64 v77; // rbp
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // eax
  __int64 v84; // rbp
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 v87; // rdi
  _BYTE *v88; // rax
  __int64 v89; // rbp
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rdi
  _BYTE *v93; // rax
  size_t v94; // rax
  __int64 v95; // rbp
  __int64 v96; // r15
  __int64 v97; // rax
  _BYTE *v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rbp
  _QWORD *v103; // rax
  __int64 v104; // rax
  _BYTE *v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  _BYTE *v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // [rsp+0h] [rbp-F8h]
  __int64 i; // [rsp+0h] [rbp-F8h]
  size_t v113; // [rsp+0h] [rbp-F8h]
  __int64 v114; // [rsp+8h] [rbp-F0h]
  __int64 v115; // [rsp+10h] [rbp-E8h]
  int v116; // [rsp+10h] [rbp-E8h]
  size_t v117; // [rsp+10h] [rbp-E8h]
  size_t v118; // [rsp+10h] [rbp-E8h]
  size_t v119; // [rsp+10h] [rbp-E8h]
  size_t v120; // [rsp+18h] [rbp-E0h]
  __int64 v121; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v122; // [rsp+28h] [rbp-D0h] BYREF
  void *v123; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD *v124; // [rsp+38h] [rbp-C0h]
  _QWORD v125[2]; // [rsp+40h] [rbp-B8h] BYREF
  __m128i ptr; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v127[8]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v128; // [rsp+68h] [rbp-90h]
  __int64 v129; // [rsp+70h] [rbp-88h]
  __int64 v130; // [rsp+78h] [rbp-80h]
  __int64 v131; // [rsp+90h] [rbp-68h]
  __int64 v132; // [rsp+B0h] [rbp-48h]

  v4 = a1[28];
  if ( v4 )
  {
    v5 = *(void (**)())(*(_QWORD *)v4 + 16LL);
    if ( v5 != nullsub_1274 )
      ((void (__fastcall *)(__int64, __int64, __int64))v5)(v4, a2, *a1);
  }
  if ( (*(_BYTE *)(a2 + 35) & 8) != 0 )
    sub_995540(*a1, "; Materializable\n");
  v121 = *(_QWORD *)(a2 + 120);
  if ( (unsigned __int8)sub_2049580(&v121, 0xFFFFFFFFLL) )
  {
    v65 = sub_2049510(&v121);
    v124 = nullptr;
    v123 = v125;
    v122 = v65;
    LOBYTE(v125[0]) = 0;
    v66 = sub_2049410(&v122);
    for ( i = sub_2049420(&v122); i != v66; v66 += 8 )
    {
      if ( !(unsigned __int8)sub_20492D0(v66) )
      {
        v71 = (size_t)v124;
        if ( v124 )
        {
          v72 = (size_t)v124 + 1;
          v73 = v123;
          if ( v123 == v125 )
            v74 = 15;
          else
            v74 = v125[0];
          if ( v72 > v74 )
          {
            v120 = (size_t)v124 + 1;
            v119 = (size_t)v124;
            sub_998B30((__int64)&v123, (size_t)v124, 0, nullptr, 1u);
            v73 = v123;
            v72 = v120;
            v71 = v119;
          }
          v73[v71] = 32;
          v124 = (_QWORD *)v72;
          *((_BYTE *)v123 + v71 + 1) = 0;
        }
        sub_20497C0(&ptr, v66, 0);
        v67 = v123;
        v68 = (size_t)v124 + ptr.m128i_i64[1];
        if ( v123 == v125 )
          v69 = 15;
        else
          v69 = v125[0];
        if ( v68 > v69 )
        {
          v118 = (size_t)v124 + ptr.m128i_i64[1];
          sub_998B30((__int64)&v123, (size_t)v124, 0, ptr.m128i_i64[0], ptr.m128i_u64[1]);
          v67 = v123;
          v68 = v118;
        }
        else if ( ptr.m128i_i64[1] )
        {
          v70 = (char *)v123 + (_QWORD)v124;
          if ( ptr.m128i_i64[1] == 1 )
          {
            *v70 = *(_BYTE *)ptr.m128i_i64[0];
            v67 = v123;
          }
          else
          {
            v117 = (size_t)v124 + ptr.m128i_i64[1];
            memcpy(v70, (const void *)ptr.m128i_i64[0], ptr.m128i_u64[1]);
            v67 = v123;
            v68 = v117;
          }
        }
        v124 = (_QWORD *)v68;
        v67[v68] = 0;
        if ( (_BYTE *)ptr.m128i_i64[0] != v127 )
          operator delete((void *)ptr.m128i_i64[0]);
      }
    }
    if ( v124 )
    {
      v107 = sub_995540(*a1, "; Function Attrs: ");
      v108 = sub_227BF10(v107, v123, v124);
      v109 = *(_BYTE **)(v108 + 32);
      if ( *(_QWORD *)(v108 + 24) <= (unsigned __int64)v109 )
      {
        sub_227BA10(v108, 10);
      }
      else
      {
        *(_QWORD *)(v108 + 32) = v109 + 1;
        *v109 = 10;
      }
    }
    if ( v123 != v125 )
      operator delete(v123);
  }
  if ( (*(_BYTE *)(a2 + 33) & 0x20) != 0 && !*(_DWORD *)(a2 + 36) )
    sub_995540(*a1, "; Unknown intrinsic\n");
  v6 = a1[4];
  *(_QWORD *)(v6 + 16) = a2;
  *(_BYTE *)(v6 + 24) = 0;
  if ( (unsigned __int8)sub_208F2E0(a2) )
  {
    sub_995540(*a1, "declare");
    ptr.m128i_i64[0] = (__int64)v127;
    ptr.m128i_i64[1] = 0x400000000LL;
    sub_20B4C70(a2, &ptr);
    v46 = j__strlen(" ");
    sub_203E590(a1, (int **)&ptr, " ", v46);
    v47 = *a1;
    v48 = *(_BYTE **)(*a1 + 32);
    if ( *(_QWORD *)(*a1 + 24) <= (unsigned __int64)v48 )
    {
      sub_227BA10(v47, 32);
    }
    else
    {
      *(_QWORD *)(v47 + 32) = v48 + 1;
      *v48 = 32;
    }
    if ( (_BYTE *)ptr.m128i_i64[0] != v127 )
      free((void *)ptr.m128i_i64[0]);
  }
  else
  {
    sub_995540(*a1, "define ");
  }
  v7 = *a1;
  sub_2033420(&ptr, *(_BYTE *)(a2 + 32) & 0xF);
  sub_227BF10(v7, ptr.m128i_i64[0], ptr.m128i_i64[1]);
  if ( (_BYTE *)ptr.m128i_i64[0] != v127 )
    operator delete((void *)ptr.m128i_i64[0]);
  v8 = *a1;
  if ( (*(_BYTE *)(a2 + 33) & 0x40) != 0 )
  {
    sub_2030100(a2, *a1);
    v8 = *a1;
    v9 = (*(_BYTE *)(a2 + 32) >> 4) & 3;
    if ( v9 != 1 )
    {
LABEL_16:
      if ( v9 == 2 )
      {
        sub_995540(v8, "protected ");
        v8 = *a1;
      }
      v10 = *(_BYTE *)(a2 + 33) & 3;
      if ( v10 != 1 )
        goto LABEL_19;
LABEL_73:
      sub_995540(v8, "dllimport ");
      goto LABEL_21;
    }
  }
  else
  {
    v9 = (*(_BYTE *)(a2 + 32) >> 4) & 3;
    if ( v9 != 1 )
      goto LABEL_16;
  }
  sub_995540(v8, "hidden ");
  v8 = *a1;
  v10 = *(_BYTE *)(a2 + 33) & 3;
  if ( v10 == 1 )
    goto LABEL_73;
LABEL_19:
  if ( v10 == 2 )
    sub_995540(v8, "dllexport ");
LABEL_21:
  if ( (((int)*(unsigned __int16 *)(a2 + 2) >> 4) & 0x3FF) != 0 )
  {
    sub_202FA40(((int)*(unsigned __int16 *)(a2 + 2) >> 4) & 0x3FF, *a1);
    sub_995540(*a1, " ");
  }
  v114 = *(_QWORD *)(a2 + 24);
  if ( (unsigned __int8)sub_2049580(&v121, 0) )
  {
    v96 = *a1;
    sub_204B0A0(&ptr, &v121, 0, 0);
    v97 = sub_227BF10(v96, ptr.m128i_i64[0], ptr.m128i_i64[1]);
    v98 = *(_BYTE **)(v97 + 32);
    if ( (unsigned __int64)v98 >= *(_QWORD *)(v97 + 24) )
    {
      sub_227BA10(v97, 32);
    }
    else
    {
      *(_QWORD *)(v97 + 32) = v98 + 1;
      *v98 = 32;
    }
    if ( (_BYTE *)ptr.m128i_i64[0] != v127 )
      operator delete((void *)ptr.m128i_i64[0]);
  }
  sub_2034FF0((__int64)(a1 + 5), **(_QWORD **)(*(_QWORD *)(a2 + 24) + 16LL), *a1);
  v13 = *(_QWORD *)(a2 + 40);
  v14 = a1[4];
  v15 = off_2BE5D20;
  v16 = *a1;
  v123 = off_2BE5D20;
  v125[1] = v13;
  v124 = a1 + 5;
  v17 = *(_BYTE **)(v16 + 32);
  v125[0] = v14;
  if ( (unsigned __int64)v17 >= *(_QWORD *)(v16 + 24) )
  {
    sub_227BA10(v16, 32);
  }
  else
  {
    *(_QWORD *)(v16 + 32) = v17 + 1;
    *v17 = 32;
  }
  sub_2038AA0(*a1, a2, (__int64)&v123, (__int64)v15, v11, v12);
  v18 = *a1;
  v19 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v19 >= *(_QWORD *)(*a1 + 24) )
  {
    sub_227BA10(v18, 40);
  }
  else
  {
    *(_QWORD *)(v18 + 32) = v19 + 1;
    *v19 = 40;
  }
  if ( !(unsigned __int8)sub_208F2E0(a2) || *((_BYTE *)a1 + 272) )
  {
    if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
    {
      sub_208D820(a2);
      v49 = *(_QWORD *)(a2 + 96);
      v111 = v49 + 40LL * *(_QWORD *)(a2 + 104);
      if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
      {
        sub_208D820(a2);
        v49 = *(_QWORD *)(a2 + 96);
      }
    }
    else
    {
      v49 = *(_QWORD *)(a2 + 96);
      v111 = v49 + 40LL * *(_QWORD *)(a2 + 104);
    }
    while ( v49 != v111 )
    {
      while ( 1 )
      {
        v62 = *(unsigned int *)(v49 + 32);
        if ( (_DWORD)v62 )
        {
          sub_995540(*a1, ", ");
          v62 = *(unsigned int *)(v49 + 32);
        }
        v50 = sub_20494F0(&v121, v62);
        v51 = *(_QWORD *)(v49 + 8);
        v52 = *a1;
        ptr.m128i_i64[0] = v50;
        sub_2034FF0((__int64)(a1 + 5), v51, v52);
        if ( ptr.m128i_i64[0] )
        {
          v57 = *a1;
          v58 = *(_BYTE **)(*a1 + 32);
          if ( (unsigned __int64)v58 >= *(_QWORD *)(*a1 + 24) )
          {
            sub_227BA10(v57, 32);
          }
          else
          {
            *(_QWORD *)(v57 + 32) = v58 + 1;
            *v58 = 32;
          }
          sub_20358A0(a1, (__int64)&ptr);
        }
        if ( (*(_BYTE *)(v49 + 7) & 0x10) != 0 )
          break;
        v63 = v49;
        v49 += 40;
        v116 = sub_2038650(a1[4], v63, v53, v54, v55, v56);
        v64 = sub_995540(*a1, " %");
        sub_227B930(v64, v116);
        if ( v49 == v111 )
          goto LABEL_96;
      }
      v59 = *a1;
      v60 = *(_BYTE **)(*a1 + 32);
      if ( (unsigned __int64)v60 >= *(_QWORD *)(*a1 + 24) )
      {
        sub_227BA10(v59, 32);
      }
      else
      {
        *(_QWORD *)(v59 + 32) = v60 + 1;
        *v60 = 32;
      }
      v61 = (_BYTE *)v49;
      v49 += 40;
      sub_2032640(*a1, v61);
    }
LABEL_96:
    v22 = *a1;
    v20 = *a1;
    goto LABEL_37;
  }
  v20 = *a1;
  v21 = *(_DWORD *)(v114 + 12);
  v22 = *a1;
  if ( v21 != 1 )
  {
    v23 = 0;
    v115 = (unsigned int)(v21 - 2);
    while ( 1 )
    {
      sub_2034FF0((__int64)(a1 + 5), *(_QWORD *)(*(_QWORD *)(v114 + 16) + 8 * (v23 + 1)), v20);
      ptr.m128i_i64[0] = sub_20494F0(&v121, (unsigned int)v23);
      if ( ptr.m128i_i64[0] )
      {
        v24 = *a1;
        v25 = *(_BYTE **)(*a1 + 32);
        if ( (unsigned __int64)v25 >= *(_QWORD *)(*a1 + 24) )
        {
          sub_227BA10(v24, 32);
        }
        else
        {
          *(_QWORD *)(v24 + 32) = v25 + 1;
          *v25 = 32;
        }
        sub_20358A0(a1, (__int64)&ptr);
      }
      v20 = *a1;
      v22 = *a1;
      if ( v115 == v23 )
        break;
      sub_995540(v20, ", ");
      v20 = *a1;
      ++v23;
    }
LABEL_37:
    if ( !(*(_DWORD *)(v114 + 8) >> 8) )
      goto LABEL_41;
    if ( *(_DWORD *)(v114 + 12) != 1 )
    {
      sub_995540(v20, ", ");
      v20 = *a1;
    }
    goto LABEL_40;
  }
  if ( *(_DWORD *)(v114 + 8) >> 8 )
  {
LABEL_40:
    sub_995540(v20, "...");
    v20 = *a1;
    v22 = *a1;
  }
LABEL_41:
  v26 = *(_BYTE **)(v22 + 32);
  if ( (unsigned __int64)v26 >= *(_QWORD *)(v22 + 24) )
  {
    sub_227BA10(v20, 41);
  }
  else
  {
    *(_QWORD *)(v22 + 32) = v26 + 1;
    *v26 = 41;
  }
  v28 = sub_202F6B0(*(_BYTE *)(a2 + 32) >> 6);
  if ( v27 )
  {
    v29 = *a1;
    v30 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v30 >= *(_QWORD *)(*a1 + 24) )
    {
      v113 = v27;
      v106 = sub_227BA10(v29, 32);
      v27 = v113;
      v29 = v106;
    }
    else
    {
      *(_QWORD *)(v29 + 32) = v30 + 1;
      *v30 = 32;
    }
    sub_9954E0(v29, v28, v27);
  }
  v31 = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 8LL) >> 8 || !v31 || *(_DWORD *)(v31 + 320) )
  {
    v32 = sub_995540(*a1, " addrspace(");
    v33 = sub_227B910(v32, *(_DWORD *)(*(_QWORD *)(a2 + 8) + 8LL) >> 8);
    sub_995540(v33, ")");
  }
  if ( (unsigned __int8)sub_2049580(&v121, 0xFFFFFFFFLL) )
  {
    v75 = sub_995540(*a1, " #");
    v76 = a1[4];
    v77 = v75;
    v78 = sub_2049510(&v121);
    v83 = sub_2041740(v76, v78, v79, v80, v81, v82);
    sub_227B930(v77, v83);
    v34 = *a1;
    if ( (*(_BYTE *)(a2 + 35) & 4) == 0 )
      goto LABEL_53;
  }
  else
  {
    v34 = *a1;
    if ( (*(_BYTE *)(a2 + 35) & 4) == 0 )
      goto LABEL_53;
  }
  sub_995540(v34, " section \"");
  v84 = *a1;
  v85 = 0;
  v86 = 0;
  if ( (*(_BYTE *)(a2 + 35) & 4) != 0 )
  {
    v86 = sub_208EC10(a2, 0);
    v85 = v110;
  }
  sub_22449A0(v86, v85, v84);
  v87 = *a1;
  v88 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v88 < *(_QWORD *)(*a1 + 24) )
  {
    *(_QWORD *)(v87 + 32) = v88 + 1;
    *v88 = 34;
    v34 = *a1;
    if ( *(char *)(a2 + 33) >= 0 )
      goto LABEL_54;
    goto LABEL_127;
  }
  sub_227BA10(v87, 34);
  v34 = *a1;
LABEL_53:
  if ( *(char *)(a2 + 33) >= 0 )
    goto LABEL_54;
LABEL_127:
  sub_995540(v34, " partition \"");
  v89 = *a1;
  v90 = sub_208DEF0(a2);
  sub_22449A0(v90, v91, v89);
  v92 = *a1;
  v93 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v93 >= *(_QWORD *)(*a1 + 24) )
  {
    sub_227BA10(v92, 34);
  }
  else
  {
    *(_QWORD *)(v92 + 32) = v93 + 1;
    *v93 = 34;
  }
  v34 = *a1;
LABEL_54:
  sub_20324E0(v34, a2);
  v35 = (*(_WORD *)(a2 + 34) >> 1) & 0x3F;
  if ( v35 )
  {
    v36 = sub_995540(*a1, " align ");
    sub_227B910(v36, 1LL << ((unsigned __int8)v35 - 1));
  }
  v37 = *(_WORD *)(a2 + 2);
  if ( (v37 & 0x4000) != 0 )
  {
    v102 = sub_995540(*a1, " gc \"");
    v103 = (_QWORD *)sub_208DD80(a2);
    v104 = sub_227BF10(v102, *v103, v103[1]);
    v105 = *(_BYTE **)(v104 + 32);
    if ( (unsigned __int64)v105 >= *(_QWORD *)(v104 + 24) )
    {
      sub_227BA10(v104, 34);
    }
    else
    {
      *(_QWORD *)(v104 + 32) = v105 + 1;
      *v105 = 34;
    }
    v37 = *(_WORD *)(a2 + 2);
  }
  if ( (v37 & 2) != 0 )
  {
    sub_995540(*a1, " prefix ");
    v101 = sub_208DDF0(a2);
    sub_2040770(a1, v101);
    v37 = *(_WORD *)(a2 + 2);
  }
  if ( (v37 & 4) != 0 )
  {
    sub_995540(*a1, " prologue ");
    v100 = sub_208DE00(a2);
    sub_2040770(a1, v100);
    v37 = *(_WORD *)(a2 + 2);
  }
  if ( (v37 & 8) != 0 )
  {
    sub_995540(*a1, " personality ");
    v99 = sub_208DDE0(a2);
    sub_2040770(a1, v99);
  }
  if ( byte_2CFC6F8 )
  {
    if ( (*(_BYTE *)(a2 + 7) & 0x20) != 0 )
    {
      v38 = (_DWORD *)sub_20AF750(a2, 2);
      if ( v38 )
      {
        sub_995540(*a1, " ");
        v39 = *(unsigned __int8 *)v38;
        v40 = a1[1];
        v41 = *a1;
        ptr.m128i_i64[1] = 0;
        v128 = v40;
        v129 = 0;
        v130 = 0;
        v127[0] = v40 != 0;
        ptr.m128i_i64[0] = (__int64)&off_2BE5CC8;
        v127[1] = (unsigned int)(v39 - 5) <= 0x20;
        v131 = 0;
        v132 = 0;
        sub_203FB60(v41, v38, &ptr, v40, 0, 0);
        sub_202F1D0(&ptr);
      }
    }
  }
  if ( (unsigned __int8)sub_208F2E0(a2) )
  {
    v42 = *a1;
    v43 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v43 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_227BA10(v42, 10);
    }
    else
    {
      *(_QWORD *)(v42 + 32) = v43 + 1;
      *v43 = 10;
    }
  }
  else
  {
    ptr.m128i_i64[0] = (__int64)v127;
    ptr.m128i_i64[1] = 0x400000000LL;
    sub_20B4C70(a2, &ptr);
    v94 = j__strlen(" ");
    sub_203E590(a1, (int **)&ptr, " ", v94);
    sub_995540(*a1, " {");
    v95 = *(_QWORD *)(a2 + 80);
    if ( a2 + 72 != v95 )
    {
      do
      {
        while ( v95 )
        {
          sub_2043D50(a1, v95 - 24);
          v95 = *(_QWORD *)(v95 + 8);
          if ( v95 == a2 + 72 )
            goto LABEL_134;
        }
        sub_2043D50(a1, 0);
        v95 = 0;
      }
      while ( a2 != -72 );
    }
LABEL_134:
    sub_2040880(a1, a2);
    sub_995540(*a1, "}\n");
    if ( (_BYTE *)ptr.m128i_i64[0] != v127 )
      free((void *)ptr.m128i_i64[0]);
  }
  v44 = a1[4];
  result = sub_2032C80(v44 + 136);
  *(_QWORD *)(v44 + 16) = 0;
  *(_BYTE *)(v44 + 24) = 0;
  return result;
}
