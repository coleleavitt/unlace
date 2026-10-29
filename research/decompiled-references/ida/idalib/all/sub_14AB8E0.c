__int64 __fastcall sub_14AB8E0(const __m128i *a1, __m128i a2, __m128 a3, __int64 a4, _DWORD *a5, unsigned int a6)
{
  int *m128i_i32; // rbx
  int *v8; // rsi
  __int32 v9; // eax
  __int64 *v10; // rdi
  __int64 v11; // r12
  __int16 v12; // ax
  _QWORD *v13; // rbp
  char v14; // al
  unsigned __int16 v15; // ax
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 *v19; // rdi
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int16 v25; // ax
  __int64 v26; // rdi
  __int32 v27; // eax
  unsigned __int16 v28; // bp
  char v29; // al
  __int64 v30; // rax
  __int64 *v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  char *v34; // rcx
  const __m128i *v35; // rdx
  __m128 *v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rdi
  __int32 v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int8 v45; // al
  __int64 **v46; // rdx
  int v47; // eax
  unsigned int v48; // edx
  unsigned int v49; // eax
  int *v50; // rdx
  __int64 *v51; // rax
  unsigned int v52; // r8d
  __int64 v53; // rdi
  __int64 v54; // rbx
  __m128i v55; // xmm0
  __int64 v56; // rdx
  __int64 v57; // rax
  char v58; // dl
  __int64 v59; // rcx
  __int64 v60; // rdx
  const __m128i *v61; // rsi
  _BYTE *v62; // rbx
  __int32 v63; // edx
  __m128i v64; // xmm2
  const __m128i *v65; // rsi
  _DWORD *v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rcx
  __int32 v69; // ecx
  __int16 v70; // dx
  int v71; // ebx
  int v72; // r8d
  unsigned int v73; // eax
  unsigned int v74; // edx
  _DWORD *v75; // rbx
  unsigned int *v76; // rax
  size_t v77; // rdx
  int v78; // ebp
  int v79; // ebx
  __int8 v80; // [rsp+Fh] [rbp-309h]
  __int64 v81; // [rsp+10h] [rbp-308h] BYREF
  __int64 v82; // [rsp+18h] [rbp-300h]
  _DWORD *v83; // [rsp+20h] [rbp-2F8h]
  int v84; // [rsp+28h] [rbp-2F0h]
  int v85; // [rsp+2Ch] [rbp-2ECh]
  _BYTE *v86; // [rsp+30h] [rbp-2E8h]
  unsigned __int64 *v87; // [rsp+38h] [rbp-2E0h]
  void **v88; // [rsp+40h] [rbp-2D8h]
  _DWORD *v89; // [rsp+48h] [rbp-2D0h]
  void **v90; // [rsp+50h] [rbp-2C8h]
  int v91; // [rsp+58h] [rbp-2C0h]
  unsigned int v92; // [rsp+5Ch] [rbp-2BCh] BYREF
  __int64 v93; // [rsp+64h] [rbp-2B4h]
  char v94; // [rsp+6Ch] [rbp-2ACh]
  void *v95; // [rsp+70h] [rbp-2A8h] BYREF
  signed __int64 v96; // [rsp+78h] [rbp-2A0h]
  char v97; // [rsp+80h] [rbp-298h] BYREF
  void *v98; // [rsp+90h] [rbp-288h] BYREF
  __int64 v99; // [rsp+98h] [rbp-280h]
  char v100; // [rsp+A0h] [rbp-278h] BYREF
  __m128i *v101; // [rsp+B0h] [rbp-268h] BYREF
  __int8 v102; // [rsp+B8h] [rbp-260h]
  const __m128i *v103; // [rsp+C0h] [rbp-258h]
  int v104; // [rsp+C8h] [rbp-250h]
  __int16 v105; // [rsp+CCh] [rbp-24Ch]
  __int64 (__fastcall *v106)(__int64); // [rsp+D0h] [rbp-248h]
  __int64 v107; // [rsp+D8h] [rbp-240h]
  __int64 v108; // [rsp+E0h] [rbp-238h]
  _DWORD v109[6]; // [rsp+F0h] [rbp-228h] BYREF
  void *v110; // [rsp+108h] [rbp-210h]
  unsigned __int64 v111; // [rsp+130h] [rbp-1E8h] BYREF
  char v112; // [rsp+138h] [rbp-1E0h]
  void *v113; // [rsp+148h] [rbp-1D0h]
  __int64 v114; // [rsp+158h] [rbp-1C0h] BYREF
  unsigned __int64 v115; // [rsp+170h] [rbp-1A8h] BYREF
  char v116; // [rsp+178h] [rbp-1A0h]
  __int64 v117; // [rsp+17Ch] [rbp-19Ch]
  char v118; // [rsp+184h] [rbp-194h]
  void *v119; // [rsp+188h] [rbp-190h]
  __int64 v120; // [rsp+190h] [rbp-188h]
  _BYTE v121[40]; // [rsp+198h] [rbp-180h] BYREF
  _QWORD v122[3]; // [rsp+1C0h] [rbp-158h] BYREF
  _QWORD v123[5]; // [rsp+1D8h] [rbp-140h] BYREF
  __int64 v124; // [rsp+200h] [rbp-118h] BYREF
  _BYTE v125[12]; // [rsp+210h] [rbp-108h] BYREF
  __m128i v126; // [rsp+220h] [rbp-F8h]
  int v127; // [rsp+230h] [rbp-E8h]
  const char *v128; // [rsp+238h] [rbp-E0h]
  __m128i v129; // [rsp+240h] [rbp-D8h]
  __int32 v130; // [rsp+250h] [rbp-C8h]
  __int64 v131; // [rsp+258h] [rbp-C0h]
  __int32 v132; // [rsp+260h] [rbp-B8h]
  __int16 v133; // [rsp+264h] [rbp-B4h]
  char v134; // [rsp+266h] [rbp-B2h]
  void *ptr; // [rsp+270h] [rbp-A8h] BYREF
  __int64 v136; // [rsp+278h] [rbp-A0h]
  _BYTE v137[152]; // [rsp+280h] [rbp-98h] BYREF

  m128i_i32 = a1[1].m128i_i32;
  v8 = a1[1].m128i_i32;
  v9 = a1[1].m128i_i32[0];
  v83 = a5;
  a1[2].m128i_i32[2] = v9;
  v10 = (__int64 *)a1->m128i_i64[1];
  v92 = a6;
  sub_14634E0(v10, v8);
  v84 = a1[2].m128i_i32[2];
  v11 = sub_18957D0(*(_QWORD *)(a1[6].m128i_i64[0] + 736));
  v80 = a1[129].m128i_i8[1];
  a1[129].m128i_i8[1] = v11 != 0;
  if ( v11 )
    sub_1A865F0(*(_QWORD *)(a1[6].m128i_i64[0] + 736), v11);
  v12 = a1[2].m128i_i16[0];
  if ( v12 != 3 )
  {
    v13 = v122;
    v85 = 0;
    v136 = 0x400000000LL;
    ptr = v137;
    v122[1] = v123;
    v123[2] = (char *)a1 + 504;
    v122[0] = 0;
    v122[2] = 0x200000000LL;
    v123[3] = &v124;
    v123[4] = 0x200000000LL;
    while ( 1 )
    {
      if ( v12 == 189 )
      {
        sub_1490230(a1, (__int64)v122, 0, 0, a2, a3);
        v15 = a1[2].m128i_i16[0] - 406;
        goto LABEL_13;
      }
      if ( (unsigned __int16)(v12 - 406) > 8u )
        break;
LABEL_5:
      v14 = *(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL);
      if ( (v14 & 0x10) != 0 )
      {
        sub_1564820(v125, a1, a1[1].m128i_u32[0], (v14 & 0x40) == 0 ? 2011 : 2086);
        sub_AE9DF0((unsigned __int8 **)v125, 0, 2u);
        sub_AEA040((__int64)v125);
      }
      sub_14AB020((__int64)a1, (unsigned int *)v122, a2, a3);
LABEL_8:
      v12 = a1[2].m128i_i16[0];
    }
    if ( (unsigned int)sub_155CBC0(a1, 0, 0) )
    {
      v15 = a1[2].m128i_i16[0] - 406;
LABEL_13:
      if ( v15 > 8u && !(unsigned int)sub_155CBC0(a1, 0, 0) )
        goto LABEL_8;
      goto LABEL_5;
    }
    if ( a1[2].m128i_i16[0] != 5 )
    {
      LODWORD(v81) = 0;
      v82 = 0;
      goto LABEL_18;
    }
    v19 = (__int64 *)a1->m128i_i64[1];
    v82 = a1[1].m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v19, m128i_i32);
    v20 = a1[2].m128i_i32[2];
    v21 = a1[2].m128i_i16[0] == 72;
    LODWORD(v81) = 0;
    v85 = v20;
    if ( v21 )
    {
      v86 = v122;
      while ( 1 )
      {
        v26 = a1->m128i_i64[1];
        v38 = *(_QWORD *)(v26 + 2944);
        if ( *(unsigned int *)(v26 + 2912) > v38 )
        {
          if ( *(_WORD *)(*(_QWORD *)(v26 + 2904) + 24 * v38 + 16) != 5 )
            goto LABEL_36;
        }
        else
        {
          v39 = sub_14180A0(v26, 1u);
          v26 = a1->m128i_i64[1];
          if ( *(_WORD *)(v39 + 16) != 5 )
          {
            v38 = *(_QWORD *)(v26 + 2944);
            if ( v38 < *(unsigned int *)(v26 + 2912) )
LABEL_36:
              v22 = *(_QWORD *)(v26 + 2904) + 24 * v38;
            else
              v22 = sub_14180A0(v26, 1u);
            if ( *(_WORD *)(v22 + 16) != 157 || a1[2].m128i_i16[0] == 1 )
              goto LABEL_54;
            v23 = a1->m128i_i64[1];
            v24 = *(_QWORD *)(v23 + 2944) + 1LL;
            v25 = v24 >= *(unsigned int *)(v23 + 2912)
                ? *(_WORD *)(sub_14180A0(v23, 2u) + 16)
                : *(_WORD *)(*(_QWORD *)(v23 + 2904) + 24 * v24 + 16);
            if ( v25 != 5 )
              goto LABEL_54;
            v26 = a1->m128i_i64[1];
          }
        }
        v27 = a1[1].m128i_i32[0];
        *(_QWORD *)&v125[4] = 0;
        a1[2].m128i_i32[2] = v27;
        sub_14634E0((__int64 *)v26, m128i_i32);
        v28 = a1[2].m128i_u16[0];
        *(_DWORD *)v125 = a1[2].m128i_i32[2];
        if ( v28 == 157 )
        {
          v40 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v40, m128i_i32);
          v41 = a1[2].m128i_i32[2];
          v28 = a1[2].m128i_u16[0];
          *(_DWORD *)&v125[4] = v41;
          if ( !(_DWORD)v81 )
            LODWORD(v81) = v41;
        }
        v29 = sub_141A630(v28);
        if ( v28 == 1 || v29 )
          v30 = 0;
        else
          v30 = a1[1].m128i_i64[1];
        v126.m128i_i64[0] = v30;
        v31 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v31, m128i_i32);
        *(_DWORD *)&v125[8] = a1[2].m128i_i32[2];
        v32 = (unsigned int)v136;
        v33 = (unsigned int)v136 + 1LL;
        if ( v33 > HIDWORD(v136) )
        {
          if ( ptr > v125 || v125 >= (char *)ptr + 24 * (unsigned int)v136 )
          {
            sub_2237220(&ptr, v137, v33, 24);
            v34 = (char *)ptr;
            v32 = (unsigned int)v136;
            v35 = (const __m128i *)v125;
          }
          else
          {
            v87 = (unsigned __int64 *)ptr;
            sub_2237220(&ptr, v137, v33, 24);
            v34 = (char *)ptr;
            v32 = (unsigned int)v136;
            v35 = (const __m128i *)((char *)ptr + v125 - (_BYTE *)v87);
          }
        }
        else
        {
          v34 = (char *)ptr;
          v35 = (const __m128i *)v125;
        }
        a3 = (__m128)_mm_loadu_si128(v35);
        v36 = (__m128 *)&v34[24 * v32];
        *v36 = a3;
        v37 = v35[1].m128i_i64[0];
        LODWORD(v136) = v136 + 1;
        v36[1].m128_u64[0] = v37;
        if ( a1[2].m128i_i16[0] != 72 )
        {
LABEL_54:
          v13 = v86;
          break;
        }
      }
    }
