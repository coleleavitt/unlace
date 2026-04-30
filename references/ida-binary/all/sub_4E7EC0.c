unsigned __int64 __fastcall vault_files_dirtree_widget_t__::vfunc_30(
        __m128i *a1,
        __int64 a2,
        unsigned int a3,
        double a4,
        double a5,
        double a6,
        __m128 a7)
{
  __int64 v9; // rax
  void (__fastcall *v11)(__int64, unsigned __int64); // rax
  __int64 v12; // rsi
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // r13
  __int128 v16; // xmm0
  __int64 i; // r15
  __int64 v18; // rdi
  __m128i *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdi
  size_t v23; // r15
  __int64 v24; // rax
  std::__future_base::_Result_base *v25; // r13
  __int64 v26; // r13
  __int64 search_utils; // r14
  void (__fastcall *v28)(__int64, void **, unsigned __int64 *, volatile signed __int32 **, __int128 *, __m128 *); // rax
  __m128 *v29; // rax
  __m128 v30; // xmm0
  char *v31; // rdi
  __m128 v32; // xmm0
  double v33; // xmm3_8
  void **v34; // rsi
  __m128 v35; // xmm4
  volatile signed __int32 *v36; // r14
  volatile signed __int32 *v37; // rdx
  signed __int32 v38; // eax
  char *v39; // rdi
  volatile signed __int32 *v40; // r13
  volatile signed __int32 *v41; // rdx
  signed __int32 v42; // eax
  __m128 v43; // xmm0
  unsigned __int64 v44; // xmm4_8
  __int64 v45; // rax
  char v46; // dl
  __m128 v47; // xmm5
  __m128 si128; // xmm0
  __int64 v49; // rdx
  void *v50; // rdi
  __int64 v51; // rax
  unsigned int *v52; // r13
  unsigned int *v53; // r15
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r9
  volatile signed __int32 *v58; // r13
  volatile signed __int32 *v59; // rdx
  signed __int32 v60; // eax
  __int64 v61; // rax
  __int64 v62; // r13
  __int64 v63; // r14
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // r13
  _QWORD *v67; // r14
  _QWORD *v68; // r13
  __int64 v69; // rdx
  __int64 v70; // rax
  struct _Unwind_Exception **v71; // rcx
  char *v72; // rax
  __int64 v73; // rax
  void *v74; // rdi
  __int64 v75; // rax
  unsigned __int64 v76; // rdi
  __int64 v77; // rax
  unsigned __int64 v78; // rdi
  int v79; // edx
  void (__fastcall *v80)(__int64, void **, unsigned __int64 *, volatile signed __int32 **, __int128 *, __m128 *); // [rsp+8h] [rbp-130h]
  __int64 v81; // [rsp+8h] [rbp-130h]
  _BYTE *src; // [rsp+10h] [rbp-128h]
  struct _Unwind_Exception **j; // [rsp+18h] [rbp-120h] BYREF
  __m128i *v84; // [rsp+20h] [rbp-118h]
  char *v85; // [rsp+28h] [rbp-110h]
  char v86; // [rsp+37h] [rbp-101h] BYREF
  volatile signed __int32 *v87; // [rsp+38h] [rbp-100h] BYREF
  __m128 v88; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v89; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v90; // [rsp+58h] [rbp-E0h]
  void *v91[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+80h] [rbp-B8h]
  __m128i v93; // [rsp+90h] [rbp-A8h] BYREF
  std::__future_base::_Result_base *v94; // [rsp+A0h] [rbp-98h]
  void *v95[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-78h]
  __int128 v97; // [rsp+D0h] [rbp-68h] BYREF
  __m128i v98; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v99; // [rsp+F8h] [rbp-40h]

  v9 = a1->m128i_i64[0];
  v99 = __readfsqword(0x28u);
  v11 = *(void (__fastcall **)(__int64, unsigned __int64))(v9 + 192);
  v12 = -1;
  if ( v11 == vault_files_dirtree_widget_t__::vfunc_24 )
    sub_4DEB40((__m128i *)a1[102].m128i_i64, 0xFFFFFFFFFFFFFFFFLL);
  else
    v11((__int64)a1, -1uLL);
  if ( (*(unsigned __int8 (__fastcall **)(__m128i *))(a1->m128i_i64[0] + 96))(a1) && (a1[105].m128i_i8[0] & 2) == 0 )
    sub_4DFA70(a1->m128i_i8);
  v89 = 0;
  v90 = 0;
  if ( !(unsigned __int8)sub_4DAD60(&a1[115].m128i_i64[1])
    || !a1[116].m128i_i64[0]
    || (v13 = a1[115].m128i_i64[1], v14 = *(_DWORD *)v13, !v13)
    || v14 >= 0
    || (v14 & 0x23) != 0 )
  {
    v15 = a1[72].m128i_i64[0];
    v16 = 0;
    for ( i = v15 + (a1[72].m128i_i64[1] << 7); v15 != i; v16 = 0 )
    {
      v18 = *(_QWORD *)(v15 + 48);
      *(_DWORD *)(v15 + 96) = -1;
      if ( v18 )
      {
        *(_QWORD *)(v15 + 56) = 0;
        qfree(v18, (const char *)v12, *(double *)&v16);
        v16 = 0;
      }
      *(_OWORD *)(v15 + 48) = v16;
      v12 = v15 + 48;
      *(_OWORD *)(v15 + 64) = v16;
      *(_OWORD *)(v15 + 80) = v16;
      sub_4E0400((__int64)a1, (const char *)(v15 + 48), v15, *(double *)&v16, a5, a6, *(double *)a7.m128_u64);
      v15 += 128;
    }
    goto LABEL_15;
  }
  src = nullptr;
  v23 = *(_QWORD *)(v13 + 48);
  if ( v23 )
  {
    src = (_BYTE *)qalloc_or_throw(*(_QWORD *)(v13 + 48));
    memcpy(src, *(const void **)(v13 + 40), v23);
    if ( v23 != 1 )
      qstrlwr(src);
  }
  v92 = 0;
  *(_OWORD *)v91 = 0;
  v24 = operator new(0x30u);
  *(_DWORD *)(v24 + 32) = 0;
  *(_QWORD *)(v24 + 24) = 0;
  *(_QWORD *)(v24 + 8) = 0x100000001LL;
  *(_BYTE *)(v24 + 36) = 0;
  *(_DWORD *)(v24 + 40) = 0;
  *(_QWORD *)v24 = std::_Sp_counted_ptr_inplace_std::__future_base::_State_baseV2__std::allocator_void______gnu_cxx::_Lock_policy_2____vtable;
  v93.m128i_i64[1] = v24;
  v24 += 16;
  *(_QWORD *)v24 = &std::__future_base::_State_baseV2___vtable;
  v93.m128i_i64[0] = v24;
  v25 = (std::__future_base::_Result_base *)operator new(0x30u);
  std::__future_base::_Result_base::_Result_base(v25);
  *((_BYTE *)v25 + 40) = 0;
  v94 = v25;
  *(_QWORD *)v25 = std::__future_base::_Result_std::vector_unsigned_int__std::allocator_unsigned_int______vtable;
  v26 = a1[101].m128i_i64[1];
  j = (struct _Unwind_Exception **)a1[101].m128i_i64[0];
  if ( v26 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
    else
      ++*(_DWORD *)(v26 + 8);
  }
  search_utils = get_search_utils();
  v28 = *(void (__fastcall **)(__int64, void **, unsigned __int64 *, volatile signed __int32 **, __int128 *, __m128 *))(*(_QWORD *)search_utils + 24LL);
  v88 = 0;
  v98 = 0u;
  v80 = v28;
  v97 = 0;
  v29 = (__m128 *)operator new(0x20u);
  v29[1].m128_u64[0] = v26;
  v30 = _mm_loadh_ps((const double *)&j);
  v29[1].m128_u64[1] = (unsigned __int64)&v93;
  *v29 = v30;
  *(_QWORD *)&v97 = v29;
  v84 = &v93;
  v98 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_86D540), (__m128i)(unsigned __int64)sub_4E3D90);
  if ( v23 > 1 )
  {
    if ( !src )
      goto LABEL_123;
    v70 = std::string::_Rep::_S_create(v23 - 1, 0, &v86);
    v71 = (struct _Unwind_Exception **)v70;
    v31 = (char *)(v70 + 24);
    if ( v23 == 2 )
    {
      *(_BYTE *)(v70 + 24) = *src;
    }
    else
    {
      j = (struct _Unwind_Exception **)v70;
      v72 = (char *)memcpy(v31, src, v23 - 1);
      v71 = j;
      v31 = v72;
    }
    v85 = (char *)&std::string::_Rep::_S_empty_rep_storage;
    if ( v71 != (struct _Unwind_Exception **)&std::string::_Rep::_S_empty_rep_storage )
    {
      *((_DWORD *)v71 + 4) = 0;
      *v71 = (struct _Unwind_Exception *)(v23 - 1);
      *((_BYTE *)v71 + v23 + 23) = 0;
    }
  }
  else
  {
    v85 = (char *)&std::string::_Rep::_S_empty_rep_storage;
    v31 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  }
  v32 = (__m128)_mm_loadu_si128(a1 + 101);
  v87 = (volatile signed __int32 *)v31;
  *(_QWORD *)&v33 = _mm_movehl_ps(a7, v32).m128_u64[0];
  *(__m128 *)v95 = v32;
  if ( v33 != 0.0 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)&v33 + 8LL), 1u);
    else
      ++*(_DWORD *)(*(_QWORD *)&v33 + 8LL);
  }
  j = (struct _Unwind_Exception **)&v88;
  v34 = v95;
  v80(search_utils, v95, &a1[83].m128i_u64[1], &v87, &v97, &v88);
  v36 = (volatile signed __int32 *)v95[1];
  if ( v95[1] )
  {
    v37 = (volatile signed __int32 *)((char *)v95[1] + 8);
    if ( *((_QWORD *)v95[1] + 1) == 0x100000001LL )
    {
      v73 = *(_QWORD *)v95[1];
      v74 = v95[1];
      *((_QWORD *)v95[1] + 1) = 0;
      (*(void (__fastcall **)(void *, void **, volatile signed __int32 *))(v73 + 16))(v74, v95, v37);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 24LL))(v36);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v38 = _InterlockedExchangeAdd(v37, 0xFFFFFFFF);
      }
      else
      {
        v38 = *((_DWORD *)v95[1] + 2);
        *((_DWORD *)v95[1] + 2) = v38 - 1;
      }
      if ( v38 == 1 )
        sub_28E9C0(v36);
    }
  }
  v39 = (char *)(v87 - 6);
  if ( v87 - 6 != (volatile signed __int32 *)v85 )
  {
    if ( &_pthread_key_create )
    {
      v79 = _InterlockedExchangeAdd(v87 - 2, 0xFFFFFFFF);
    }
    else
    {
      v79 = *((_DWORD *)v87 - 2);
      *((_DWORD *)v87 - 2) = v79 - 1;
    }
    if ( v79 <= 0 )
    {
      v34 = v95;
      std::string::_Rep::_M_destroy(v39, v95);
    }
  }
  if ( v98.m128i_i64[0] )
  {
    v34 = (void **)&v97;
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v98.m128i_i64[0])(&v97, &v97, 3);
  }
  v40 = (volatile signed __int32 *)v88.m128_u64[1];
  if ( v88.m128_u64[1] )
  {
    v41 = (volatile signed __int32 *)(v88.m128_u64[1] + 8);
    if ( *(_QWORD *)(v88.m128_u64[1] + 8) == 0x100000001LL )
    {
      v77 = *(_QWORD *)v88.m128_u64[1];
      v78 = v88.m128_u64[1];
      *(_QWORD *)(v88.m128_u64[1] + 8) = 0;
      (*(void (__fastcall **)(unsigned __int64, void **, volatile signed __int32 *))(v77 + 16))(v78, v34, v41);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 24LL))(v40);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v42 = _InterlockedExchangeAdd(v41, 0xFFFFFFFF);
      }
      else
      {
        v42 = *(_DWORD *)(v88.m128_u64[1] + 8);
        *(_DWORD *)(v88.m128_u64[1] + 8) = v42 - 1;
      }
      if ( v42 == 1 )
        sub_28E9C0(v40);
    }
  }
  v43 = (__m128)_mm_load_si128(&v93);
  v44 = _mm_movehl_ps(v35, v43).m128_u64[0];
  v88 = v43;
  if ( v44 )
  {
    if ( &_pthread_key_create )
    {
      _InterlockedAdd((volatile signed __int32 *)(v44 + 8), 1u);
      v45 = v88.m128_u64[0];
      goto LABEL_53;
    }
    ++*(_DWORD *)(v44 + 8);
  }
  v45 = v43.m128_u64[0];
