__int64 __fastcall sub_3F00E0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  _DWORD *v14; // rax
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // r13
  void *v18; // r12
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // r12
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  int v25; // edx
  __int64 v26; // rbp
  unsigned int v27; // r12d
  __int64 v28; // rdx
  __m128 v29; // xmm0
  __m128i si128; // xmm0
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rbp
  _DWORD *v39; // rdx
  __int64 v40; // rax
  _DWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  char v44; // al
  __int64 v45; // rax
  __int64 v46; // rsi
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  int v50; // r13d
  __m128i v51; // xmm0
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  char v55; // al
  __int64 v56; // r12
  __int64 v57; // rdi
  __int64 v58; // rax
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // r12
  unsigned int *v66; // r15
  __int64 v67; // rdi
  int v68; // eax
  __int64 v69; // rax
  int v70; // ecx
  int v71; // r8d
  int v72; // r9d
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // ecx
  int v76; // r8d
  int v77; // r9d
  __int64 v78[2]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v79; // [rsp+10h] [rbp-148h]
  __int64 v80; // [rsp+18h] [rbp-140h]
  __int64 v81[2]; // [rsp+20h] [rbp-138h] BYREF
  void *v82; // [rsp+30h] [rbp-128h]
  void *v83; // [rsp+38h] [rbp-120h]
  __int64 v84; // [rsp+40h] [rbp-118h]
  void *ptr; // [rsp+48h] [rbp-110h]
  int v86[2]; // [rsp+50h] [rbp-108h]
  __int64 v87; // [rsp+58h] [rbp-100h]
  int v88; // [rsp+60h] [rbp-F8h]
  int v89; // [rsp+68h] [rbp-F0h]
  char v90; // [rsp+6Eh] [rbp-EAh] BYREF
  char v91; // [rsp+6Fh] [rbp-E9h] BYREF
  int v92[2]; // [rsp+70h] [rbp-E8h] BYREF
  int v93[2]; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v94; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v95; // [rsp+88h] [rbp-D0h] BYREF
  void *v96[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v97[2]; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v98; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned int *v99; // [rsp+B8h] [rbp-A0h] BYREF
  int v100[2]; // [rsp+C0h] [rbp-98h] BYREF
  int v101[2]; // [rsp+C8h] [rbp-90h]
  int v102[2]; // [rsp+D0h] [rbp-88h]
  char v103[8]; // [rsp+D8h] [rbp-80h]
  __int64 v104; // [rsp+E0h] [rbp-78h] BYREF
  int v105[2]; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v106; // [rsp+F0h] [rbp-68h]
  __int64 v107; // [rsp+F8h] [rbp-60h]
  __int64 v108[11]; // [rsp+100h] [rbp-58h] BYREF

  v5 = *a2;
  v79 = a3;
  *(_QWORD *)v92 = 0;
  *(_QWORD *)v93 = 0;
  sub_15B97F0(a3, v5, v92, v93);
  v6 = *(_QWORD *)v92;
  if ( *(_QWORD *)v92 )
  {
    ++*(_DWORD *)(*(_QWORD *)v92 + 8LL);
    result = sub_3E5D20(*a2, a2[1]);
    *a2 = v6;
    return result;
  }
  v8 = *a1;
  v9 = a1[1];
  v80 = (__int64)(a1 + 1);
  *(_QWORD *)v86 = v8;
  v10 = sub_15D2CD0(v9, 5, 1, 0, 0);
  v14 = (_DWORD *)sub_3EC140((__int64)(a1 + 1), (int)&qword_1C7F2A0, v10, v11, v12, v13);
  ptr = v14;
  if ( v14 )
    ++v14[2];
  v17 = *a2;
  v18 = (void *)*a1;
  *(_QWORD *)v100 = 0;
  *(_QWORD *)v102 = 1;
  v19 = *(_WORD *)(v17 + 4) == 0;
  v82 = v18;
  *(_QWORD *)v101 = 0;
  *(_QWORD *)v103 = 0;
  if ( v19 )
  {
    v23 = *(_QWORD *)(v17 + 16);
    v78[0] = (__int64)v18;
    v83 = v100;
    v24 = *(_DWORD **)(v23 + 24);
    v25 = *(_DWORD *)(v17 + 24);
    if ( !v24 || *v24 || v24[1] != 2 || v25 != 2 )
    {
LABEL_14:
      v104 = (__int64)v18;
      if ( !v25 )
      {
        v80 = 0;
        v26 = 0;
        v35 = 0;
        LODWORD(v34) = (_DWORD)v18;
LABEL_23:
        v36 = sub_15DC610(
                v34,
                *(_QWORD *)(v17 + 16),
                v25,
                v35,
                v15,
                v16,
                v78[0],
                v78[1],
                v79,
                v80,
                v81[0],
                v81[1],
                (int)v82,
                (int)v83,
                v84,
                ptr);
        v37 = v26;
        *(_QWORD *)v92 = v36;
        v21 = 0;
        sub_3E5D20(v37, v78[0]);
        *(_QWORD *)v105 = v35;
        sub_2334C0(&v104);
        v17 = *(_QWORD *)v92;
        v20 = *a2;
        v78[0] = (__int64)v82;
        goto LABEL_8;
      }
LABEL_15:
      v26 = 0;
      v27 = 0;
      v80 = 0;
      v84 = (__int64)v108;
      do
      {
        v28 = *(_QWORD *)(v17 + 8LL * v27 + 32);
        v29 = _mm_loadh_ps((const double *)v78);
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
        *(__m128 *)v81 = v29;
        sub_3E5D20(v26, v78[0]);
        si128 = _mm_load_si128((const __m128i *)v81);
        v108[1] = si128.m128i_i64[1];
        sub_3F00E0(
          (int)a1,
          v84,
          v79,
          v31,
          v32,
          v33,
          v78[0],
          v78[1],
          v79,
          v80,
          v81[0],
          v81[1],
          v82,
          (int)v83,
          v84,
          (__int64)ptr,
          v86[0],
          v87,
          v88,
          v89,
          v92[0],
          v93[0],
          v94,
          v95,
          (__int64)v96[0],
          (__int64)v96[1],
          v97[0],
          v97[1],
          v98,
          (int)v99,
          v100[0],
          v101[0],
          v102[0],
          v103[0],
          v104,
          v105[0],
          v106,
          v107,
          si128.m128i_i64[0]);
        v26 = v108[0];
        v98 = v108[0];
        v78[0] = v108[1];
        if ( v108[0] )
          ++*(_DWORD *)(v108[0] + 8);
        *(_QWORD *)v105 = v80;
        sub_3E6950((unsigned int **)v105, &v98);
        ++v27;
        v80 = *(_QWORD *)v105;
      }
      while ( v27 < *(_DWORD *)(v17 + 24) );
      v34 = *a1;
      if ( *(_QWORD *)v105 )
      {
        v25 = *(_DWORD *)(*(_QWORD *)v105 - 4LL);
        v35 = *(_QWORD *)v105;
      }
      else
      {
        v25 = 0;
        v35 = 0;
      }
      goto LABEL_23;
    }
    v15 = *(_QWORD *)(v17 + 32);
    v38 = *(_QWORD *)(v17 + 40);
    if ( !*(_WORD *)(v15 + 4)
      && (v39 = *(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL)) != nullptr
      && *v39 == 5
      && v39[1] == 16
      && *(_DWORD *)(v15 + 24) == 2 )
    {
      v42 = *(_QWORD *)(v15 + 32);
      v43 = *(_QWORD *)(v15 + 40);
      v78[0] = *(_QWORD *)(v17 + 32);
      v81[0] = v42;
      v44 = sub_1666AE0(v80, v43, v100, &v90);
      v15 = v78[0];
      if ( v44 && v90 )
      {
        if ( v81[0] )
          ++*(_DWORD *)(v81[0] + 8);
        sub_3E5D20(0, (__int64)v18);
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        sub_3E5D20(0, (__int64)v18);
LABEL_49:
        v50 = v79;
        *(__m128i *)v78 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)v18);
        *(__m128i *)v96 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)v81), (__m128i)(unsigned __int64)v18);
        sub_3F00E0(
          (int)a1,
          (int)v96,
          v79,
          v47,
          v48,
          v49,
          v78[0],
          v78[1],
          v79,
          v80,
          v81[0],
          v81[1],
          v82,
          (int)v83,
          v84,
          (__int64)ptr,
          v86[0],
          v87,
          v88,
          v89,
          v92[0],
          v93[0],
          v94,
          v95,
          (__int64)v96[0],
          (__int64)v96[1],
          v97[0],
          v97[1],
          v98,
          (int)v99,
          v100[0],
          v101[0],
          v102[0],
          v103[0],
          v104,
          v105[0],
          v106,
          v107,
          v108[0]);
        v51 = _mm_load_si128((const __m128i *)v78);
        sub_3F00E0(
          (int)a1,
          (int)v97,
          v50,
          v52,
          v53,
          v54,
          v78[0],
          v78[1],
          v79,
          v80,
          (int)v96[0],
          v81[1],
          v96[1],
          (int)v83,
          v84,
          (__int64)ptr,
          v86[0],
          v87,
          v88,
          v89,
          v92[0],
          v93[0],
          v94,
          v95,
          (__int64)v96[0],
          (__int64)v96[1],
          v51.m128i_i64[0],
          v51.m128i_i8[8],
          v98,
          (int)v99,
          v100[0],
          v101[0],
          v102[0],
          v103[0],
          v104,
          v105[0],
          v106,
          v107,
          v108[0]);
        v21 = v97[0];
        v104 = 0;
        *(_QWORD *)v105 = 0;
        v78[0] = v97[1];
        v106 = 1;
        v107 = 0;
        v55 = sub_1666AE0(v80, v97[0], &v104, &v91);
        v56 = *a1;
        v57 = a1[1];
        if ( v55 && !(_DWORD)v104 )
        {
          v74 = sub_15D2CD0(v57, 5, 1, 0, 0);
          sub_3EC140(v80, (int)v83, v74, v75, v76, v77);
          sub_15E1B70(a1[1]);
          *(_QWORD *)v92 = sub_15E1B70(v56);
        }
        else
        {
          v98 = *a1;
          v58 = sub_15D2CD0(v57, 5, 1, 0, 0);
          v62 = sub_3EC140(v80, (int)v83, v58, v59, v60, v61);
          v63 = a1[1];
          v84 = v62;
          sub_15E1B70(v63);
          sub_15E1B70(a1[1]);
          v64 = sub_15E1B70(v56);
          v65 = v64;
          if ( v64 )
            ++*(_DWORD *)(v64 + 8);
          v99 = nullptr;
          v84 = (__int64)&v99;
          sub_23A6F0(&v99);
          v66 = v99;
          v67 = a1[1];
          v68 = *(v99 - 1);
          *(_QWORD *)&v99[2 * v68] = v65;
          *(v66 - 1) = v68 + 1;
          v69 = sub_15E1B70(v67);
          v94 = v69;
          if ( v69 )
            ++*(_DWORD *)(v69 + 8);
          sub_3E6950((unsigned int **)v84, &v94);
          v87 = sub_15D2CD0(a1[1], 5, 1, 0, 0);
          sub_3EC020((__int64)v108, (__int64)v83);
          sub_3EC140(v80, (int)v108, v87, v70, v71, v72);
          v73 = sub_15E1B70(a1[1]);
          v95 = v73;
          if ( v73 )
            ++*(_DWORD *)(v73 + 8);
          sub_3E6950((unsigned int **)v84, &v95);
          sub_25A130((char *)v108);
          *(_QWORD *)v92 = sub_15E1AF0(*a1);
          sub_2334C0(&v98);
        }
        sub_25A130((char *)&v104);
        v17 = *(_QWORD *)v92;
        v20 = *a2;
        v6 = v81[0];
        goto LABEL_8;
      }
      if ( *(_WORD *)(v38 + 4) )
        goto LABEL_32;
      v41 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL);
      if ( !v41 )
        goto LABEL_32;
    }
    else
    {
      if ( *(_WORD *)(v38 + 4) )
      {
        v104 = (__int64)v18;
        v78[0] = (__int64)v18;
        v83 = v100;
        goto LABEL_15;
      }
      v40 = *(_QWORD *)(v38 + 16);
      v83 = v100;
      v41 = *(_DWORD **)(v40 + 24);
      if ( !v41 )
        goto LABEL_34;
    }
    if ( *v41 == 5 && v41[1] == 16 && *(_DWORD *)(v38 + 24) == 2 )
    {
      v45 = *(_QWORD *)(v38 + 32);
      v46 = *(_QWORD *)(v38 + 40);
      v78[0] = v15;
      v81[0] = v45;
      if ( (unsigned __int8)sub_1666AE0(v80, v46, v83, &v90) )
      {
        v15 = v78[0];
        if ( v90 )
        {
          if ( v81[0] )
            ++*(_DWORD *)(v81[0] + 8);
          v78[0] = v15;
          sub_3E5D20(0, (__int64)v18);
          ++*(_DWORD *)(v78[0] + 8);
          sub_3E5D20(0, (__int64)v18);
          v38 = v78[0];
          goto LABEL_49;
        }
      }
    }
LABEL_32:
    v17 = *a2;
    if ( *(_WORD *)(*a2 + 4) )
      goto LABEL_7;
    v18 = (void *)*a1;
LABEL_34:
    v78[0] = (__int64)v18;
    v25 = *(_DWORD *)(v17 + 24);
    goto LABEL_14;
  }
  v83 = v100;
LABEL_7:
  *(_QWORD *)v92 = v17;
  v20 = v17;
  v21 = 0;
  v78[0] = (__int64)v18;
LABEL_8:
  sub_15B9070(v79, v20, v17, 0);
  v22 = *(_QWORD *)v92;
  if ( *(_QWORD *)v92 )
    ++*(_DWORD *)(*(_QWORD *)v92 + 8LL);
  sub_3E5D20(*a2, a2[1]);
  *a2 = v22;
  sub_25A130((char *)v83);
  sub_3E5D20(v21, v78[0]);
  sub_3E5D20(v6, (__int64)v82);
  return sub_3E5D20((__int64)ptr, *(__int64 *)v86);
}

