_BOOL8 __fastcall sub_D6F610(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r12d
  __int64 v7; // rsi
  int v8; // edx
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r13d
  int v15; // eax
  unsigned int v16; // ebp
  _QWORD *v17; // r13
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r15
  __int64 v20; // r12
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r12
  void *v25; // rax
  void *v26; // rcx
  void *v27; // rdi
  char *v28; // rax
  char *v29; // rdx
  char *v30; // rdi
  char v31; // si
  char v32; // cl
  __int64 v33; // r12
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r12
  void *v38; // rax
  void *v39; // rcx
  void *v40; // rdi
  unsigned __int8 *v41; // rdx
  __int64 v42; // rcx
  char *v43; // rax
  unsigned __int64 v44; // r12
  char *v45; // rdi
  unsigned __int8 v46; // si
  __int64 v47; // r14
  __int64 v48; // r8
  void *v49; // r15
  __int64 v50; // rax
  unsigned __int64 v51; // r15
  __int64 v52; // r12
  unsigned __int8 v53; // al
  bool v54; // cc
  unsigned __int8 **v55; // rax
  __int64 *v56; // rbp
  __int64 v57; // rax
  __int64 v59; // rax
  __int64 v60; // rsi
  unsigned __int8 **v61; // rbx
  void *v62; // rsi
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // eax
  int v70; // eax
  unsigned __int16 v71; // ax
  __int16 v72; // ax
  char v73; // al
  bool v74; // [rsp+17h] [rbp-1A1h]
  unsigned __int64 v77; // [rsp+48h] [rbp-170h]
  __m128i v78; // [rsp+50h] [rbp-168h] BYREF
  __m128i v79; // [rsp+60h] [rbp-158h] BYREF
  void *v80; // [rsp+70h] [rbp-148h] BYREF
  unsigned int v81; // [rsp+78h] [rbp-140h]
  _BYTE v82[24]; // [rsp+80h] [rbp-138h] BYREF
  int v83; // [rsp+98h] [rbp-120h]
  __int64 v84; // [rsp+A0h] [rbp-118h]
  int v85; // [rsp+A8h] [rbp-110h]
  _BYTE v86[24]; // [rsp+B0h] [rbp-108h] BYREF
  int v87; // [rsp+C8h] [rbp-F0h]
  __int64 v88; // [rsp+D0h] [rbp-E8h]
  int v89; // [rsp+D8h] [rbp-E0h]
  unsigned __int64 v90; // [rsp+E0h] [rbp-D8h] BYREF
  void *v91; // [rsp+E8h] [rbp-D0h]
  void *v92; // [rsp+F0h] [rbp-C8h]
  __int64 v93; // [rsp+F8h] [rbp-C0h]
  _BYTE v94[48]; // [rsp+100h] [rbp-B8h] BYREF
  void *v95; // [rsp+130h] [rbp-88h] BYREF
  void *v96; // [rsp+138h] [rbp-80h]
  void *ptr[2]; // [rsp+140h] [rbp-78h] BYREF
  _BYTE v98[104]; // [rsp+150h] [rbp-68h] BYREF

  v5 = a4;
  v7 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 48);
  v8 = 13;
  if ( (*(_BYTE *)(v7 + 1) & 6) == 0 )
    v8 = sub_D66A20(*(_QWORD *)(a1 + 184), v7, 13, a4, a5);
  sub_D67460((__int64)&v80, *(_QWORD *)(a1 + 176), v8);
  v9 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v9, 48);
  sub_DFF520(v86);
  sub_DFDA50(v9, 48);
  v10 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v10, 48);
  sub_DFF520(v82);
  v11 = 48;
  sub_DFDA50(v10, 48);
  if ( v5 != 179 && v5 != 944 && v5 != 1477 )
  {
    v14 = v81;
    if ( v81 > 0x40 )
      goto LABEL_6;
LABEL_57:
    v74 = v80 == nullptr;
    if ( v80 )
      goto LABEL_7;
LABEL_58:
    sub_D6ED60((_QWORD *)a1, 0, *(_QWORD *)(a3 + 8), v12, v13);
    goto LABEL_59;
  }
  v11 = a2;
  sub_D66F80(a1, a2, v5);
  v14 = v81;
  if ( v81 <= 0x40 )
    goto LABEL_57;
