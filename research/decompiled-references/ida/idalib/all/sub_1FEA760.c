void __fastcall sub_1FEA760(__m128i *a1)
{
  int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // r13
  __m128i *v5; // rax
  __m128i *v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rbp
  __m128i *v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __m128i *v16; // rax
  unsigned __int64 v17; // rdx
  __int64 m128i_i64; // r12
  __int64 v19; // rbp
  __m128i *v20; // rax
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __m128i *v24; // rax
  unsigned __int64 v25; // rdx
  unsigned int v26; // eax
  void *v27; // rsi
  __m128i *v28; // rdi
  size_t v29; // rax
  __int64 v30; // rdx
  char v31; // al
  char *v32; // r8
  _QWORD *v33; // rcx
  __m128i *v34; // rax
  size_t v35; // r8
  _BYTE *v36; // rdi
  _BYTE *v37; // rcx
  size_t v38; // r15
  unsigned __int64 v39; // rax
  _BYTE *v40; // rdi
  __m128i *v41; // rax
  size_t v42; // r8
  size_t v43; // rdx
  __m128i *v44; // rdi
  __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  char *v47; // r14
  char v48; // al
  char *v49; // rdx
  _QWORD *v50; // rcx
  char *v51; // r8
  __m128i *v52; // rax
  size_t v53; // r8
  _BYTE *v54; // rdi
  _BYTE *v55; // rcx
  size_t v56; // r14
  unsigned __int64 v57; // rax
  _BYTE *v58; // rdi
  __m128i *v59; // rax
  size_t v60; // r8
  size_t v61; // rdx
  __m128i *v62; // rdi
  __int64 v63; // rcx
  char *v64; // r15
  char *v65; // rdx
  _QWORD *v66; // rax
  __m128i *v67; // rdi
  __int64 v68; // rdx
  __m128i *v69; // rax
  unsigned __int64 v70; // rdx
  __int64 v71; // r14
  __m128i *v72; // rdx
  size_t v73; // rax
  unsigned __int64 v74; // rcx
  __m128i v75; // xmm2
  size_t v76; // rdx
  __m128i *v77; // rax
  unsigned __int64 v78; // rdx
  __m128i *v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rbp
  __m128i *v82; // rax
  unsigned __int64 v83; // r14
  unsigned __int64 v84; // rdx
  __int64 v85; // rax
  size_t v86; // rdx
  size_t v87; // rsi
  _QWORD *v88; // rax
  __m128i v89; // xmm4
  size_t v90; // rdx
  size_t n; // [rsp+0h] [rbp-C8h] BYREF
  char *v92; // [rsp+8h] [rbp-C0h]
  void *v93[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v94[2]; // [rsp+20h] [rbp-A8h] BYREF
  void *v95[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v96[2]; // [rsp+40h] [rbp-88h] BYREF
  void *v97; // [rsp+50h] [rbp-78h] BYREF
  size_t v98; // [rsp+58h] [rbp-70h]
  __m128i v99; // [rsp+60h] [rbp-68h] BYREF
  void *src; // [rsp+70h] [rbp-58h] BYREF
  size_t v101; // [rsp+78h] [rbp-50h]
  __m128i v102; // [rsp+80h] [rbp-48h] BYREF

  switch ( a1->m128i_i8[1] )
  {
    case 0:
      sub_99BDC0((__m128i *)a1[2].m128i_i64, 0, a1[2].m128i_u64[1], "v", 1u);
      return;
    case 1:
      m128i_i64 = (__int64)a1[2].m128i_i64;
      sub_99BDC0((__m128i *)a1[2].m128i_i64, 0, a1[2].m128i_u64[1], "z", 1u);
      if ( !a1->m128i_i8[9] )
        goto LABEL_29;
      sub_C05100((__int64)&src, "I", m128i_i64);
      v79 = (__m128i *)a1[2].m128i_i64[0];
      if ( src == &v102 )
      {
        v90 = v101;
        if ( v101 )
        {
          if ( v101 == 1 )
            v79->m128i_i8[0] = v102.m128i_i8[0];
          else
            memcpy(v79, src, v101);
          v90 = v101;
          v79 = (__m128i *)a1[2].m128i_i64[0];
        }
        a1[2].m128i_i64[1] = v90;
        v79->m128i_i8[v90] = 0;
        v79 = (__m128i *)src;
      }
      else
      {
        if ( v79 == &a1[3] )
        {
          n = v102.m128i_i64[0];
          a1[2].m128i_i64[0] = (__int64)src;
          *(__m128 *)((char *)&a1[2] + 8) = _mm_loadh_ps((const double *)&n);
        }
        else
        {
          n = v102.m128i_i64[0];
          v80 = a1[3].m128i_i64[0];
          a1[2].m128i_i64[0] = (__int64)src;
          *(__m128 *)((char *)&a1[2] + 8) = _mm_loadh_ps((const double *)&n);
          if ( v79 )
          {
            src = v79;
            v102.m128i_i64[0] = v80;
            goto LABEL_170;
          }
        }
        v79 = &v102;
        src = &v102;
      }
LABEL_170:
      v101 = 0;
      v79->m128i_i8[0] = 0;
      if ( src != &v102 )
        operator delete(src);
LABEL_29:
      if ( !a1->m128i_i8[8] )
        return;
      v19 = a1[2].m128i_i64[1];
      if ( v19 == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_232;
      v20 = (__m128i *)a1[2].m128i_i64[0];
      v21 = v19 + 1;
      if ( v20 == &a1[3] )
        v22 = 15;
      else
        v22 = a1[3].m128i_u64[0];
      if ( v21 > v22 )
        sub_998B30(m128i_i64, a1[2].m128i_u64[1], 0, "*", 1u);
      else
        v20->m128i_i8[v19] = 42;
      v23 = a1[2].m128i_i64[0];
      a1[2].m128i_i64[1] = v21;
      *(_BYTE *)(v23 + v19 + 1) = 0;
      return;
    case 2:
      sub_99BDC0((__m128i *)a1[2].m128i_i64, 0, a1[2].m128i_u64[1], "Y", 1u);
      return;
    case 3:
      sub_99BDC0((__m128i *)a1[2].m128i_i64, 0, a1[2].m128i_u64[1], "ULi", 3u);
      return;
    case 4:
      sub_99BDC0((__m128i *)a1[2].m128i_i64, 0, a1[2].m128i_u64[1], "Li", 2u);
      return;
    case 5:
      v3 = a1[2].m128i_i64[1];
      v4 = (__int64)a1[2].m128i_i64;
      if ( v3 == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_232;
      v24 = (__m128i *)a1[2].m128i_i64[0];
      v6 = a1 + 3;
      v7 = v3 + 1;
      if ( v24 == &a1[3] )
        v25 = 15;
      else
        v25 = a1[3].m128i_u64[0];
      if ( v7 > v25 )
        sub_998B30((__int64)a1[2].m128i_i64, a1[2].m128i_u64[1], 0, "b", 1u);
      else
        v24->m128i_i8[v3] = 98;
      goto LABEL_9;
    case 6:
    case 7:
      v26 = a1->m128i_u32[3];
      if ( v26 == 16 )
      {
        v4 = (__int64)a1[2].m128i_i64;
        sub_9EE7C0((__m128i *)a1[2].m128i_i64, (char *)"s");
      }
      else
      {
        if ( v26 > 0x10 )
        {
          if ( v26 == 32 )
          {
            v4 = (__int64)a1[2].m128i_i64;
            sub_9EE7C0((__m128i *)a1[2].m128i_i64, "i");
            goto LABEL_47;
          }
          if ( v26 == 64 )
          {
            v4 = (__int64)a1[2].m128i_i64;
            sub_9EE7C0((__m128i *)a1[2].m128i_i64, "Wi");
            goto LABEL_47;
          }
LABEL_235:
          sub_1FEB8B0();
          return;
        }
        if ( v26 != 8 )
          goto LABEL_235;
        v4 = (__int64)a1[2].m128i_i64;
        sub_9EE7C0((__m128i *)a1[2].m128i_i64, "c");
      }
LABEL_47:
      v6 = a1 + 3;
      if ( a1->m128i_i8[1] != 6 )
      {
        sub_C05100((__int64)&src, "U", v4);
        v27 = src;
        v28 = (__m128i *)a1[2].m128i_i64[0];
        if ( src != &v102 )
        {
          v29 = v102.m128i_i64[0];
          if ( v28 != v6 )
            goto LABEL_50;
LABEL_151:
          n = v29;
          a1[2].m128i_i64[0] = (__int64)v27;
          *(__m128 *)((char *)&a1[2] + 8) = _mm_loadh_ps((const double *)&n);
          goto LABEL_152;
        }
LABEL_180:
        v86 = v101;
        if ( v101 )
        {
          if ( v101 == 1 )
            v28->m128i_i8[0] = v102.m128i_i8[0];
          else
            memcpy(v28, v27, v101);
          v86 = v101;
          v28 = (__m128i *)a1[2].m128i_i64[0];
        }
        a1[2].m128i_i64[1] = v86;
        v28->m128i_i8[v86] = 0;
        v28 = (__m128i *)src;
        goto LABEL_52;
      }
      sub_C05100((__int64)&src, "S", v4);
      v27 = src;
      v28 = (__m128i *)a1[2].m128i_i64[0];
      if ( src == &v102 )
        goto LABEL_180;
      v29 = v102.m128i_i64[0];
      if ( v28 == v6 )
        goto LABEL_151;
LABEL_50:
      n = v29;
      v30 = a1[3].m128i_i64[0];
      a1[2].m128i_i64[0] = (__int64)v27;
      *(__m128 *)((char *)&a1[2] + 8) = _mm_loadh_ps((const double *)&n);
      if ( v28 )
      {
        src = v28;
        v102.m128i_i64[0] = v30;
        goto LABEL_52;
      }
LABEL_152:
      v28 = &v102;
      src = &v102;
LABEL_52:
      v101 = 0;
      v28->m128i_i8[0] = 0;
      if ( src != &v102 )
        operator delete(src);
LABEL_10:
      if ( !a1->m128i_i8[9] )
        goto LABEL_11;
      sub_C05100((__int64)&src, "I", v4);
      v67 = (__m128i *)a1[2].m128i_i64[0];
      if ( src == &v102 )
      {
        v76 = v101;
        if ( v101 )
        {
          if ( v101 == 1 )
            v67->m128i_i8[0] = v102.m128i_i8[0];
          else
            memcpy(v67, src, v101);
          v76 = v101;
          v67 = (__m128i *)a1[2].m128i_i64[0];
        }
        a1[2].m128i_i64[1] = v76;
        v67->m128i_i8[v76] = 0;
        v67 = (__m128i *)src;
        goto LABEL_118;
      }
      if ( v67 == v6 )
      {
        n = v102.m128i_i64[0];
        a1[2].m128i_i64[0] = (__int64)src;
        *(__m128 *)((char *)&a1[2] + 8) = _mm_loadh_ps((const double *)&n);
      }
      else
      {
        n = v102.m128i_i64[0];
        v68 = a1[3].m128i_i64[0];
        a1[2].m128i_i64[0] = (__int64)src;
        *(__m128 *)((char *)&a1[2] + 8) = _mm_loadh_ps((const double *)&n);
        if ( v67 )
        {
          src = v67;
          v102.m128i_i64[0] = v68;
          goto LABEL_118;
        }
      }
      v67 = &v102;
      src = &v102;
LABEL_118:
      v101 = 0;
      v67->m128i_i8[0] = 0;
      if ( src != &v102 )
        operator delete(src);
LABEL_11:
      v10 = a1[1].m128i_u32[0];
      if ( a1[1].m128i_i8[4] && !(_DWORD)v10 )
      {
        if ( a1->m128i_i8[10] )
        {
          v81 = a1[2].m128i_i64[1];
          if ( v81 == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_232;
          v82 = (__m128i *)a1[2].m128i_i64[0];
          v83 = v81 + 1;
          if ( v82 == v6 )
            v84 = 15;
          else
            v84 = a1[3].m128i_u64[0];
          if ( v83 > v84 )
            sub_998B30(v4, a1[2].m128i_u64[1], 0, "C", 1u);
          else
            v82->m128i_i8[v81] = 67;
          v85 = a1[2].m128i_i64[0];
          a1[2].m128i_i64[1] = v83;
          *(_BYTE *)(v85 + v81 + 1) = 0;
        }
        if ( !a1->m128i_i8[8] )
          return;
        v11 = a1[2].m128i_i64[1];
        if ( v11 != 0x7FFFFFFFFFFFFFFFLL )
        {
          v12 = (__m128i *)a1[2].m128i_i64[0];
          v13 = v11 + 1;
          if ( v12 == v6 )
            v14 = 15;
          else
            v14 = a1[3].m128i_u64[0];
          if ( v13 > v14 )
            sub_998B30(v4, a1[2].m128i_u64[1], 0, "*", 1u);
          else
            v12->m128i_i8[v11] = 42;
          v15 = a1[2].m128i_i64[0];
          a1[2].m128i_i64[1] = v13;
          *(_BYTE *)(v15 + v11 + 1) = 0;
          return;
        }
LABEL_232:
        std::__throw_length_error("basic_string::append");
      }
      if ( !a1[1].m128i_i32[0] )
      {
        v93[0] = v94;
        v31 = 48;
LABEL_57:
        LOBYTE(v94[0]) = v31;
        v32 = (_BYTE *)(&dword_0 + 1);
        v33 = v94;
        goto LABEL_58;
      }
      v64 = &v99.m128i_i8[5];
      while ( 1 )
      {
        --v64;
        v31 = v10 % 0xA + 48;
        *v64 = v31;
        if ( v10 <= 9 )
          break;
        v10 /= 0xAu;
      }
      v65 = (char *)(&v99.m128i_u8[5] - (unsigned __int8 *)v64);
      v33 = v94;
      v32 = (char *)(&v99.m128i_u8[5] - (unsigned __int8 *)v64);
      v93[0] = v94;
      if ( (unsigned __int64)(&v99.m128i_u8[5] - (unsigned __int8 *)v64) > 0xF )
      {
        if ( (__int64)v65 < 0 )
          goto LABEL_233;
        v92 = (char *)(&v99.m128i_u8[5] - (unsigned __int8 *)v64);
        n = &v99.m128i_u8[5] - (unsigned __int8 *)v64;
        v66 = (_QWORD *)operator new((unsigned __int64)(v65 + 1));
        v65 = (char *)n;
        v32 = v92;
        v93[0] = v66;
        v94[0] = n;
        goto LABEL_113;
      }
      if ( v65 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_57;
      if ( v65 )
      {
        v66 = v94;
LABEL_113:
        n = (size_t)v32;
        memcpy(v66, v64, (size_t)v65);
        v33 = v93[0];
        v32 = (char *)n;
      }
LABEL_58:
      v93[1] = v32;
      v32[(_QWORD)v33] = 0;
      v34 = (__m128i *)sub_99BDC0(v93, 0, 0, "q", 1u);
      v97 = &v99;
      if ( (__m128i *)v34->m128i_i64[0] == &v34[1] )
      {
        v99 = _mm_loadu_si128(v34 + 1);
      }
      else
      {
        v97 = (void *)v34->m128i_i64[0];
        v99.m128i_i64[0] = v34[1].m128i_i64[0];
      }
      v98 = v34->m128i_u64[1];
      v34->m128i_i64[0] = (__int64)v34[1].m128i_i64;
      v34->m128i_i64[1] = 0;
      v34[1].m128i_i8[0] = 0;
      v35 = a1[2].m128i_u64[1];
      v36 = v97;
      v37 = (_BYTE *)a1[2].m128i_i64[0];
      v38 = v35 + v98;
      if ( v97 == &v99 )
        v39 = 15;
      else
        v39 = v99.m128i_i64[0];
      if ( v38 > v39 )
      {
        sub_998B30((__int64)&v97, v98, 0, v37, v35);
        v36 = v97;
      }
      else if ( v35 )
      {
        v40 = (char *)v97 + v98;
        if ( v35 == 1 )
          *v40 = *v37;
        else
          memcpy(v40, (const void *)a1[2].m128i_i64[0], a1[2].m128i_u64[1]);
        v36 = v97;
      }
      v98 = v38;
      v36[v38] = 0;
      v41 = (__m128i *)v97;
      src = &v102;
      if ( v97 == &v99 )
      {
        v43 = v98;
        v75 = _mm_load_si128(&v99);
        v99.m128i_i8[0] = 0;
        v98 = 0;
        v44 = (__m128i *)a1[2].m128i_i64[0];
        v101 = v43;
        v102 = v75;
        goto LABEL_142;
      }
      v42 = v99.m128i_i64[0];
      v43 = v98;
      src = v97;
      v97 = &v99;
      v44 = (__m128i *)a1[2].m128i_i64[0];
      v102.m128i_i64[0] = v99.m128i_i64[0];
      v101 = v98;
      v98 = 0;
      v99.m128i_i8[0] = 0;
      if ( v41 == &v102 )
      {
LABEL_142:
        if ( v43 )
        {
          if ( v43 == 1 )
            v44->m128i_i8[0] = v102.m128i_i8[0];
          else
            memcpy(v44, &v102, v43);
          v43 = v101;
          v44 = (__m128i *)a1[2].m128i_i64[0];
        }
        a1[2].m128i_i64[1] = v43;
        v44->m128i_i8[v43] = 0;
        v44 = (__m128i *)src;
        goto LABEL_72;
      }
      if ( v44 == v6 )
      {
        n = v42;
        a1[2].m128i_i64[0] = (__int64)v41;
        *(__m128 *)((char *)&a1[2] + 8) = _mm_loadh_ps((const double *)&n);
      }
      else
      {
        n = v42;
        v45 = a1[3].m128i_i64[0];
        a1[2].m128i_i64[0] = (__int64)v41;
        *(__m128 *)((char *)&a1[2] + 8) = _mm_loadh_ps((const double *)&n);
        if ( v44 )
        {
          src = v44;
          v102.m128i_i64[0] = v45;
          goto LABEL_72;
        }
      }
      v44 = &v102;
      src = &v102;
LABEL_72:
      v101 = 0;
      v44->m128i_i8[0] = 0;
      if ( src != &v102 )
        operator delete(src);
      if ( v97 != &v99 )
        operator delete(v97);
      if ( v93[0] != v94 )
        operator delete(v93[0]);
      if ( a1->m128i_i8[8] )
      {
        v71 = a1[2].m128i_i64[1];
        if ( v71 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_232;
        v72 = (__m128i *)a1[2].m128i_i64[0];
        v73 = v71 + 1;
        if ( v72 == v6 )
          v74 = 15;
        else
          v74 = a1[3].m128i_u64[0];
        if ( v73 > v74 )
        {
          v87 = a1[2].m128i_u64[1];
          n = v71 + 1;
          sub_998B30(v4, v87, 0, "*", 1u);
          v73 = n;
        }
        else
        {
          v72->m128i_i8[v71] = 42;
        }
        a1[2].m128i_i64[1] = v73;
        *(_BYTE *)(a1[2].m128i_i64[0] + v71 + 1) = 0;
      }
      if ( !a1[1].m128i_i8[9] )
        return;
      v46 = a1[1].m128i_u32[3];
      if ( !a1[1].m128i_i32[3] )
      {
        v95[0] = v96;
        v48 = 48;
        goto LABEL_148;
      }
      v47 = &v102.m128i_i8[5];
      while ( 1 )
      {
        --v47;
        v48 = v46 % 0xA + 48;
        *v47 = v48;
        if ( v46 <= 9 )
          break;
        v46 /= 0xAu;
      }
      v49 = (char *)(&v102.m128i_u8[5] - (unsigned __int8 *)v47);
      v50 = v96;
      v51 = (char *)(&v102.m128i_u8[5] - (unsigned __int8 *)v47);
      v95[0] = v96;
      if ( (unsigned __int64)(&v102.m128i_u8[5] - (unsigned __int8 *)v47) <= 0xF )
      {
        if ( v49 != (_BYTE *)&dword_0 + 1 )
        {
          if ( !v49 )
            goto LABEL_87;
          v88 = v96;
          goto LABEL_194;
        }
LABEL_148:
        LOBYTE(v96[0]) = v48;
        v51 = (_BYTE *)(&dword_0 + 1);
        v50 = v96;
        goto LABEL_87;
      }
      v92 = (char *)(&v102.m128i_u8[5] - (unsigned __int8 *)v47);
      if ( (__int64)v49 < 0 )
LABEL_233:
        std::__throw_length_error("basic_string::_M_create");
      n = &v102.m128i_u8[5] - (unsigned __int8 *)v47;
      v88 = (_QWORD *)operator new((unsigned __int64)(v49 + 1));
      v49 = (char *)n;
      v51 = v92;
      v95[0] = v88;
      v96[0] = n;
LABEL_194:
      n = (size_t)v51;
      memcpy(v88, v47, (size_t)v49);
      v50 = v95[0];
      v51 = (char *)n;
LABEL_87:
      v95[1] = v51;
      v51[(_QWORD)v50] = 0;
      v52 = (__m128i *)sub_99BDC0(v95, 0, 0, "T", 1u);
      v97 = &v99;
      if ( (__m128i *)v52->m128i_i64[0] == &v52[1] )
      {
        v99 = _mm_loadu_si128(v52 + 1);
      }
      else
      {
        v97 = (void *)v52->m128i_i64[0];
        v99.m128i_i64[0] = v52[1].m128i_i64[0];
      }
      v98 = v52->m128i_u64[1];
      v52->m128i_i64[0] = (__int64)v52[1].m128i_i64;
      v52->m128i_i64[1] = 0;
      v52[1].m128i_i8[0] = 0;
      v53 = a1[2].m128i_u64[1];
      v54 = v97;
      v55 = (_BYTE *)a1[2].m128i_i64[0];
      v56 = v53 + v98;
      if ( v97 == &v99 )
        v57 = 15;
      else
        v57 = v99.m128i_i64[0];
      if ( v56 > v57 )
      {
        sub_998B30((__int64)&v97, v98, 0, v55, v53);
        v54 = v97;
      }
      else if ( v53 )
      {
        v58 = (char *)v97 + v98;
        if ( v53 == 1 )
          *v58 = *v55;
        else
          memcpy(v58, (const void *)a1[2].m128i_i64[0], a1[2].m128i_u64[1]);
        v54 = v97;
      }
      v98 = v56;
      v54[v56] = 0;
      v59 = (__m128i *)v97;
      src = &v102;
      if ( v97 == &v99 )
      {
        v61 = v98;
        v89 = _mm_load_si128(&v99);
        v99.m128i_i8[0] = 0;
        v98 = 0;
        v62 = (__m128i *)a1[2].m128i_i64[0];
        v101 = v61;
        v102 = v89;
        goto LABEL_197;
      }
      v60 = v99.m128i_i64[0];
      v61 = v98;
      src = v97;
      v97 = &v99;
      v62 = (__m128i *)a1[2].m128i_i64[0];
      v102.m128i_i64[0] = v99.m128i_i64[0];
      v101 = v98;
      v98 = 0;
      v99.m128i_i8[0] = 0;
      if ( v59 == &v102 )
      {
LABEL_197:
        if ( v61 )
        {
          if ( v61 == 1 )
            v62->m128i_i8[0] = v102.m128i_i8[0];
          else
            memcpy(v62, &v102, v61);
          v61 = v101;
          v62 = (__m128i *)a1[2].m128i_i64[0];
        }
        a1[2].m128i_i64[1] = v61;
        v62->m128i_i8[v61] = 0;
        v62 = (__m128i *)src;
        goto LABEL_101;
      }
      if ( v62 == v6 )
      {
        n = v60;
        a1[2].m128i_i64[0] = (__int64)v59;
        *(__m128 *)((char *)&a1[2] + 8) = _mm_loadh_ps((const double *)&n);
        goto LABEL_212;
      }
      n = v60;
      v63 = a1[3].m128i_i64[0];
      a1[2].m128i_i64[0] = (__int64)v59;
      *(__m128 *)((char *)&a1[2] + 8) = _mm_loadh_ps((const double *)&n);
      if ( !v62 )
      {
LABEL_212:
        v62 = &v102;
        src = &v102;
        goto LABEL_101;
      }
      src = v62;
      v102.m128i_i64[0] = v63;
LABEL_101:
      v101 = 0;
      v62->m128i_i8[0] = 0;
      if ( src != &v102 )
        operator delete(src);
      if ( v97 != &v99 )
        operator delete(v97);
      if ( v95[0] != v96 )
        operator delete(v95[0]);
      return;
    case 8:
      v2 = a1->m128i_i32[3];
      switch ( v2 )
      {
        case 32:
          v3 = a1[2].m128i_i64[1];
          v4 = (__int64)a1[2].m128i_i64;
          if ( v3 == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_232;
          v77 = (__m128i *)a1[2].m128i_i64[0];
          v6 = a1 + 3;
          v7 = v3 + 1;
          if ( v77 == &a1[3] )
            v78 = 15;
          else
            v78 = a1[3].m128i_u64[0];
          if ( v7 > v78 )
            sub_998B30((__int64)a1[2].m128i_i64, a1[2].m128i_u64[1], 0, "f", 1u);
          else
            v77->m128i_i8[v3] = 102;
          break;
        case 64:
          v3 = a1[2].m128i_i64[1];
          v4 = (__int64)a1[2].m128i_i64;
          if ( v3 == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_232;
          v5 = (__m128i *)a1[2].m128i_i64[0];
          v6 = a1 + 3;
          v7 = v3 + 1;
          if ( v5 == &a1[3] )
            v8 = 15;
          else
            v8 = a1[3].m128i_u64[0];
          if ( v7 > v8 )
            sub_998B30((__int64)a1[2].m128i_i64, a1[2].m128i_u64[1], 0, "d", 1u);
          else
            v5->m128i_i8[v3] = 100;
          break;
        case 16:
          v3 = a1[2].m128i_i64[1];
          v4 = (__int64)a1[2].m128i_i64;
          if ( v3 == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_232;
          v69 = (__m128i *)a1[2].m128i_i64[0];
          v6 = a1 + 3;
          v7 = v3 + 1;
          if ( v69 == &a1[3] )
            v70 = 15;
          else
            v70 = a1[3].m128i_u64[0];
          if ( v7 > v70 )
            sub_998B30((__int64)a1[2].m128i_i64, a1[2].m128i_u64[1], 0, "x", 1u);
          else
            v69->m128i_i8[v3] = 120;
          break;
        default:
          goto LABEL_235;
      }
LABEL_9:
      v9 = a1[2].m128i_i64[0];
      a1[2].m128i_i64[1] = v7;
      *(_BYTE *)(v9 + v3 + 1) = 0;
      goto LABEL_10;
    case 9:
      v3 = a1[2].m128i_i64[1];
      v4 = (__int64)a1[2].m128i_i64;
      if ( v3 == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_232;
      v16 = (__m128i *)a1[2].m128i_i64[0];
      v6 = a1 + 3;
      v7 = v3 + 1;
      if ( v16 == &a1[3] )
        v17 = 15;
      else
        v17 = a1[3].m128i_u64[0];
      if ( v7 > v17 )
        sub_998B30((__int64)a1[2].m128i_i64, a1[2].m128i_u64[1], 0, "y", 1u);
      else
        v16->m128i_i8[v3] = 121;
      goto LABEL_9;
  }
}
