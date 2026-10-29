unsigned __int64 __fastcall sub_191D8B0(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  int v9; // r13d
  __int64 v13; // rcx
  void **v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  char v17; // al
  void *v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  int v21; // eax
  _QWORD *v22; // rbx
  _QWORD *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r15
  int v26; // edi
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rsi
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char v46; // al
  void *v47; // rcx
  __int64 v48; // rsi
  unsigned __int64 v49; // rdx
  char v50; // al
  char v51; // di
  __int64 v52; // rax
  __int64 v53; // rax
  char v54; // al
  __int64 v55; // rdx
  __int64 v56; // rax
  _DWORD *v57; // rdi
  void **v58; // rsi
  __int64 v59; // rdx
  unsigned __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  char *v63; // rsi
  char *v64; // rcx
  unsigned int v65; // eax
  int v66; // eax
  unsigned int v67; // eax
  char v68; // [rsp+0h] [rbp-1B8h]
  __int64 *v69; // [rsp+8h] [rbp-1B0h]
  unsigned int v70; // [rsp+8h] [rbp-1B0h]
  __int64 v72; // [rsp+18h] [rbp-1A0h]
  char *s; // [rsp+20h] [rbp-198h]
  char *sa; // [rsp+20h] [rbp-198h]
  char *v75; // [rsp+28h] [rbp-190h]
  int v76; // [rsp+3Ch] [rbp-17Ch]
  char v77; // [rsp+3Ch] [rbp-17Ch]
  char v78; // [rsp+3Ch] [rbp-17Ch]
  char v79; // [rsp+3Ch] [rbp-17Ch]
  char v80; // [rsp+3Ch] [rbp-17Ch]
  char v81; // [rsp+3Ch] [rbp-17Ch]
  char v82; // [rsp+3Ch] [rbp-17Ch]
  void *v83; // [rsp+50h] [rbp-168h] BYREF
  __int64 v84; // [rsp+58h] [rbp-160h]
  void *v85; // [rsp+60h] [rbp-158h] BYREF
  unsigned int v86; // [rsp+68h] [rbp-150h]
  __int64 v87; // [rsp+6Ch] [rbp-14Ch]
  char v88; // [rsp+74h] [rbp-144h]
  void *v89; // [rsp+78h] [rbp-140h]
  __int64 v90; // [rsp+80h] [rbp-138h]
  _BYTE v91[24]; // [rsp+88h] [rbp-130h] BYREF
  void *v92; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-110h]
  unsigned int v94; // [rsp+B0h] [rbp-108h] BYREF
  char v95; // [rsp+B4h] [rbp-104h]
  void *v96; // [rsp+B8h] [rbp-100h] BYREF
  unsigned int v97; // [rsp+C0h] [rbp-F8h]
  char v98; // [rsp+C4h] [rbp-F4h]
  void *v99; // [rsp+F0h] [rbp-C8h] BYREF
  unsigned int v100; // [rsp+F8h] [rbp-C0h]
  char v101; // [rsp+FCh] [rbp-BCh]

  v9 = a5;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL)
                                                                                        + 8)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1 )
    return sub_19198A0((__int64 *)a1, a2, a3, (unsigned int)a4, a5, a7, a8);
  v13 = *a3;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL)
                                                                                        + 8)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1 )
    return sub_19198A0((__int64 *)a1, a2, a3, (unsigned int)a4, a5, a7, a8);
  v83 = (void *)*a2;
  v14 = &v83;
  v84 = v13;
  v68 = 0;
  do
  {
    v15 = (unsigned __int64)*v14 & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_WORD *)v15 & 0x1FF) == 0x47 )
    {
      v16 = *(_QWORD *)(v15 + 16);
      if ( (*(_BYTE *)(v16 + 28) & 0x7F) == 0x21 )
      {
        v17 = *(_BYTE *)(v16 + 80);
        v18 = *(void **)(v16 + 56);
        v19 = *(unsigned int *)(v16 + 64);
        v20 = (unsigned __int64)(v19 + 63) >> 6;
        if ( v20 > 1 )
        {
          v78 = *(_BYTE *)(v16 + 80);
          sub_2205610(&v99, v19, v20, v18);
          v18 = v99;
          v17 = v78;
          LODWORD(v19) = v100;
        }
        else
        {
          v100 = *(_DWORD *)(v16 + 64);
          if ( (unsigned int)v19 > 0x40 )
          {
            v77 = v17;
            sub_2205470(&v99, v18, 0);
            v18 = v99;
            v17 = v77;
            LODWORD(v19) = v100;
          }
        }
        v86 = v19;
        v85 = v18;
        LOBYTE(v87) = v17;
        v100 = 64;
        v99 = nullptr;
        v101 = 0;
        v21 = sub_98E2D0((__int64 *)&v85, (__int64 *)&v99);
        if ( v100 > 0x40 && v99 )
        {
          v76 = v21;
          operator delete[](v99);
          v21 = v76;
        }
        if ( v21 )
        {
          v46 = *(_BYTE *)(v16 + 80);
          v47 = *(void **)(v16 + 56);
          v48 = *(unsigned int *)(v16 + 64);
          v49 = (unsigned __int64)(v48 + 63) >> 6;
          if ( v49 > 1 )
          {
            v81 = *(_BYTE *)(v16 + 80);
            sub_2205610(&v99, v48, v49, v47);
            v47 = v99;
            v46 = v81;
            LODWORD(v48) = v100;
          }
          else
          {
            v100 = *(_DWORD *)(v16 + 64);
            if ( (unsigned int)v48 > 0x40 )
            {
              v82 = v46;
              sub_2205470(&v99, v47, 0);
              v47 = v99;
              v46 = v82;
              LODWORD(v48) = v100;
            }
          }
          LODWORD(v93) = v48;
          v92 = v47;
          BYTE4(v93) = v46;
          v50 = sub_142BC90((__int64)&v92, (char *)&dword_0 + 1);
          if ( (unsigned int)v93 > 0x40 && v92 )
          {
            v80 = v50;
            operator delete[](v92);
            v50 = v80;
          }
          if ( v86 > 0x40 && v85 )
          {
            v79 = v50;
            operator delete[](v85);
            v50 = v79;
          }
          v51 = v68;
          if ( v50 )
            v51 = v50;
          v68 = v51;
        }
        else if ( v86 > 0x40 && v85 )
        {
          operator delete[](v85);
        }
      }
    }
    ++v14;
  }
  while ( v14 != &v85 );
  v22 = a2;
  if ( v68 )
  {
    sub_168B9F0((__int64)&v99, (__int64 *)(a1 + 8), a4, 0x1AD9u, 0);
    sub_15F7200(&v99);
  }
  v23 = (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL);
  v24 = *(_QWORD *)(v23[1] & 0xFFFFFFFFFFFFFFF0LL);
  v25 = *(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v26 = *(unsigned __int8 *)(v24 + 16);
  v27 = (unsigned int)(v26 - 2);
  v28 = *(_BYTE *)(v25 + 16) - 2;
  if ( (unsigned __int8)(v26 - 2) <= 4u )
  {
    if ( v28 > 4u )
    {
      v92 = *(void **)(v24 + 32);
      if ( sub_F65EB0(&v92) )
        return sub_18F40B0(a1, a4, v22, a3, *(double *)a7.m128_u64);
LABEL_24:
      v23 = (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL);
      goto LABEL_25;
    }
    v92 = *(void **)(v24 + 32);
    if ( sub_F65EB0(&v92) )
      return sub_18F40B0(a1, a4, v22, a3, *(double *)a7.m128_u64);
LABEL_23:
    v99 = *(void **)(v25 + 32);
    if ( sub_F65EB0(&v99) )
      return sub_18F40B0(a1, a4, v22, a3, *(double *)a7.m128_u64);
    goto LABEL_24;
  }
  if ( v28 <= 4u )
    goto LABEL_23;
LABEL_25:
  if ( v68 )
    goto LABEL_26;
  v54 = sub_9EC890(*(_QWORD *)(v23[1] & 0xFFFFFFFFFFFFFFF0LL), (__int64)v23, v27, v24, a5);
  v23 = (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL);
  if ( !v54 )
    goto LABEL_26;
  v56 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v56 + 16) == 13 && ((*(_WORD *)(v56 + 18) >> 3) & 0x1FF) == 0x1B4 )
    goto LABEL_26;
  if ( !sub_9EC890(
          *(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
          (__int64)v23,
          v55,
          v24,
          a5) )
  {
LABEL_90:
    v23 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFFELL);
LABEL_26:
    v29 = *(_QWORD *)(a1 + 248);
    goto LABEL_27;
  }
  v29 = *(_QWORD *)(a1 + 248);
  v57 = (_DWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
  if ( (*v57 & 0x20000) == 0 && a4 >= 0 && *(_DWORD *)(a1 + 11320) <= *(_DWORD *)(a1 + 12596) )
  {
    v95 &= ~1u;
    v58 = &v92;
    LOWORD(v92) = 0;
    v93 = 0;
    v94 = 0;
    if ( (unsigned __int8)sub_C3F220((unsigned __int64)v57, (__int64)&v92, v29, 0, 0, a6) )
    {
      LODWORD(v84) = v97;
      if ( v97 > 0x40 )
      {
        v58 = &v96;
        sub_2205510(&v83);
      }
      else
      {
        v83 = v96;
      }
      BYTE4(v84) = v98;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0
        && ((v60 = *a3 & 0xFFFFFFFFFFFFFFFELL,
             v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v60 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL),
             *(_BYTE *)(v61 + 16) != 13)
         || ((*(_WORD *)(v61 + 18) >> 3) & 0x1FF) != 0x1B4)
        && (int)sub_C00A40(v60, (__int64)v58, v59, v24, a5) >= 0
        || (unsigned __int8)sub_142BC90((__int64)&v83, nullptr)
        && (unsigned __int8)sub_142BC90((__int64)&v83, (char *)&dword_0 + 1) )
      {
        v69 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)&v99, (__int64 *)(a1 + 8), a4, 0x1BA4u, 0);
        v85 = (void *)sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, a1 + 8, *(double *)a7.m128_u64);
        v62 = sub_1587DB0((__int64)&v99, (__int64 *)&v85);
        v63 = (char *)"&&";
        if ( v9 != 19 )
          v63 = "||";
        if ( *(_BYTE *)(v62 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v62 + 32), (__int64)v63, 1u);
        }
        else if ( *(_BYTE *)(v62 + 132) )
        {
          sub_18D7E40(v62, (__int64)v63);
        }
        sub_15F7200(&v99);
        sub_168B9F0((__int64)&v99, v69, a4, 0x17B7u, 0);
        v64 = "&";
        if ( v9 != 19 )
          v64 = "|";
        s = v64;
        v72 = sub_18E2D80((__int64)&v99, (__int64)v64);
        v75 = s;
        sa = (char *)j__strlen(s);
        v65 = sub_15F0EF0(a1, a4, 0, (__m128i)a7, *(double *)a8.m128_u64);
        sub_18BE5B0((__int64)&v85, __SPAIR64__(v65, a4), 1, v75, (signed __int64)sa);
        sub_1589170(v72, &v85);
        if ( v89 != v91 )
          operator delete(v89);
        sub_15F7200(&v99);
        if ( v9 == 19 )
        {
          sub_168B9F0((__int64)&v99, v69, a4, 0x17B8u, 0);
          v70 = sub_EEC140(*a3 & 0xFFFFFFFFFFFFFFFELL);
          v66 = sub_EEC140(*v22 & 0xFFFFFFFFFFFFFFFELL);
          v67 = sub_15F0EF0(a1, v66, 0, (__m128i)a7, *(double *)a8.m128_u64);
          v87 = 0;
          v88 = 0;
          v89 = v91;
          v90 = 0;
          v91[0] = 0;
          v91[16] = 0;
          v85 = (void *)__PAIR64__(v70, v67);
          LOBYTE(v86) = 1;
          sub_1589170((__int64)&v99, &v85);
          if ( v89 != v91 )
            operator delete(v89);
          sub_15F7200(&v99);
        }
      }
      if ( (unsigned int)v84 > 0x40 && v83 )
        operator delete[](v83);
    }
    if ( v94 > 1 )
      sub_A4F8E0((int *)&v94);
    goto LABEL_90;
  }
  v23 = (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL);