LABEL_6:
  v15 = sub_21E2A40(&v80);
  v74 = v14 == v15;
  if ( v14 == v15 )
    goto LABEL_58;
LABEL_7:
  v16 = v5 - 1476;
  v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v18 = sub_D66E00((__int64)v82, v11);
  v19 = sub_D66E00((__int64)v86, v11);
  if ( v5 - 1476 > 1
    && (!(unsigned __int8)sub_F341A0(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL))
     && !(unsigned __int8)sub_F34220(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL))
     || !(unsigned __int8)sub_F341A0(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL))
     && !(unsigned __int8)sub_F34220(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL))) )
  {
    v90 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v59 = sub_E0FE60(a1, &v90, 2434, 0);
    v60 = v17[2190];
    v61 = (unsigned __int8 **)v59;
    sub_F995C0(&v95, v60, v5);
    if ( v61 )
    {
      v62 = v95;
      sub_AC84E0(v61, v95, (signed __int64)v96);
      v63 = sub_CDA510((__int64)v82, (__int64)v62);
      sub_AC60B0(v61, v63, 8u);
      v64 = sub_CDA510((__int64)v86, v63);
      sub_AC60B0(v61, v64, 8u);
    }
    else
    {
      sub_CDA510((__int64)v82, v60);
      sub_CDA510((__int64)v86, v60);
    }
    if ( v95 != ptr )
      operator delete(v95);
    goto LABEL_59;
  }
  if ( !v83 && v84 && *(_BYTE *)(*(_QWORD *)(v84 + 32) + 61LL)
    || !v87 && v88 && *(_BYTE *)(*(_QWORD *)(v88 + 32) + 61LL) )
  {
    goto LABEL_59;
  }
  v20 = sub_A73FE0((__int64)v17, *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL));
  v21 = 0xFFFFFFFFLL;
  if ( !v83 )
  {
    v22 = sub_CDA220((__int64)v82);
    if ( v85 == -1 )
      v23 = *(unsigned int *)(*(_QWORD *)(v84 + 32) + 20LL);
    else
      v23 = *(unsigned int *)(v22 + 16);
    v21 = *(unsigned int *)(v22 + 20) / v23;
  }
  v91 = nullptr;
  v92 = v94;
  v90 = v20 * v21;
  v24 = (unsigned int)((v20 * v21) >> 3);
  v93 = 0x300000000LL;
  v25 = (void *)operator new[](v24);
  v26 = v25;
  if ( v24 )
    v26 = memset(v25, 0, v24);
  v27 = v91;
  v91 = v26;
  if ( v27 )
    operator delete[](v27);
  sub_D80500(*(_QWORD *)(a1 + 184), v82, &v90, 0);
  if ( *(_BYTE *)(v17[2181] + 272LL) )
  {
    v28 = (char *)v91;
    if ( v90 >> 4 )
    {
      v29 = (char *)v91 + (v90 >> 3) - 1;
      v30 = (char *)v91 + (v90 >> 4);
      do
      {
        v31 = *v29;
        v32 = *v28++;
        --v29;
        *(v28 - 1) = v31;
        v29[1] = v32;
      }
      while ( v30 != v28 );
    }
  }
  v33 = sub_A73FE0((__int64)v17, *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL));
  v34 = 0xFFFFFFFFLL;
  if ( !v87 )
  {
    v35 = sub_CDA220((__int64)v86);
    if ( v89 == -1 )
      v36 = *(unsigned int *)(*(_QWORD *)(v88 + 32) + 20LL);
    else
      v36 = *(unsigned int *)(v35 + 16);
    v34 = *(unsigned int *)(v35 + 20) / v36;
  }
  v96 = nullptr;
  ptr[0] = v98;
  v95 = (void *)(v33 * v34);
  v37 = (unsigned int)((v33 * v34) >> 3);
  ptr[1] = (void *)0x300000000LL;
  v38 = (void *)operator new[](v37);
  v39 = v38;
  if ( v37 )
    v39 = memset(v38, 0, v37);
  v40 = v96;
  v96 = v39;
  if ( v40 )
    operator delete[](v40);
  sub_D80500(*(_QWORD *)(a1 + 184), v86, &v95, 0);
  if ( *(_BYTE *)(v17[2181] + 272LL) )
  {
    v43 = (char *)v96;
    v44 = (unsigned __int64)v95 >> 3;
    if ( !((unsigned __int64)v95 >> 4) )
      goto LABEL_39;
    v41 = (unsigned __int8 *)v96 + v44 - 1;
    v45 = (char *)v96 + ((unsigned __int64)v95 >> 4);
    do
    {
      v46 = *v41;
      v42 = (unsigned __int8)*v43++;
      --v41;
      *(v43 - 1) = v46;
      v41[1] = v42;
    }
    while ( v43 != v45 );
  }
  v44 = (unsigned __int64)v95 >> 3;