LABEL_18:
    sub_14A1D90((__int64)a1);
    if ( a1[2].m128i_i16[0] == 189 )
      sub_1490230(a1, (__int64)v13, 0, 0, a2, a3);
    sub_14A1D90((__int64)a1);
    v16 = v122[0];
    if ( (_DWORD)v136 && LODWORD(v122[0]) )
    {
      v86 = v125;
      sub_1564820(v125, a1, LODWORD(v122[0]), 1913);
      sub_AEA040((__int64)v125);
    }
    if ( a1[2].m128i_i16[0] == 64 )
    {
      if ( v82 )
      {
        if ( (_DWORD)v136 )
        {
          sub_1564820(v125, a1, *(unsigned int *)ptr, 1915);
          v48 = *((_DWORD *)ptr + 6 * (unsigned int)v136 - 4);
          v49 = *(_DWORD *)ptr;
          v116 = 1;
          v115 = __PAIR64__(v48, v49);
          sub_AEC610((__int64 *)v125, (__int64 *)&v115);
          sub_AEA040((__int64)v125);
          v18 = 0;
          strcpy(v125, "?");
          sub_15680D0(a1, v125, 1, 0);
        }
        else
        {
          if ( v16 )
          {
            sub_1564820(v125, a1, v16, 1912);
            sub_AEA040((__int64)v125);
          }
          if ( v92 )
          {
            v86 = v125;
            sub_1564820(v125, a1, v92, 1707);
            v117 = 0;
            v118 = 0;
            v119 = v121;
            v120 = 0;
            v121[0] = 0;
            v121[16] = 0;
            LODWORD(v115) = v92;
            HIDWORD(v115) = v92;
            v116 = 1;
            sub_14A2370((__int64 *)v125, (unsigned __int64)&v115);
            if ( v119 != v121 )
              operator delete(v119);
            sub_AEA040((__int64)v86);
          }
          v17 = sub_149FAD0((__int64)a1, v84, v85, v82, v83);
          v18 = sub_17A2530(a1[6].m128i_i64[0], v17, 0);
        }
      }
      else
      {
        v50 = m128i_i32;
        v18 = 0;
        sub_1564840(v125, a1, v50, 14);
        sub_AE9DF0((unsigned __int8 **)v125, 5, 4u);
        sub_AEA040((__int64)v125);
        strcpy(v125, "?");
        sub_15680D0(a1, v125, 1, 0);
      }
      goto LABEL_30;
    }
    v103 = a1;
    v101 = (__m128i *)&a1[122];
    v45 = a1[122].m128i_i8[0];
    a1[122].m128i_i8[0] = 1;
    v102 = v45;
    v104 = 1638424;
    v105 = 63;
    v106 = sub_1478A90;
    v107 = 0;
    v108 = 0;
    if ( (unsigned __int8)sub_149FA40((__int64)&v101) )
    {
      if ( v82 )
      {
        sub_1564840(v125, a1, m128i_i32, 14);
      }
      else
      {
        sub_1564840(v125, a1, m128i_i32, 17);
        sub_AE9DF0((unsigned __int8 **)v125, 5, 4u);
      }
      sub_AE9DF0((unsigned __int8 **)v125, 24, 4u);
      sub_AEA040((__int64)v125);
      goto LABEL_69;
    }
    v46 = *(__int64 ***)(a1[6].m128i_i64[0] + 608);
    v47 = *((_DWORD *)v46 + 2);
    if ( (v47 & 0xA0) != 0 || (v47 & 0x800) != 0 )
      goto LABEL_75;
    v51 = *v46;
    if ( *v46 )
    {
      while ( (*((_BYTE *)v51 + 9) & 8) == 0 )
      {
        v51 = (__int64 *)*v51;
        if ( !v51 )
          goto LABEL_86;
      }
      goto LABEL_75;
    }