LABEL_27:
  v30 = *(_QWORD *)(v29 + 2320);
  if ( (*(_BYTE *)(v30 + 1) & 8) != 0 )
  {
    v52 = sub_1C02150(a1, v23);
    if ( v52 == 1 )
      return sub_18F40B0(a1, a4, v22, a3, *(double *)a7.m128_u64);
    *v22 = v52;
    v53 = sub_1C02150(a1, *a3 & 0xFFFFFFFFFFFFFFFELL);
    if ( v53 == 1 )
      return sub_18F40B0(a1, a4, v22, a3, *(double *)a7.m128_u64);
    *a3 = v53;
    return *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18640LL);
  }
  else
  {
    if ( (*(_BYTE *)(v30 + 47) & 0x20) != 0 && *(_DWORD *)(v30 + 48) <= 0x77u )
    {
      if ( sub_F58060(*(_QWORD *)(v23[1] & 0xFFFFFFFFFFFFFFF0LL))
        || sub_F58060(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        return sub_18F40B0(a1, a4, v22, a3, *(double *)a7.m128_u64);
      }
      v23 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFFELL);
    }
    v31 = sub_191BD20(a1, v23, a7, a8, v29, v24, a5, a6);
    *v22 = v31;
    if ( v31 == 1 )
      return 0;
    v36 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
    v37 = sub_191BD20(a1, v36, a7, a8, v32, v33, v34, v35);
    *a3 = v37;
    if ( v37 == 1 )
    {
      return 0;
    }
    else
    {
      if ( !sub_F61140(
              *(_QWORD *)(*(_QWORD *)((*v22 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
              (__int64)v36,
              v38,
              v39,
              v40,
              v41)
        || !sub_F61140(
              *(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
              (__int64)v36,
              v42,
              v43,
              v44,
              v45) )
      {
        return sub_18F40B0(a1, a4, v22, a3, *(double *)a7.m128_u64);
      }
      return *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18720LL);
    }
  }
}
