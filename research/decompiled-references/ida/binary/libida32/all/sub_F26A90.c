void __fastcall sub_F26A90(__int64 a1, __int64 a2, __m128i si128)
{
  __int64 v4; // rbx
  size_t v5; // rbp
  void *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128i *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm3
  __m128i *v14; // rdx
  void (__fastcall *v15)(__m256i *, __m256i *, __int64); // rax
  __int64 v16; // rdx
  __m128i *v17; // rdi
  __int64 *v18; // rbp
  __m128i v19; // xmm2
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm3
  __m128i *v23; // rdx
  __int64 v24; // rdx
  __m128i v25; // xmm4
  __m128i *v26; // rdi
  __int64 v27; // rax
  bool v28; // zf
  __m128i v29; // xmm1
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __m128i *v33; // r15
  __int64 v34; // rax
  __int64 v35; // rax
  __m128i v36; // xmm6
  __m128i *v37; // rdx
  void *v38; // rax
  void *v39; // rdx
  __m128i v40; // xmm7
  __int64 v41; // rax
  __int64 v42; // rax
  __m128i v43; // xmm7
  __m128i *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rdi
  void (__fastcall *v51)(__int64, __int64, __int64); // rax
  __int64 v52; // rax
  _BYTE *v53; // rax
  __int64 v54; // rdi
  _BYTE *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rdi
  __int64 v61; // rdi
  void (__fastcall *v62)(__int64, __int64, __int64); // rax
  __int64 v63; // rax
  _BYTE *v64; // rax
  void (__fastcall *v65)(__int64 ***, char *, double); // [rsp+8h] [rbp-130h] BYREF
  __m128i v66; // [rsp+10h] [rbp-128h] BYREF
  char v67; // [rsp+2Dh] [rbp-10Bh] BYREF
  char v68; // [rsp+2Eh] [rbp-10Ah] BYREF
  char v69; // [rsp+2Fh] [rbp-109h] BYREF
  __m128i v70; // [rsp+30h] [rbp-108h] BYREF
  __m128 v71; // [rsp+40h] [rbp-F8h] BYREF
  void *v72[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v73; // [rsp+60h] [rbp-D8h]
  __m128i v74; // [rsp+68h] [rbp-D0h] BYREF
  __m256i v75; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-98h]
  __m128i v77; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-78h] BYREF
  __m128i v79; // [rsp+C8h] [rbp-70h] BYREF
  void *v80; // [rsp+D8h] [rbp-60h]
  __int64 v81; // [rsp+E0h] [rbp-58h]
  __m128i v82[5]; // [rsp+E8h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 1096);
  v5 = j__strlen(" ");
  v6 = *(void **)(v4 + 32);
  if ( v5 > *(_QWORD *)(v4 + 24) - (_QWORD)v6 )
  {
    v4 = sub_22581D0(v4, " ", v5);
  }
  else if ( v5 )
  {
    memcpy(v6, " ", v5);
    *(_QWORD *)(v4 + 32) += v5;
  }
  sub_EE1160(v4, *(_BYTE *)(a2 + 33));
  sub_F06310(a1, *(_QWORD *)(a2 + 72));
  if ( *(_BYTE *)(a1 + 1056) )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    sub_F1FC70(a1, *(_QWORD *)(a2 + 64), *(double *)si128.m128i_i64);
    v56 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v56 )
    {
      v57 = *(_QWORD *)(a1 + 16);
      v68 = 1;
      v58 = v57 + 32 * v56 - 32;
      if ( !*(_QWORD *)(v58 + 16) )
        goto LABEL_74;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v58 + 24))(v58, &v68);
        v60 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v60;
        v61 = *(_QWORD *)(a1 + 16) + 32 * v60;
        v62 = *(void (__fastcall **)(__int64, __int64, __int64))(v61 + 16);
        if ( v62 )
          v62(v61, v61, 3);
        v63 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v63 )
          break;
        v59 = *(_QWORD *)(a1 + 16);
        v68 = 1;
        v58 = v59 + 32 * v63 - 32;
        if ( !*(_QWORD *)(v58 + 16) )
          goto LABEL_74;
      }
    }
    v64 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v64 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    goto LABEL_17;
  }
  v65 = (void (__fastcall *)(__int64 ***, char *, double))a2;
  v72[0] = (void *)a1;
  v72[1] = &v74;
  v71 = _mm_loadh_ps((const double *)&v65);
  sub_F009D0(&v72[1], &byte_22CD811, (__int64)&byte_22CD811);
  if ( *(_BYTE *)(a1 + 1057) )
  {
    v40 = _mm_loadu_si128((const __m128i *)&v71.m128_u16[4]);
    v78 = v71.m128_u64[0];
    v80 = v82;
    v79 = v40;
    if ( v72[1] == &v74 )
    {
      v82[0] = _mm_loadu_si128(&v74);
    }
    else
    {
      v80 = v72[1];
      v82[0].m128i_i64[0] = v74.m128i_i64[0];
    }
    v41 = v73;
    v73 = 0;
    v74.m128i_i8[0] = 0;
    v81 = v41;
    v72[1] = &v74;
    v75.m256i_i64[2] = 0;
    v42 = operator new(0x38u);
    v43 = _mm_loadu_si128(&v79);
    *(_QWORD *)v42 = v78;
    *(_QWORD *)(v42 + 24) = v42 + 40;
    v44 = (__m128i *)v80;
    *(__m128i *)(v42 + 8) = v43;
    if ( v44 == v82 )
    {
      *(__m128i *)(v42 + 40) = _mm_loadu_si128(v82);
    }
    else
    {
      *(_QWORD *)(v42 + 24) = v44;
      *(_QWORD *)(v42 + 40) = v82[0].m128i_i64[0];
    }
    v75.m256i_i64[0] = v42;
    *(_QWORD *)(v42 + 32) = v81;
    v65 = sub_F206D0;
    v80 = v82;
    v81 = 0;
    si128 = (__m128i)_mm_loadh_ps((const double *)&v65);
    v82[0].m128i_i8[0] = 0;
    *(__m128i *)&v75.m256i_u64[2] = si128;
    sub_AA95F0(a1 + 16, (__m128i *)&v75);
    if ( v75.m256i_i64[2] )
      ((void (__fastcall *)(__m256i *, __m256i *, __int64))v75.m256i_i64[2])(&v75, &v75, 3);
    goto LABEL_13;
  }
  v7 = *(unsigned int *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 16);
  v67 = 0;
  v9 = v8 + 32 * v7 - 32;
  if ( !*(_QWORD *)(v9 + 16) )
