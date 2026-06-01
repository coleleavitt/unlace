__int64 __fastcall sub_1CE6DD0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // r15
  char v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v12; // rbp
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rbx
  int v26; // ebx
  unsigned int v27; // r8d
  unsigned __int32 v28; // edx
  __int64 v29; // rsi
  __int64 *v30; // r9
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  const __m128i *v37; // rdx
  __int32 v38; // eax
  bool v39; // zf
  __int64 v40; // rax
  __int64 v41; // rdi
  __int8 v42; // al
  __int16 v43; // ax
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r11
  int v47; // r8d
  unsigned int v48; // ebx
  unsigned __int32 v49; // edx
  __int64 v50; // rsi
  __int64 *v51; // r9
  __int64 v52; // r10
  __int64 v53; // rdi
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // [rsp+10h] [rbp-148h]
  unsigned __int64 v57; // [rsp+10h] [rbp-148h]
  __int64 v58; // [rsp+18h] [rbp-140h]
  unsigned __int64 v59; // [rsp+18h] [rbp-140h]
  __int64 v60; // [rsp+20h] [rbp-138h]
  unsigned __int64 v61; // [rsp+20h] [rbp-138h]
  __int64 v62; // [rsp+28h] [rbp-130h]
  unsigned __int64 v63; // [rsp+28h] [rbp-130h]
  unsigned __int64 v64; // [rsp+30h] [rbp-128h]
  unsigned __int64 v65; // [rsp+38h] [rbp-120h]
  unsigned __int32 v66; // [rsp+40h] [rbp-118h]
  unsigned int v67; // [rsp+48h] [rbp-110h]
  unsigned __int64 v68; // [rsp+48h] [rbp-110h]
  const __m128i *v69; // [rsp+48h] [rbp-110h]
  unsigned __int32 v70; // [rsp+48h] [rbp-110h]
  unsigned __int64 v71; // [rsp+48h] [rbp-110h]
  __int64 *v72; // [rsp+50h] [rbp-108h]
  int v73; // [rsp+50h] [rbp-108h]
  __int64 v74; // [rsp+58h] [rbp-100h]
  __int64 *v75; // [rsp+60h] [rbp-F8h]
  __int64 v76; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v77; // [rsp+70h] [rbp-E8h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v79; // [rsp+88h] [rbp-D0h]
  _BYTE v80[64]; // [rsp+90h] [rbp-C8h] BYREF
  const __m128i *v81; // [rsp+D0h] [rbp-88h] BYREF
  __int32 v82; // [rsp+D8h] [rbp-80h]
  __int64 v83; // [rsp+E0h] [rbp-78h]
  __int64 v84; // [rsp+E8h] [rbp-70h] BYREF
  unsigned int v85; // [rsp+F0h] [rbp-68h]
  __int8 v86; // [rsp+F4h] [rbp-64h]
  char v87; // [rsp+F8h] [rbp-60h]
  __int16 v88; // [rsp+100h] [rbp-58h]
  __m128 v89; // [rsp+108h] [rbp-50h]
  char v90; // [rsp+118h] [rbp-40h]

  v6 = *a1;
  v7 = *(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1;
  if ( v7 )
  {
    sub_18C74E0(*a1, 6, 0, 4);
    if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1) != 0 )
    {
      v33 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
      *(_BYTE *)(v33 + 601) = 1;
      *(_BYTE *)(v33 + 603) = 1;
    }
  }
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
  {
    v9 = sub_1CE7590(a1, v8, 0);
    if ( v9 == 1 )
    {
LABEL_4:
      v10 = 1;
      goto LABEL_5;
    }
  }
  else
  {
    v9 = 0;
  }
  v12 = sub_1CE7590(a1, *(_QWORD *)(a2 + 16), 0);
  if ( v12 == 1 )
    goto LABEL_4;
  v13 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
  v14 = *(_DWORD *)(v13 + 520);
  ptr = v80;
  v79 = 0x800000000LL;
  if ( v14 )
    sub_1900F90(&ptr, (char **)(v13 + 512));
  v56 = sub_1CE7590(a1, *(_QWORD *)(a2 + 24), 0);
  if ( v56 == 1 )
    goto LABEL_28;
  v58 = sub_1CE7590(a1, *(_QWORD *)(a2 + 32), 0);
  if ( v58 == 1 )
    goto LABEL_28;
  v15 = sub_1CE88F0(a1, *(_QWORD *)(a2 + 40));
  if ( v15 == 1 )
    goto LABEL_28;
  v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v16 )
    goto LABEL_15;
  v34 = sub_19179E0(*a1, *(_DWORD *)(a2 + 80), v16, 0, a3, a4);
  if ( v34 == 1 )
    goto LABEL_28;
  if ( (v34 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    v60 = sub_19A3EF0(*a1, v34 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_15:
    v60 = 0;
  v17 = sub_1CE88F0(a1, *(_QWORD *)(a2 + 48));
  if ( v17 == 1 )
    goto LABEL_28;
  v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
  v62 = v18;
  if ( v18 )
    v62 = sub_19A3EF0(*a1, v18);
  v19 = sub_1CE7590(a1, *(_QWORD *)(a2 + 56), 0);
  if ( v19 == 1 )
    goto LABEL_28;
  v20 = v9;
  v21 = v56;
  v22 = *a1;
  v57 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v23 = v20 & 0xFFFFFFFFFFFFFFFELL;
  v24 = v12 & 0xFFFFFFFFFFFFFFFELL;
  v64 = v23;
  v65 = v21 & 0xFFFFFFFFFFFFFFFELL;
  v59 = v58 & 0xFFFFFFFFFFFFFFFELL;
  v61 = v60 & 0xFFFFFFFFFFFFFFFELL;
  v25 = v62 & 0xFFFFFFFFFFFFFFFELL;
  v63 = v62 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632)
    && *(_QWORD *)(a2 + 8) == v23
    && *(_QWORD *)(a2 + 16) == v24
    && *(_QWORD *)(a2 + 24) == v65
    && *(_QWORD *)(a2 + 32) == v59
    && *(_QWORD *)(a2 + 40) == v61
    && *(_QWORD *)(a2 + 48) == v25
    && *(_QWORD *)(a2 + 56) == v57 )
  {
    v10 = a2 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_43;
  }
  v26 = *(_DWORD *)(a2 + 84);
  v27 = *(_DWORD *)(a2 + 80);
  v28 = *(_DWORD *)(a2 + 76);
  v29 = *(unsigned int *)(a2 + 72);
  v30 = (__int64 *)ptr;
  v31 = (unsigned int)v79;
  if ( (*(_WORD *)v24 & 0x1FF) != 0xF5 )
    goto LABEL_40;
  v32 = *(_QWORD *)(v24 + 8);
  if ( (v32 & 1) != 0 || (*(_BYTE *)(v32 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_40;
  v72 = (__int64 *)ptr;
  v74 = (unsigned int)v79;
  v67 = *(_DWORD *)(a2 + 80);
  v66 = *(_DWORD *)(a2 + 76);
  if ( *(char *)(v32 + 28) < 0 )
  {
LABEL_26:
    if ( *(_QWORD *)(a2 + 56) == v57 )
    {
      v10 = 0;
      goto LABEL_43;
    }
    sub_17A5050(v22, *(_QWORD *)(v57 + 8));
LABEL_28:
    v10 = 1;
    goto LABEL_29;
  }
  v35 = (_QWORD *)sub_B73640(v32);
  v28 = v66;
  v27 = v67;
  v30 = v72;
  v31 = v74;
  v29 = (unsigned int)v29;
  if ( (*(_DWORD *)v35 & 0x10000) != 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 34 )
  {
    v22 = *a1;
LABEL_40:
    v36 = sub_1C415E0(v22, v29, v28, v64, v27, v24, a3, a4, v65, v59, v61, v63, v57, v26, 1, v30, v31);
    goto LABEL_41;
  }
  if ( v64 )
    v36 = sub_1CC4AF0(a1, v64, *(double *)a3.m128_u64);
  else
    v36 = sub_1A89A90(*(__int64 **)(*a1 + 736), (unsigned int)v29, v57, v35, v26, a3, a4);
LABEL_41:
  v22 = *a1;
  if ( v36 == 1 )
    goto LABEL_26;
  v10 = v36 & 0xFFFFFFFFFFFFFFFELL;
LABEL_43:
  v37 = *(const __m128i **)(v22 + 744);
  v38 = v37[2].m128i_i32[0];
  v39 = v37[4].m128i_i8[0] == 0;
  v81 = v37;
  v82 = v38;
  v40 = v37[2].m128i_i64[1];
  v87 = 0;
  v83 = v40;
  if ( v39 )
  {
    v41 = (__int64)v37;
  }
  else
  {
    v85 = v37[3].m128i_u32[2];
    if ( v85 > 0x40 )
    {
      v69 = v37;
      sub_2205510(&v84);
      v37 = v69;
      v41 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v41 = (__int64)v37;
      v84 = v37[3].m128i_i64[0];
    }
    v42 = v37[3].m128i_i8[12];
    v87 = 1;
    v86 = v42;
  }
  v43 = v37[4].m128i_i16[4];
  a3 = (__m128)_mm_loadu_si128(v37 + 5);
  v44 = *(unsigned int *)(a2 + 72);
  v90 = 1;
  v88 = v43;
  v89 = a3;
  sub_1AAA2E0(v41, v44, a2, v10);
  v45 = sub_1CE7590(a1, *(_QWORD *)(a2 + 64), 0);
  if ( v45 == 1 )
    goto LABEL_48;
  v68 = v45;
  sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 72), v45, *(double *)a3.m128_u64);
  v46 = v68 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_QWORD *)(a2 + 64) == (v68 & 0xFFFFFFFFFFFFFFFELL) || v10 != a2 )
  {
LABEL_53:
    if ( v10 != a2 )
      v10 = sub_1C3E180(*a1, v10, v46);
    goto LABEL_49;
  }
  v47 = *(_DWORD *)(a2 + 84);
  v48 = *(_DWORD *)(a2 + 80);
  v49 = *(_DWORD *)(a2 + 76);
  v50 = *(unsigned int *)(a2 + 72);
  v51 = (__int64 *)ptr;
  v52 = (unsigned int)v79;
  if ( (*(_WORD *)v24 & 0x1FF) != 0xF5 )
    goto LABEL_70;
  v53 = *(_QWORD *)(v24 + 8);
  if ( (v53 & 1) != 0 || (*(_BYTE *)(v53 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_70;
  v75 = (__int64 *)ptr;
  v76 = (unsigned int)v79;
  v77 = v68 & 0xFFFFFFFFFFFFFFFELL;
  v73 = *(_DWORD *)(a2 + 84);
  v70 = *(_DWORD *)(a2 + 76);
  if ( *(char *)(v53 + 28) < 0 )
    goto LABEL_48;
  v54 = (_QWORD *)sub_B73640(v53);
  v49 = v70;
  v47 = v73;
  v46 = v77;
  v51 = v75;
  v52 = v76;
  v50 = (unsigned int)v50;
  if ( (*(_DWORD *)v54 & 0x10000) == 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 34 )
  {
    if ( v64 )
      v55 = sub_1CC4AF0(a1, v64, *(double *)a3.m128_u64);
    else
      v55 = sub_1A89A90(*(__int64 **)(*a1 + 736), (unsigned int)v50, v57, v54, v73, a3, a4);
    v46 = v77;
  }
  else
  {
LABEL_70:
    v71 = v46;
    v55 = sub_1C415E0(*a1, v50, v49, v64, v48, v24, a3, a4, v65, v59, v61, v63, v57, v47, 1, v51, v52);
    v46 = v71;
  }
  if ( v55 != 1 )
  {
    v10 = v55 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_53;
  }
LABEL_48:
  v10 = 1;
LABEL_49:
  sub_15354C0((__int64)&v81);
LABEL_29:
  if ( ptr != v80 )
  {
    free(ptr);
    if ( !v7 )
      return v10;
LABEL_31:
    sub_190D5E0(v6, a3);
    return v10;
  }
LABEL_5:
  if ( v7 )
    goto LABEL_31;
  return v10;
}
