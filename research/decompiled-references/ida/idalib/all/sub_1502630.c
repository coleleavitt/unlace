__int64 __fastcall sub_1502630(const __m128i *a1, unsigned int a2, __int64 a3, __m128i a4, __m128 a5)
{
  int *m128i_i32; // r12
  __int32 v8; // eax
  __int64 *v9; // rdi
  unsigned __int16 v10; // bx
  char v11; // al
  __int64 *v12; // rdi
  __int32 v13; // eax
  __int16 v14; // dx
  __int64 v15; // rax
  __m128i v16; // xmm0
  unsigned __int32 v17; // r11d
  __int64 v18; // r10
  __int16 v19; // ax
  __int64 v20; // rsi
  __int64 *v21; // rax
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  char *v28; // r12
  unsigned int v29; // edx
  _BYTE *v30; // r9
  char *v31; // rax
  __int64 v32; // rcx
  int v33; // r8d
  unsigned __int64 v34; // rdx
  __int64 *v35; // rdi
  char v36; // al
  __int64 v37; // r10
  __int64 *v38; // rdi
  __int64 v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdi
  unsigned __int64 v51; // rax
  __int64 *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 *v59; // rax
  __int8 v60; // al
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int16 v65; // ax
  __int64 *v66; // rdi
  bool v67; // zf
  _BYTE *v68; // rax
  _BYTE *v69; // rdx
  int v70; // ecx
  __int64 *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  int *v76; // rdx
  int v78; // [rsp+8h] [rbp-240h]
  int v79; // [rsp+10h] [rbp-238h]
  __int64 v80; // [rsp+10h] [rbp-238h]
  __int64 v81; // [rsp+20h] [rbp-228h]
  _BYTE *v82; // [rsp+28h] [rbp-220h]
  __int64 v83; // [rsp+28h] [rbp-220h]
  unsigned __int16 v84; // [rsp+28h] [rbp-220h]
  __int64 v85; // [rsp+28h] [rbp-220h]
  __int64 v86; // [rsp+28h] [rbp-220h]
  __int32 v87; // [rsp+28h] [rbp-220h]
  __int64 v88; // [rsp+28h] [rbp-220h]
  int v89; // [rsp+30h] [rbp-218h]
  unsigned __int32 v90; // [rsp+30h] [rbp-218h]
  unsigned __int32 v91; // [rsp+30h] [rbp-218h]
  __int64 v92; // [rsp+30h] [rbp-218h]
  __int32 v93; // [rsp+30h] [rbp-218h]
  unsigned __int32 v94; // [rsp+30h] [rbp-218h]
  char *v95; // [rsp+38h] [rbp-210h]
  __int64 v96; // [rsp+40h] [rbp-208h]
  unsigned __int32 v97; // [rsp+48h] [rbp-200h]
  unsigned __int32 v98; // [rsp+4Ch] [rbp-1FCh]
  unsigned int v99; // [rsp+50h] [rbp-1F8h] BYREF
  int v100; // [rsp+54h] [rbp-1F4h] BYREF
  __int64 v101; // [rsp+58h] [rbp-1F0h] BYREF
  __m128 v102; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v103; // [rsp+70h] [rbp-1D8h]
  __int16 v104; // [rsp+80h] [rbp-1C8h] BYREF
  __int128 v105; // [rsp+88h] [rbp-1C0h]
  __int64 v106[4]; // [rsp+A0h] [rbp-1A8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-188h] BYREF
  __int64 v108; // [rsp+C8h] [rbp-180h]
  _BYTE v109[32]; // [rsp+D0h] [rbp-178h] BYREF
  void *v110; // [rsp+F0h] [rbp-158h] BYREF
  __int64 v111; // [rsp+F8h] [rbp-150h]
  const __m128i *v112; // [rsp+100h] [rbp-148h] BYREF
  int v113; // [rsp+108h] [rbp-140h]
  __int16 v114; // [rsp+10Ch] [rbp-13Ch]
  __int64 (__fastcall *v115)(__int64); // [rsp+110h] [rbp-138h]
  __int64 v116; // [rsp+118h] [rbp-130h]
  __int64 v117; // [rsp+120h] [rbp-128h]
  void *v118; // [rsp+130h] [rbp-118h] BYREF
  __int64 v119; // [rsp+138h] [rbp-110h]
  _BYTE v120[64]; // [rsp+140h] [rbp-108h] BYREF
  void *v121; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v122; // [rsp+188h] [rbp-C0h]
  _BYTE v123[184]; // [rsp+190h] [rbp-B8h] BYREF

  m128i_i32 = a1[1].m128i_i32;
  sub_14FAB60((__int64)a1, a2);
  v8 = a1[1].m128i_i32[0];
  v9 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = v8;
  sub_14634E0(v9, m128i_i32);
  if ( a1[2].m128i_i16[0] != 3 )
  {
    sub_14F4710(a1, 7, a4, a5);
    if ( (unsigned __int8)sub_15648A0(a1) )
      return 0;
    v10 = a1[2].m128i_u16[0];
    v11 = sub_141A630(v10);
    if ( v10 == 1 || v11 )
      v81 = 0;
    else
      v81 = a1[1].m128i_i64[1];
    v12 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v12, m128i_i32);
    v13 = a1[2].m128i_i32[2];
    v99 = 0;
    v14 = a1[2].m128i_i16[0];
    v100 = 0;
    v97 = v13;
    v121 = v123;
    v122 = 0x800000000LL;
    v15 = a1[6].m128i_i64[0];
    v103 = 0;
    v79 = 0;
    v16 = (__m128i)_mm_loadh_ps((const double *)(v15 + 608));
    v102 = (__m128)v16;
    if ( v14 == 47 )
    {
      v49 = sub_14F4830((__int64)a1, (__int64)&v102, &v99, (__int64)&v121, &v100, 1, *(double *)v16.m128i_i64, a5);
      v14 = a1[2].m128i_i16[0];
      v79 = v49;
      if ( v14 != 22 )
        goto LABEL_8;
    }
    else if ( v14 != 22 )
    {
      goto LABEL_8;
    }
    v50 = a1->m128i_i64[1];
    v51 = *(_QWORD *)(v50 + 2944);
    if ( v51 >= *(unsigned int *)(v50 + 2912) )
      v52 = (__int64 *)sub_14180A0(v50, 1u);
    else
      v52 = (__int64 *)(*(_QWORD *)(v50 + 2904) + 24 * v51);
    if ( (unsigned __int8)sub_147E1A0((__int64)a1, (__int64)v52) )
    {
      v14 = a1[2].m128i_i16[0];
LABEL_8:
      v17 = 0;
      v101 = 0;
      v118 = v120;
      v110 = &v112;
      v111 = 0x400000000LL;
      v119 = 0x400000000LL;
      ptr = v109;
      v108 = 0x400000000LL;
      if ( v14 == 62 )
      {
        v35 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v35, m128i_i32);
        if ( a1[2].m128i_i16[0] == 3 )
        {
          v72 = a1->m128i_i64[1];
          if ( *(_QWORD *)(v72 + 760) )
          {
            *(_BYTE *)(v72 + 968) = 1;
            *(_BYTE *)(*(_QWORD *)(v72 + 48) + 6LL) = 1;
          }
          v73 = a1[6].m128i_i64[0];
          v22 = 0;
          a1[2].m128i_i16[0] = 1;
          sub_1719E40(*(_QWORD *)(v73 + 656), *(_QWORD *)(v73 + 608), v81, v97);
          goto LABEL_16;
        }
        if ( (unsigned __int8)sub_15648A0(a1) )
          goto LABEL_80;
        v84 = a1[2].m128i_u16[0];
        v36 = sub_141A630(v84);
        if ( v84 == 1 || v36 )
          v37 = 0;
        else
          v37 = a1[1].m128i_i64[1];
        v38 = (__int64 *)a1->m128i_i64[1];
        v85 = v37;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v38, m128i_i32);
        v14 = a1[2].m128i_i16[0];
        v17 = a1[2].m128i_u32[2];
        v18 = v85;
        v19 = v14;
        if ( v14 == 47 )
        {
          v93 = a1[2].m128i_i32[2];
          sub_14F8F50(
            (__int64)a1,
            0,
            (unsigned int *)&v101,
            (__int64)&v110,
            (_DWORD *)&v101 + 1,
            (__int64)&v99,
            v16,
            a5,
            (__int64)&v118,
            (__int64 *)&ptr,
            (__int64)&v100,
            1u,
            1u);
          v14 = a1[2].m128i_i16[0];
          v18 = v85;
          v17 = v93;
          v19 = v14;
          if ( v14 == 1 )
            goto LABEL_80;
        }
        if ( v99 )
        {
LABEL_10:
          if ( (_DWORD)v122 )
          {
            v28 = (char *)v121;
            v29 = v108;
            v30 = v109;
            v31 = (char *)v121 + 16 * (unsigned int)v122;
            do
            {
              while ( 1 )
              {
                v32 = v29;
                v33 = *(_DWORD *)v28;
                v34 = v29 + 1LL;
                if ( v34 > HIDWORD(v108) )
                  break;
                v28 += 16;
                *((_DWORD *)ptr + v32) = v33;
                v29 = v108 + 1;
                LODWORD(v108) = v108 + 1;
                if ( v31 == v28 )
                  goto LABEL_31;
              }
              v98 = v17;
              v96 = v18;
              v28 += 16;
              v95 = v31;
              v89 = v33;
              v82 = v30;
              sub_2237220(&ptr, v30, v34, 4);
              v30 = v82;
              v18 = v96;
              v17 = v98;
              *((_DWORD *)ptr + (unsigned int)v108) = v89;
              v29 = v108 + 1;
              v31 = v95;
              LODWORD(v108) = v108 + 1;
            }
            while ( v95 != v28 );
LABEL_31:
            v90 = v17;
            v83 = v18;
            sub_18A5DC0(*(_QWORD *)(a1[6].m128i_i64[0] + 736), 1, 1, v121, (unsigned int)v122, &v118);
            v19 = a1[2].m128i_i16[0];
            v18 = v83;
            v17 = v90;
          }
          else
          {
            v19 = v14;
          }
LABEL_12:
          if ( v19 == 47 )
          {
LABEL_13:
            v104 = 0;
            v20 = a1[6].m128i_i64[0];
            v105 = 0;
            v21 = (__int64 *)sub_18A75B0(
                               *(_QWORD *)(v20 + 736),
                               *(_QWORD *)(v20 + 608),
                               a2,
                               v81,
                               v97,
                               v79,
                               v18,
                               v17,
                               (__int64)v110,
                               (unsigned int)v111,
                               v101,
                               (__int64)v118,
                               v119,
                               (__int64)ptr,
                               v100,
                               a3,
                               (__int64)&v104);
            v22 = (__int64)v21;
            if ( a1[2].m128i_i16[0] == 24 )
              sub_14FAF70(a1, v21, 9, a2, (__m128i)0LL, a5);
            sub_1501640((__int64)a1, 7, v22, (__m128i)0LL, a5);
            if ( HIBYTE(v104) )
            {
              v39 = v105;
              v80 = a1[6].m128i_i64[0];
              v78 = sub_BAC410(v22, 7, v23, v24, v25, v26);
              if ( v78 == (unsigned int)sub_BAC410(v39, 7, v40, v41, v42, v43) )
              {
                sub_1A39AF0(v80, v39);
                v57 = *(_QWORD *)(v39 + 120);
                if ( !v57 )
                {
                  sub_A794E0((__int64 *)(*(_QWORD *)(v39 + 96) + 88LL), *(_QWORD *)(v39 + 96), v53, v54, v55, v56);
                  v57 = *(_QWORD *)(v39 + 120);
                }
                v58 = 0;
                v59 = (__int64 *)(v57 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v59 )
                  v58 = *v59;
                sub_BA7B50(v22, v58);
              }
              else
              {
                v44 = a1->m128i_i64[1];
                v45 = *(_QWORD *)(a1[6].m128i_i64[0] + 248);
                v106[0] = a1[6].m128i_i64[1];
                v46 = *(_QWORD *)(v22 + 120);
                v47 = *(_QWORD *)(v44 + 56);
                v106[1] = v45;
                v106[2] = v47;
                sub_EA3B10(v106, v39, v22, v46 & 0xFFFFFFFFFFFFFFF8LL);
                sub_B88650(v22, 1);
              }
            }
            goto LABEL_16;
          }
LABEL_41:
          v91 = v17;
          v86 = v18;
          sub_1894F20(*(_QWORD *)(a1[6].m128i_i64[0] + 736), &v118, &ptr, v18, v17);
          v17 = v91;
          v18 = v86;
          goto LABEL_13;
        }
        if ( (_DWORD)v119 )
          goto LABEL_12;
      }
      else
      {
        v18 = 0;
        if ( v99 )
          goto LABEL_10;
      }
      if ( v14 != 47 )
        goto LABEL_41;
      v94 = v17;
      v88 = v18;
      if ( !(unsigned __int8)sub_14F5A70((__int64)a1, (__int64)&v118, (__int64)&ptr, 1u, 1u, &v99, (__int64)&v100, 1u) )
      {
        v19 = a1[2].m128i_i16[0];
        v17 = v94;
        v18 = v88;
        goto LABEL_12;
      }
