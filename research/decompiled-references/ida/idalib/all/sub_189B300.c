__m128i *__fastcall sub_189B300(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, char a5, double a6, __m128 a7)
{
  _QWORD *v11; // rax
  __int64 v12; // r15
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  int v16; // edx
  __int64 *v17; // r9
  __int64 v18; // rax
  int v19; // eax
  int v20; // r10d
  __int64 *v21; // r11
  __int64 v22; // r8
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  __m128i *v29; // r15
  __int64 *v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // al
  __m128i **v37; // rdx
  __int64 v38; // rdi
  __m128i **v39; // rcx
  __m128i **v40; // rax
  __m128i **v41; // rcx
  __m128i **v42; // rax
  __m128i **v43; // rdx
  __m128i **v44; // rdx
  __int64 v45; // rdi
  __m128i **v46; // rsi
  __m128i **v47; // rax
  __m128i **v48; // rdx
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rdi
  int v55; // edx
  __m128i **v56; // rax
  __m128i **v57; // rcx
  unsigned __int64 *v59; // rax
  __int64 *v60; // rdx
  unsigned __int64 v61; // rcx
  __int64 *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // r9
  unsigned __int8 v71; // al
  _QWORD *v72; // rax
  _QWORD *v73; // rdx
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  int v76; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 v77; // [rsp+0h] [rbp-1C8h]
  __int64 v78; // [rsp+8h] [rbp-1C0h]
  __int64 v80; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v81; // [rsp+18h] [rbp-1B0h]
  __int64 *v82; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v83; // [rsp+20h] [rbp-1A8h]
  __int64 *v84; // [rsp+20h] [rbp-1A8h]
  __int64 v85; // [rsp+28h] [rbp-1A0h]
  __int64 v86; // [rsp+28h] [rbp-1A0h]
  __int64 *v87; // [rsp+30h] [rbp-198h]
  __int64 *v88; // [rsp+30h] [rbp-198h]
  int v89; // [rsp+3Ch] [rbp-18Ch]
  int v90; // [rsp+3Ch] [rbp-18Ch]
  __int64 *v91; // [rsp+48h] [rbp-180h] BYREF
  __int64 v92[18]; // [rsp+50h] [rbp-178h] BYREF
  __int64 v93; // [rsp+E0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+E8h] [rbp-E0h]
  __int64 v95; // [rsp+F0h] [rbp-D8h]
  _BYTE v96[64]; // [rsp+F8h] [rbp-D0h] BYREF
  void *v97[2]; // [rsp+138h] [rbp-90h]
  __int64 v98; // [rsp+148h] [rbp-80h]
  _QWORD *v99; // [rsp+150h] [rbp-78h]
  __int64 v100; // [rsp+158h] [rbp-70h]
  int v101; // [rsp+160h] [rbp-68h]
  __int64 v102; // [rsp+168h] [rbp-60h] BYREF
  __int128 v103; // [rsp+170h] [rbp-58h]
  bool v104; // [rsp+180h] [rbp-48h]
  bool v105; // [rsp+181h] [rbp-47h]
  char v106; // [rsp+182h] [rbp-46h]
  bool v107; // [rsp+183h] [rbp-45h]
  bool v108; // [rsp+184h] [rbp-44h]
  char v109; // [rsp+185h] [rbp-43h]
  __int16 v110; // [rsp+186h] [rbp-42h]

  v11 = (_QWORD *)sub_168B6C0((__int64)a1);
  v12 = (__int64)v11;
  if ( *(_QWORD *)(a3 + 16) )
  {
    v78 = sub_1E5F010(*(_QWORD *)(a3 + 16), &v91);
  }
  else
  {
    v64 = sub_A8A250(v11);
    v68 = *(_QWORD *)(v64 + 48);
    if ( v68 )
      v69 = v68 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v69 = sub_A7AA70(v12, v64, 0, v65, v66, v67);
    v78 = v69;
    v91 = nullptr;
  }
  v13 = sub_1A3A250(*a1);
  v14 = (_QWORD *)*a1;
  v15 = *(_QWORD *)a3;
  v16 = *(_DWORD *)(a3 + 8);
  v76 = v13;
  ptr = v96;
  v99 = v14;
  v101 = v16;
  v95 = 0x800000000LL;
  *(_OWORD *)v97 = 0;
  v100 = v15;
  v93 = 0;
  v98 = 0;
  sub_B85890(&v102, v15);
  v103 = 0;
  v106 = 1;
  v104 = v76 != 0;
  v105 = v76 == 2;
  v109 = 0;
  v107 = v76 == 0;
  v108 = v76 == 0;
  v110 = 0;
  sub_1A395A0(&v93);
  sub_1A49A10(*a1, &v93, a2, 0, 0);
  if ( (_DWORD)v93 == 2 )
  {
    v70 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
    v71 = *(_BYTE *)(v70 + 28) & 0x7F;
    if ( (unsigned int)v71 - 53 <= 1 || ((v71 + 52) & 0x7Fu) <= 1 )
      v70 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_BYTE *)(a2 + 100) )
    {
      v72 = *(_QWORD **)(a2 + 80);
      v73 = &v72[*(unsigned int *)(a2 + 92)];
      if ( v72 == v73 )
        goto LABEL_4;
      while ( v70 != *v72 )
      {
        if ( v73 == ++v72 )
          goto LABEL_4;
      }
    }
    else
    {
      v77 = v70;
      v75 = sub_2236570(a2 + 80, v70);
      v70 = v77;
      if ( !v75 )
        goto LABEL_4;
    }
    v83 = v70;
    sub_168B9F0((__int64)v92, a1, *(_DWORD *)(a3 + 8), (a5 != 0) + 142, 0);
    sub_169D880((__int64)v92, (__int64 *)a3);
    sub_15F7200(v92);
    sub_168B9F0((__int64)v92, a1, *(_DWORD *)(v83 + 24), 0x70u, 0);
    sub_15F7200(v92);
  }
