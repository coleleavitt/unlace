__int64 __fastcall sub_1C57D30(
        __int64 a1,
        _DWORD *a2,
        size_t a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __m128 a7,
        __m128 si128,
        unsigned int a9)
{
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  _BYTE *v27; // rdi
  const void **v28; // rbx
  __int64 v29; // r12
  size_t v30; // r15
  int v31; // eax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v46; // r8
  unsigned __int8 v47; // dl
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r15
  __int64 v52; // rdi
  __int64 v53; // r13
  char *v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // r15
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned int v66; // ebx
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 *v70; // rdx
  __int64 v71; // rax
  __int64 *v72; // r12
  unsigned __int64 v73; // rax
  __int64 v74; // rcx
  unsigned __int8 v76; // al
  unsigned __int64 v77; // rax
  const void *v78; // [rsp+10h] [rbp-148h]
  const void **v80; // [rsp+28h] [rbp-130h]
  _QWORD v81[2]; // [rsp+30h] [rbp-128h] BYREF
  void *v82; // [rsp+40h] [rbp-118h] BYREF
  __int64 v83; // [rsp+48h] [rbp-110h]
  _BYTE v84[32]; // [rsp+50h] [rbp-108h] BYREF
  __int64 v85; // [rsp+70h] [rbp-E8h] BYREF
  void *ptr; // [rsp+78h] [rbp-E0h]
  __int64 v87; // [rsp+80h] [rbp-D8h]
  _BYTE v88[64]; // [rsp+88h] [rbp-D0h] BYREF
  void *v89[2]; // [rsp+C8h] [rbp-90h]
  __int64 v90; // [rsp+D8h] [rbp-80h]
  _QWORD *v91; // [rsp+E0h] [rbp-78h]
  __int64 v92; // [rsp+E8h] [rbp-70h]
  int v93; // [rsp+F0h] [rbp-68h]
  __int64 v94; // [rsp+F8h] [rbp-60h] BYREF
  __m128 v95; // [rsp+100h] [rbp-58h]
  __int64 v96; // [rsp+110h] [rbp-48h]

  *a6 = 0;
  v81[0] = a4;
  v81[1] = a5;
  v82 = v84;
  v83 = 0x200000000LL;
  sub_22471D0(v81, &v82, ".", 1, 0xFFFFFFFFLL, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 && a3 == 4 && *a2 == 1936287860 )
  {
    v11 = (__int64 *)(sub_19A27D0(a1) & 0xFFFFFFFFFFFFFFF0LL);
    if ( !v11 || !*v11 )
      goto LABEL_55;
    v15 = sub_F68450(*v11, (__int64)&v82, v12, v13, v14);
    v22 = (unsigned __int64)sub_F631C0(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v82, v16, v17, v18, v19);
    goto LABEL_20;
  }
  v23 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), a2, a3);
  ptr = v88;
  v87 = 0x800000000LL;
  *(_OWORD *)v89 = 0;
  v92 = v23;
  v85 = 0;
  v90 = 0;
  v91 = (_QWORD *)a1;
  v93 = 0;
  sub_B85890(&v94, v23);
  a7 = 0;
  v95 = 0;
  v96 = 0x101010000LL;
  sub_1A395A0((__int64)&v85);
  if ( (unsigned __int8)sub_1A49A10(
                          a1,
                          (__int64)&v85,
                          *(__int64 **)(a1 + 608),
                          0,
                          0,
                          v24,
                          0.0,
                          *(double *)si128.m128_u64)
    && (_DWORD)v85 == 2 )
  {
    v20 = *(_QWORD *)ptr;
    v22 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
    v76 = *(_BYTE *)(v22 + 28) & 0x7F;
    if ( ((v76 + 52) & 0x7Fu) <= 1 || (unsigned int)v76 - 53 <= 1 )
      v22 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
    if ( !BYTE3(v96) )
      goto LABEL_16;
    goto LABEL_11;
  }
  v22 = 0;
  if ( !BYTE3(v96) )
    goto LABEL_14;
  if ( (_DWORD)v85 != 5 )
  {
LABEL_11:
    if ( !v89[1] || (*(_BYTE *)(v91[29] + 46LL) & 0x20) == 0 )
      goto LABEL_16;
    sub_1663B80(v91, (__int64)&v85);
LABEL_14:
    if ( !BYTE4(v96) || (_DWORD)v85 != 5 )
      goto LABEL_16;
    goto LABEL_72;
  }
  if ( BYTE4(v96) )