LABEL_80:
      v22 = 0;
LABEL_16:
      if ( ptr != v109 )
        free(ptr);
      if ( v118 != v120 )
        free(v118);
      if ( v110 != &v112 )
        free(v110);
      goto LABEL_22;
    }
    v112 = a1;
    v110 = (void *)&a1[122];
    v60 = a1[122].m128i_i8[0];
    a1[122].m128i_i8[0] = 1;
    LOBYTE(v111) = v60;
    v114 = 63;
    v115 = sub_146A990;
    v113 = 1507350;
    v116 = 0;
    v117 = 0;
    sub_149FA40((__int64)&v110);
    v65 = a1[2].m128i_i16[0];
    v87 = 0;
    if ( v65 == 3 )
    {
      v74 = a1->m128i_i64[1];
      if ( *(_QWORD *)(v74 + 760) )
      {
        *(_BYTE *)(v74 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v74 + 48) + 6LL) = 1;
      }
      v75 = a1[6].m128i_i64[0];
      v22 = 0;
      a1[2].m128i_i16[0] = 1;
      sub_1717870(*(_QWORD *)(v75 + 656), *(_QWORD *)(v75 + 608), v81, v97);
      goto LABEL_74;
    }
    v66 = (__int64 *)a1->m128i_i64[1];
    if ( v65 == 5 )
    {
      v52 = (__int64 *)m128i_i32;
      v92 = a1[1].m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v66, m128i_i32);
      v87 = a1[2].m128i_i32[2];
    }
    else
    {
      LODWORD(v92) = 0;
      if ( (*(_BYTE *)(v66[7] + 2) & 4) == 0 )
      {
        v76 = m128i_i32;
        v22 = 0;
        sub_1564840(&v118, a1, v76, 14);
        sub_AE9DF0((unsigned __int8 **)&v118, 5, 4u);
        sub_AEA040((__int64)&v118);
        goto LABEL_74;
      }
    }
    v22 = 0;
    sub_14808E0((__int64)&v110, v52, v61, v62, v63, v64);
    if ( HIDWORD(v117) )
    {
      v67 = a1[2].m128i_i16[0] == 47;
      v68 = v120;
      v69 = v109;
      v119 = 0x800000000LL;
      v118 = v120;
      ptr = v109;
      v108 = 0x800000000LL;
      if ( v67 )
      {
        if ( (unsigned __int8)sub_14F5A70((__int64)a1, (__int64)&v118, (__int64)&ptr, 1u, 1u, &v99, (__int64)&v100, 1u) )
        {
LABEL_70:
          if ( ptr != v109 )
            free(ptr);
          if ( v118 != v120 )
            free(v118);
          goto LABEL_74;
        }
        v70 = v119;
        v68 = v118;
        v69 = ptr;
      }
      else
      {
        v70 = 0;
      }
      v71 = (__int64 *)sub_18A81F0(
                         *(_QWORD *)(a1[6].m128i_i64[0] + 736),
                         a2,
                         v81,
                         v97,
                         v79,
                         v92,
                         v87,
                         (__int64)v68,
                         v70,
                         (__int64)v69,
                         v100,
                         a3);
      v22 = (__int64)v71;
      if ( a1[2].m128i_i16[0] == 24 )
        sub_14FAF70(a1, v71, 8, a2, v16, a5);
      sub_1501640((__int64)a1, 0, v22, v16, a5);
      goto LABEL_70;
    }
LABEL_74:
    *(_BYTE *)v110 = v111;
LABEL_22:
    if ( v103 )
      sub_1894E40(*(_QWORD *)(v102.m128_u64[0] + 736), v102.m128_u64[1]);
    if ( v121 != v123 )
      free(v121);
    return v22;
  }
  v48 = a1->m128i_i64[1];
  if ( *(_QWORD *)(v48 + 760) )
  {
    *(_BYTE *)(v48 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v48 + 48) + 6LL) = 1;
  }
  v22 = 0;
  a1[2].m128i_i16[0] = 1;
  sub_171A3F0(*(_QWORD *)(a1[6].m128i_i64[0] + 656), *(_QWORD *)(a1[6].m128i_i64[0] + 608));
  return v22;
}