LABEL_74:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, char *))(v9 + 24))(v9, &v67);
  v10 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
  v79 = _mm_loadu_si128((const __m128i *)&v71.m128_u16[4]);
  v78 = v71.m128_u64[0];
  v80 = v82;
  if ( v72[1] == &v74 )
  {
    v82[0] = _mm_loadu_si128(&v74);
  }
  else
  {
    v80 = v72[1];
    v82[0].m128i_i64[0] = v74.m128i_i64[0];
  }
  v11 = v73;
  v73 = 0;
  v74.m128i_i8[0] = 0;
  v81 = v11;
  v72[1] = &v74;
  v75.m256i_i64[2] = 0;
  v12 = operator new(0x38u);
  v13 = _mm_loadu_si128(&v79);
  *(_QWORD *)v12 = v78;
  *(_QWORD *)(v12 + 24) = v12 + 40;
  v14 = (__m128i *)v80;
  *(__m128i *)(v12 + 8) = v13;
  if ( v14 == v82 )
  {
    *(__m128i *)(v12 + 40) = _mm_loadu_si128(v82);
  }
  else
  {
    *(_QWORD *)(v12 + 24) = v14;
    *(_QWORD *)(v12 + 40) = v82[0].m128i_i64[0];
  }
  v75.m256i_i64[0] = v12;
  v82[0].m128i_i8[0] = 0;
  si128 = _mm_load_si128((const __m128i *)&v75);
  *(_QWORD *)(v12 + 32) = v81;
  v80 = v82;
  v81 = 0;
  *(__m128i *)v75.m256i_i8 = _mm_loadu_si128(v10);
  v15 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v10[1].m128i_i64[0];
  v16 = v10[1].m128i_i64[1];
  *v10 = si128;
  v75.m256i_i64[2] = (__int64)v15;
  v10[1].m128i_i64[0] = (__int64)sub_F00F70;
  v75.m256i_i64[3] = v16;
  v10[1].m128i_i64[1] = (__int64)sub_F206D0;
  if ( v15 )
    v15(&v75, &v75, 3);
