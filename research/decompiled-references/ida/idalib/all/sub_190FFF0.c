unsigned __int64 __fastcall sub_190FFF0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  char v7; // al
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  char v10; // al
  __int64 v11; // rbp
  __m128 v12; // xmm0
  bool v13; // cf
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // r8
  __int64 v19; // r15
  unsigned int v20; // esi
  __int64 v21; // rax
  char v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rax
  _WORD *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __m128 v30; // xmm0
  bool v31; // zf
  __int64 v32; // rax
  unsigned __int64 v33; // rbp
  __m128i v34; // xmm1
  __m128i v35; // xmm2
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned __int64 v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r9
  unsigned __int64 v43; // r12
  void **v44; // r15
  unsigned int v45; // rax^4
  char v46; // dl
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // r10
  __int64 v52; // rdi
  unsigned __int64 v53; // rax
  char v54; // cl
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // rax
  __int64 v57; // rcx
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rdx
  unsigned __int64 *v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r12
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r14
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // [rsp+0h] [rbp-178h] BYREF
  void **p_ptr; // [rsp+8h] [rbp-170h] BYREF
  unsigned __int64 v81; // [rsp+10h] [rbp-168h]
  __int64 v82; // [rsp+18h] [rbp-160h] BYREF
  __int64 v83; // [rsp+28h] [rbp-150h] BYREF
  _BYTE v84[32]; // [rsp+30h] [rbp-148h] BYREF
  __m128 v85; // [rsp+50h] [rbp-128h] BYREF
  __int64 *v86; // [rsp+60h] [rbp-118h]
  __m128i v87; // [rsp+70h] [rbp-108h]
  __m128i v88; // [rsp+80h] [rbp-F8h]
  __int64 (__fastcall **v89)(); // [rsp+90h] [rbp-E8h] BYREF
  __int64 v90; // [rsp+98h] [rbp-E0h]
  __int64 v91; // [rsp+A0h] [rbp-D8h]
  char v92; // [rsp+A8h] [rbp-D0h]
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v94; // [rsp+B8h] [rbp-C0h]
  __int64 v95; // [rsp+C0h] [rbp-B8h]
  unsigned int v96; // [rsp+C8h] [rbp-B0h]
  char v97; // [rsp+128h] [rbp-50h]
  unsigned int v98; // [rsp+130h] [rbp-48h]
  char v99; // [rsp+134h] [rbp-44h]

  v5 = *(_QWORD *)(a3 + 16);
  v82 = a3;
  v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v5 & 4) != 0 )
    v6 = *(_QWORD *)v6;
  v7 = *(_BYTE *)(v6 + 8);
  v8 = v6 - 64;
  if ( (v7 & 0x7Fu) - 58 >= 4 )
    v8 = 0;
  sub_19A2CD0(v84, a1, v8, 0, 1);
  v9 = *(_QWORD *)(v82 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v82 + 16) & 4) != 0 )
    v9 = *(_QWORD *)v9;
  v10 = *(_BYTE *)(v9 + 8);
  v11 = v9 - 64;
  v12 = 0;
  v87 = 0;
  v88 = 0;
  v13 = (v10 & 0x7Fu) - 58 < 4;
  v14 = *(unsigned int *)(a1 + 4624);
  if ( !v13 )
    v11 = 0;
  v15 = *(_QWORD *)(a1 + 4616);
  v16 = 640 * v14;
  v17 = v15 + 640 * v14;
  if ( v15 != v17 )
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v20 = *(_DWORD *)(v17 - 640);
      if ( v20 == 6 )
        break;
      if ( v20 - 4 <= 1 )
        goto LABEL_16;
      if ( v20 == 2 )
        goto LABEL_34;
      if ( v20 == 3 || v20 <= 1 )
      {
LABEL_16:
        if ( v18 )
          goto LABEL_17;
        goto LABEL_49;
      }
LABEL_35:
      v34 = _mm_loadu_si128((const __m128i *)(v17 - 32));
      v35 = _mm_loadu_si128((const __m128i *)(v17 - 16));
      v17 -= 640;
      v19 = *(_QWORD *)(v17 + 624);
      v18 = *(_BYTE *)(v17 + 632);
      v87 = v34;
      v88 = v35;
      if ( v15 == v17 )
        goto LABEL_16;
    }
    if ( !*(_BYTE *)(v17 - 8) && v18 )
      goto LABEL_17;
LABEL_34:
    if ( *(_BYTE *)(v17 - 43) )
      goto LABEL_16;
    goto LABEL_35;
  }
LABEL_49:
  v19 = *(_QWORD *)(a1 + 544);
  v87.m128i_i32[0] = a2;
