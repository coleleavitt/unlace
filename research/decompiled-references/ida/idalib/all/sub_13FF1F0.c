__int64 __fastcall sub_13FF1F0(
        __int64 a1,
        unsigned __int64 a2,
        __int32 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __m128i a7)
{
  int v7; // r15d
  _QWORD *v8; // r13
  unsigned int v9; // r12d
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 *v17; // rsi
  __int64 v18; // r9
  _QWORD *v19; // r14
  _QWORD *v20; // rdx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rsi
  __int64 i; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  char *v42; // rsi
  _QWORD *v43; // r12
  unsigned __int8 *v44; // r13
  unsigned __int8 *v45; // r14
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // r12
  __int64 v51; // rax
  __m128i v52; // xmm1
  __int64 v53; // rsi
  char *v54; // r12
  __int64 v55; // r13
  const void *v56; // r14
  void *v57; // r15
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 *v61; // rax
  __int64 v62; // rdx
  __int64 *v63; // rax
  __int64 *v64; // rbp
  __int64 *j; // rbx
  __int64 v66; // rdi
  void (*v67)(); // rax
  __int64 v68; // rax
  int v69; // esi
  int v70; // r9d
  __int64 v71; // r10
  __int64 v72; // rax
  unsigned __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // [rsp-10h] [rbp-2A8h]
  __int64 v77; // [rsp-8h] [rbp-2A0h]
  __int64 v78; // [rsp+8h] [rbp-290h]
  __m128i v81; // [rsp+20h] [rbp-278h] BYREF
  unsigned int v82; // [rsp+30h] [rbp-268h]
  unsigned int v83; // [rsp+34h] [rbp-264h]
  _QWORD *v84; // [rsp+38h] [rbp-260h]
  char *v85; // [rsp+40h] [rbp-258h]
  __int64 v86; // [rsp+48h] [rbp-250h] BYREF
  unsigned __int8 **v87; // [rsp+50h] [rbp-248h]
  char *v88; // [rsp+58h] [rbp-240h]
  char *v89; // [rsp+60h] [rbp-238h]
  _QWORD *v90; // [rsp+68h] [rbp-230h]
  void *v91[2]; // [rsp+70h] [rbp-228h] BYREF
  __int64 v92; // [rsp+80h] [rbp-218h]
  __m128i v93[2]; // [rsp+90h] [rbp-208h] BYREF
  unsigned __int8 v94; // [rsp+B0h] [rbp-1E8h]
  _QWORD v95[4]; // [rsp+C0h] [rbp-1D8h] BYREF
  __int16 v96; // [rsp+E0h] [rbp-1B8h]
  char v97; // [rsp+F0h] [rbp-1A8h] BYREF
  __int16 v98; // [rsp+110h] [rbp-188h]
  char v99; // [rsp+120h] [rbp-178h] BYREF
  __int16 v100; // [rsp+140h] [rbp-158h]
  _QWORD v101[4]; // [rsp+150h] [rbp-148h] BYREF
  __int16 v102; // [rsp+170h] [rbp-128h]
  int v103; // [rsp+180h] [rbp-118h] BYREF
  __int64 v104; // [rsp+188h] [rbp-110h]
  int v105; // [rsp+190h] [rbp-108h]
  char v106; // [rsp+194h] [rbp-104h]
  __int64 v107; // [rsp+198h] [rbp-100h]
  __int64 v108; // [rsp+1A0h] [rbp-F8h]
  __int64 v109; // [rsp+1A8h] [rbp-F0h]
  char v110; // [rsp+1B0h] [rbp-E8h]
  void *ptr[2]; // [rsp+1C0h] [rbp-D8h] BYREF
  void **v112; // [rsp+1D0h] [rbp-C8h]
  __int64 v113; // [rsp+1D8h] [rbp-C0h] BYREF

  v7 = a5;
  v8 = (_QWORD *)a2;
  v9 = a5;
  v11 = a2;
  v81.m128i_i32[0] = a3;
  v82 = a6;
  v78 = a1 + 592;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + 8);
    if ( !v12 )
      break;
    v12 &= 0xFFFFFFFFFFFFFFF8LL;
    v13 = *(_QWORD *)(v11 + 8) & 4LL;
    v11 = v12;
    if ( !v13 || !v12 )
      goto LABEL_5;
  }
  v11 = 0;
