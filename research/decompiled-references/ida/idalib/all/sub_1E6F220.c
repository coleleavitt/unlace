__int64 __fastcall sub_1E6F220(__int64 a1, const __m128i *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v9; // rax
  int v10; // r13d
  __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned int v14; // ebp
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r13
  const char *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rdi
  __int64 *v33; // rbp
  __int64 v34; // rdi
  int v35; // esi
  unsigned int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r13
  const char *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned int *v46; // rax
  size_t v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rbp
  __int64 v53; // rbp
  char v54; // al
  __int64 v55; // r12
  unsigned int v56; // r14d
  const __m128i *v57; // r13
  __int64 v58; // rax
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // rdx
  __m128i *v61; // rax
  __int64 *v62; // rbp
  __int64 v63; // rbx
  unsigned __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  __int64 v80; // r13
  __m128i *v81; // rbp
  __int64 v82; // rsi
  unsigned int v83; // eax
  __int64 v84; // rsi
  char v85; // si
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  _QWORD *v94; // rax
  int v95; // eax
  __int64 v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // rax
  char v99; // [rsp+Fh] [rbp-109h]
  unsigned __int64 v100; // [rsp+10h] [rbp-108h]
  unsigned __int64 v101; // [rsp+10h] [rbp-108h]
  __m128i *v102; // [rsp+10h] [rbp-108h]
  __int64 v103; // [rsp+10h] [rbp-108h]
  __int64 v104; // [rsp+10h] [rbp-108h]
  __int64 v105; // [rsp+10h] [rbp-108h]
  __int64 v106; // [rsp+18h] [rbp-100h]
  __int64 v107; // [rsp+18h] [rbp-100h]
  __int64 v108; // [rsp+18h] [rbp-100h]
  __int64 v109; // [rsp+20h] [rbp-F8h]
  unsigned int v110; // [rsp+28h] [rbp-F0h]
  int v111; // [rsp+2Ch] [rbp-ECh]
  __int64 v112; // [rsp+38h] [rbp-E0h] BYREF
  const char *v113; // [rsp+40h] [rbp-D8h] BYREF
  size_t v114; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v115; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v116; // [rsp+58h] [rbp-C0h]
  int v117; // [rsp+5Ch] [rbp-BCh]
  __int64 v118; // [rsp+60h] [rbp-B8h]

  v9 = (__int64 *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*v9 + 17) & 4) != 0
    || (v28 = sub_F57E80(*v9)) != 0
    && (*(_QWORD *)(v28 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
    && (*(_BYTE *)(v28 + 17) & 4) == 0 )
  {
    v99 = 0;
    goto LABEL_3;
  }
  v31 = *a3 & 0xFFFFFFFFFFFFFFF0LL;
  v32 = *(_QWORD *)v31;
  if ( *(_BYTE *)(*(_QWORD *)v31 + 16LL) == 42 )
    goto LABEL_24;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
  {
LABEL_42:
    if ( !(unsigned __int8)sub_F6AE00(v32, (__int64)a2, v29, v30, a5) )
      return 0;
    v99 = 0;
    goto LABEL_27;
  }
  v32 = sub_F63050(v32, a2, v29, v30);
  if ( !v32 )
  {
    v32 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_42;
  }
LABEL_24:
  v33 = (__int64 *)(*(_QWORD *)(v32 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)sub_F6AE00(*v33, (__int64)a2, v29, v30, a5)
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v33 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
  {
    return 0;
  }
  v99 = 1;
LABEL_27:
  v34 = *(_QWORD *)(a1 + 8);
  v35 = *(_DWORD *)(v34 + 136);
  if ( *(_DWORD *)(a1 + 16) == v35 && sub_1E5D2A0(v34, v35, 1) )
    return 0;
LABEL_3:
  v10 = a2[1].m128i_i32[2];
  v11 = *(__int64 **)a1;
  if ( v10 < 0 )
  {
    v115 = sub_101FC50(v11[34], v10);
    v10 = v115;
    v116 = v36;
  }
  if ( !a2[3].m128i_i16[4] || (v16 = a2[5].m128i_i64[0], (v16 & 2) == 0) )
  {
    sub_168B9F0((__int64)&v115, v11 + 1, v10, 0xC57u, 0);
    v12 = sub_15DD120((__int64)&v115, (__int64)a2);
    v13 = v12;
    if ( *(_BYTE *)(v12 + 120) )
    {
      sub_1E5E160((unsigned __int8 **)(v12 + 32), 2);
    }
    else if ( *(_BYTE *)(v12 + 132) )
    {
      v41 = sub_168B9E0((_QWORD *)v12);
      v42 = *(const char **)(v13 + 16);
      if ( v42 )
        v42 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v42 + 32LL))(*(_QWORD *)(v13 + 16));
      v113 = v42;
      v43 = sub_1587BC0(v41, (__int64 *)&v113, v37, v38, v39, v40);
      sub_1E5E160((unsigned __int8 **)(*v43 + 32LL * *(unsigned int *)(v13 + 128) + 8), 2);
    }
    goto LABEL_8;
  }
  v109 = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFFCLL) + 8);
  v17 = *(__int64 **)(v109 + 16);
  v18 = *v17;
  if ( (unsigned int)*v17 == 4 )
  {
    if ( *((_DWORD *)v17 + 4) == 1701736302 )
    {
      v110 = 1;
      goto LABEL_45;
    }
    if ( *((_DWORD *)v17 + 4) == 1801545079 )
    {
      v110 = 3;
      goto LABEL_45;
    }
    goto LABEL_16;
  }
  if ( (_DWORD)v18 == 6 )
  {
    if ( *((_DWORD *)v17 + 4) == 1869771891 && *((_WORD *)v17 + 10) == 26478 )
    {
      v110 = 2;
      goto LABEL_93;
    }
LABEL_16:
    sub_168B9F0((__int64)&v115, v11 + 1, v10, 0x19C0u, 0);
    v19 = sub_15DD120((__int64)&v115, (__int64)a2);
    v20 = v19;
    if ( *(_BYTE *)(v19 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v19 + 32), v109, 5u);
    }
    else if ( *(_BYTE *)(v19 + 132) )
    {
      v25 = sub_168B9E0((_QWORD *)v19);
      v26 = *(const char **)(v20 + 16);
      if ( v26 )
        v26 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v26 + 32LL))(*(_QWORD *)(v20 + 16));
      v113 = v26;
      v27 = sub_1587BC0(v25, (__int64 *)&v113, v21, v22, v23, v24);
      sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * *(unsigned int *)(v20 + 128) + 8), v109, 5u);
    }
    goto LABEL_8;
  }
  if ( (_DWORD)v18 != 13
    || v17[2] != 0x656C65726F747561LL
    || *((_DWORD *)v17 + 6) != 1852404577
    || *((_BYTE *)v17 + 28) != 103 )
  {
    goto LABEL_16;
  }
  v110 = 4;
