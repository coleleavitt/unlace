__int64 __fastcall sub_1CB7C10(__int64 *a1, int a2, _QWORD *a3, __int64 a4, int a5, __m128i si128, double a7)
{
  __int64 v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r12d
  __int64 *v15; // r14
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  __m128 *v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rbp
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rsi
  __int64 v33; // rdi
  int v34; // eax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbp
  unsigned __int64 *v37; // rax
  _QWORD *v38; // rsi
  __int64 v39; // r8
  __int64 v40; // r14
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  unsigned int v47; // r13d
  __int64 v48; // r14
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _QWORD *v57; // rdi
  bool v58; // zf
  __int64 v59; // rdx
  __int64 v60; // [rsp-10h] [rbp-78h]
  __int64 v61; // [rsp-8h] [rbp-70h]
  __int64 v62; // [rsp+8h] [rbp-60h]
  unsigned __int64 v63; // [rsp+8h] [rbp-60h]
  __int64 v64; // [rsp+8h] [rbp-60h]
  unsigned __int64 v65; // [rsp+8h] [rbp-60h]
  __int64 v66; // [rsp+8h] [rbp-60h]
  __int64 *v69[8]; // [rsp+28h] [rbp-40h] BYREF

  v10 = *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 17504LL);
  v11 = sub_2244B30("__builtin_shufflevector", 23);
  v14 = sub_2244CB0(v10, "__builtin_shufflevector", 23, v11);
  v15 = (__int64 *)(*(_QWORD *)v10 + 8LL * v14);
  if ( !*v15 )
  {
LABEL_11:
    v25 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)(v10 + 104) += 40LL;
    v26 = (__m128 *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(v10 + 32) >= (unsigned __int64)&v26[2].m128_u64[1] && v25 )
      *(_QWORD *)(v10 + 24) = (char *)v26 + 40;
    else
      v26 = (__m128 *)sub_986170(v10 + 24, 40, 40, 3, v12, v13);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AABB0);
    v26[2].m128_i8[6] = 114;
    v26[2].m128_i16[2] = 28532;
    v26[1] = (__m128)si128;
    v26[2].m128_i32[0] = 1667593829;
    v26[2].m128_i8[7] = 0;
    v26->m128_u64[0] = 23;
    v26->m128_u64[1] = 0;
    *v15 = (__int64)v26;
    ++*(_DWORD *)(v10 + 12);
    v27 = sub_22450D0(v10, v14);
    sub_989490(v69, (__int64 *)(*(_QWORD *)v10 + 8LL * v27), 0);
    v17 = *v69[0];
    v18 = *(_QWORD *)(*v69[0] + 8);
    v19 = v18;
    if ( v18 )
      goto LABEL_15;
    goto LABEL_4;
  }
  if ( *v15 == -8 )
  {
    --*(_DWORD *)(v10 + 16);
    goto LABEL_11;
  }
  sub_989490(v69, v15, 0);
  v17 = *v69[0];
  v18 = *(_QWORD *)(*v69[0] + 8);
  v19 = v18;
  if ( v18 )
    goto LABEL_15;
LABEL_4:
  v20 = *(_QWORD *)(v10 + 120);
  if ( !v20
    || (v62 = v17,
        v21 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v20 + 16LL))(
                v20,
                "__builtin_shufflevector",
                23),
        v17 = v62,
        v19 = v21,
        (*(_QWORD *)(v62 + 8) = v21) == 0) )
  {
    v22 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)(v10 + 104) += 24LL;
    v18 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v19 = v18;
    if ( *(_QWORD *)(v10 + 32) >= v18 + 24 && v22 )
    {
      *(_QWORD *)(v10 + 24) = v18 + 24;
      v23 = (_QWORD *)((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v66 = v17;
      v23 = (_QWORD *)sub_986170(v10 + 24, 24, 24, 3, v17, v16);
      v17 = v66;
      v19 = (__int64)v23;
    }
    v24 = *v23 & 0xFFFFF80000000000LL;
    v23[1] = 0;
    *v23 = v24 | 0x1FFFC05;
    *(_QWORD *)(v17 + 8) = v23;
    v23[2] = v17;
  }
LABEL_15:
  v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 2264LL) + 80LL);
  v29 = *(_QWORD *)(v28 + 72);
  v30 = v29 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v29 & 1) == 0 )
  {
    v57 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v29 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v31 = v29 & 2;
      v32 = v57;
      if ( !(_DWORD)v31 )
        goto LABEL_22;
      v30 = sub_6E2500(v57, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 2264LL) + 80LL), v31, v18, v17, v16)
          & 0xFFFFFFFFFFFFFFFELL;
      v29 = v30 | 1;
      *(_QWORD *)(v28 + 72) = v30 | 1;
    }
  }
  v31 = v29 & 0xFFFFFFFFFFFFFFF8LL;
  v32 = (_QWORD *)v31;
  if ( v30 )
  {
    if ( (v30 & 4) != 0 )
    {
      v32 = nullptr;
      if ( v31 )
      {
        v33 = *(_QWORD *)v31;
        v34 = *(_DWORD *)(*(_QWORD *)v31 + 12LL);
        if ( *(_DWORD *)(v31 + 8) != v34 )
        {
          *(_DWORD *)(v31 + 8) = v34;
          v63 = v31;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 152LL))(v33, v28);
          v31 = v63;
        }
        v32 = *(_QWORD **)(v31 + 16);
      }
    }
  }