LABEL_17:
  v21 = v15 + v16 - 640;
  v22 = 1;
  if ( *(_DWORD *)v21 != 7 )
    v22 = *(_BYTE *)(v21 + 599);
  v23 = 6;
  LOBYTE(v79) = *(_BYTE *)(v21 + 603);
  sub_18C74E0(a1, 6, v82, 4);
  if ( !sub_B780B0(v82) && (sub_B97260(v11) & 0xFFFFFFFD) != 0 )
  {
    v48 = *(_QWORD *)(a1 + 248);
    p_ptr = (void **)v82;
    v51 = sub_A62C50(v48, v82);
    if ( !v51 )
    {
      v53 = (unsigned __int64)p_ptr[2] & 0xFFFFFFFFFFFFFFF8LL;
      if ( ((unsigned int)p_ptr[2] & 4) != 0 )
        v53 = *(_QWORD *)v53;
      v54 = *(_BYTE *)(v53 + 8);
      v55 = 0;
      v56 = v53 - 64;
      v81 = 0;
      v57 = (v54 & 0x7Fu) - 58;
      if ( (unsigned int)v57 < 4 )
        v55 = v56;
      v58 = sub_B9DFE0(v55, v82, (__int64)p_ptr, v57, v49, v50);
      v62 = sub_B94670(v58 + 64, (__int64)p_ptr[5], (__int64)p_ptr, v59, v60, v61);
      v51 = v81;
      if ( !v62 )
        goto LABEL_81;
      while ( 1 )
      {
        v63 = v62 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v62 & 4) == 0 )
          break;
        if ( !v63 )
          goto LABEL_81;
        if ( (*(_BYTE *)(*(_QWORD *)v63 + 28LL) & 0x7Fu) - 49 <= 2 )
          goto LABEL_83;
        v62 = *(_QWORD *)(v63 + 8);
        if ( !v62 )
          goto LABEL_81;
      }
      if ( (*(_BYTE *)(v63 + 28) & 0x7Fu) - 49 > 2 )
LABEL_81:
        BUG();
LABEL_83:
      v64 = (unsigned __int64 *)(v62 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v62 & 4) != 0 )
      {
        if ( v64 )
          v51 = *v64;
      }
      else
      {
        v51 = v62 & 0xFFFFFFFFFFFFFFF8LL;
      }
    }
    v52 = v82;
    if ( (*(_BYTE *)(v51 + 68) & 0xC) == 0xC || (*(_BYTE *)(v51 + 68) & 0xC) == 0 )
      goto LABEL_66;
    v81 = v51;
    LOBYTE(v91) = 0;
    p_ptr = &ptr;
    sub_1DBA4B0((unsigned int)&ptr, a1, v82, 0, 0, 0);
    v23 = a2;
    if ( (unsigned __int8)sub_1DDCCE0(a1, a2, v82, v81, &ptr) )
    {
      if ( ptr != p_ptr + 2 )
        free(ptr);
      v52 = v82;
LABEL_66:
      v33 = 1;
      sub_B88650(v52, 1);
      goto LABEL_48;
    }
    if ( ptr != p_ptr + 2 )
      free(ptr);
  }
  v92 = 0;
  v24 = *(_QWORD *)(a1 + 248);
  LODWORD(v90) = 16843008;
  v89 = off_2C58E70;
  v91 = v24;
  if ( v22 )
  {
    v25 = (_WORD *)sub_B780B0(v82);
    if ( v25 )
    {
LABEL_22:
      LOBYTE(p_ptr) = (*v25 & 0x1FF) == 60;
      goto LABEL_23;
    }
  }
  else
  {
    v23 = v82;
    sub_BC7960(&v89, v82);
    v25 = (_WORD *)sub_B780B0(v82);
    if ( v25 )
      goto LABEL_22;
  }
  LOBYTE(p_ptr) = 0;
