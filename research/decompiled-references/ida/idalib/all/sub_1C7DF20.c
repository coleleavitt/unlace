__int64 __fastcall sub_1C7DF20(__int64 *a1, __int64 a2, __m128 si128, __m128 a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  int v9; // r14d
  int v10; // r15d
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // r13d
  __int64 *v15; // r8
  _QWORD *v16; // rcx
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __m128 *v25; // rax
  unsigned int v26; // eax
  __int64 v27; // r12
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rdi
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r12
  unsigned __int64 *v34; // rax
  _QWORD *v35; // rsi
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // r14
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  bool v53; // zf
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // rdi
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // [rsp-10h] [rbp-C8h]
  __int64 v63; // [rsp-8h] [rbp-C0h]
  __int64 v64; // [rsp+0h] [rbp-B8h]
  __int64 v65; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v66; // [rsp+0h] [rbp-B8h]
  unsigned int v67; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v68; // [rsp+0h] [rbp-B8h]
  __int64 *v69; // [rsp+0h] [rbp-B8h]
  __int64 v70; // [rsp+0h] [rbp-B8h]
  __int64 v71; // [rsp+0h] [rbp-B8h]
  _QWORD *v72; // [rsp+8h] [rbp-B0h]
  __int64 v73; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v74; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v75; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v76; // [rsp+18h] [rbp-A0h]
  char v77; // [rsp+27h] [rbp-91h] BYREF
  __int64 *v78; // [rsp+28h] [rbp-90h] BYREF
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v80; // [rsp+38h] [rbp-80h]
  _BYTE v81[120]; // [rsp+40h] [rbp-78h] BYREF

  v80 = 0x800000000LL;
  v5 = *(unsigned int *)(a2 + 4);
  v77 = 0;
  ptr = v81;
  v6 = v5;
  if ( v5 > 8 )
  {
    sub_2237220(&ptr, v81, v5, 8);
    v6 = *(unsigned int *)(a2 + 4);
  }
  if ( (unsigned __int8)sub_1C7D7D0(a1, *(unsigned __int64 **)(a2 + 24), v6, 0, (__int64)&ptr, &v77, si128, a4) )
  {
    v7 = 1;
    goto LABEL_5;
  }
  v9 = *(_DWORD *)(a2 + 16);
  v10 = *(_DWORD *)(a2 + 20);
  v72 = ptr;
  v73 = (unsigned int)v80;
  v11 = *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 17504LL);
  v12 = sub_2244B30("__builtin_shufflevector", 23);
  v14 = sub_2244CB0(v11, "__builtin_shufflevector", 23, v12);
  v15 = (__int64 *)(*(_QWORD *)v11 + 8LL * v14);
  if ( !*v15 )
  {
LABEL_18:
    v24 = *(_QWORD *)(v11 + 24);
    *(_QWORD *)(v11 + 104) += 40LL;
    v25 = (__m128 *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(v11 + 32) >= (unsigned __int64)&v25[2].m128_u64[1] && v24 )
    {
      *(_QWORD *)(v11 + 24) = (char *)v25 + 40;
    }
    else
    {
      v69 = v15;
      v25 = (__m128 *)sub_986170(v11 + 24, 40, 40, 3, (__int64)v15, v13);
      v15 = v69;
    }
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AABB0);
    v25[2].m128_i8[6] = 114;
    v25[2].m128_i16[2] = 28532;
    v25[1] = si128;
    v25[2].m128_i32[0] = 1667593829;
    v25[2].m128_i8[7] = 0;
    v25->m128_u64[0] = 23;
    v25->m128_u64[1] = 0;
    *v15 = (__int64)v25;
    ++*(_DWORD *)(v11 + 12);
    v26 = sub_22450D0(v11, v14);
    sub_989490(&v78, (__int64 *)(*(_QWORD *)v11 + 8LL * v26), 0);
    v17 = *v78;
    v18 = *(_QWORD *)(*v78 + 8);
    if ( v18 )
      goto LABEL_22;
    goto LABEL_11;
  }
  if ( *v15 == -8 )
  {
    --*(_DWORD *)(v11 + 16);
    goto LABEL_18;
  }
  sub_989490(&v78, v15, 0);
  v17 = *v78;
  v18 = *(_QWORD *)(*v78 + 8);
  if ( v18 )
    goto LABEL_22;