LABEL_93:
  if ( (*(_BYTE *)(v11[29] + 107) & 4) == 0 )
    return 1;
LABEL_45:
  v44 = *a3 & 7;
  v45 = *a3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*a3 & 8) != 0 )
  {
    v45 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
    v44 |= *(__int64 *)((char *)&qword_18 + (*a3 & 0xFFFFFFFFFFFFFFF0LL));
  }
  if ( (*(_QWORD *)&byte_8[*a3 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
  {
    v111 = ((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[*a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
           | *(_QWORD *)&byte_8[*a3 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
         & 7;
    if ( v111 )
    {
      v106 = v44;
      v100 = v45;
      v83 = sub_A63F10(v11[31], *a3);
      v45 = v100;
      v44 = v106;
      v14 = v83;
      if ( (_BYTE)v83 )
      {
        sub_168B9F0((__int64)&v115, v11 + 1, v10, 0xC48u, 0);
        sub_1605D30((__int64)&v115, a3);
        sub_15F7200(&v115);
        return v14;
      }
      v84 = v110;
      if ( v111 != v110 )
      {
        while ( 1 )
        {
          v107 = v44;
          v101 = v45;
          v87 = sub_F6B0F0(v45, v84, v44, v45, a5);
          v45 = v101;
          if ( (v87 & 8) != 0 )
          {
            v84 = *(__int64 *)((char *)&qword_18 + (v87 & 0xFFFFFFFFFFFFFFF0LL)) | v87 & 7;
            v86 = *(_QWORD *)(v87 & 0xFFFFFFFFFFFFFFF0LL);
          }
          else
          {
            v85 = v87;
            v86 = v87 & 0xFFFFFFFFFFFFFFF0LL;
            v84 = v85 & 7;
          }
          v44 = v84 | v107;
          if ( v101 )
          {
            if ( v86 == v101 )
              break;
          }
          v45 = v86;
        }
        v44 &= 0xFFFFFFFFFFFFFE3FLL;
      }
    }
  }
  if ( !v99 )
  {
    if ( (*(_BYTE *)(v11[29] + 107) & 4) != 0 || v110 != 1 )
    {
      v50 = v45;
      v52 = *a3;
      *a3 = sub_A70C40(v11[31], v45, (int)(v110 << 6) | (unsigned __int64)v44);
      goto LABEL_58;
    }
LABEL_76:
    v80 = v11[31];
    a2[3].m128i_i8[10] |= 2u;
    v81 = (__m128i *)sub_1E61010((__int64 *)(v80 + 2352), 40, 3u, v45, a5, a6);
    sub_B16120(v81, v80, a2);
    v82 = (__int64)v81;
    v14 = 1;
    *a3 = sub_1E5D550(a1, v82, *a3, *a3);
    return v14;
  }
  v46 = *(unsigned int **)(a2->m128i_i64[0] + 16);
  v47 = *v46;
  v113 = (const char *)(v46 + 4);
  v114 = v47;
  switch ( v110 )
  {
    case 3u:
      v113 = "__weak";
      v114 = j__strlen("__weak");
      break;
    case 4u:
      v113 = "__autoreleasing";
      v114 = j__strlen("__autoreleasing");
      break;
    case 2u:
      v113 = "__strong";
      v114 = j__strlen("__strong");
      break;
  }
  sub_168B9F0((__int64)&v115, v11 + 1, v10, 0x1D1Bu, 0);
  v48 = sub_1682BA0((__int64)&v115, (__int64)&v113);
  v49 = v48;
  if ( *(_BYTE *)(v48 + 120) )
  {
    v103 = v48;
    sub_1E5E160((unsigned __int8 **)(v48 + 32), 2);
    v49 = v103;
  }
  else if ( *(_BYTE *)(v48 + 132) )
  {
    v104 = v48;
    v88 = sub_168B9E0((_QWORD *)v48);
    v91 = v104;
    v92 = v88;
    v93 = *(_QWORD *)(v104 + 16);
    if ( v93 )
    {
      v108 = v92;
      v93 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v93 + 32LL))(v93);
      v92 = v108;
      v91 = v104;
    }
    v105 = v91;
    v112 = v93;
    v94 = sub_1587BC0(v92, &v112, v91, v92, v89, v90);
    sub_1E5E160((unsigned __int8 **)(*v94 + 32LL * *(unsigned int *)(v105 + 128) + 8), 2);
    v49 = v105;
  }
  v50 = (__int64)a3;
  sub_1605D30(v49, a3);
  sub_15F7200(&v115);
  if ( (*(_BYTE *)(v11[29] + 107) & 4) == 0 && v110 == 1 )
    goto LABEL_76;
  v52 = *a3;
LABEL_58:
  if ( v10 )
  {
    v102 = (__m128i *)sub_9C3B30((__int64 *)(v11[31] + 2352), 48, 3u);
    sub_B162F0(v102, v11[31], a2, v109);
    v50 = (__int64)v102;
    *a3 = sub_1E5D550(a1, (__int64)v102, v52, *a3);
  }
  if ( v110 != 3 )
    return 1;
  v53 = *a3;
  v54 = *(_BYTE *)(v11[29] + 107);
  if ( (v54 & 0x10) != 0 || v99 )
  {
    v62 = (__int64 *)(v53 & 0xFFFFFFFFFFFFFFF0LL);
    v63 = *v62;
    if ( *(_BYTE *)(*v62 + 16) == 34
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v63 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34
      && (v63 = sub_F63050(*v62, v50, v51, v45)) != 0 )
    {
      v64 = *(_QWORD *)(v63 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v65 = *(_QWORD *)v64;
      v66 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v64 + 16LL) - 35;
      if ( (unsigned int)v66 > 1 )
        v65 = sub_F63050(v65, v50, v66, v45);
      v67 = sub_9C7D40(v65, v50, v66, v45, a5);
      if ( v67 )
      {
        v14 = sub_BABC30(v67, v50, v68, v69, v70, v71);
        if ( (_BYTE)v14 )
        {
          sub_168B9F0((__int64)&v115, v11 + 1, v10, 0xBE5u, 0);
          sub_15F7200(&v115);
          v75 = sub_A5E7C0(v63, (__int64)(v11 + 1), v72, v73, v74);
          v79 = sub_9C7D40(v75, (__int64)(v11 + 1), v76, v77, v78);
          sub_168B9F0((__int64)&v115, v11 + 1, *(_DWORD *)(v79 + 24), 0x16C4u, 0);
          sub_15F7200(&v115);
          return v14;
        }
      }
    }
    return 1;
  }
  v55 = v11[64];
  v56 = (v54 & 8) == 0 ? 3049 : 3047;
  if ( v55 )
  {
    if ( v10 < 0 )
    {
      v95 = sub_10212A0(v11[34], v10);
      v55 = v11[64];
      v10 = v95;
    }
    HIDWORD(v115) = v10;
    v57 = (const __m128i *)&v115;
    LOWORD(v115) = 2;
    v116 = v56;
    v118 = v53;
    v117 = 0;
    v58 = *(unsigned int *)(v55 + 16);
    v59 = *(_QWORD *)(v55 + 8);
    v60 = v58 + 1;
    v61 = (__m128i *)(v59 + 80 * v58);
    if ( v60 > *(unsigned int *)(v55 + 20) )
    {
      v96 = v55 + 8;
      v97 = v55 + 24;
      if ( v59 > (unsigned __int64)&v115 || v61 <= (__m128i *)&v115 )
      {
        sub_2237220(v96, v97, v60, 80);
        v61 = (__m128i *)(*(_QWORD *)(v55 + 8) + 80LL * *(unsigned int *)(v55 + 16));
      }
      else
      {
        sub_2237220(v96, v97, v60, 80);
        v98 = *(_QWORD *)(v55 + 8);
        v57 = (const __m128i *)((char *)&v115 + v98 - v59);
        v61 = (__m128i *)(80LL * *(unsigned int *)(v55 + 16) + v98);
      }
    }
    *v61 = _mm_loadu_si128(v57);
    v61[1] = _mm_loadu_si128(v57 + 1);
    v61[2] = _mm_loadu_si128(v57 + 2);
    v61[3] = _mm_loadu_si128(v57 + 3);
    v61[4] = _mm_loadu_si128(v57 + 4);
    ++*(_DWORD *)(v55 + 16);
    goto LABEL_9;
  }
  sub_168B9F0((__int64)&v115, v11 + 1, v10, v56, 0);
LABEL_8:
  sub_15F7200(&v115);
LABEL_9:
  a2[3].m128i_i8[10] |= 1u;
  return 1;
}