LABEL_72:
    sub_1A445B0((__int64)v91, (__int64)&v85, v25, v26, v20);
LABEL_16:
  if ( v89[0] )
    sub_1A39780((char *)v89[0]);
  if ( ptr != v88 )
    free(ptr);
LABEL_20:
  v27 = v82;
  if ( !v22 )
  {
    v66 = 1;
    goto LABEL_56;
  }
  v80 = (const void **)((char *)v82 + 16 * (unsigned int)v83);
  if ( v80 == v82 )
  {
LABEL_48:
    v66 = 0;
    goto LABEL_56;
  }
  v28 = (const void **)v82;
  v29 = v22;
  while ( 1 )
  {
    v30 = (size_t)v28[1];
    v78 = *v28;
    v31 = *(_BYTE *)(v29 + 28) & 0x7F;
    if ( (unsigned int)(v31 - 40) <= 6 )
      goto LABEL_24;
    if ( (unsigned int)(v31 - 64) > 2 )
    {
      if ( (unsigned int)(v31 - 58) > 9 )
      {
        if ( (unsigned int)(v31 - 49) > 2 )
          goto LABEL_55;
LABEL_24:
        v32 = *(_QWORD *)(*(_QWORD *)(v29 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v32 = *(_QWORD *)(v29 + 48);
      }
      v33 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v34 = *(_QWORD *)v33;
      if ( *(_BYTE *)(*(_QWORD *)v33 + 16LL) != 48 )
        goto LABEL_55;
      goto LABEL_26;
    }
    v67 = *(unsigned int *)(v29 + 24);
    sub_19116A0((__m128 *)a1, v67, v29, 0, v20, v21, a7, si128);
    v68 = *(_QWORD *)(v29 + 80);
    if ( (v68 & 4) != 0 )
      v69 = *(_QWORD *)((v68 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    else
      v69 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF8LL);
    v70 = (__int64 *)(v69 & 0xFFFFFFFFFFFFFFF0LL);
    v71 = *v70;
    v72 = v70;
    if ( *(_BYTE *)(*v70 + 16) == 42 )
    {
LABEL_53:
      v73 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v34 = *(_QWORD *)v73;
      LOBYTE(v74) = *(_BYTE *)(*(_QWORD *)v73 + 16LL);
      goto LABEL_54;
    }
    v34 = *(_QWORD *)(*(_QWORD *)(v71 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v74 = *(unsigned __int8 *)(v34 + 16);
    if ( (_BYTE)v74 == 42 )
    {
      v71 = sub_F63050(*v70, v67, v70, v74);
      if ( v71 )
        goto LABEL_53;
      v77 = *(_QWORD *)(*v72 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v34 = *(_QWORD *)v77;
      LOBYTE(v74) = *(_BYTE *)(*(_QWORD *)v77 + 16LL);
    }
LABEL_54:
    if ( (_BYTE)v74 != 48 )
      goto LABEL_55;
LABEL_26:
    if ( (unsigned __int8)sub_1E63CF0(a1, a9, v34 & 0xFFFFFFFFFFFFFFF0LL, 1, 3095) )
      goto LABEL_55;
    v35 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), v78, v30);
    a7 = 0;
    v87 = 0x800000000LL;
    ptr = v88;
    v36 = v35;
    *(_OWORD *)v89 = 0;
    v92 = v35;
    v85 = 0;
    v90 = 0;
    v91 = (_QWORD *)a1;
    v93 = 0;
    sub_B85890(&v94, v35);
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA5C0);
    v96 = 0x101010000LL;
    v95 = si128;
    sub_1A395A0((__int64)&v85);
    v41 = sub_F60F10(v34, v36, v37, v38, v39, v40);
    if ( v41 )
      v41 += 8;
    if ( !(unsigned __int8)sub_1A48440(a1, (__int64)&v85, (__int64)v41, 0) || (_DWORD)v85 != 2 )
      break;
    v46 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
    v29 = v46;
    v47 = *(_BYTE *)(v46 + 28) & 0x7F;
    v48 = v47;
    v49 = (unsigned int)v47 - 53;
    if ( (unsigned int)v49 <= 1 || (v50 = (v47 + 52) & 0x7F, (unsigned __int8)v50 <= 1u) )
    {
      v29 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
      v48 = *(_BYTE *)(v29 + 28) & 0x7F;
    }
    if ( (unsigned int)(v48 - 49) > 2 )
    {
      if ( !BYTE3(v96) )
        goto LABEL_76;
      goto LABEL_86;
    }
    v51 = *(_QWORD *)(a1 + 248);
    v52 = v34;
    v53 = v29;
    v54 = (char *)sub_F60F10(v52, (__int64)&v85, v50, v49, v46, v45);
    v62 = sub_EDE580(v51, v54, v55, v56, v57, v58);
    if ( *(char *)(v29 + 29) < 0 )
      v53 = sub_B72720(v29);
    v63 = *(unsigned int *)(v53 + 68);
    if ( (v63 & 0xFFFFFFF0) == 0 )
    {
      sub_B7EAB0(v53, (__int64)v54, v63, v59, v60, v61);
      LODWORD(v63) = *(_DWORD *)(v53 + 68);
    }
    *a6 += sub_A97FF0(*(_QWORD *)(a1 + 248), *(_QWORD *)(v62[6] + 8LL * (((unsigned int)v63 >> 4) - 1)));
    if ( BYTE3(v96) )
    {
      if ( (_DWORD)v85 == 5 )
      {
        if ( !BYTE4(v96) )
          goto LABEL_43;
        goto LABEL_62;
      }
      if ( !v89[1] || (*(_BYTE *)(v91[29] + 46LL) & 0x20) == 0 )
        goto LABEL_43;
      sub_1663B80(v91, (__int64)&v85);
    }
    if ( !BYTE4(v96) || (_DWORD)v85 != 5 )
      goto LABEL_43;
LABEL_62:
    sub_1A445B0((__int64)v91, (__int64)&v85, v64, v65, v20);
LABEL_43:
    if ( v89[0] )
      sub_1A39780((char *)v89[0]);
    if ( ptr == v88 )
    {
      v28 += 2;
      if ( v80 == v28 )
      {
LABEL_47:
        v27 = v82;
        goto LABEL_48;
      }
    }
    else
    {
      free(ptr);
      v28 += 2;
      if ( v80 == v28 )
        goto LABEL_47;
    }
  }
  if ( !BYTE3(v96) )
    goto LABEL_89;
  if ( (_DWORD)v85 == 5 )
  {
    if ( !BYTE4(v96) )
      goto LABEL_76;
LABEL_91:
    sub_1A445B0((__int64)v91, (__int64)&v85, v42, v43, v44);
    goto LABEL_76;
  }
LABEL_86:
  if ( !v89[1] || (*(_BYTE *)(v91[29] + 46LL) & 0x20) == 0 )
    goto LABEL_76;
  sub_1663B80(v91, (__int64)&v85);
LABEL_89:
  if ( BYTE4(v96) && (_DWORD)v85 == 5 )
    goto LABEL_91;
LABEL_76:
  if ( v89[0] )
    sub_1A39780((char *)v89[0]);
  if ( ptr != v88 )
    free(ptr);
LABEL_55:
  v27 = v82;
  v66 = 1;
LABEL_56:
  if ( v27 != v84 )
    free(v27);
  return v66;
}