LABEL_22:
  v35 = sub_B94670((unsigned __int64)(v32 + 5), v19, v31, v18, v17, v16);
  v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v35 & 4) != 0 )
  {
    v37 = (unsigned __int64 *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
    v36 = 0;
    if ( v37 )
      v36 = *v37;
  }
  v38 = *(_QWORD **)(*a1 + 248);
  v39 = v38[2389];
  v69[0] = nullptr;
  v64 = v39;
  v40 = sub_EEE9A0(32, v38, 8u);
  sub_BF7BD0(v40, *(_QWORD *)(*a1 + 248), v36, 0, v64, 0, a2, v69, 0);
  v41 = sub_A70010(*(_QWORD *)(*a1 + 248), *(_QWORD *)(v36 + 48));
  v65 = sub_160A600(*a1, v40, v41, 0x3Du, 0, 0, *(double *)si128.m128i_i64, a7, 0) & 0xFFFFFFFFFFFFFFFELL;
  v42 = *(_QWORD *)(*(_QWORD *)(v36 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v43 = (unsigned int)*(unsigned __int8 *)(v42 + 16) - 25;
  if ( (unsigned int)v43 > 1 )
    v42 = sub_F63050(v42, v61, v43, v60);
  v44 = *(_QWORD *)(*(_QWORD *)(v42 + 24) & 0xFFFFFFFFFFFFFFF0LL);
  v45 = *(unsigned __int8 *)(v44 + 16);
  v46 = (unsigned int)(v45 - 43);
  if ( (unsigned int)v46 > 1 )
  {
    v46 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v46 > 1 || (v44 = sub_F63050(v44, v61, v46, v45)) == 0 )
    {
      v47 = 0;
      goto LABEL_30;
    }
    v45 = *(unsigned __int8 *)(v44 + 16);
  }
  if ( (_BYTE)v45 == 43 )
    goto LABEL_29;
  while ( 1 )
  {
    v46 = *(_QWORD *)(v44 + 32) & 0xFFFFFFFFFFFFFFF0LL;
    v58 = (*(_BYTE *)(v44 + 18) & 0x10) == 0;
    v44 = *(_QWORD *)v46;
    if ( v58 )
      break;
    v59 = (unsigned int)*(unsigned __int8 *)(v44 + 16) - 43;
    if ( (unsigned int)v59 > 1 )
      v44 = sub_F63050(v44, v61, v59, v45);
  }
  v47 = 2;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
LABEL_29:
    v47 = 1;
LABEL_30:
  v48 = *(_QWORD *)(*(_QWORD *)(v36 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v48 + 16) - 25 > 1 )
    v48 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v36 + 48) & 0xFFFFFFFFFFFFFFF0LL), v61, v46, v45);
  v49 = sub_B8C330(v36);
  v69[0] = *(__int64 **)(v48 + 24);
  v50 = sub_F67970(v69, v49);
  v51 = sub_C0BFD0(*(_QWORD **)(*a1 + 248), v65, a3, a4, v50, v47, a5, 0, 0, 0);
  return sub_16D1970(*a1, (void **)(v51 & 0xFFFFFFFFFFFFFFFELL), *(double *)si128.m128i_i64, v52, v53, v54, v55);
}