LABEL_39:
  v47 = 1;
  v48 = v90 >> 3;
  if ( v90 >> 3 <= v44 )
    v44 = v90 >> 3;
  if ( v16 <= 1 )
    v47 = (unsigned int)sub_A8AC40((__int64)v17, v17[2332]);
  v49 = v80;
  if ( v81 > 0x40 )
    v49 = *(void **)v80;
  v50 = v47 * (_QWORD)v49;
  v54 = v44 <= v47 * (__int64)v49;
  v77 = v47 * (_QWORD)v49;
  v51 = v44;
  if ( !v54 )
    v51 = v50;
  if ( !v51 )
  {
LABEL_53:
    if ( v77 <= v51 )
    {
      sub_D6ED60((_QWORD *)a1, 0, *(_QWORD *)(a3 + 8), v42, v48);
      v74 = 1;
    }
    else
    {
      v78.m128i_i64[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
      v55 = (unsigned __int8 **)sub_E0FE60(a1, &v78, 2370, 0);
      v56 = (__int64 *)v55;
      if ( v55 )
      {
        sub_AC60B0(v55, 0, 2u);
        v57 = sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
        v79.m128i_i8[8] = 1;
        v79.m128i_i64[0] = v57;
        sub_AC88D0(v56, v79.m128i_i64);
      }
      else
      {
        sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
      }
    }
    goto LABEL_77;
  }
  v52 = 0;
  while ( v16 > 1 )
  {
LABEL_50:
    v41 = (unsigned __int8 *)v91;
    v53 = *((_BYTE *)v96 + v52);
    v54 = *((_BYTE *)v91 + v52) <= v53;
    if ( *((_BYTE *)v91 + v52) < v53 )
    {
LABEL_76:
      sub_D6ED60((_QWORD *)a1, 0xFFFFFFFF, *(_QWORD *)(a3 + 8), v42, v48);
      v74 = 1;
      goto LABEL_77;
    }
LABEL_51:
    if ( !v54 )
      goto LABEL_73;
LABEL_52:
    v52 += v47;
    if ( v51 == v52 )
      goto LABEL_53;
  }
  switch ( (unsigned int)sub_CC2440(*(_QWORD *)(a1 + 184), v17[2332], (__int64)v41, v42, v48) )
  {
    case 0u:
      v41 = (unsigned __int8 *)v91;
      v73 = *((_BYTE *)v96 + v52);
      if ( *((char *)v91 + v52) < v73 )
        goto LABEL_76;
      if ( *((char *)v91 + v52) > v73 )
        goto LABEL_73;
      goto LABEL_52;
    case 1u:
    case 0xAu:
      goto LABEL_50;
    case 2u:
      v41 = (unsigned __int8 *)v91;
      v72 = *(_WORD *)((char *)v96 + v52);
      if ( *(__int16 *)((char *)v91 + v52) < v72 )
        goto LABEL_76;
      if ( *(__int16 *)((char *)v91 + v52) > v72 )
        goto LABEL_73;
      goto LABEL_52;
    case 3u:
      v41 = (unsigned __int8 *)v91;
      v71 = *(_WORD *)((char *)v96 + v52);
      v54 = *(_WORD *)((char *)v91 + v52) <= v71;
      if ( *(_WORD *)((char *)v91 + v52) < v71 )
        goto LABEL_76;
      goto LABEL_51;
    case 4u:
      v41 = (unsigned __int8 *)v91;
      v70 = *(_DWORD *)((char *)v96 + v52);
      if ( *(_DWORD *)((char *)v91 + v52) < v70 )
        goto LABEL_76;
      if ( *(_DWORD *)((char *)v91 + v52) > v70 )
        goto LABEL_73;
      goto LABEL_52;
    case 5u:
      v41 = (unsigned __int8 *)v91;
      v69 = *(_DWORD *)((char *)v96 + v52);
      v54 = *(_DWORD *)((char *)v91 + v52) <= v69;
      if ( *(_DWORD *)((char *)v91 + v52) < v69 )
        goto LABEL_76;
      goto LABEL_51;
    case 6u:
      v41 = (unsigned __int8 *)v91;
      v68 = *(_QWORD *)((char *)v96 + v52);
      if ( *(_QWORD *)((char *)v91 + v52) < v68 )
        goto LABEL_76;
      if ( *(_QWORD *)((char *)v91 + v52) > v68 )
        goto LABEL_73;
      goto LABEL_52;
    case 7u:
      v41 = (unsigned __int8 *)v91;
      v67 = *(_QWORD *)((char *)v96 + v52);
      v54 = *(_QWORD *)((char *)v91 + v52) <= v67;
      if ( *(_QWORD *)((char *)v91 + v52) < v67 )
        goto LABEL_76;
      goto LABEL_51;
    case 8u:
      v78 = _mm_loadu_si128((const __m128i *)((char *)v91 + v52));
      v79 = _mm_loadu_si128((const __m128i *)((char *)v96 + v52));
      if ( (unsigned __int8)sub_D68730((__int64)&v78, (void *)v79.m128i_i64[0], v79.m128i_u32[2]) )
        goto LABEL_111;
      if ( (unsigned __int8)sub_D68620((__int64)&v78, (__int64)&v79) )
        goto LABEL_73;
      goto LABEL_52;
    case 9u:
      v78 = _mm_loadu_si128((const __m128i *)((char *)v91 + v52));
      v79 = _mm_loadu_si128((const __m128i *)((char *)v96 + v52));
      if ( !(unsigned __int8)sub_D689B0(v78.m128i_i64, v79.m128i_i64[0], v79.m128i_u32[2]) )
      {
        if ( (unsigned __int8)sub_D68850(v78.m128i_i64, v79.m128i_i64) )
        {
LABEL_73:
          sub_D6ED60((_QWORD *)a1, 1u, *(_QWORD *)(a3 + 8), v42, v48);
          goto LABEL_74;
        }
        goto LABEL_52;
      }
LABEL_111:
      sub_D6ED60((_QWORD *)a1, 0xFFFFFFFF, *(_QWORD *)(a3 + 8), v65, v66);
LABEL_74:
      v74 = 1;
LABEL_77:
      if ( ptr[0] != v98 )
        free(ptr[0]);
      if ( v96 )
        operator delete[](v96);
      if ( v92 != v94 )
        free(v92);
      if ( v91 )
        operator delete[](v91);
LABEL_59:
      sub_DFF560(v82);
      sub_DFF560(v86);
      if ( v81 > 0x40 && v80 )
        operator delete[](v80);
      return v74;
  }
}

