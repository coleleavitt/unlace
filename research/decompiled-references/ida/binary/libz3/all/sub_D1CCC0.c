__int64 __fastcall sub_D1CCC0(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned int *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdi
  char v16; // al
  __int64 *v17; // r9
  __int64 v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rax
  _DWORD *v23; // rdx
  __int64 v24; // rax
  _DWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  _DWORD *v28; // rax
  __int64 v29; // rbp
  __int64 v30; // r15
  __m128 v31; // xmm2
  __m128i v32; // xmm0
  __m128i v33; // xmm2
  bool v34; // zf
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 *v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __m128 v41; // xmm3
  __m128 v42; // xmm5
  __m128 v43; // xmm0
  __m128i v44; // xmm7
  __m128 v45; // xmm6
  __int64 v46; // r12
  __int64 v47; // r12
  __m128i v48; // xmm7
  __m128i v49; // xmm1
  __m128i v50; // xmm2
  __int64 v51; // rcx
  int v52; // esi
  __int64 *v53; // r12
  __int32 v54; // r10d
  __int64 v55; // rcx
  __int64 *v56; // r15
  int v57; // edi
  __int64 v58; // r10
  __int64 *v59; // r8
  __int64 *v60; // rax
  __int64 *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  _QWORD *v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  __int64 *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rbx
  unsigned int v71; // r12d
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rcx
  __int64 *v75; // rcx
  __int64 *v76; // rax
  __int32 v77; // r11d
  __m128i *v78; // r8
  const __m128i *v79; // rax
  __m128i *v80; // r9
  __int64 v81; // rdx
  __m128i *v82; // rsi
  __m128i *v83; // rdx
  __int64 *v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rdi
  _QWORD *v90; // rax
  __int64 v91; // rax
  char **exception; // rbp
  __int64 v93; // rdx
  __int64 v94; // rbx
  _QWORD *v95; // rsi
  __int64 v96; // [rsp+0h] [rbp-2D0h] BYREF
  __int64 *v97; // [rsp+8h] [rbp-2C8h] BYREF
  __int64 v98; // [rsp+10h] [rbp-2C0h] BYREF
  __m128i v99; // [rsp+18h] [rbp-2B8h] BYREF
  __int64 v100; // [rsp+28h] [rbp-2A8h] BYREF
  __int64 v101; // [rsp+30h] [rbp-2A0h]
  __m128i v102; // [rsp+38h] [rbp-298h] BYREF
  __m128i v103; // [rsp+48h] [rbp-288h] BYREF
  __m128i v104; // [rsp+58h] [rbp-278h] BYREF
  __int64 v105; // [rsp+68h] [rbp-268h]
  __int64 v106; // [rsp+70h] [rbp-260h]
  __int64 v107; // [rsp+78h] [rbp-258h]
  __int64 v108; // [rsp+80h] [rbp-250h]
  __m128i v109; // [rsp+88h] [rbp-248h] BYREF
  __m128i v110; // [rsp+98h] [rbp-238h] BYREF
  __m128i v111; // [rsp+A8h] [rbp-228h] BYREF
  __int64 v112; // [rsp+B8h] [rbp-218h]
  __m128i *v113; // [rsp+C0h] [rbp-210h]
  __int64 v114; // [rsp+D0h] [rbp-200h] BYREF
  __int64 v115; // [rsp+D8h] [rbp-1F8h] BYREF
  __int64 v116; // [rsp+E0h] [rbp-1F0h] BYREF
  __int64 v117; // [rsp+E8h] [rbp-1E8h] BYREF
  __int64 v118; // [rsp+F0h] [rbp-1E0h]
  __int64 *v119; // [rsp+F8h] [rbp-1D8h] BYREF
  __int64 v120; // [rsp+100h] [rbp-1D0h]
  __int64 v121; // [rsp+108h] [rbp-1C8h] BYREF
  __int64 v122; // [rsp+110h] [rbp-1C0h]
  __m128 v123; // [rsp+118h] [rbp-1B8h] BYREF
  __int64 v124; // [rsp+128h] [rbp-1A8h]
  __m128i v125; // [rsp+138h] [rbp-198h] BYREF
  __int64 v126; // [rsp+148h] [rbp-188h]
  __m128i v127; // [rsp+158h] [rbp-178h] BYREF
  __int64 v128; // [rsp+168h] [rbp-168h]
  _QWORD v129[4]; // [rsp+178h] [rbp-158h] BYREF
  _OWORD v130[2]; // [rsp+198h] [rbp-138h] BYREF
  _QWORD v131[4]; // [rsp+1B8h] [rbp-118h] BYREF
  _QWORD v132[4]; // [rsp+1D8h] [rbp-F8h] BYREF
  _QWORD v133[4]; // [rsp+1F8h] [rbp-D8h] BYREF
  _QWORD v134[4]; // [rsp+218h] [rbp-B8h] BYREF
  _OWORD v135[2]; // [rsp+238h] [rbp-98h] BYREF
  _OWORD v136[2]; // [rsp+258h] [rbp-78h] BYREF
  _OWORD v137[5]; // [rsp+278h] [rbp-58h] BYREF

  if ( !*(_BYTE *)(a1 + 378) )
    return 0;
  v9 = *(_QWORD *)a1;
  v99.m128i_i64[0] = (__int64)v137;
  if ( !(unsigned __int8)sub_D15EA0(v9, a2, v136, v137) )
    return 0;
  v10 = *(_QWORD *)(a1 + 80);
  v11 = *(_QWORD *)&v136[0];
  v12 = *(unsigned int **)&v137[0];
  if ( v10 )
  {
    v13 = (unsigned int)**(_DWORD **)&v136[0];
    v12 = *(unsigned int **)&v137[0];
    if ( (unsigned int)v13 < *(_DWORD *)(v10 - 4) )
    {
      if ( *(_QWORD *)(v10 + 8 * v13) )
        goto LABEL_7;
    }
  }
  v15 = *(_QWORD *)a1;
  v96 = (__int64)v12;
  v97 = &v115;
  v16 = sub_D15EA0(v15, *(__int64 *)&v136[0], &v114, &v115);
  v12 = (unsigned int *)v96;
  if ( v16 )
  {
    v116 = v96;
    v11 = v114;
    goto LABEL_17;
  }
  v10 = *(_QWORD *)(a1 + 80);
  v17 = v97;
  if ( v10 )
  {
LABEL_7:
    v14 = *v12;
    if ( (unsigned int)v14 < *(_DWORD *)(v10 - 4) && *(_QWORD *)(v10 + 8 * v14) )
      return 0;
    v17 = &v115;
  }
  if ( !(unsigned __int8)sub_D15EA0(*(_QWORD *)a1, (__int64)v12, v17, &v116) )
    return 0;
  v114 = v11;
LABEL_17:
  if ( a3 )
  {
    LOBYTE(v137[0]) = 1;
    sub_D18670(a1, v11, v99.m128i_i64[0], 0);
    sub_D18670(a1, v115, v99.m128i_i64[0], 0);
    sub_D18670(a1, v116, v99.m128i_i64[0], 0);
    result = 1;
    if ( !LOBYTE(v137[0]) )
      return result;
  }
  v18 = *(_QWORD *)a1;
  v117 = 0;
  v101 = v18;
  v118 = v18;
  sub_D16A30(a1, v11, 0, &v117);
  v120 = v18;
  v96 = v117;
  v119 = nullptr;
  v108 = v118;
  sub_D16A30(a1, v115, 0, (__int64 *)&v119);
  v121 = 0;
  v97 = v119;
  v107 = v120;
  v122 = v18;
  sub_D16A30(a1, v116, 0, &v121);
  v19 = *(_QWORD *)a1;
  v20 = v96;
  v98 = v121;
  v21 = *(_QWORD *)(v19 + 864);
  v106 = v122;
  v22 = *(_QWORD *)(v19 + 856);
  if ( v22 == v96 )
  {
    if ( v21 )
    {
      ++*(_DWORD *)(v21 + 8);
      if ( (__int64 *)v96 != v97 )
      {
        v100 = v21;
        if ( (__int64 *)v21 != v97 )
          goto LABEL_29;
        if ( !v96 )
        {
          if ( !v98 )
          {
            v27 = (__int64)v97;
            v21 = 0;
            goto LABEL_41;
          }
          goto LABEL_144;
        }
        goto LABEL_101;
      }
      v100 = v21;
LABEL_140:
      v86 = v98;
      ++*(_DWORD *)(v21 + 8);
      v27 = v21;
      if ( v22 == v86 )
        goto LABEL_41;
      goto LABEL_36;
    }
    if ( (__int64 *)v96 == v97 )
    {
      v100 = 0;
      goto LABEL_163;
    }
    v100 = 0;
    if ( v97 )
      goto LABEL_29;
    if ( v96 )
      goto LABEL_101;
    goto LABEL_159;
  }
  if ( v21 != v96 )
  {
    if ( *(_WORD *)(v96 + 4) || (v23 = *(_DWORD **)(*(_QWORD *)(v96 + 16) + 24LL)) == nullptr || *v23 || v23[1] != 8 )
    {
      v24 = sub_15E1A70(v19);
      v100 = v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      v19 = *(_QWORD *)a1;
      v22 = *(_QWORD *)(*(_QWORD *)a1 + 856LL);
      v21 = *(_QWORD *)(*(_QWORD *)a1 + 864LL);
    }
    else
    {
      v87 = *(_QWORD *)(v96 + 32);
      v100 = v87;
      if ( v87 )
        ++*(_DWORD *)(v87 + 8);
    }
    if ( v97 != (__int64 *)v22 )
    {
      if ( (__int64 *)v21 != v97 )
      {
LABEL_29:
        if ( *((_WORD *)v97 + 2) || (v25 = *(_DWORD **)(v97[2] + 24)) == nullptr || *v25 || v25[1] != 8 )
        {
          v26 = sub_15E1A70(v19);
          v21 = v26;
          if ( v26 )
            ++*(_DWORD *)(v26 + 8);
          v19 = *(_QWORD *)a1;
          v22 = *(_QWORD *)(*(_QWORD *)a1 + 856LL);
          v27 = *(_QWORD *)(*(_QWORD *)a1 + 864LL);
        }
        else
        {
          v88 = v97[4];
          if ( v88 )
            ++*(_DWORD *)(v88 + 8);
          v27 = v21;
          v21 = v88;
        }
        if ( v98 != v22 )
        {
LABEL_36:
          if ( v27 != v98 )
            goto LABEL_37;
          v27 = 0;
          if ( !v22 )
            goto LABEL_42;
LABEL_103:
          ++*(_DWORD *)(v22 + 8);
          v27 = v22;
          goto LABEL_42;
        }
LABEL_106:
        if ( !v27 )
          goto LABEL_42;
        goto LABEL_41;
      }
      if ( !v22 )
      {
        if ( !v98 )
        {
          v27 = v21;
          v21 = 0;
          goto LABEL_106;
        }
        goto LABEL_144;
      }
LABEL_101:
      v75 = (__int64 *)v98;
      ++*(_DWORD *)(v22 + 8);
      if ( (__int64 *)v22 != v75 )
      {
        v21 = v22;
        if ( v75 != v97 )
          goto LABEL_37;
        goto LABEL_103;
      }
      v27 = (__int64)v97;
      v21 = (__int64)v75;
      goto LABEL_106;
    }
    if ( v21 )
      goto LABEL_140;
LABEL_163:
    v27 = 0;
    v21 = 0;
    if ( v22 == v98 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( v22 )
  {
    v84 = v97;
    ++*(_DWORD *)(v22 + 8);
    if ( (__int64 *)v22 != v84 )
    {
      v100 = v22;
      if ( (__int64 *)v96 != v84 )
        goto LABEL_29;
      goto LABEL_101;
    }
    v100 = (__int64)v84;
    if ( v20 )
      goto LABEL_140;
    if ( (__int64 *)v98 != v84 )
    {
      if ( v98 )
        goto LABEL_37;
      goto LABEL_103;
    }
LABEL_160:
    v27 = 0;
    goto LABEL_42;
  }
  if ( !v97 )
  {
    v100 = 0;
    if ( v96 )
      goto LABEL_140;
LABEL_159:
    if ( v98 )
      goto LABEL_37;
    goto LABEL_160;
  }
  if ( (__int64 *)v96 != v97 )
  {
    v100 = 0;
    goto LABEL_29;
  }
  if ( !v98 )
  {
    v27 = v96;
    v21 = 0;
    v100 = 0;
    goto LABEL_41;
  }
  v100 = 0;
LABEL_144:
  if ( (__int64 *)v98 == v97 )
  {
    v27 = 0;
    v21 = 0;
    goto LABEL_42;
  }
  v21 = 0;
LABEL_37:
  if ( !*(_WORD *)(v98 + 4) )
  {
    v28 = *(_DWORD **)(*(_QWORD *)(v98 + 16) + 24LL);
    if ( v28 )
    {
      if ( !*v28 && v28[1] == 8 )
      {
        v27 = *(_QWORD *)(v98 + 32);
        goto LABEL_106;
      }
    }
  }
  v27 = sub_15E1A70(v19);
  if ( v27 )
LABEL_41:
    ++*(_DWORD *)(v27 + 8);
LABEL_42:
  if ( a4 )
  {
    v29 = v100;
    v30 = v98;
    v31 = _mm_loadh_ps((const double *)&v97);
    v124 = v98;
    v99 = (__m128i)v31;
    v102 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v96, (__m128i)(unsigned __int64)v21);
    v123 = v31;
    sub_D175A0(a1, 3, &v123);
    v32 = _mm_load_si128(&v102);
    v126 = v27;
    v125 = v32;
    sub_D175A0(a1, 3, &v125);
    v33 = _mm_load_si128(&v99);
    v128 = v27;
    v127 = v33;
    sub_D175A0(a1, 3, &v127);
    v129[0] = v29;
    v129[1] = v21;
    v129[2] = v30;
    sub_D175A0(a1, 3, v129);
    goto LABEL_44;
  }
  v112 = *(_QWORD *)a1;
  v39 = sub_D17130(a1);
  v102.m128i_i64[0] = v39;
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  v40 = sub_15E1A70(*(_QWORD *)a1);
  v41 = _mm_loadh_ps((const double *)&v96);
  v42 = _mm_loadh_ps((const double *)&v98);
  v105 = v40;
  v103 = (__m128i)v41;
  v43 = _mm_loadh_ps((const double *)&v96);
  v44 = (__m128i)_mm_loadh_ps((const double *)&v98);
  v110 = (__m128i)v42;
  v45 = _mm_loadh_ps((const double *)&v100);
  v109 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v97, (__m128i)(unsigned __int64)v27);
  v111 = (__m128i)v45;
  v104 = v44;
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
  v130[0] = v43;
  v130[1] = v44;
  sub_D175A0(a1, 4, v130);
  v46 = v105;
  v131[2] = v21;
  v131[0] = v105;
  v131[1] = v96;
  v131[3] = v27;
  sub_D175A0(a1, 4, v131);
  v132[0] = v46;
  v132[2] = v97;
  v132[1] = v100;
  v132[3] = v27;
  sub_D175A0(a1, 4, v132);
  v133[0] = v46;
  v47 = v100;
  v133[2] = v21;
  v133[3] = v98;
  v133[1] = v100;
  sub_D175A0(a1, 4, v133);
  v134[1] = v47;
  v134[0] = v102.m128i_i64[0];
  v134[2] = v21;
  v134[3] = v27;
  sub_D175A0(a1, 4, v134);
  v48 = _mm_load_si128(&v111);
  v135[1] = _mm_load_si128(&v104);
  v135[0] = v48;
  sub_D175A0(a1, 4, v135);
  v49 = _mm_load_si128(&v110);
  v136[0] = _mm_load_si128(&v103);
  v136[1] = v49;
  sub_D175A0(a1, 4, v136);
  v50 = _mm_load_si128(&v109);
  v137[0] = _mm_load_si128(&v103);
  v137[1] = v50;
  sub_D175A0(a1, 4, v99.m128i_i64[0]);
  v51 = *(unsigned int *)(a1 + 24);
  v52 = *(_DWORD *)(a1 + 32);
  if ( 3 * (int)v51 < (unsigned int)(4 * (v52 + *(_DWORD *)(a1 + 28))) )
  {
    v104.m128i_i32[0] = 2 * v51;
    v103.m128i_i64[0] = 16LL * (unsigned int)(2 * v51);
    v76 = (__int64 *)sub_186B270(v103.m128i_u64[0]);
    v55 = v103.m128i_i64[0];
    v77 = v104.m128i_i32[0];
    v53 = v76;
    v78 = (__m128i *)((char *)v76 + v103.m128i_i64[0]);
    if ( v104.m128i_i32[0] )
    {
      if ( (v103.m128i_i8[0] & 0x10) == 0 || (*(_OWORD *)v76 = 0, v76 += 2, v76 != (__int64 *)v78) )
      {
        do
        {
          *(_OWORD *)v76 = 0;
          v76 += 4;
          *((_OWORD *)v76 - 1) = 0;
        }
        while ( v76 != (__int64 *)v78 );
      }
    }
    v79 = *(const __m128i **)(a1 + 16);
    v54 = v77 - 1;
    v56 = (__int64 *)v78;
    v80 = (__m128i *)&v79[*(unsigned int *)(a1 + 24)];
    if ( v79 != v80 )
    {
      do
      {
        if ( v79->m128i_i64[0] > 1uLL )
        {
          v81 = 16LL * (*(_DWORD *)(v79->m128i_i64[0] + 12) & (unsigned int)v54);
          v82 = (__m128i *)&v53[(unsigned __int64)v81 / 8];
          if ( v55 == v81 )
          {
LABEL_121:
            if ( v53 == (__int64 *)v82 )
            {
LABEL_146:
              v113 = v78;
              v111.m128i_i32[0] = v77;
              v110.m128i_i64[0] = v55;
              v109.m128i_i64[0] = (__int64)v79;
              v104.m128i_i64[0] = (__int64)v80;
              v103.m128i_i32[0] = v77 - 1;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v83 = (__m128i *)v53;
            while ( v83->m128i_i64[0] )
            {
              if ( v82 == ++v83 )
                goto LABEL_146;
            }
          }
          else
          {
            v83 = (__m128i *)&v53[(unsigned __int64)v81 / 8];
            while ( v83->m128i_i64[0] )
            {
              if ( v78 == ++v83 )
                goto LABEL_121;
            }
          }
          *v83 = _mm_loadu_si128(v79);
        }
        ++v79;
      }
      while ( v80 != v79 );
      v80 = *(__m128i **)(a1 + 16);
    }
    if ( v80 )
    {
      v109.m128i_i32[0] = v77;
      v104.m128i_i64[0] = v55;
      v103.m128i_i32[0] = v77 - 1;
      sub_186B220(v80);
      v77 = v109.m128i_i32[0];
      v55 = v104.m128i_i64[0];
      v54 = v103.m128i_i32[0];
    }
    *(_QWORD *)(a1 + 16) = v53;
    v52 = 0;
    *(_DWORD *)(a1 + 24) = v77;
    *(_DWORD *)(a1 + 32) = 0;
  }
  else
  {
    v53 = *(__int64 **)(a1 + 16);
    v54 = v51 - 1;
    v55 = 16 * v51;
    v56 = (__int64 *)((char *)v53 + v55);
  }
  v57 = *(_DWORD *)(a2 + 12);
  v58 = 16LL * (v57 & (unsigned int)v54);
  v59 = &v53[(unsigned __int64)v58 / 8];
  if ( v58 != v55 )
  {
    v60 = &v53[(unsigned __int64)v58 / 8];
    v61 = nullptr;
    while ( 1 )
    {
      v62 = *v60;
      if ( (unsigned __int64)*v60 > 1 )
      {
        if ( *(_DWORD *)(v62 + 12) == v57 && a2 == v62 )
        {
          v89 = v102.m128i_i64[0];
          *v60 = a2;
          v60[1] = v89;
          goto LABEL_85;
        }
      }
      else
      {
        if ( !v62 )
        {
          if ( v61 )
            goto LABEL_135;
          v61 = v60;
          goto LABEL_136;
        }
        v61 = v60;
      }
      v60 += 2;
      if ( v56 == v60 )
        goto LABEL_80;
    }
  }
  v61 = nullptr;
  while ( 1 )
  {
LABEL_80:
    if ( v59 == v53 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v63 = *v53;
    if ( (unsigned __int64)*v53 <= 1 )
      break;
    if ( *(_DWORD *)(v63 + 12) == v57 && a2 == v63 )
    {
      v91 = v102.m128i_i64[0];
      *v53 = a2;
      v53[1] = v91;
      goto LABEL_85;
    }
LABEL_79:
    v53 += 2;
  }
  if ( v63 )
  {
    v61 = v53;
    goto LABEL_79;
  }
  if ( v61 )
LABEL_135:
    *(_DWORD *)(a1 + 32) = v52 - 1;
  else
    v61 = v53;
LABEL_136:
  v85 = v102.m128i_i64[0];
  *v61 = a2;
  v61[1] = v85;
  ++*(_DWORD *)(a1 + 28);
LABEL_85:
  v64 = *(_QWORD **)(a1 + 48);
  ++*(_DWORD *)(a2 + 8);
  if ( v64 )
  {
    v65 = *((_DWORD *)v64 - 1);
    if ( v65 == *((_DWORD *)v64 - 2) )
    {
      v71 = (3 * v65 + 1) >> 1;
      v72 = 8 * v71 + 8;
      if ( 8 * v65 + 8 >= (unsigned int)v72 || v65 >= v71 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_166874((__int64 *)v99.m128i_i64[0], "Overflow encountered when expanding vector", v93);
        v94 = v99.m128i_i64[0];
        v95 = (_QWORD *)v99.m128i_i64[0];
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v95);
        sub_233E40(v94);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v73 = (unsigned int *)sub_186B300(v64 - 1, v72);
      v74 = v73[1];
      v64 = v73 + 2;
      *v73 = v71;
      *(_QWORD *)(a1 + 48) = v73 + 2;
      LODWORD(v73) = v74;
      v68 = &v64[v74];
      v67 = (_DWORD)v73 + 1;
    }
    else
    {
      v66 = v65;
      v67 = v65 + 1;
      v68 = &v64[v66];
    }
  }
  else
  {
    v90 = (_QWORD *)sub_186B270(0x18u);
    v64 = v90 + 1;
    *v90 = 2;
    v67 = 1;
    *(_QWORD *)(a1 + 48) = v64;
    v68 = v64;
  }
  *v68 = a2;
  v69 = v105;
  *((_DWORD *)v64 - 1) = v67;
  if ( v69 )
  {
    v99.m128i_i32[0] = *(_DWORD *)(v69 + 8);
    v34 = v99.m128i_i32[0] == 1;
    *(_DWORD *)(v69 + 8) = v99.m128i_i32[0] - 1;
    if ( v34 )
      sub_15D7BC0(v112, v69);
  }
  v70 = v102.m128i_i64[0];
  if ( v102.m128i_i64[0] )
  {
    v99.m128i_i32[0] = *(_DWORD *)(v102.m128i_i64[0] + 8);
    v34 = v99.m128i_i32[0] == 1;
    *(_DWORD *)(v102.m128i_i64[0] + 8) = v99.m128i_i32[0] - 1;
    if ( v34 )
      sub_15D7BC0(v112, v70);
  }
LABEL_44:
  if ( v27 )
  {
    v34 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v34 )
      sub_15D7BC0(v101, v27);
  }
  if ( v21 )
  {
    v34 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v34 )
      sub_15D7BC0(v101, v21);
  }
  v35 = v100;
  if ( v100 )
  {
    v99.m128i_i32[0] = *(_DWORD *)(v100 + 8);
    v34 = v99.m128i_i32[0] == 1;
    *(_DWORD *)(v100 + 8) = v99.m128i_i32[0] - 1;
    if ( v34 )
      sub_15D7BC0(v101, v35);
  }
  v36 = v98;
  if ( v98 )
  {
    LODWORD(v100) = *(_DWORD *)(v98 + 8);
    v34 = (_DWORD)v100 == 1;
    *(_DWORD *)(v98 + 8) = v100 - 1;
    if ( v34 )
      sub_15D7BC0(v106, v36);
  }
  v37 = v97;
  if ( v97 )
  {
    LODWORD(v98) = *((_DWORD *)v97 + 2);
    v34 = (_DWORD)v98 == 1;
    *((_DWORD *)v97 + 2) = v98 - 1;
    if ( v34 )
      sub_15D7BC0(v107, v37);
  }
  v38 = v96;
  if ( v96 )
  {
    LODWORD(v97) = *(_DWORD *)(v96 + 8);
    v34 = (_DWORD)v97 == 1;
    *(_DWORD *)(v96 + 8) = (_DWORD)v97 - 1;
    if ( v34 )
      sub_15D7BC0(v108, v38);
  }
  return 2;
}

