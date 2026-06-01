unsigned __int64 __fastcall sub_189C680(
        __int64 *a1,
        __m128 si128,
        double a3,
        __int64 a4,
        char a5,
        int a6,
        __int16 a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11)
{
  _QWORD *v15; // rbp
  int v16; // eax
  __m128 v17; // xmm0
  int v18; // eax
  void *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rax
  size_t v22; // rax
  void *v23; // rsi
  _DWORD *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  void **v27; // r12
  __int64 v28; // rax
  _QWORD *v29; // r12
  __int64 v30; // rax
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rsi
  size_t v36; // rcx
  __int64 v37; // rdx
  size_t v38; // rcx
  _DWORD *v39; // r9
  void *v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 *v45; // rax
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // rsi
  size_t v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rdx
  unsigned __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // r8
  size_t v61; // rcx
  __int64 v62; // rdx
  __int64 *v63; // rax
  __int64 v64; // rsi
  _QWORD *v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  void *v69; // [rsp+0h] [rbp-198h] BYREF
  size_t n; // [rsp+8h] [rbp-190h] BYREF
  _DWORD *v71; // [rsp+10h] [rbp-188h]
  int v72; // [rsp+1Ch] [rbp-17Ch]
  _BYTE *v73; // [rsp+20h] [rbp-178h]
  __int64 v74; // [rsp+28h] [rbp-170h] BYREF
  void **v75; // [rsp+30h] [rbp-168h] BYREF
  unsigned __int64 v76; // [rsp+38h] [rbp-160h] BYREF
  __int64 v77; // [rsp+40h] [rbp-158h] BYREF
  __int64 v78; // [rsp+48h] [rbp-150h] BYREF
  __int64 v79; // [rsp+50h] [rbp-148h] BYREF
  signed __int64 v80; // [rsp+58h] [rbp-140h]
  __int64 v81[2]; // [rsp+60h] [rbp-138h] BYREF
  void *v82; // [rsp+70h] [rbp-128h] BYREF
  void **v83; // [rsp+78h] [rbp-120h]
  _BYTE v84[20]; // [rsp+90h] [rbp-108h] BYREF
  char v85; // [rsp+A4h] [rbp-F4h]
  void *v86; // [rsp+A8h] [rbp-F0h]
  __int64 v87; // [rsp+B0h] [rbp-E8h]
  _BYTE v88[16]; // [rsp+B8h] [rbp-E0h] BYREF
  char v89; // [rsp+C8h] [rbp-D0h]
  _BYTE v90[24]; // [rsp+D0h] [rbp-C8h] BYREF
  _DWORD v91[9]; // [rsp+E8h] [rbp-B0h] BYREF
  char v92; // [rsp+10Ch] [rbp-8Ch]

  v74 = a8;
  v75 = nullptr;
  v15 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( !a11 )
    goto LABEL_29;
  v76 = sub_1E5F010(a11, &v75);
  v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  if ( (_BYTE)v16 == 34 )
    goto LABEL_9;
  if ( (unsigned int)(v16 - 35) > 1 )
  {
    v69 = v75 + 1;
    *(__m128 *)v84 = _mm_loadh_ps((const double *)&v69);
    v47 = sub_F6CCB0((__int64 *)v84, *(__m128 *)v84);
    sub_168B9F0((__int64)v90, a1, v47, 0x1139u, 0);
    v48 = sub_1605D30((__int64)v90, (__int64 *)&v76);
    sub_169D880(v48, &v74);
    sub_15F7200(v90);
    v75 = nullptr;
    goto LABEL_29;
  }
  n = (size_t)(v75 + 1);
  v69 = (void *)*a1;
  v17 = _mm_loadh_ps((const double *)&n);
  *(__m128 *)v90 = v17;
  v18 = sub_F6CE20((__int64 *)v90);
  LODWORD(v69) = sub_15F0EF0((__int64)v69, v18, 0, (__m128i)v17, a3);
  v19 = *v75;
  v83 = v75 + 1;
  v82 = v19;
  v20 = sub_F6CCB0((__int64 *)&v82, v17);
  sub_168B9F0((__int64)v90, a1, v20, 0x1138u, 0);
  v21 = sub_1605D30((__int64)v90, (__int64 *)&v76);
  n = sub_169D880(v21, &v74);
  v22 = j__strlen(" *");
  v71 = v84;
  sub_9EC740((__int64)v84, (int)v69, " *", v22, 0);
  sub_1589170(n, v71);
  if ( v86 != v71 + 10 )
    operator delete(v86);
  sub_15F7200(v90);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v92 = 0;
  *(_QWORD *)v90 = v91;
  *(__m128 *)&v90[8] = si128;
  v91[8] = 0;
  v23 = *v75;
  v71 = v91;
  sub_1EA6360(v90, v23, v75 + 1);
  v76 = sub_A74EC0((__int64)v15, v76);
  sub_1EA6140(v90, v76, 4, 4);
  *v24 = (_DWORD)v69;
  n = *(_QWORD *)&v90[8] - *(_QWORD *)&v90[16];
  v27 = (void **)sub_A81BC0(
                   v15,
                   v76,
                   *(_DWORD *)&v90[8] - *(_DWORD *)&v90[16],
                   *(_QWORD *)&v90[8] - *(_QWORD *)&v90[16],
                   v25,
                   v26);
  v69 = *(void **)v90;
  memcpy(v27 + 1, (const void *)(*(_QWORD *)&v90[16] + *(_QWORD *)v90), n);
  v75 = v27;
  if ( v69 != v71 && v69 )
  {
    operator delete[](v69);
LABEL_9:
    v27 = v75;
  }
  if ( v27 )
  {
    v28 = (__int64)*v27;
    v29 = v27 + 1;
    v77 = v28;
    v30 = *(v29 - 1);
    *(_QWORD *)&v90[8] = v29;
    *(_QWORD *)v90 = v30;
    v31 = sub_F6D0E0((__int64 *)v90);
    v79 = v31;
    v80 = v32;
    if ( v31 )
    {
      if ( v31 & 7 | (v31 >> 3) & 1 || *(_BYTE *)(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 8 )
      {
        v72 = 0;
        LODWORD(v71) = 0;
        v69 = &v82;
LABEL_15:
        v33 = sub_F6CCB0(&v79, si128);
        goto LABEL_16;
      }
      v82 = (void *)v31;
      v83 = (void **)v80;
      v69 = &v82;
      v54 = sub_F6D3F0((__int64)&v82);
      LODWORD(v71) = v54;
      n = v54;
      v73 = (_BYTE *)HIDWORD(v54);
      v72 = HIDWORD(v54);
      if ( (unsigned __int16)sub_F5E940((__int64)v82) >> 8 )
      {
        v66 = sub_F6CCB0((__int64 *)v69, si128);
        sub_168B9F0((__int64)v90, a1, v66, 0x1136u, 0);
        v67 = sub_169D880((__int64)v90, &v74);
        v68 = sub_1605D30(v67, &v77);
        *(_QWORD *)&v84[12] = 0;
        v86 = v88;
        v69 = v88;
        v85 = 0;
        v87 = 0;
        v88[0] = 0;
        v89 = 0;
        *(_DWORD *)v84 = n;
        *(_DWORD *)&v84[4] = (_DWORD)v73;
        v84[8] = 1;
        sub_1589170(v68, v84);
        v40 = v86;
        if ( v86 == v88 )
          goto LABEL_24;
        goto LABEL_23;
      }
      if ( v79 )
        goto LABEL_15;
      v45 = (__int64 *)v75;
    }
    else
    {
      v45 = (__int64 *)v75;
      if ( !(v77 & 7 | (v77 >> 3) & 1)
        && !(*(_QWORD *)&byte_8[v77 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
           | (*(__int64 *)&byte_8[v77 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1) )
      {
        goto LABEL_26;
      }
      v72 = 0;
      LODWORD(v71) = 0;
      v69 = &v82;
    }
    v58 = *v45;
    v81[1] = (__int64)(v45 + 1);
    v81[0] = v58;
    v33 = sub_F6CCB0(v81, si128);
LABEL_16:
    sub_168B9F0((__int64)v90, a1, v33, 0x113Au, 0);
    v34 = sub_169D880((__int64)v90, &v74);
    v35 = 0;
    v36 = sub_1605D30(v34, &v77);
    v37 = *(_QWORD *)&byte_8[v77 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v37 & 8) != 0 )
      v35 = *(__int64 *)((char *)&qword_18 + (v37 & 0xFFFFFFFFFFFFFFF0LL));
    n = v36;
    v78 = v35 | ((unsigned __int8)v37 | (unsigned __int8)v77) & 7;
    sub_F71C30(v69, (unsigned __int64 *)&v78);
    v38 = n;
    if ( *(_BYTE *)(n + 120) )
    {
      sub_AEC220((unsigned __int8 **)(n + 32), v82, (signed __int64)v83);
      v39 = v84;
      v38 = n;
    }
    else
    {
      v39 = v84;
      if ( *(_BYTE *)(n + 132) )
      {
        v59 = sub_168B9E0((_QWORD *)n);
        v61 = n;
        v62 = v59;
        v63 = *(__int64 **)(n + 16);
        if ( v63 )
        {
          v64 = *v63;
          v73 = (_BYTE *)v62;
          v63 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(v64 + 32))(v63);
          v62 = (__int64)v73;
          v61 = n;
        }
        n = v61;
        v73 = v84;
        *(_QWORD *)v84 = v63;
        v65 = sub_1587BC0(v62, (__int64 *)v84, v62, v61, v60, (__int64)v84);
        sub_AEC220((unsigned __int8 **)(*v65 + 32LL * *(unsigned int *)(n + 128) + 8), v82, (signed __int64)v83);
        v39 = v73;
        v38 = n;
      }
    }
    v86 = v39 + 10;
    *(_DWORD *)v84 = (_DWORD)v71;
    n = (size_t)(v39 + 10);
    *(_QWORD *)&v84[12] = 0;
    v85 = 0;
    v87 = 0;
    v88[0] = 0;
    v89 = 0;
    *(_DWORD *)&v84[4] = v72;
    v84[8] = 1;
    sub_1589170(v38, v39);
    if ( v86 != (void *)n )
      operator delete(v86);
    v40 = v82;
    if ( v82 == (char *)v69 + 16 )
      goto LABEL_24;
LABEL_23:
    operator delete(v40);
LABEL_24:
    sub_15F7200(v90);
    v43 = v77 & 0xFFFFFFFFFFFFFFF0LL;
    v44 = *(_QWORD *)&byte_8[v77 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v44 & 8) != 0 && (*(__int64 *)((char *)&qword_18 + (v44 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v55 = *(_QWORD *)v43;
      v56 = *(_QWORD *)(*(_QWORD *)v43 + 8LL) & 7LL | (*(__int64 *)(*(_QWORD *)v43 + 8LL) >> 3) & 1;
      if ( v56 )
        v57 = sub_F64F00(v77, v55, v56, v41, v42) & 0xFFFFFFFFFFFFFFF0LL;
      else
        v57 = v55 & 0xFFFFFFFFFFFFFFF0LL;
      v45 = sub_A81910(v15, v57, 0);
      v75 = (void **)v45;
    }
    else
    {
      v45 = (__int64 *)v75;
    }
LABEL_26:
    if ( v45 )
      return sub_BA8720((__int64)v15, *(_QWORD *)(*a1 + 544), a5, a6, a7, a9, v74, a10, (__int64)v45);
  }
LABEL_29:
  a10 = 0;
  v49 = sub_A8A250(v15);
  v53 = *(_QWORD *)(v49 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !*(_QWORD *)(v49 + 48) )
    v53 = sub_A7AA70((__int64)v15, v49, 0, v50, v51, v52);
  v45 = sub_A81910(v15, v53, 0);
  v75 = (void **)v45;
  return sub_BA8720((__int64)v15, *(_QWORD *)(*a1 + 544), a5, a6, a7, a9, v74, a10, (__int64)v45);
}
