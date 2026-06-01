void __fastcall sub_F2DE50(__int64 a1, __int64 a2, __m128 si128)
{
  unsigned __int64 **v3; // r12
  __m128i v5; // xmm6
  void *v6; // rax
  __int64 v7; // rax
  __m128i v8; // xmm7
  __m128i *v9; // rdx
  __m128i *v10; // rdi
  unsigned __int64 *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __m128i *v15; // r13
  void *v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm3
  __m128i *v19; // rdx
  void *v20; // rax
  void *v21; // rdx
  __m128 v22; // rax
  unsigned __int64 v23; // rsi
  __m128i v24; // xmm2
  void *v25; // rax
  __int64 v26; // rax
  __m128i v27; // xmm3
  __m128i *v28; // rdx
  unsigned __int64 v29; // rdi
  __m128i v30; // xmm4
  __m128i *v31; // r13
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  __m128i *v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdx
  void *v40; // rax
  __m128i *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rdi
  void (__fastcall *v48)(__int64, __int64, __int64); // rax
  __int64 v49; // rax
  _BYTE *v50; // rax
  __int64 v51; // rdi
  _BYTE *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __m128i *v56; // r14
  void *v57; // rax
  __int64 v58; // rax
  __m128i v59; // xmm7
  __m128i *v60; // rsi
  void *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rdi
  void (__fastcall *v67)(__int64, __int64, __int64); // rax
  _BYTE *v68; // rax
  __int64 v69; // rdi
  _BYTE *v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rsi
  __m128 *v73; // [rsp+8h] [rbp-1E0h] BYREF
  unsigned __int64 v74; // [rsp+10h] [rbp-1D8h] BYREF
  __m128i v75; // [rsp+18h] [rbp-1D0h]
  unsigned __int64 **v76; // [rsp+28h] [rbp-1C0h]
  __m128 v77; // [rsp+30h] [rbp-1B8h] BYREF
  __m128i v78; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v79; // [rsp+50h] [rbp-198h]
  __m128 v80; // [rsp+60h] [rbp-188h] BYREF
  __int64 v81; // [rsp+70h] [rbp-178h]
  __m128 v82; // [rsp+80h] [rbp-168h] BYREF
  __int64 v83; // [rsp+90h] [rbp-158h]
  __m128 v84; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v85; // [rsp+B0h] [rbp-138h]
  __m128 v86; // [rsp+C0h] [rbp-128h]
  __int64 v87; // [rsp+D0h] [rbp-118h]
  __m128 v88; // [rsp+F0h] [rbp-F8h] BYREF
  void *v89[2]; // [rsp+100h] [rbp-E8h] BYREF
  void *v90; // [rsp+110h] [rbp-D8h]
  __m128i v91; // [rsp+118h] [rbp-D0h] BYREF
  __m128 v92; // [rsp+130h] [rbp-B8h] BYREF
  void *v93[2]; // [rsp+140h] [rbp-A8h] BYREF
  void *v94; // [rsp+150h] [rbp-98h]
  __m128i v95; // [rsp+158h] [rbp-90h] BYREF
  __int64 v96; // [rsp+170h] [rbp-78h] BYREF
  __m128i v97; // [rsp+178h] [rbp-70h] BYREF
  void *v98[2]; // [rsp+188h] [rbp-60h] BYREF
  __m128i v99[5]; // [rsp+198h] [rbp-50h] BYREF

  v3 = *(unsigned __int64 ***)(a2 + 40);
  v76 = &v3[*(unsigned int *)(a2 + 48)];
  v77 = _mm_loadh_ps((const double *)off_2B22328);
  while ( v76 != v3 )
  {
    while ( 1 )
    {
      v11 = *v3;
      if ( *(_BYTE *)(a1 + 1056) )
        break;
      v73 = (__m128 *)*v3;
      v89[0] = (void *)a1;
      v89[1] = &v91;
      v88 = _mm_loadh_ps((const double *)&v73);
      sub_F009D0(&v89[1], &byte_22CD811, (__int64)&byte_22CD811);
      if ( *(_BYTE *)(a1 + 1057) )
      {
        v5 = _mm_loadu_si128((const __m128i *)&v88.m128_u16[4]);
        v96 = v88.m128_u64[0];
        v98[0] = v99;
        v97 = v5;
        if ( v89[1] == &v91 )
        {
          v99[0] = _mm_loadu_si128(&v91);
        }
        else
        {
          v98[0] = v89[1];
          v99[0].m128i_i64[0] = v91.m128i_i64[0];
        }
        v6 = v90;
        v90 = nullptr;
        v91.m128i_i8[0] = 0;
        v98[1] = v6;
        v89[1] = &v91;
        v93[0] = nullptr;
        v7 = operator new(0x38u);
        v8 = _mm_loadu_si128(&v97);
        *(_QWORD *)v7 = v96;
        *(_QWORD *)(v7 + 24) = v7 + 40;
        v9 = (__m128i *)v98[0];
        *(__m128i *)(v7 + 8) = v8;
        if ( v9 == v99 )
        {
          *(__m128i *)(v7 + 40) = _mm_loadu_si128(v99);
        }
        else
        {
          *(_QWORD *)(v7 + 24) = v9;
          *(_QWORD *)(v7 + 40) = v99[0].m128i_i64[0];
        }
        v92.m128_u64[0] = v7;
        *(void **)(v7 + 32) = v98[1];
        v73 = (__m128 *)sub_F23AA0;
        v98[0] = v99;
        v98[1] = nullptr;
        si128 = _mm_loadh_ps((const double *)&v73);
        v99[0].m128i_i8[0] = 0;
        *(__m128 *)v93 = si128;
        sub_AA95F0(a1 + 16, (__m128i *)&v92);
        if ( v93[0] )
          ((void (__fastcall *)(__m128 *, __m128 *, __int64))v93[0])(&v92, &v92, 3);
      }
      else
      {
        v12 = *(unsigned int *)(a1 + 24);
        v13 = *(_QWORD *)(a1 + 16);
        v78.m128i_i8[0] = 0;
        v14 = v13 + 32 * v12 - 32;
        if ( !*(_QWORD *)(v14 + 16) )
          goto LABEL_87;
        (*(void (__fastcall **)(__int64, __m128i *))(v14 + 24))(v14, &v78);
        v15 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
        v97 = _mm_loadu_si128((const __m128i *)&v88.m128_u16[4]);
        v96 = v88.m128_u64[0];
        v98[0] = v99;
        if ( v89[1] == &v91 )
        {
          v99[0] = _mm_loadu_si128(&v91);
        }
        else
        {
          v98[0] = v89[1];
          v99[0].m128i_i64[0] = v91.m128i_i64[0];
        }
        v16 = v90;
        v90 = nullptr;
        v91.m128i_i8[0] = 0;
        v98[1] = v16;
        v89[1] = &v91;
        v93[0] = nullptr;
        v17 = operator new(0x38u);
        v18 = _mm_loadu_si128(&v97);
        *(_QWORD *)v17 = v96;
        *(_QWORD *)(v17 + 24) = v17 + 40;
        v19 = (__m128i *)v98[0];
        *(__m128i *)(v17 + 8) = v18;
        if ( v19 == v99 )
        {
          *(__m128i *)(v17 + 40) = _mm_loadu_si128(v99);
        }
        else
        {
          *(_QWORD *)(v17 + 24) = v19;
          *(_QWORD *)(v17 + 40) = v99[0].m128i_i64[0];
        }
        v92.m128_u64[0] = v17;
        v99[0].m128i_i8[0] = 0;
        si128 = (__m128)_mm_load_si128((const __m128i *)&v92);
        *(void **)(v17 + 32) = v98[1];
        v98[0] = v99;
        v98[1] = nullptr;
        v92 = (__m128)_mm_loadu_si128(v15);
        v20 = (void *)v15[1].m128i_i64[0];
        v21 = (void *)v15[1].m128i_i64[1];
        *v15 = (__m128i)si128;
        v93[0] = v20;
        v15[1].m128i_i64[0] = (__int64)sub_F00CB0;
        v93[1] = v21;
        v15[1].m128i_i64[1] = (__int64)sub_F23AA0;
        if ( v20 )
          ((void (__fastcall *)(__m128 *, __m128 *, __int64))v20)(&v92, &v92, 3);
      }
      if ( v98[0] != v99 )
        operator delete(v98[0]);
      v10 = (__m128i *)v89[1];
      *(_BYTE *)(a1 + 1057) = 0;
      if ( v10 != &v91 )
        operator delete(v10);
      if ( v76 == ++v3 )
        return;
    }
    *(_BYTE *)(a1 + 1056) = 0;
    sub_F22930(a1, (__int64)v11, *(double *)si128.m128_u64);
    sub_E89E30(&v96, (__int64)v11);
    si128 = (__m128)_mm_load_si128((const __m128i *)&v96);
    v78 = _mm_loadu_si128((const __m128i *)v98);
    v89[0] = (void *)v99[0].m128i_i64[0];
    v22 = si128;
    v93[0] = (void *)v99[0].m128i_i64[0];
    v79 = v99[0].m128i_i64[0];
    v73 = &v84;
    v83 = v97.m128i_i64[1];
    v84 = si128;
    v85 = v97.m128i_i64[1];
    v81 = v97.m128i_i64[1];
    v87 = v97.m128i_i64[1];
    v88 = (__m128)v78;
    v92 = (__m128)v78;
    v82 = si128;
    v80 = si128;
    v86 = si128;
    v75 = v78;
    while ( 1 )
    {
      if ( v75.m128i_i64[0] == v22.m128_u64[0] )
        goto LABEL_42;
LABEL_25:
      if ( (v22.m128_i8[8] & 3) != 0 )
        v22.m128_u64[0] = sub_ECEDF0((__int64)v73);
      v23 = *(_QWORD *)v22.m128_u64[0];
      if ( !*(_BYTE *)(a1 + 1056) )
      {
        v74 = *(_QWORD *)v22.m128_u64[0];
        v93[0] = (void *)a1;
        v93[1] = &v95;
        v92 = _mm_loadh_ps((const double *)&v74);
        sub_F009D0(&v93[1], &byte_22CD811, (__int64)&byte_22CD811);
        if ( *(_BYTE *)(a1 + 1057) )
        {
          v24 = _mm_loadu_si128((const __m128i *)&v92.m128_u16[4]);
          v96 = v92.m128_u64[0];
          v98[0] = v99;
          v97 = v24;
          if ( v93[1] == &v95 )
          {
            v99[0] = _mm_loadu_si128(&v95);
          }
          else
          {
            v98[0] = v93[1];
            v99[0].m128i_i64[0] = v95.m128i_i64[0];
          }
          v25 = v94;
          v94 = nullptr;
          v95.m128i_i8[0] = 0;
          v98[1] = v25;
          v93[1] = &v95;
          v89[0] = nullptr;
          v26 = operator new(0x38u);
          v27 = _mm_loadu_si128(&v97);
          *(_QWORD *)v26 = v96;
          *(_QWORD *)(v26 + 24) = v26 + 40;
          v28 = (__m128i *)v98[0];
          *(__m128i *)(v26 + 8) = v27;
          if ( v28 == v99 )
          {
            *(__m128i *)(v26 + 40) = _mm_loadu_si128(v99);
          }
          else
          {
            *(_QWORD *)(v26 + 24) = v28;
            *(_QWORD *)(v26 + 40) = v99[0].m128i_i64[0];
          }
          v29 = *(unsigned int *)(a1 + 28);
          v88.m128_u64[0] = v26;
          v30 = _mm_load_si128((const __m128i *)&v77);
          v99[0].m128i_i8[0] = 0;
          v31 = (__m128i *)&v88;
          *(void **)(v26 + 32) = v98[1];
          v32 = *(unsigned int *)(a1 + 24);
          v98[0] = v99;
          v33 = *(_QWORD *)(a1 + 16);
          v34 = v32 + 1;
          v98[1] = nullptr;
          *(__m128i *)v89 = v30;
          v35 = (__m128i *)(v33 + 32 * v32);
          if ( v34 > v29 )
          {
            v71 = a1 + 16;
            if ( v33 > (unsigned __int64)&v88 || v35 <= (__m128i *)&v88 )
            {
              sub_AA94F0(v71, v34);
              v35 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24));
            }
            else
            {
              v74 = v33;
              sub_AA94F0(v71, v34);
              v72 = *(_QWORD *)(a1 + 16);
              v31 = (__m128i *)((char *)&v88 + v72 - v74);
              v35 = (__m128i *)(v72 + 32LL * *(unsigned int *)(a1 + 24));
            }
          }
          v35[1].m128i_i64[0] = 0;
          si128 = (__m128)_mm_loadu_si128(v31);
          *v31 = _mm_loadu_si128(v35);
          v36 = v35[1].m128i_i64[0];
          *v35 = (__m128i)si128;
          v37 = v31[1].m128i_i64[0];
          v31[1].m128i_i64[0] = v36;
          v38 = v35[1].m128i_i64[1];
          v35[1].m128i_i64[0] = v37;
          v39 = v31[1].m128i_i64[1];
          v31[1].m128i_i64[1] = v38;
          v35[1].m128i_i64[1] = v39;
          v40 = v89[0];
          ++*(_DWORD *)(a1 + 24);
          if ( v40 )
            goto LABEL_35;
        }
        else
        {
          v53 = *(unsigned int *)(a1 + 24);
          v54 = *(_QWORD *)(a1 + 16);
          v82.m128_i8[0] = 0;
          v55 = v54 + 32 * v53 - 32;
          if ( !*(_QWORD *)(v55 + 16) )
            goto LABEL_87;
          (*(void (__fastcall **)(__int64, __m128 *))(v55 + 24))(v55, &v82);
          v56 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
          v97 = _mm_loadu_si128((const __m128i *)&v92.m128_u16[4]);
          v96 = v92.m128_u64[0];
          v98[0] = v99;
          if ( v93[1] == &v95 )
          {
            v99[0] = _mm_loadu_si128(&v95);
          }
          else
          {
            v98[0] = v93[1];
            v99[0].m128i_i64[0] = v95.m128i_i64[0];
          }
          v57 = v94;
          v94 = nullptr;
          v95.m128i_i8[0] = 0;
          v98[1] = v57;
          v93[1] = &v95;
          v89[0] = nullptr;
          v58 = operator new(0x38u);
          v59 = _mm_loadu_si128(&v97);
          *(_QWORD *)v58 = v96;
          *(_QWORD *)(v58 + 24) = v58 + 40;
          v60 = (__m128i *)v98[0];
          *(__m128i *)(v58 + 8) = v59;
          if ( v60 == v99 )
          {
            *(__m128i *)(v58 + 40) = _mm_loadu_si128(v99);
          }
          else
          {
            *(_QWORD *)(v58 + 24) = v60;
            *(_QWORD *)(v58 + 40) = v99[0].m128i_i64[0];
          }
          v88.m128_u64[0] = v58;
          v99[0].m128i_i8[0] = 0;
          si128 = (__m128)_mm_load_si128((const __m128i *)&v88);
          *(void **)(v58 + 32) = v98[1];
          v98[0] = v99;
          v98[1] = nullptr;
          v88 = (__m128)_mm_loadu_si128(v56);
          v40 = (void *)v56[1].m128i_i64[0];
          v61 = (void *)v56[1].m128i_i64[1];
          *v56 = (__m128i)si128;
          v89[0] = v40;
          v56[1].m128i_i64[0] = (__int64)sub_F00D60;
          v89[1] = v61;
          v56[1].m128i_i64[1] = (__int64)sub_F20030;
          if ( v40 )
LABEL_35:
            ((void (__fastcall *)(__m128 *, __m128 *, __int64))v40)(&v88, &v88, 3);
        }
        if ( v98[0] != v99 )
          operator delete(v98[0]);
        v41 = (__m128i *)v93[1];
        *(_BYTE *)(a1 + 1057) = 0;
        if ( v41 != &v95 )
          operator delete(v41);
        goto LABEL_40;
      }
      *(_BYTE *)(a1 + 1056) = 0;
      sub_F1FC70(a1, v23, *(double *)si128.m128_u64);
LABEL_65:
      v62 = *(unsigned int *)(a1 + 24);
      if ( (_DWORD)v62 )
      {
        while ( 1 )
        {
          v63 = *(_QWORD *)(a1 + 16);
          LOBYTE(v96) = 1;
          v64 = v63 + 32 * v62 - 32;
          if ( !*(_QWORD *)(v64 + 16) )
            break;
          (*(void (__fastcall **)(__int64, __int64 *))(v64 + 24))(v64, &v96);
          v65 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
          *(_DWORD *)(a1 + 24) = v65;
          v66 = *(_QWORD *)(a1 + 16) + 32 * v65;
          v67 = *(void (__fastcall **)(__int64, __int64, __int64))(v66 + 16);
          if ( !v67 )
            goto LABEL_65;
          v67(v66, v66, 3);
          v62 = *(unsigned int *)(a1 + 24);
          if ( !(_DWORD)v62 )
            goto LABEL_69;
        }
LABEL_87:
        std::__throw_bad_function_call();
      }
LABEL_69:
      v68 = *(_BYTE **)(a1 + 1064);
      *(_QWORD *)(a1 + 1072) = 0;
      *v68 = 0;
      v69 = *(_QWORD *)a1;
      v70 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
      if ( *(_BYTE **)(*(_QWORD *)a1 + 24LL) == v70 )
      {
        sub_22581D0(v69, "\n", 1);
      }
      else
      {
        *v70 = 10;
        ++*(_QWORD *)(v69 + 32);
      }
      *(_BYTE *)(a1 + 1056) = 1;
LABEL_40:
      v22.m128_u64[1] = v84.m128_u64[1];
      if ( (v84.m128_i8[8] & 3) == 0 )
        break;
      if ( (v84.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20((__int64)v73);
      else
        sub_ECEA10((unsigned __int64 *)v73, 1);
      v22 = v84;
    }
    v22.m128_u64[0] = v84.m128_u64[0] + 8;
    v84.m128_u64[0] = v22.m128_u64[0];
    if ( v75.m128i_i64[0] != v22.m128_u64[0] )
      goto LABEL_25;
LABEL_42:
    if ( v75.m128i_i64[1] != v22.m128_u64[1] )
      goto LABEL_25;
    v42 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v42 )
    {
      v43 = *(_QWORD *)(a1 + 16);
      v80.m128_i8[0] = 1;
      v44 = v43 + 32 * v42 - 32;
      if ( !*(_QWORD *)(v44 + 16) )
        goto LABEL_87;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128 *))(v44 + 24))(v44, &v80);
        v46 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v46;
        v47 = *(_QWORD *)(a1 + 16) + 32 * v46;
        v48 = *(void (__fastcall **)(__int64, __int64, __int64))(v47 + 16);
        if ( v48 )
          v48(v47, v47, 3);
        v49 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v49 )
          break;
        v45 = *(_QWORD *)(a1 + 16);
        v80.m128_i8[0] = 1;
        v44 = v45 + 32 * v49 - 32;
        if ( !*(_QWORD *)(v44 + 16) )
          goto LABEL_87;
      }
    }
    v50 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v50 = 0;
    v51 = *(_QWORD *)a1;
    v52 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
    if ( *(_BYTE **)(*(_QWORD *)a1 + 24LL) == v52 )
    {
      sub_22581D0(v51, "\n", 1);
    }
    else
    {
      *v52 = 10;
      ++*(_QWORD *)(v51 + 32);
    }
    *(_BYTE *)(a1 + 1056) = 1;
    ++v3;
  }
}