LABEL_13:
  if ( v80 != v82 )
    operator delete(v80);
  v17 = (__m128i *)v72[1];
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v17 != &v74 )
    operator delete(v17);
LABEL_17:
  v18 = *(__int64 **)(a2 + 48);
  v65 = (void (__fastcall *)(__int64 ***, char *, double))&v18[*(_QWORD *)(a2 + 56)];
  if ( (char *)v65 != (char *)v18 )
  {
    v66 = (__m128i)_mm_loadh_ps((const double *)off_2B22368);
    do
    {
      while ( 1 )
      {
        v27 = *v18;
        v28 = *(_BYTE *)(a1 + 1056) == 0;
        v70.m128i_i64[1] = a1;
        v70.m128i_i64[0] = v27;
        if ( !v28 )
          break;
        v29 = _mm_load_si128(&v70);
        v75.m256i_i64[0] = a1;
        v75.m256i_i64[3] = (__int64)&v77;
        *(__m128i *)&v75.m256i_u64[1] = v29;
        sub_F009D0(&v75.m256i_i64[3], &byte_22CD811, (__int64)&byte_22CD811);
        if ( *(_BYTE *)(a1 + 1057) )
        {
          v19 = _mm_loadu_si128((const __m128i *)&v75.m256i_u64[1]);
          v78 = v75.m256i_i64[0];
          v80 = v82;
          v79 = v19;
          if ( (__m128i *)v75.m256i_i64[3] == &v77 )
          {
            v82[0] = _mm_loadu_si128(&v77);
          }
          else
          {
            v80 = (void *)v75.m256i_i64[3];
            v82[0].m128i_i64[0] = v77.m128i_i64[0];
          }
          v20 = v76;
          v76 = 0;
          v77.m128i_i8[0] = 0;
          v81 = v20;
          v75.m256i_i64[3] = (__int64)&v77;
          v72[0] = nullptr;
          v21 = operator new(0x38u);
          v22 = _mm_loadu_si128(&v79);
          *(_QWORD *)v21 = v78;
          *(_QWORD *)(v21 + 24) = v21 + 40;
          v23 = (__m128i *)v80;
          *(__m128i *)(v21 + 8) = v22;
          if ( v23 == v82 )
          {
            *(__m128i *)(v21 + 40) = _mm_loadu_si128(v82);
          }
          else
          {
            *(_QWORD *)(v21 + 24) = v23;
            *(_QWORD *)(v21 + 40) = v82[0].m128i_i64[0];
          }
          v24 = v81;
          v71.m128_u64[0] = v21;
          v25 = _mm_load_si128(&v66);
          v81 = 0;
          *(_QWORD *)(v21 + 32) = v24;
          v80 = v82;
          v82[0].m128i_i8[0] = 0;
          *(__m128i *)v72 = v25;
          sub_AA95F0(a1 + 16, (__m128i *)&v71);
          if ( v72[0] )
            ((void (__fastcall *)(__m128 *, __m128 *, __int64))v72[0])(&v71, &v71, 3);
        }
        else
        {
          v30 = *(unsigned int *)(a1 + 24);
          v31 = *(_QWORD *)(a1 + 16);
          v69 = 0;
          v32 = v31 + 32 * v30 - 32;
          if ( !*(_QWORD *)(v32 + 16) )
            goto LABEL_74;
          (*(void (__fastcall **)(__int64, char *))(v32 + 24))(v32, &v69);
          v33 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
          v79 = _mm_loadu_si128((const __m128i *)&v75.m256i_u64[1]);
          v78 = v75.m256i_i64[0];
          v80 = v82;
          if ( (__m128i *)v75.m256i_i64[3] == &v77 )
          {
            v82[0] = _mm_loadu_si128(&v77);
          }
          else
          {
            v80 = (void *)v75.m256i_i64[3];
            v82[0].m128i_i64[0] = v77.m128i_i64[0];
          }
          v34 = v76;
          v76 = 0;
          v77.m128i_i8[0] = 0;
          v81 = v34;
          v75.m256i_i64[3] = (__int64)&v77;
          v72[0] = nullptr;
          v35 = operator new(0x38u);
          v36 = _mm_loadu_si128(&v79);
          *(_QWORD *)v35 = v78;
          *(_QWORD *)(v35 + 24) = v35 + 40;
          v37 = (__m128i *)v80;
          *(__m128i *)(v35 + 8) = v36;
          if ( v37 == v82 )
          {
            *(__m128i *)(v35 + 40) = _mm_loadu_si128(v82);
          }
          else
          {
            *(_QWORD *)(v35 + 24) = v37;
            *(_QWORD *)(v35 + 40) = v82[0].m128i_i64[0];
          }
          v71.m128_u64[0] = v35;
          v82[0].m128i_i8[0] = 0;
          si128 = _mm_load_si128((const __m128i *)&v71);
          *(_QWORD *)(v35 + 32) = v81;
          v80 = v82;
          v81 = 0;
          v71 = (__m128)_mm_loadu_si128(v33);
          v38 = (void *)v33[1].m128i_i64[0];
          v39 = (void *)v33[1].m128i_i64[1];
          *v33 = si128;
          v72[0] = v38;
          v33[1].m128i_i64[0] = (__int64)sub_F00E10;
          v72[1] = v39;
          v33[1].m128i_i64[1] = (__int64)sub_F26740;
          if ( v38 )
            ((void (__fastcall *)(__m128 *, __m128 *, __int64))v38)(&v71, &v71, 3);
        }
        if ( v80 != v82 )
          operator delete(v80);
        v26 = (__m128i *)v75.m256i_i64[3];
        *(_BYTE *)(a1 + 1057) = 0;
        if ( v26 != &v77 )
          operator delete(v26);
        if ( (char *)v65 == (char *)++v18 )
          return;
      }
      *(_BYTE *)(a1 + 1056) = 0;
      sub_F26080(v70.m128i_i64, &v70.m128i_i64[1], *(double *)si128.m128i_i64);
      v45 = *(unsigned int *)(a1 + 24);
      if ( (_DWORD)v45 )
      {
        v46 = *(_QWORD *)(a1 + 16);
        LOBYTE(v78) = 1;
        v47 = v46 + 32 * v45 - 32;
        if ( !*(_QWORD *)(v47 + 16) )
          goto LABEL_74;
        while ( 1 )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(v47 + 24))(v47, &v78);
          v49 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
          *(_DWORD *)(a1 + 24) = v49;
          v50 = *(_QWORD *)(a1 + 16) + 32 * v49;
          v51 = *(void (__fastcall **)(__int64, __int64, __int64))(v50 + 16);
          if ( v51 )
            v51(v50, v50, 3);
          v52 = *(unsigned int *)(a1 + 24);
          if ( !(_DWORD)v52 )
            break;
          v48 = *(_QWORD *)(a1 + 16);
          LOBYTE(v78) = 1;
          v47 = v48 + 32 * v52 - 32;
          if ( !*(_QWORD *)(v47 + 16) )
            goto LABEL_74;
        }
      }
      v53 = *(_BYTE **)(a1 + 1064);
      *(_QWORD *)(a1 + 1072) = 0;
      *v53 = 0;
      v54 = *(_QWORD *)a1;
      v55 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
      if ( *(_BYTE **)(*(_QWORD *)a1 + 24LL) == v55 )
      {
        sub_22581D0(v54, "\n", 1);
      }
      else
      {
        *v55 = 10;
        ++*(_QWORD *)(v54 + 32);
      }
      *(_BYTE *)(a1 + 1056) = 1;
      ++v18;
    }
    while ( (char *)v65 != (char *)v18 );
  }
}