LABEL_4:
  v17 = v91;
  if ( v91 )
  {
    v18 = *v91;
    v92[1] = (__int64)(v91 + 1);
    v92[0] = v18;
    v19 = sub_F6CCB0(v92, (__m128)0LL);
    v17 = v91;
    v20 = v19;
  }
  else
  {
    v20 = *(_DWORD *)(a3 + 8);
  }
  v21 = (__int64 *)*a1;
  v22 = *(_QWORD *)a3;
  v23 = *(_QWORD *)(*(_QWORD *)(v12 + 2264) + 80LL);
  v24 = *(_QWORD *)(v23 + 72);
  v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v24 & 1) == 0 )
  {
    v26 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v27 = v24 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v24 & 2) == 0 )
        goto LABEL_9;
      v49 = v23 & 0xFFFFFFFFFFFFFFFBLL;
      v80 = v26[2295];
      if ( v80 )
      {
        v50 = v26[294];
        v26[304] += 24LL;
        v51 = (v50 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v26[295] >= v51 + 24 && v50 )
        {
          v26[294] = v51 + 24;
          v52 = (v50 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v90 = v20;
          v88 = v17;
          v86 = v22;
          v84 = v21;
          v52 = sub_986170((__int64)(v26 + 294), 24, 24, 3, v22, (__int64)v17);
          v20 = v90;
          v17 = v88;
          v22 = v86;
          v21 = v84;
          v51 = v52 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_DWORD *)(v52 + 8) = 0;
        v49 = v51 | 4;
        *(_QWORD *)(v52 + 16) = v23;
        *(_QWORD *)v52 = v80;
      }
      v25 = v49 & 0xFFFFFFFFFFFFFFFELL;
      v24 = v25 | 1;
      *(_QWORD *)(v23 + 72) = v25 | 1;
    }
  }
  v53 = v24 & 0xFFFFFFFFFFFFFFF8LL;
  v27 = v53;
  if ( v25 && (v25 & 4) != 0 )
  {
    v27 = 0;
    if ( !v53 )
      goto LABEL_11;
    v54 = *(_QWORD *)v53;
    v55 = *(_DWORD *)(*(_QWORD *)v53 + 12LL);
    if ( *(_DWORD *)(v53 + 8) != v55 )
    {
      *(_DWORD *)(v53 + 8) = v55;
      v89 = v20;
      v87 = v17;
      v85 = v22;
      v82 = v21;
      v81 = v53;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 152LL))(v54, v23);
      v20 = v89;
      v17 = v87;
      v22 = v85;
      v21 = v82;
      v53 = v81;
    }
    v27 = *(_QWORD *)(v53 + 16);
  }
LABEL_9:
  if ( v27 )
    v27 += 40LL;
LABEL_11:
  v28 = sub_17D1270(v21, v27, v20, *(unsigned int *)(a3 + 8), v22, v78, (__m128)0LL, a7, v17, 0);
  *(_BYTE *)(v28 + 97) |= 0x10u;
  v29 = (__m128i *)v28;
  if ( a4 > 0xFE )
    sub_B74850(v28, a4);
  else
    *(_WORD *)(v28 + 98) = *(_WORD *)(v28 + 98) & 0xF00F | (16 * (unsigned __int8)a4);
  v29[6].m128i_i32[0] = ((*(_BYTE *)(a3 + 24) & 0x7F) << 13) | v29[6].m128i_i32[0] & 0xFFF01FFF;
  v30 = (__int64 *)*a1;
  LOWORD(v92[0]) = 1;
  sub_1836B60(v30, v30[24], v29, a3 + 56, v92, (__m128)0LL, (__m128i)a7);
  v31 = *(_QWORD *)(*a1 + 192);
  sub_16660F0(*a1, v31, (__int64)v29);
  if ( (v29[1].m128i_i8[13] & 1) == 0 )
    goto LABEL_14;
  v59 = sub_B8C3D0((__int64)v29, v31, v32, v33, v34, v35);
  v60 = (__int64 *)*v59;
  v61 = *v59 + 8LL * *((unsigned int *)v59 + 2);
  if ( *v59 >= v61 )
  {
    if ( v60 == (__int64 *)v61 )
      goto LABEL_14;
    if ( *(_WORD *)(*(_QWORD *)v61 + 36LL) != 148 )
    {
      v62 = (__int64 *)(v61 + 8);
      while ( v60 != v62 )
      {
        v63 = *v62++;
        if ( *(_WORD *)(v63 + 36) == 148 )
          goto LABEL_96;
      }
      goto LABEL_14;
    }
LABEL_96:
    sub_168B9F0((__int64)v92, a1, v29[1].m128i_u32[2], 0xD03u, 0);
    sub_15F7200(v92);
    sub_B88650((__int64)v29, 1);
    goto LABEL_14;
  }
  v74 = *v59;
  while ( *(_WORD *)(*(_QWORD *)v74 + 36LL) != 148 )
  {
    v74 += 8LL;
    if ( v61 == v74 )
      goto LABEL_14;
  }
  if ( v61 != v74 )
    goto LABEL_96;