LABEL_5:
  v14 = *(unsigned int *)(a1 + 608);
  v15 = *(_QWORD *)(a1 + 592);
  if ( (_DWORD)v14 )
  {
    v16 = (v14 - 1) & (((unsigned int)v12 >> 4) ^ ((unsigned int)v12 >> 9));
    v17 = (__int64 *)(v15 + 16LL * v16);
    v18 = *v17;
    if ( *v17 == v11 )
    {
LABEL_7:
      sub_13F9CB0((__m128 *)ptr, v17, (_QWORD *)(16 * v14 + v15), v78, 1);
      v19 = ptr[0];
      goto LABEL_8;
    }
    v69 = 1;
    if ( v18 != -4096 )
    {
      do
      {
        v70 = v69 + 1;
        v16 = (v14 - 1) & (v69 + v16);
        v17 = (__int64 *)(v15 + 16LL * v16);
        v71 = *v17;
        if ( *v17 == v11 )
          goto LABEL_7;
        v69 = v70;
      }
      while ( v71 != -4096 );
    }
  }
  sub_13F9CB0(
    (__m128 *)ptr,
    (_QWORD *)(v15 + 16LL * (unsigned int)v14),
    (_QWORD *)(v15 + 16LL * (unsigned int)v14),
    v78,
    1);
  v19 = ptr[0];
LABEL_8:
  v20 = (_QWORD *)(*(_QWORD *)(a1 + 592) + 16LL * *(unsigned int *)(a1 + 608));
  sub_13F9CB0((__m128 *)ptr, v20, v20, v78, 1);
  if ( v19 == ptr[0] )
  {
    v22 = *(_QWORD *)a1;
    if ( !v9 )
    {
      v73 = a2;
      while ( 1 )
      {
        v74 = *(_QWORD *)(v73 + 8);
        if ( !v74 )
          break;
        v73 = v74 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v74 & 4) == 0 || !v73 )
          goto LABEL_76;
      }
      v73 = 0;
LABEL_76:
      v7 = sub_10210B0(*(_QWORD *)a1, v73);
      if ( v7 <= 0 )
        v7 = sub_1026F70(*(_QWORD *)a1, a2, v82, (unsigned int)(v81.m128i_i8[0] != 0) + 3, 0, 0, a7);
      v22 = *(_QWORD *)a1;
    }
    v23 = sub_101FFD0(v22, v7);
    if ( v23
      && (sub_101D9A0(
            v93,
            (__int64 *)(*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFF8LL),
            *(_QWORD *)(v22 + 8),
            *(_QWORD *)(v22 + 16),
            0),
          (v9 = v94) != 0) )
    {
      sub_FC70B0((__int64)ptr, *(_QWORD *)(a1 + 8), 0, 1301);
      v28 = a2;
      for ( i = *(_QWORD *)(a2 + 8); i; i = *(_QWORD *)(v30 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v30 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v30 )
          break;
        v28 = v30;
      }
      sub_AEC220((unsigned __int8 **)ptr, (_BYTE *)(v28 + 32), *(_QWORD *)v28);
      sub_AEA040((__int64)ptr);
      v31 = *(_QWORD *)a1;
      v83 = v81.m128i_u8[0];
      v87 = (unsigned __int8 **)&v103;
      sub_1415BD0((unsigned int)&v103, v7, a4, v31, *(_QWORD *)(a1 + 8), v81.m128i_u8[0], 0);
      if ( v110 )
      {
        v34 = (_DWORD *)operator new(0x30u);
        v38 = *(char **)(a1 + 624);
        ptr[0] = v34;
        *v34 = v103;
        *((_QWORD *)v34 + 1) = v104;
        v34[4] = v105;
        *((_BYTE *)v34 + 20) = v106;
        v39 = v107;
        v107 = 0;
        *((_QWORD *)v34 + 3) = v39;
        v40 = v108;
        v108 = 0;
        *((_QWORD *)v34 + 4) = v40;
        v41 = v109;
        v109 = 0;
        *((_QWORD *)v34 + 5) = v41;
        if ( v38 == *(char **)(a1 + 632) )
        {
          sub_13F9D20((__m128 *)(a1 + 616), v38, ptr);
        }
        else
        {
          ptr[0] = nullptr;
          v42 = v38 + 8;
          *((_QWORD *)v42 - 1) = v34;
          *(_QWORD *)(a1 + 624) = v42;
        }
        v43 = ptr[0];
        if ( ptr[0] )
        {
          v44 = *((unsigned __int8 **)ptr[0] + 4);
          v45 = *((unsigned __int8 **)ptr[0] + 3);
          if ( v44 != v45 )
          {
            do
            {
              while ( 1 )
              {
                v46 = v45[136];
                if ( (_BYTE)v46 == 0xFF )
                  break;
                v47 = (__int64)v45;
                v45 += 144;
                ((void (__fastcall *)(__int64))funcs_13F3420[v46])(v47);
                if ( v44 == v45 )
                  goto LABEL_26;
              }
              v45 += 144;
            }
            while ( v44 != v45 );
LABEL_26:
            v45 = (unsigned __int8 *)v43[3];
          }
          if ( v45 )
            operator delete(v45);
          operator delete(v43, 0x30u);
        }
        v48 = *(_QWORD *)(*(_QWORD *)(a1 + 624) - 8LL);
        *(_OWORD *)v91 = 0;
        v92 = 0;
        v49 = *(_QWORD *)(v48 + 24);
        v50 = *(_QWORD *)(v48 + 32);
        v86 = v48;
        if ( v49 != v50 )
        {
          v81.m128i_i64[0] = a1;
          v112 = v91;
          *(__m128 *)ptr = _mm_loadh_ps((const double *)&v86);
          v51 = *(unsigned __int8 *)(v49 + 136);
          v81 = *(__m128i *)ptr;
          if ( (_BYTE)v51 == 0xFF )
LABEL_85:
            abort();
          while ( 1 )
          {
            v53 = v49;
            v49 += 144;
            ((void (__fastcall *)(__int64, __int64))funcs_13FF5DB[v51])((__int64)ptr, v53);
            if ( v50 == v49 )
              break;
            v52 = _mm_load_si128(&v81);
            v112 = v91;
            *(__m128i *)ptr = v52;
            v51 = *(unsigned __int8 *)(v49 + 136);
            if ( (_BYTE)v51 == 0xFF )
              goto LABEL_85;
          }
          v54 = (char *)v91[0];
          v85 = (char *)v91[1];
          if ( v91[1] != v91[0] )
          {
            v84 = v101;
            v81.m128i_i64[0] = (__int64)&v113;
            v88 = &v99;
            v89 = &v97;
            v90 = v95;
            do
            {
              while ( 1 )
              {
                v55 = *(_QWORD *)v54;
                v56 = *(const void **)(*(_QWORD *)v54 + 104LL);
                v57 = *(void **)(*(_QWORD *)v54 + 112LL);
                v102 = 261;
                ptr[0] = (void *)v81.m128i_i64[0];
                ptr[1] = nullptr;
                v112 = (void **)&qword_80;
                v101[0] = v56;
                v101[1] = v57;
                if ( (unsigned __int8)sub_228B190(v84, 0) )
                {
                  sub_A1FE50(ptr, (_BYTE *)(a4 + 32), (_BYTE *)(a4 + 32 + *(_QWORD *)a4));
                  v102 = 257;
                  v75 = *(_QWORD *)(v55 + 104);
                  v100 = 257;
                  v98 = 257;
                  v96 = 261;
                  v95[0] = v75;
                  v95[1] = *(_QWORD *)(v55 + 112);
                  sub_228A3B0(ptr, v90, v89, v88, v84);
                  v57 = ptr[1];
                  v56 = ptr[0];
                }
                v58 = sub_12ED8B0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), v56, (size_t)v57, 0, 1u);
                if ( v58 )
                  sub_13FF1F0(a1, v58, v83, *(_QWORD *)(v58 + 16), 0, v82);
                if ( ptr[0] == (void *)v81.m128i_i64[0] )
                  break;
                free(ptr[0]);
                v54 += 8;
                if ( v85 == v54 )
                  goto LABEL_43;
              }
              v54 += 8;
            }
            while ( v85 != v54 );
          }
        }
