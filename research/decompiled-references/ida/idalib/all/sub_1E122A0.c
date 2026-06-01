__int64 __fastcall sub_1E122A0(__int64 *a1, __int64 a2, __m128 si128, __m128 a4)
{
  __int64 v4; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  int v9; // r14d
  int v10; // r15d
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // r13d
  __int64 *v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
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
  _QWORD *v30; // rdi
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rsi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r12
  unsigned __int64 *v35; // rax
  _QWORD *v36; // rsi
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // r14
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  bool v54; // zf
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rdi
  int v58; // eax
  __int64 v59; // [rsp-10h] [rbp-C8h]
  __int64 v60; // [rsp-8h] [rbp-C0h]
  __int64 v61; // [rsp+0h] [rbp-B8h]
  __int64 v62; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v63; // [rsp+0h] [rbp-B8h]
  unsigned int v64; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v65; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v66; // [rsp+0h] [rbp-B8h]
  __int64 *v67; // [rsp+0h] [rbp-B8h]
  __int64 v68; // [rsp+0h] [rbp-B8h]
  _QWORD *v69; // [rsp+8h] [rbp-B0h]
  __int64 v70; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v71; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v72; // [rsp+18h] [rbp-A0h]
  char v73; // [rsp+27h] [rbp-91h] BYREF
  __int64 *v74; // [rsp+28h] [rbp-90h] BYREF
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v76; // [rsp+38h] [rbp-80h]
  _BYTE v77[120]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2;
  v76 = 0x800000000LL;
  v6 = *(unsigned int *)(a2 + 4);
  v73 = 0;
  ptr = v77;
  v7 = v6;
  if ( v6 > 8 )
  {
    sub_2237220(&ptr, v77, v6, 8);
    v7 = *(unsigned int *)(a2 + 4);
  }
  if ( (unsigned __int8)sub_1E11B50(a1, *(unsigned __int16 ***)(a2 + 24), v7, 0, (__int64)&ptr, &v73, si128, a4) )
  {
    v4 = 1;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(*a1 + 12632) || v73 )
  {
    v9 = *(_DWORD *)(a2 + 16);
    v10 = *(_DWORD *)(a2 + 20);
    v69 = ptr;
    v11 = *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 17504LL);
    v70 = (unsigned int)v76;
    v12 = sub_2244B30("__builtin_shufflevector", 23);
    v14 = sub_2244CB0(v11, "__builtin_shufflevector", 23, v12);
    v15 = (__int64 *)(*(_QWORD *)v11 + 8LL * v14);
    if ( *v15 )
    {
      if ( *v15 != -8 )
      {
        sub_989490(&v74, v15, 0);
        v17 = *v74;
        v18 = *(_QWORD *)(*v74 + 8);
        if ( v18 )
          goto LABEL_24;
LABEL_13:
        v19 = *(_QWORD *)(v11 + 120);
        if ( !v19
          || (v61 = v17,
              v20 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v19 + 16LL))(
                      v19,
                      "__builtin_shufflevector",
                      23),
              v17 = v61,
              v18 = v20,
              (*(_QWORD *)(v61 + 8) = v20) == 0) )
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
            v68 = v17;
            v22 = (_QWORD *)sub_986170(v11 + 24, 24, 24, 3, v17, v16);
            v17 = v68;
            v18 = (unsigned __int64)v22;
          }
          v23 = *v22 & 0xFFFFF80000000000LL;
          v22[1] = 0;
          *v22 = v23 | 0x1FFFC05;
          *(_QWORD *)(v17 + 8) = v22;
          v22[2] = v17;
        }
LABEL_24:
        v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 2264LL) + 80LL);
        v28 = *(_QWORD *)(v27 + 72);
        v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v28 & 1) == 0 )
        {
          v30 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v28 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v31 = v28 & 2;
            v32 = v30;
            if ( !(_DWORD)v31 )
              goto LABEL_27;
            v65 = v18;
            v56 = sub_6E2500(v30, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 2264LL) + 80LL), v31, v18, v17, v16);
            v18 = v65;
            v29 = v56 & 0xFFFFFFFFFFFFFFFELL;
            v28 = v29 | 1;
            *(_QWORD *)(v27 + 72) = v29 | 1;
          }
        }
        v31 = v28 & 0xFFFFFFFFFFFFFFF8LL;
        v32 = (_QWORD *)v31;
        if ( v29 )
        {
          if ( (v29 & 4) != 0 )
          {
            v32 = nullptr;
            if ( v31 )
            {
              v57 = *(_QWORD *)v31;
              v58 = *(_DWORD *)(*(_QWORD *)v31 + 12LL);
              if ( *(_DWORD *)(v31 + 8) != v58 )
              {
                *(_DWORD *)(v31 + 8) = v58;
                v72 = v18;
                v66 = v31;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v57 + 152LL))(v57, v27);
                v18 = v72;
                v31 = v66;
              }
              v32 = *(_QWORD **)(v31 + 16);
            }
          }
        }