LABEL_14:
  v36 = v29[1].m128i_i8[12] & 0x7F;
  if ( (unsigned int)v36 - 40 <= 6 && v36 != 43 )
  {
    if ( !*(_BYTE *)(a2 + 452) )
      goto LABEL_97;
    v37 = *(__m128i ***)(a2 + 432);
    v38 = *(unsigned int *)(a2 + 444);
    v39 = &v37[v38];
    if ( v37 != v39 )
    {
      v40 = *(__m128i ***)(a2 + 432);
      if ( v29 == *v37 )
        goto LABEL_24;
      do
      {
        if ( v39 == ++v40 )
          break;
      }
      while ( v29 != *v40 );
    }
    if ( (unsigned int)v38 < *(_DWORD *)(a2 + 440) )
    {
      *(_DWORD *)(a2 + 444) = v38 + 1;
      *v39 = v29;
      v37 = *(__m128i ***)(a2 + 432);
      v40 = &v37[v38];
    }
    else
    {
LABEL_97:
      v40 = (__m128i **)sub_2236760(a2 + 432, v29);
      v37 = *(__m128i ***)(a2 + 432);
      if ( !*(_BYTE *)(a2 + 452) )
      {
        v41 = &v37[*(unsigned int *)(a2 + 440)];
        goto LABEL_25;
      }
    }
LABEL_24:
    v41 = &v37[*(unsigned int *)(a2 + 444)];
LABEL_25:
    if ( v41 != v40 && (unsigned __int64)*v40 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v42 = v40 + 1;
      do
      {
        v43 = v42;
        if ( v41 == v42 )
          break;
        ++v42;
      }
      while ( (unsigned __int64)*v43 >= 0xFFFFFFFFFFFFFFFELL );
    }
  }
  if ( !*(_BYTE *)(a2 + 100) )
    goto LABEL_51;
  v44 = *(__m128i ***)(a2 + 80);
  v45 = *(unsigned int *)(a2 + 92);
  v46 = &v44[v45];
  if ( v44 != v46 )
  {
    v47 = *(__m128i ***)(a2 + 80);
    if ( v29 == *v44 )
      goto LABEL_38;
    do
    {
      if ( v46 == ++v47 )
        break;
    }
    while ( v29 != *v47 );
  }
  if ( (unsigned int)v45 < *(_DWORD *)(a2 + 88) )
  {
    *(_DWORD *)(a2 + 92) = v45 + 1;
    *v46 = v29;
    v44 = *(__m128i ***)(a2 + 80);
    v47 = &v44[v45];
  }
  else
  {
LABEL_51:
    v47 = (__m128i **)sub_2236760(a2 + 80, v29);
    v44 = *(__m128i ***)(a2 + 80);
    if ( !*(_BYTE *)(a2 + 100) )
    {
      v48 = &v44[*(unsigned int *)(a2 + 88)];
      goto LABEL_53;
    }
  }
LABEL_38:
  v48 = &v44[*(unsigned int *)(a2 + 92)];
LABEL_53:
  if ( v48 != v47 && (unsigned __int64)*v47 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v56 = v47 + 1;
    do
    {
      v57 = v56;
      if ( v48 == v56 )
        break;
      ++v56;
    }
    while ( (unsigned __int64)*v57 >= 0xFFFFFFFFFFFFFFFELL );
  }
  sub_15C17C0(*a1 + 2608, (__int64)v29);
  if ( !v107 )
  {
LABEL_68:
    if ( !v108 || (_DWORD)v93 != 5 )
      goto LABEL_62;
LABEL_70:
    sub_1A445B0(v99, &v93);
    goto LABEL_62;
  }
  if ( (_DWORD)v93 == 5 )
  {
    if ( !v108 )
      goto LABEL_62;
    goto LABEL_70;
  }
  if ( v97[1] && (*(_BYTE *)(v99[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v99, (__int64)&v93);
    goto LABEL_68;
  }
LABEL_62:
  if ( v97[0] )
    sub_1A39780(v97[0]);
  if ( ptr != v96 )
    free(ptr);
  return v29;
}