LABEL_11:
  v19 = *(_QWORD *)(v11 + 120);
  if ( !v19
    || (v64 = v17,
        v20 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v19 + 16LL))(
                v19,
                "__builtin_shufflevector",
                23),
        v17 = v64,
        v18 = v20,
        (*(_QWORD *)(v64 + 8) = v20) == 0) )
  {
    v21 = *(_QWORD *)(v11 + 24);
    *(_QWORD *)(v11 + 104) += 24LL;
    v18 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v11 + 32) >= v18 + 24 && v21 )
    {
      *(_QWORD *)(v11 + 24) = v18 + 24;
      v22 = (_QWORD *)((v21 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v70 = v17;
      v22 = (_QWORD *)sub_986170(v11 + 24, 24, 24, 3, v18, v17);
      v17 = v70;
      v18 = (unsigned __int64)v22;
    }
    v23 = *v22 & 0xFFFFF80000000000LL;
    v22[1] = 0;
    *v22 = v23 | 0x1FFFC05;
    *(_QWORD *)(v17 + 8) = v22;
    v22[2] = v17;
  }
LABEL_22:
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 2264LL) + 80LL);
  v28 = *(_QWORD *)(v27 + 72);
  v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v28 & 1) == 0 )
  {
    v16 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v28 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v30 = v28 & 2;
      v31 = v16;
      if ( !(_DWORD)v30 )
        goto LABEL_25;
      v17 = v16[2295];
      v55 = v27 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v17 )
      {
        v56 = v16[294];
        v16[304] += 24LL;
        v57 = (v56 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v16[295] >= v57 + 24 && v56 )
        {
          v16[294] = v57 + 24;
          v58 = (v56 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v76 = v18;
          v71 = v17;
          v61 = sub_986170((__int64)(v16 + 294), 24, 24, 3, v18, v17);
          v18 = v76;
          v17 = v71;
          v58 = v61;
          v57 = v61 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v58 = v17;
        v55 = v57 | 4;
        *(_DWORD *)(v58 + 8) = 0;
        *(_QWORD *)(v58 + 16) = v27;
      }
      v29 = v55 & 0xFFFFFFFFFFFFFFFELL;
      v28 = v29 | 1;
      *(_QWORD *)(v27 + 72) = v29 | 1;
    }
  }
  v30 = v28 & 0xFFFFFFFFFFFFFFF8LL;
  v31 = (_QWORD *)v30;
  if ( v29 )
  {
    if ( (v29 & 4) != 0 )
    {
      v31 = nullptr;
      if ( v30 )
      {
        v59 = *(_QWORD *)v30;
        v60 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
        if ( *(_DWORD *)(v30 + 8) != v60 )
        {
          *(_DWORD *)(v30 + 8) = v60;
          v75 = v18;
          v68 = v30;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 152LL))(v59, v27);
          v18 = v75;
          v30 = v68;
        }
        v31 = *(_QWORD **)(v30 + 16);
      }
    }
  }
LABEL_25:
  v32 = sub_B94670((unsigned __int64)(v31 + 5), v18, v30, (__int64)v16, v18, v17);
  v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v32 & 4) != 0 )
  {
    v34 = (unsigned __int64 *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
    v33 = 0;
    if ( v34 )
      v33 = *v34;
  }
  v35 = *(_QWORD **)(*a1 + 248);
  v36 = v35[2389];
  v78 = nullptr;
  v65 = v36;
  v37 = sub_EEE9A0(32, v35, 8u);
  v38 = v65;
  v66 = v37;
  sub_BF7BD0(v37, *(_QWORD *)(*a1 + 248), v33, 0, v38, 0, v9, &v78, 0);
  v39 = sub_A70010(*(_QWORD *)(*a1 + 248), *(_QWORD *)(v33 + 48));
  v74 = sub_160A600(*a1, v66, v39, 0x3Du, 0, 0, *(double *)si128.m128_u64, *(double *)a4.m128_u64, 0)
      & 0xFFFFFFFFFFFFFFFELL;
  v40 = *(_QWORD *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v41 = (unsigned int)*(unsigned __int8 *)(v40 + 16) - 25;
  if ( (unsigned int)v41 > 1 )
    v40 = sub_F63050(v40, v63, v41, v62);
  v42 = *(_QWORD *)(*(_QWORD *)(v40 + 24) & 0xFFFFFFFFFFFFFFF0LL);
  v43 = *(unsigned __int8 *)(v42 + 16);
  v44 = (unsigned int)(v43 - 43);
  if ( (unsigned int)v44 <= 1 )
    goto LABEL_31;
  v44 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v44 <= 1 )
  {
    v42 = sub_F63050(v42, v63, v44, v43);
    if ( v42 )
    {
      v43 = *(unsigned __int8 *)(v42 + 16);
LABEL_31:
      if ( (_BYTE)v43 == 43 )
        goto LABEL_32;
      while ( 1 )
      {
        v44 = *(_QWORD *)(v42 + 32) & 0xFFFFFFFFFFFFFFF0LL;
        v53 = (*(_BYTE *)(v42 + 18) & 0x10) == 0;
        v42 = *(_QWORD *)v44;
        if ( v53 )
          break;
        v54 = (unsigned int)*(unsigned __int8 *)(v42 + 16) - 43;
        if ( (unsigned int)v54 > 1 )
          v42 = sub_F63050(v42, v63, v54, v43);
      }
      v67 = 2;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
LABEL_32:
        v67 = 1;
      goto LABEL_33;
    }
  }
  v67 = 0;
LABEL_33:
  v45 = *(_QWORD *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v45 + 16) - 25 > 1 )
    v45 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL), v63, v44, v43);
  v46 = sub_B8C330(v33);
  v78 = *(__int64 **)(v45 + 24);
  v47 = sub_F67970(&v78, v46);
  v48 = sub_C0BFD0(*(_QWORD **)(*a1 + 248), v74, v72, v73, v47, v67, v10, 0, 0, 0);
  v7 = sub_16D1970(*a1, (void **)(v48 & 0xFFFFFFFFFFFFFFFELL), *(double *)si128.m128_u64, v49, v50, v51, v52);
LABEL_5:
  if ( ptr != v81 )
    free(ptr);
  return v7;
}