LABEL_53:
  if ( !v45 )
  {
    std::__throw_future_error(3);
LABEL_123:
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  }
  v46 = *(_BYTE *)(v45 + 20);
  *(_BYTE *)(v45 + 20) = 1;
  if ( v46 )
  {
    std::__throw_future_error(1);
    if ( v88.m128_u64[1] )
      sub_28EA10((volatile signed __int32 *)v88.m128_u64[1]);
    sub_4E5AF0(v84->m128i_i64, (__m128i *)v34);
    sub_4DAE10((__int64)v91);
    if ( src )
      *(double *)v43.m128_u64 = qfree(src, (const char *)v34);
    if ( v89 )
    {
      *(_QWORD *)&v90 = 0;
      qfree(v89, (const char *)v34, *(double *)v43.m128_u64);
    }
    _Unwind_Resume((struct _Unwind_Exception *)a1);
  }
  v19 = (__m128i *)j;
  sub_4E5ED0((__m128i *)v95, j);
  si128 = (__m128)_mm_load_si128((const __m128i *)v95);
  v49 = v96;
  v96 = 0;
  v50 = v91[0];
  v51 = v92;
  *(_OWORD *)v95 = 0;
  v92 = v49;
  *(__m128 *)v91 = si128;
  if ( v50 )
  {
    operator delete(v50, v51 - (_QWORD)v50);
    v19 = (__m128i *)(v96 - (unsigned __int64)v95[0]);
    if ( v95[0] )
      operator delete(v95[0], (unsigned __int64)v19);
    v52 = (unsigned int *)v91[1];
    v53 = (unsigned int *)v91[0];
  }
  else
  {
    v53 = (unsigned int *)si128.m128_u64[0];
    v52 = (unsigned int *)_mm_movehl_ps(v47, si128).m128_u64[0];
  }
  v54 = v52 - v53;
  if ( *((_QWORD *)&v90 + 1) < v54 )
  {
    v19 = (__m128i *)v89;
    v89 = qvector_reserve(&v89, v89, v54, 8);
  }
  for ( j = (struct _Unwind_Exception **)&v89; v52 != v53; ++v53 )
  {
    v55 = sub_4D89C0((__int64)&a1[70].m128i_i64[1], *v53);
    v56 = v90;
    v19 = (__m128i *)v89;
    v57 = v55;
    if ( !(_QWORD)v90 || *(_QWORD *)(v89 + 8 * v90 - 8) != v55 )
    {
      if ( *((_QWORD *)&v90 + 1) < (unsigned __int64)(v90 + 1) )
      {
        v81 = v55;
        v89 = qvector_reserve(j, v89, v90 + 1, 8);
        v56 = v90;
        v19 = (__m128i *)v89;
        v57 = v81;
      }
      v19->m128i_i64[v56] = v57;
      *(_QWORD *)&v90 = v90 + 1;
    }
  }
  v58 = (volatile signed __int32 *)v88.m128_u64[1];
  if ( v88.m128_u64[1] )
  {
    v59 = (volatile signed __int32 *)(v88.m128_u64[1] + 8);
    if ( *(_QWORD *)(v88.m128_u64[1] + 8) == 0x100000001LL )
    {
      v75 = *(_QWORD *)v88.m128_u64[1];
      v76 = v88.m128_u64[1];
      *(_QWORD *)(v88.m128_u64[1] + 8) = 0;
      (*(void (__fastcall **)(unsigned __int64, __m128i *, volatile signed __int32 *))(v75 + 16))(v76, v19, v59);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 24LL))(v58);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v60 = _InterlockedExchangeAdd(v59, 0xFFFFFFFF);
      }
      else
      {
        v60 = *(_DWORD *)(v88.m128_u64[1] + 8);
        *(_DWORD *)(v88.m128_u64[1] + 8) = v60 - 1;
      }
      if ( v60 == 1 )
        sub_28E9C0(v58);
    }
  }
  sub_4E5AF0(v84->m128i_i64, v19);
  if ( v91[0] )
  {
    v19 = (__m128i *)(v92 - (unsigned __int64)v91[0]);
    operator delete(v91[0], v92 - (unsigned __int64)v91[0]);
  }
  if ( src )
    qfree(src, v19->m128i_i8);
  v61 = a1[72].m128i_i64[0];
  v16 = 0;
  v62 = v61 + 48;
  v63 = v61 + (a1[72].m128i_i64[1] << 7);
  if ( v63 != v61 )
  {
    while ( 1 )
    {
      v64 = *(_QWORD *)v62;
      *(_DWORD *)(v62 + 48) = -1;
      if ( v64 )
      {
        *(_QWORD *)(v62 + 8) = 0;
        qfree(v64, v19->m128i_i8, *(double *)&v16);
        v16 = 0;
      }
      *(_OWORD *)v62 = v16;
      v65 = v62 + 128;
      v66 = v62 + 80;
      *(_OWORD *)(v66 - 64) = v16;
      *(_OWORD *)(v66 - 48) = v16;
      if ( v63 == v66 )
        break;
      v62 = v65;
    }
  }
  v67 = (_QWORD *)v89;
  v68 = (_QWORD *)(v89 + 8 * v90);
  if ( v68 != (_QWORD *)v89 )
  {
    while ( *v67 < a1[72].m128i_i64[1] )
    {
      v69 = a1[72].m128i_i64[0] + (*v67 << 7);
      v19 = (__m128i *)(v69 + 48);
      sub_4E0400((__int64)a1, (const char *)(v69 + 48), v69, *(double *)&v16, 0.0, COERCE_DOUBLE(sub_4E3D90), v33);
      if ( v68 == ++v67 )
        goto LABEL_15;
    }
    v21 = v89;
    if ( v89 )
      goto LABEL_22;
    return v99 - __readfsqword(0x28u);
  }
LABEL_15:
  v19 = (__m128i *)a2;
  sub_4E7B00(a1->m128i_i64, a2, a3);
  if ( !a1[70].m128i_i8[0] )
  {
    v20 = a1[69].m128i_i64[1];
    if ( v20 )
    {
      a1[105].m128i_i32[0] |= 4u;
      if ( a1[116].m128i_i64[0] )
      {
        v19 = (__m128i *)a1[115].m128i_i64[1];
        if ( v19->m128i_i32[0] >= 0 )
          v19 = nullptr;
      }
      else
      {
        v19 = nullptr;
      }
      sub_51E2F0(v20, v19, *(double *)&v16);
      a1[105].m128i_i32[0] &= ~4u;
    }
  }
  v21 = v89;
  if ( v89 )
  {
LABEL_22:
    *(_QWORD *)&v90 = 0;
    qfree(v21, v19->m128i_i8, *(double *)&v16);
  }
  return v99 - __readfsqword(0x28u);
}