LABEL_23:
  v26 = v82;
  if ( !sub_B780B0(v82) )
  {
LABEL_38:
    if ( sub_B780B0(v26) )
      goto LABEL_39;
    p_ptr = &ptr;
    goto LABEL_51;
  }
  if ( (*(_DWORD *)sub_B780B0(v82) & 0x40000) != 0 || !v92 && (!(_BYTE)v79 || !(_BYTE)p_ptr) )
  {
    v26 = v82;
    goto LABEL_38;
  }
  v27 = *(_QWORD *)(a1 + 4616);
  v28 = 5LL * *(unsigned int *)(a1 + 4624);
  v79 = *(_QWORD **)(a1 + 544);
  v29 = v27 + (v28 << 7) - 640;
  v30 = _mm_loadh_ps((const double *)&v79);
  v31 = *(_BYTE *)(v29 + 632) == 0;
  *(_DWORD *)(v29 + 608) = a2;
  *(__m128 *)(v29 + 616) = v30;
  if ( v31 )
    *(_BYTE *)(v29 + 632) = 1;
  v32 = *(unsigned int *)(a1 + 4624);
  v83 = 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 4616) + 640 * v32 - 41) = v22;
  *(_BYTE *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 39) = *(_BYTE *)(*(_QWORD *)(a1 + 4616)
                                                                                            + ((5LL
                                                                                              * *(unsigned int *)(a1 + 4624)
                                                                                              - 10) << 7)
                                                                                            + 601);
  v79 = &v83;
  p_ptr = &ptr;
  ptr = (void *)a1;
  v94 = 0;
  v12 = _mm_loadh_ps((const double *)&p_ptr);
  v86 = &v82;
  v95 = 0;
  v96 = 0;
  v85 = v12;
  sub_15F0FC0(a1, a2, (__int64 (__fastcall *)(__int64))sub_195F150, (__int64)&v85);
  if ( v83 != 1 )
  {
    v47 = sub_183C230(a1, v82, v83 & 0xFFFFFFFFFFFFFFFELL, a2, *(double *)v12.m128_u64);
    v83 = v47;
    if ( v47 != 1 )
    {
      v79 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFELL);
      v23 = 16LL * v96;
      operator delete(v94, v23, 8);
      if ( sub_B780B0(v82) )
      {
        v36 = (__int64)v79;
        if ( v79 )
        {
LABEL_40:
          v85.m128_u64[0] = v36;
          if ( !v22 )
          {
            v23 = a2;
            ptr = &v85;
            v94 = a1;
            sub_15F0FC0(a1, a2, (__int64 (__fastcall *)(__int64))sub_1912380, (__int64)&ptr);
          }
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 39) )
            sub_18C3E40(a1);
          v38 = v85.m128_u64[0];
          v39 = 0;
          if ( v85.m128_u64[0] )
            v39 = (unsigned int)sub_C00A40(v85.m128_u64[0], v23, 0, v36, v37);
          v40 = sub_19B4A30(a1, v38, v39, 0, 0, 0);
          if ( v40 != 1 )
          {
            v33 = sub_C97DC0(*(_QWORD **)(a1 + 248), v87.m128i_i32[0], v82, v19, v40 & 0xFFFFFFFFFFFFFFFELL, v41);
            goto LABEL_48;
          }
          goto LABEL_54;
        }
LABEL_39:
        v36 = sub_B780B0(v82);
        goto LABEL_40;
      }
LABEL_51:
      v43 = sub_B8EE90(v11 + 64);
      sub_168B9F0((__int64)p_ptr, (__int64 *)(a1 + 8), a2, 0xE2Fu, 0);
      if ( v97 )
      {
        sub_AE9DF0((unsigned __int8 **)p_ptr + 4, v43, 0xAu);
      }
      else
      {
        if ( !v99 )
          goto LABEL_53;
        v76 = sub_168B9E0(p_ptr);
        v77 = v95;
        if ( v95 )
          v77 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v95 + 32LL))(v95);
        v85.m128_u64[0] = v77;
        v78 = sub_1587BC0(v76, (__int64 *)&v85, v72, v73, v74, v75);
        sub_AE9DF0((unsigned __int8 **)(*v78 + 32LL * v98 + 8), v43, 0xAu);
      }
      if ( v97 )
      {
        sub_AE9DF0((unsigned __int8 **)p_ptr + 4, v82, 0xAu);
      }
      else if ( v99 )
      {
        v69 = sub_168B9E0(p_ptr);
        v70 = v95;
        if ( v95 )
          v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v95 + 32LL))(v95);
        v85.m128_u64[0] = v70;
        v71 = sub_1587BC0(v69, (__int64 *)&v85, v65, v66, v67, v68);
        sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * v98 + 8), v82, 0xAu);
      }
LABEL_53:
      v44 = p_ptr;
      sub_15F7200(p_ptr);
      v45 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82) >> 32;
      sub_168B9F0((__int64)v44, (__int64 *)(a1 + 8), v45, 0x16FBu, 0);
      sub_15F7200(v44);
      sub_1DBADC0(a1);
      if ( v46 )
      {
LABEL_55:
        v33 = 1;
        goto LABEL_48;
      }
LABEL_54:
      sub_B88650(v82, 1);
      goto LABEL_55;
    }
  }
  v33 = 1;
  sub_B88650(v82, 1);
  operator delete(v94, 16LL * v96, 8);
LABEL_48:
  sub_190D5E0(a1, v12);
  sub_19A2DA0(v84);
  return v33;
}