LABEL_43:
        v59 = (_QWORD *)a2;
        while ( 1 )
        {
          v60 = v59[1];
          if ( !v60 )
            break;
          v59 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF8LL);
          v60 &= 4u;
          if ( !(_DWORD)v60 || !v59 )
            goto LABEL_47;
        }
        v59 = nullptr;
LABEL_47:
        ptr[0] = v59;
        v61 = sub_13FF0A0(v78, (__int64 *)ptr, v60, v35, v36, v37);
        v62 = *(unsigned int *)(a1 + 48);
        *v61 = v86;
        v63 = *(__int64 **)(a1 + 40);
        v64 = &v63[v62];
        for ( j = v63; v64 != j; ++j )
        {
          while ( 1 )
          {
            v66 = *j;
            v67 = *(void (**)())(*(_QWORD *)*j + 24LL);
            if ( v67 != nullsub_657 )
              break;
            if ( v64 == ++j )
              goto LABEL_50;
          }
          ((void (__fastcall *)(__int64, _QWORD, unsigned __int64, _QWORD))v67)(v66, 0, a2, v83);
        }
LABEL_50:
        if ( v91[0] )
          operator delete(v91[0]);
        v9 = 0;
      }
      else
      {
        while ( 1 )
        {
          v72 = v8[1];
          if ( !v72 )
            break;
          v8 = (_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v72 & 4) == 0 || !v8 )
            goto LABEL_65;
        }
        v8 = nullptr;
LABEL_65:
        ptr[0] = v8;
        *sub_13FF0A0(v78, (__int64 *)ptr, v32, v33, v76, v77) = 0;
      }
      if ( v110 )
        sub_13F7C70(v87 + 3);
    }
    else
    {
      while ( 1 )
      {
        v68 = v8[1];
        if ( !v68 )
          break;
        v8 = (_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v68 & 4) == 0 || !v8 )
          goto LABEL_57;
      }
      v8 = nullptr;
LABEL_57:
      ptr[0] = v8;
      v9 = 1;
      *sub_13FF0A0(v78, (__int64 *)ptr, v24, v25, v26, v27) = 0;
    }
  }
  else
  {
    LOBYTE(v9) = v19[1] == 0;
  }
  return v9;
}