LABEL_86:
    if ( v46[7] || v46[3] )
    {
LABEL_75:
      sub_1564820(v125, a1, (unsigned int)v108, 1753);
      sub_AEA040((__int64)v125);
      *(_WORD *)v125 = 25;
      sub_15680D0(a1, v125, 1, 0);
LABEL_69:
      v18 = 0;
LABEL_70:
      v101->m128i_i8[0] = v102;
LABEL_30:
      sub_147A450(v13);
      if ( ptr != v137 )
        free(ptr);
      goto LABEL_62;
    }
    v52 = v92;
    if ( !(_DWORD)v136 )
    {
      v86 = v125;
      v87 = &v115;
LABEL_90:
      if ( v52 )
      {
        sub_1564820(v86, a1, v92, (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) == 0 ? 1999 : 2119);
        sub_AEA040((__int64)v86);
      }
      sub_146B5E0((__int64 *)&v111, (__int64)a1, 8u, 1, 0);
      v53 = a1[6].m128i_i64[0];
      v115 = 0;
      v54 = sub_187E410(v53, *(_QWORD *)(v53 + 608), v92, v84, v85, v82, v108, (__int64)v13, (__int64)v87, 0);
      sub_2233820(v86);
      v81 = v54;
      *(_QWORD *)v125 = &off_2B4A628;
      v55 = (__m128i)_mm_loadh_ps((const double *)&v81);
      v127 = v84;
      v126 = v55;
      v128 = "parsing namespace";
      sub_14AB640((__int64)a1, (__int64 *)&ptr, 0, (__int64)&v92, (__int64)v13, (__int64)&v101, v55, a3);
      if ( v111 )
      {
        sub_1564F70(v111);
        v111 = 0;
      }
      v56 = HIDWORD(v108);
      *v83 = HIDWORD(v108);
      sub_183D140(a1[6].m128i_i64[0], v54, v56);
      v18 = sub_17A2530(a1[6].m128i_i64[0], v54, v115);
      *(_QWORD *)v125 = &off_2B4A628;
      sub_22338A0(v86);
      if ( v111 )
        sub_1564F70(v111);
      goto LABEL_70;
    }
    if ( v92 )
    {
      v59 = 1708;
      v60 = v92;
      v61 = a1;
      v86 = v125;
      v62 = v125;
    }
    else
    {
      v57 = a1->m128i_i64[1];
      v58 = *(_BYTE *)(*(_QWORD *)(v57 + 56) + 1LL);
      if ( v58 < 0 )
      {
        v86 = v125;
        sub_1564820(v125, a1, *(unsigned int *)ptr, 2085);
        sub_AEA040((__int64)v125);
        if ( !(_DWORD)v81 )
          goto LABEL_101;
        v59 = 2093;
      }
      else
      {
        if ( (v58 & 0x40) == 0 )
        {
          v63 = a1[2].m128i_i32[0];
          v64 = _mm_loadu_si128(a1 + 1);
          v65 = a1 + 3;
          v66 = &v125[8];
          v67 = a1[169].m128i_u32[2];
          v68 = 10;
          LODWORD(v88) = 0;
          while ( v68 )
          {
            *v66 = v65->m128i_i32[0];
            v65 = (const __m128i *)((char *)v65 + 4);
            ++v66;
            --v68;
          }
          v69 = a1[5].m128i_i32[2];
          v130 = v63;
          v70 = a1[5].m128i_i16[6];
          v129 = v64;
          v131 = v67;
          v132 = v69;
          v133 = v70;
          *(_QWORD *)v125 = a1;
          sub_1418D30(v57, 0);
          v134 = 1;
          LOWORD(v115) = 25;
          v87 = &v115;
          sub_15680D0(a1, &v115, 1, 2);
          v71 = a1[1].m128i_i32[0];
          v86 = v125;
          v91 = v71;
          LOWORD(v71) = a1[2].m128i_i16[0];
          sub_147B460((__int64)v125);
          v72 = (int)v88;
          if ( (_WORD)v71 == 25 )
          {
            v75 = ptr;
            v96 = 0;
            v88 = &v95;
            v95 = &v97;
            v97 = 0;
            v89 = (char *)ptr + 24 * (unsigned int)v136;
            if ( ptr != v89 )
            {
              LODWORD(v90) = v72;
              do
              {
                sub_9EE7C0(v88, " { ");
                if ( v75[1] )
                  sub_9EE7C0(v88, "inline ");
                sub_9EE7C0(v88, "namespace ");
                v76 = *(unsigned int **)(*((_QWORD *)v75 + 2) + 16LL);
                v77 = *v76;
                if ( v77 > 0x7FFFFFFFFFFFFFFFLL - v96 )
                  std::__throw_length_error("basic_string::append");
                v75 += 6;
                sub_9EE560(v88, (_BYTE *)v76 + 16, v77);
              }
              while ( v75 != v89 );
              v72 = (int)v90;
            }
            v99 = 0;
            v90 = &v98;
            v98 = &v100;
            v100 = 0;
            if ( (_DWORD)v136 )
            {
              v89 = v13;
              v78 = v136;
              v79 = v72;
              do
              {
                ++v79;
                sub_9EE7C0(v90, "} ");
              }
              while ( v79 != v78 );
              v13 = v89;
            }
            sub_1564820(v87, a1, *(unsigned int *)ptr, 2009);
            v94 = 1;
            LODWORD(v93) = *(_DWORD *)ptr;
            HIDWORD(v93) = *((_DWORD *)ptr + 6 * (unsigned int)v136 - 4);
            v89 = v109;
            sub_149EFC0((__int64)v109, v93, 1, v95, v96);
            if ( v109[0] && v109[1] )
              sub_14A2370((__int64 *)v87, (unsigned __int64)v89);
            sub_9EC740((__int64)&v111, v91, v98, v99, 0);
            if ( (_DWORD)v111 && HIDWORD(v111) )
              sub_14A2370((__int64 *)v87, (unsigned __int64)&v111);
            if ( v113 != &v114 )
              operator delete(v113);
            if ( v110 != v89 + 10 )
              operator delete(v110);
            sub_AEA040((__int64)v87);
            if ( v98 != v90 + 2 )
              operator delete(v98);
            if ( v95 != v88 + 2 )
              operator delete(v95);
          }
          else
          {
            sub_1564820(v87, a1, *(unsigned int *)ptr, 2009);
            v73 = *((_DWORD *)ptr + 6 * (unsigned int)v136 - 4);
            v74 = *(_DWORD *)ptr;
            v112 = 1;
            v111 = __PAIR64__(v73, v74);
            sub_AEC610((__int64 *)v87, (__int64 *)&v111);
            sub_AEA040((__int64)v87);
          }
          if ( (_DWORD)v81 )
          {
            sub_1564820(v87, a1, (unsigned int)v81, 2000);
            sub_AEA040((__int64)v87);
          }
          v52 = v92;
          goto LABEL_90;
        }
        v86 = v125;
        sub_1564820(v125, a1, *(unsigned int *)ptr, 2085);
        sub_AEA040((__int64)v125);
        if ( !(_DWORD)v81 )
          goto LABEL_101;
        v59 = 2000;
      }
      v60 = (unsigned int)v81;
      v61 = a1;
      v62 = v86;
    }
    sub_1564820(v62, v61, v60, v59);
    sub_AEA040((__int64)v62);
LABEL_101:
    v52 = v92;
    v87 = &v115;
    goto LABEL_90;
  }
  v42 = a1->m128i_i64[1];
  if ( *(_QWORD *)(v42 + 760) )
  {
    *(_BYTE *)(v42 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v42 + 48) + 6LL) = 1;
  }
  v43 = a1[6].m128i_i64[0];
  v18 = 0;
  a1[2].m128i_i16[0] = 1;
  sub_1721680(*(_QWORD *)(v43 + 656), *(_QWORD *)(v43 + 608));
LABEL_62:
  if ( v11 )
    sub_1A86610(*(_QWORD *)(a1[6].m128i_i64[0] + 736), v11);
  a1[129].m128i_i8[1] = v80;
  return v18;
}