LABEL_27:
        v33 = sub_B94670((unsigned __int64)(v32 + 5), v18, v31, v18, v17, v16);
        v34 = v33 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v33 & 4) != 0 )
        {
          v35 = (unsigned __int64 *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
          v34 = 0;
          if ( v35 )
            v34 = *v35;
        }
        v36 = *(_QWORD **)(*a1 + 248);
        v37 = v36[2389];
        v74 = nullptr;
        v62 = v37;
        v38 = sub_EEE9A0(32, v36, 8u);
        v39 = v62;
        v63 = v38;
        sub_BF7BD0(v38, *(_QWORD *)(*a1 + 248), v34, 0, v39, 0, v9, &v74, 0);
        v40 = sub_A70010(*(_QWORD *)(*a1 + 248), *(_QWORD *)(v34 + 48));
        v71 = sub_160A600(*a1, v63, v40, 0x3Du, 0, 0, *(double *)si128.m128_u64, *(double *)a4.m128_u64, 0)
            & 0xFFFFFFFFFFFFFFFELL;
        v41 = *(_QWORD *)(*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v42 = (unsigned int)*(unsigned __int8 *)(v41 + 16) - 25;
        if ( (unsigned int)v42 > 1 )
          v41 = sub_F63050(v41, v60, v42, v59);
        v43 = *(_QWORD *)(*(_QWORD *)(v41 + 24) & 0xFFFFFFFFFFFFFFF0LL);
        v44 = *(unsigned __int8 *)(v43 + 16);
        v45 = (unsigned int)(v44 - 43);
        if ( (unsigned int)v45 > 1 )
        {
          v45 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
          if ( (unsigned int)v45 > 1 || (v43 = sub_F63050(v43, v60, v45, v44)) == 0 )
          {
            v64 = 0;
LABEL_35:
            v46 = *(_QWORD *)(*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v46 + 16) - 25 > 1 )
              v46 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL), v60, v45, v44);
            v47 = sub_B8C330(v34);
            v74 = *(__int64 **)(v46 + 24);
            v48 = sub_F67970(&v74, v47);
            v49 = sub_C0BFD0(*(_QWORD **)(*a1 + 248), v71, v69, v70, v48, v64, v10, 0, 0, 0);
            v4 = sub_16D1970(*a1, (void **)(v49 & 0xFFFFFFFFFFFFFFFELL), *(double *)si128.m128_u64, v50, v51, v52, v53);
            goto LABEL_5;
          }
          v44 = *(unsigned __int8 *)(v43 + 16);
        }
        if ( (_BYTE)v44 == 43 )
          goto LABEL_34;
        while ( 1 )
        {
          v45 = *(_QWORD *)(v43 + 32) & 0xFFFFFFFFFFFFFFF0LL;
          v54 = (*(_BYTE *)(v43 + 18) & 0x10) == 0;
          v43 = *(_QWORD *)v45;
          if ( v54 )
            break;
          v55 = (unsigned int)*(unsigned __int8 *)(v43 + 16) - 43;
          if ( (unsigned int)v55 > 1 )
            v43 = sub_F63050(v43, v60, v55, v44);
        }
        v64 = 2;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
LABEL_34:
          v64 = 1;
        goto LABEL_35;
      }
      --*(_DWORD *)(v11 + 16);
    }
    v24 = *(_QWORD *)(v11 + 24);
    *(_QWORD *)(v11 + 104) += 40LL;
    v25 = (__m128 *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(v11 + 32) >= (unsigned __int64)&v25[2].m128_u64[1] && v24 )
    {
      *(_QWORD *)(v11 + 24) = (char *)v25 + 40;
    }
    else
    {
      v67 = v15;
      v25 = (__m128 *)sub_986170(v11 + 24, 40, 40, 3, (__int64)v15, v13);
      v15 = v67;
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
    sub_989490(&v74, (__int64 *)(*(_QWORD *)v11 + 8LL * v26), 0);
    v17 = *v74;
    v18 = *(_QWORD *)(*v74 + 8);
    if ( v18 )
      goto LABEL_24;
    goto LABEL_13;
  }
LABEL_5:
  if ( ptr != v77 )
    free(ptr);
  return v4;
}
