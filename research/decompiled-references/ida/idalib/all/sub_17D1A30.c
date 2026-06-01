__int64 __fastcall sub_17D1A30(__int64 *a1, __int64 a2, char **a3, unsigned int a4, __m128 a5, __m128 a6)
{
  unsigned __int8 *v9; // r15
  __int64 v10; // rax
  unsigned __int8 v11; // di
  char v12; // al
  int v13; // r14d
  char v14; // di
  int v15; // eax
  unsigned __int8 v16; // dl
  unsigned int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 *v21; // r15
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // r13d
  __int64 v25; // rsi
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned int v36; // esi
  unsigned __int8 v37; // al
  int v38; // edx
  __int64 v39; // rcx
  __int64 *v40; // rdx
  __int64 v41; // rdi
  __int64 *v42; // rcx
  __int64 *v43; // rax
  __int64 *v44; // rcx
  __int64 *v45; // rax
  __int64 *v46; // rdx
  __int64 *v47; // rdx
  __int64 v48; // rdi
  __int64 *v49; // rsi
  __int64 *v50; // rax
  __int64 *v51; // rdx
  __int64 *v52; // rax
  __int64 *v53; // rcx
  char **v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v60; // r10
  _QWORD *v61; // rax
  _QWORD *v62; // rdx
  int v63; // eax
  unsigned int v64; // eax
  int v65; // eax
  char v66; // di
  unsigned __int64 *v67; // rax
  __int64 *v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r12
  __int64 v74; // rax
  int v75; // edx
  __int64 v76; // rax
  unsigned __int8 *v77; // rax
  int v78; // eax
  unsigned __int8 *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r8
  unsigned __int64 v82; // rax
  char v83; // al
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r15
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rax
  __int64 v92; // [rsp+8h] [rbp-1C0h]
  int v93; // [rsp+8h] [rbp-1C0h]
  __int64 v94; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v95; // [rsp+10h] [rbp-1B8h]
  unsigned int v96; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v97; // [rsp+28h] [rbp-1A0h]
  int v98; // [rsp+3Ch] [rbp-18Ch] BYREF
  __int64 v99; // [rsp+40h] [rbp-188h] BYREF
  char *v100; // [rsp+48h] [rbp-180h] BYREF
  char *v101; // [rsp+50h] [rbp-178h] BYREF
  char v102; // [rsp+58h] [rbp-170h]
  __int64 v103; // [rsp+5Ch] [rbp-16Ch]
  char v104; // [rsp+64h] [rbp-164h]
  void *v105; // [rsp+68h] [rbp-160h]
  __int64 v106; // [rsp+70h] [rbp-158h]
  _BYTE v107[16]; // [rsp+78h] [rbp-150h] BYREF
  char v108; // [rsp+88h] [rbp-140h]
  __int64 v109; // [rsp+E0h] [rbp-E8h] BYREF
  _QWORD *v110; // [rsp+E8h] [rbp-E0h]
  __int64 v111; // [rsp+F0h] [rbp-D8h]
  _OWORD v112[5]; // [rsp+F8h] [rbp-D0h] BYREF
  __int64 v113; // [rsp+148h] [rbp-80h]
  __int64 *v114; // [rsp+150h] [rbp-78h]
  __int64 v115; // [rsp+158h] [rbp-70h]
  int v116; // [rsp+160h] [rbp-68h]
  __int64 v117; // [rsp+168h] [rbp-60h] BYREF
  __int128 v118; // [rsp+170h] [rbp-58h]
  __int64 v119; // [rsp+180h] [rbp-48h]

  v9 = (unsigned __int8 *)*a3;
  v10 = a1[29];
  v11 = **a3;
  v12 = *(_BYTE *)(v10 + 1);
  v13 = v11 & 7;
  if ( v13 != 5 )
  {
    if ( (v12 & 8) != 0 && v13 == 4 )
    {
      LOBYTE(v13) = 4;
    }
    else if ( (**a3 & 7) != 0 )
    {
      LOBYTE(v13) = 0;
      sub_168B9F0((__int64)&v109, a1 + 1, *((_DWORD *)v9 + 42), 0x1Cu, 0);
      sub_15F7200(&v109);
      v77 = (unsigned __int8 *)*a3;
      *v77 &= 0xC0u;
      *((_QWORD *)v77 + 21) = 0;
      v11 = *v9;
    }
    goto LABEL_6;
  }
  if ( (v12 & 0x10) == 0 )
  {
    if ( (v12 & 8) == 0 && ((*(_DWORD *)v9 >> 12) & 0x7F) == 1 && !*((_DWORD *)a3 + 34) )
    {
      sub_168B9F0((__int64)&v109, a1 + 1, *((_DWORD *)v9 + 42), 0x1Cu, 0);
      v78 = *((_DWORD *)v9 + 42);
      v103 = 0;
      v105 = v107;
      v104 = 0;
      v106 = 0;
      v107[0] = 0;
      v108 = 0;
      LODWORD(v101) = v78;
      HIDWORD(v101) = v78;
      v102 = 1;
      sub_1589170((__int64)&v109, &v101);
      if ( v105 != v107 )
        operator delete(v105);
      sub_15F7200(&v109);
      v79 = (unsigned __int8 *)*a3;
      *v79 &= 0xC0u;
      *((_QWORD *)v79 + 21) = 0;
      v11 = *v9;
    }
LABEL_6:
    v14 = v11 >> 3;
    v15 = v14 & 3;
    if ( (v14 & 3) == 0 )
      goto LABEL_7;
    goto LABEL_96;
  }
  sub_168B9F0((__int64)&v109, a1 + 1, *((_DWORD *)v9 + 42), (v12 & 0x40) == 0 ? 6839 : 5660, 0);
  v65 = *((_DWORD *)v9 + 42);
  v103 = 0;
  v105 = v107;
  v104 = 0;
  v106 = 0;
  v107[0] = 0;
  v108 = 0;
  LODWORD(v101) = v65;
  HIDWORD(v101) = v65;
  v102 = 1;
  sub_1589170((__int64)&v109, &v101);
  if ( v105 != v107 )
    operator delete(v105);
  sub_15F7200(&v109);
  v66 = *v9 >> 3;
  v15 = v66 & 3;
  if ( (v66 & 3) != 0 )
  {
LABEL_96:
    v93 = v15;
    sub_168B9F0((__int64)&v109, a1 + 1, *((_DWORD *)v9 + 43), 0xFDFu, 0);
    v101 = sub_15AC8E0(v93);
    sub_15AFC70((__int64)&v109, &v101);
    sub_15F7200(&v109);
  }
LABEL_7:
  v16 = v9[4];
  if ( (v9[3] >> 7) | v16 & 1 )
  {
    if ( (v9[3] & 0x80u) != 0 )
      v17 = *((_DWORD *)v9 + 60);
    else
      v17 = *((_DWORD *)v9 + 65);
    sub_168B9F0((__int64)&v109, a1 + 1, v17, 0xFA3u, 0);
    LODWORD(v101) = (*(_BYTE *)(a1[29] + 1) & 0x40) != 0;
    sub_1588370((__int64)&v109, (unsigned int *)&v101);
    sub_15F7200(&v109);
    v16 = v9[4];
  }
  if ( (v16 & 0x30) != 0 )
  {
    sub_168B9F0((__int64)&v109, a1 + 1, *((_DWORD *)v9 + 68), 0xFB4u, 0);
    LODWORD(v100) = 0;
    v76 = sub_1587D10((__int64)&v109, (int *)&v100);
    LODWORD(v101) = ((unsigned __int8)(*a3)[4] >> 4) & 3;
    sub_1587D10(v76, (int *)&v101);
    sub_15F7200(&v109);
  }
  sub_17A3FF0((__int64)a1, (__int64)v9);
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
    sub_186C8D0(a1, a3);
  if ( a3[2] )
  {
    sub_168B9F0((__int64)&v109, a1 + 1, *((_DWORD *)a3 + 20), 0x131Bu, 0);
    v101 = a3[1];
    sub_1587DB0((__int64)&v109, (__int64 *)&v101);
    sub_15F7200(&v109);
  }
  v18 = *((_DWORD *)a3 + 14);
  if ( v18 <= 9 )
  {
    if ( ((1LL << v18) & 0x35E) != 0 )
    {
      sub_168B9F0((__int64)&v109, a1 + 1, *((_DWORD *)a3 + 20), 0xCE5u, 0);
      sub_17B41B0((__int64)&v101, a1, (unsigned int *)a3 + 14, *(double *)a5.m128_u64, v80, v81, (__int64)&v101);
      v100 = v101;
      sub_15894B0((__int64)&v109, (__int64 *)&v100);
      sub_15F7200(&v109);
    }
    else if ( ((1LL << v18) & 0xA0) != 0 )
    {
      sub_168B9F0((__int64)&v109, a1 + 1, *((_DWORD *)a3 + 20), 0xCE6u, 0);
      sub_15F7200(&v109);
    }
  }
  v21 = (__int64 *)sub_1E85170(a1, a3);
  v92 = *v21;
  if ( !*((_DWORD *)a3 + 14) )
  {
    v22 = (__int64)a3[8];
    v23 = *((unsigned int *)a3 + 20);
    v99 = v22;
    if ( !v22 )
      goto LABEL_25;
    v115 = v22;
    v116 = v23;
    v110 = v112;
    v111 = 0x800000000LL;
    v112[4] = 0;
    v109 = 0;
    v113 = 0;
    v114 = a1;
    sub_B85890(&v117, v22);
    a5 = 0;
    v119 = 65537;
    v118 = 0;
    sub_1A395A0(&v109);
    sub_1A49A10(a1, &v109, a2, 0, 0);
    if ( !(_DWORD)v111 )
      goto LABEL_24;
    v60 = *v110 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (_DWORD)v109 == 2 && ((v83 = *(_BYTE *)(v60 + 28) & 0x7F, ((v83 + 61) & 0x7Fu) <= 1) || v83 == 47) )
    {
      sub_1CC2540(a1, *((unsigned int *)a3 + 20), *v110 & 0xFFFFFFFFFFFFFFF8LL, 0);
    }
    else if ( v60 )
    {
      if ( *(_BYTE *)(a2 + 100) )
      {
        v61 = *(_QWORD **)(a2 + 80);
        v62 = &v61[*(unsigned int *)(a2 + 92)];
        if ( v61 == v62 )
          goto LABEL_24;
        while ( v60 != *v61 )
        {
          if ( v62 == ++v61 )
            goto LABEL_24;
        }
      }
      else
      {
        v95 = *v110 & 0xFFFFFFFFFFFFFFF8LL;
        v90 = sub_2236570(a2 + 80, v95);
        v60 = v95;
        if ( !v90 )
          goto LABEL_24;
      }
      v97 = v60;
      sub_168B9F0((__int64)&v101, a1 + 1, *((_DWORD *)a3 + 20), 0x37u, 0);
      sub_17AE460((__int64)&v101, &v99);
      sub_15F7200(&v101);
      sub_168B9F0((__int64)&v101, a1 + 1, *(_DWORD *)(v97 + 24), 0x70u, 0);
      sub_15F7200(&v101);
      v63 = *((_DWORD *)a3 + 20);
      v99 = 0;
      *((_DWORD *)a3 + 14) = 0;
      a3[8] = nullptr;
      *((_DWORD *)a3 + 21) = v63;
      *((_BYTE *)a3 + 720) |= 1u;
    }
LABEL_24:
    sub_169D230((__int64)&v109);
    v22 = v99;
    v23 = *((unsigned int *)a3 + 20);
    goto LABEL_25;
  }
  v99 = 0;
  v23 = *((unsigned int *)a3 + 20);
  v22 = 0;
LABEL_25:
  v24 = *((_DWORD *)a3 + 22);
  v96 = v23;
  v94 = v22;
  v25 = *(_QWORD *)(*(_QWORD *)(a1[31] + 2264) + 80LL);
  v26 = sub_704780((__int64 *)(v25 + 72), v25, v19, v23, v22, v20);
  if ( v26 )
    v26 += 5;
  v27 = sub_17D1270(a1, (__int64)v26, v24, v96, v94, v92, a5, a6, v21, v13);
  v30 = v27;
  if ( ((_BYTE)a3[90] & 1) != 0 || ((*(_DWORD *)*a3 >> 12) & 0x7F) == 0x45 )
    sub_B88650(v27, 1);
  if ( !a4 )
    goto LABEL_34;
  if ( (*(_BYTE *)(a1[29] + 2) & 1) != 0 )
  {
    if ( !sub_B799A0(v30) )
      goto LABEL_32;
  }
  else
  {
    sub_168B9F0((__int64)&v109, a1 + 1, a4, 0xDF4u, 0);
    v101 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    sub_1587DB0((__int64)&v109, (__int64 *)&v101);
    sub_15F7200(&v109);
    if ( !sub_B799A0(v30) )
    {
LABEL_32:
      *(_DWORD *)(v30 + 100) = a4;
      v35 = sub_15F2610((__int64)a1, 0, v31, v32, v33, v34);
      if ( v35 )
        *(_QWORD *)(v35 + 1608) = v30;
      goto LABEL_34;
    }
  }
  v64 = sub_B73090(v30);
  sub_168B9F0((__int64)&v109, a1 + 1, v64, 0xEC8u, 0);
  v101 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  sub_1587DB0((__int64)&v109, (__int64 *)&v101);
  sub_15F7200(&v109);
LABEL_34:
  v36 = *(unsigned __int16 *)(a2 + 20);
  *(_WORD *)(a2 + 20) = v36 + 1;
  *(_DWORD *)(v30 + 96) = *(_DWORD *)(v30 + 96) & 0xFFF01FFF
                        | ((((unsigned __int8)*(_WORD *)(a2 + 18) - 1) & 0x7F) << 13);
  if ( v36 > 0xFE )
    sub_B74850(v30, v36);
  else
    *(_WORD *)(v30 + 98) = *(_WORD *)(v30 + 98) & 0xF00F | (16 * (unsigned __int8)v36);
  v37 = *(_BYTE *)(v30 + 28) & 0x7F;
  v38 = v37;
  if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 )
  {
    v39 = (unsigned int)v37 - 26;
    if ( (unsigned int)v39 <= 0x1A )
    {
      sub_17AE510((__int64)a1, v30, v37, v39, v28, v29);
      v37 = *(_BYTE *)(v30 + 28) & 0x7F;
      v38 = v37;
    }
  }
  if ( (unsigned int)(v38 - 40) > 6 || v37 == 43 )
    goto LABEL_55;
  if ( !*(_BYTE *)(a2 + 452) )
    goto LABEL_129;
  v40 = *(__int64 **)(a2 + 432);
  v41 = *(unsigned int *)(a2 + 444);
  v42 = &v40[v41];
  if ( v40 != v42 )
  {
    v43 = *(__int64 **)(a2 + 432);
    if ( v30 == *v40 )
      goto LABEL_49;
    do
    {
      if ( v42 == ++v43 )
        break;
    }
    while ( v30 != *v43 );
  }
  if ( (unsigned int)v41 < *(_DWORD *)(a2 + 440) )
  {
    *(_DWORD *)(a2 + 444) = v41 + 1;
    *v42 = v30;
    v40 = *(__int64 **)(a2 + 432);
    v43 = &v40[v41];
  }
  else
  {
LABEL_129:
    v43 = (__int64 *)sub_2236760(a2 + 432, v30);
    v40 = *(__int64 **)(a2 + 432);
    if ( !*(_BYTE *)(a2 + 452) )
    {
      v44 = &v40[*(unsigned int *)(a2 + 440)];
      goto LABEL_50;
    }
  }
LABEL_49:
  v44 = &v40[*(unsigned int *)(a2 + 444)];
LABEL_50:
  if ( v44 != v43 && (unsigned __int64)*v43 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v45 = v43 + 1;
    do
    {
      v46 = v45;
      if ( v44 == v45 )
        break;
      ++v45;
    }
    while ( (unsigned __int64)*v46 >= 0xFFFFFFFFFFFFFFFELL );
  }
LABEL_55:
  if ( !*(_BYTE *)(a2 + 100) )
    goto LABEL_65;
  v47 = *(__int64 **)(a2 + 80);
  v48 = *(unsigned int *)(a2 + 92);
  v49 = &v47[v48];
  if ( v47 != v49 )
  {
    v50 = *(__int64 **)(a2 + 80);
    if ( v30 == *v47 )
      goto LABEL_63;
    do
    {
      if ( v49 == ++v50 )
        break;
    }
    while ( v30 != *v50 );
  }
  if ( (unsigned int)v48 < *(_DWORD *)(a2 + 88) )
  {
    *(_DWORD *)(a2 + 92) = v48 + 1;
    *v49 = v30;
    v47 = *(__int64 **)(a2 + 80);
    v50 = &v47[v48];
  }
  else
  {
LABEL_65:
    v50 = (__int64 *)sub_2236760(a2 + 80, v30);
    v47 = *(__int64 **)(a2 + 80);
    if ( !*(_BYTE *)(a2 + 100) )
    {
      v51 = &v47[*(unsigned int *)(a2 + 88)];
      goto LABEL_67;
    }
  }
LABEL_63:
  v51 = &v47[*(unsigned int *)(a2 + 92)];
LABEL_67:
  if ( v51 != v50 && (unsigned __int64)*v50 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v52 = v50 + 1;
    do
    {
      v53 = v52;
      if ( v51 == v52 )
        break;
      ++v52;
    }
    while ( (unsigned __int64)*v53 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( v99 )
    sub_15C17C0((__int64)(a1 + 326), v30);
  v54 = (char **)a2;
  sub_1836CB0(a1, a2, v30, a3);
  if ( *((_DWORD *)*a3 + 67) )
  {
    sub_168B9F0((__int64)&v109, a1 + 1, *(_DWORD *)(v30 + 24), 0x1070u, 0);
    v98 = 1;
    v72 = sub_1587D10((__int64)&v109, &v98);
    v73 = v72;
    if ( *(_BYTE *)(v72 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v72 + 32), v30, 0xAu);
    }
    else if ( *(_BYTE *)(v72 + 132) )
    {
      v87 = sub_168B9E0((_QWORD *)v72);
      v88 = *(_QWORD *)(v73 + 16);
      if ( v88 )
        v88 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v88 + 32LL))(*(_QWORD *)(v73 + 16));
      v101 = (char *)v88;
      v89 = sub_1587BC0(v87, (__int64 *)&v101, v84, v85, v86, (__int64)&v101);
      sub_AE9DF0((unsigned __int8 **)(*v89 + 32LL * *(unsigned int *)(v73 + 128) + 8), v30, 0xAu);
    }
    LODWORD(v100) = *((_DWORD *)*a3 + 67);
    HIDWORD(v100) = (_DWORD)v100;
    v74 = sub_1587DB0(v73, (__int64 *)&v100);
    v75 = *((_DWORD *)*a3 + 67);
    v54 = &v101;
    v103 = 0;
    v104 = 0;
    v105 = v107;
    v106 = 0;
    v107[0] = 0;
    v108 = 0;
    LODWORD(v101) = v75;
    HIDWORD(v101) = v75;
    v102 = 1;
    sub_1589170(v74, &v101);
    if ( v105 != v107 )
      operator delete(v105);
    sub_15F7200(&v109);
  }
  if ( (*(_BYTE *)(v30 + 29) & 1) == 0 )
    goto LABEL_76;
  v67 = sub_B8C3D0(v30, (__int64)v54, v55, v56, v57, v58);
  v68 = (__int64 *)*v67;
  v69 = *v67 + 8LL * *((unsigned int *)v67 + 2);
  if ( *v67 >= v69 )
  {
    if ( v68 == (__int64 *)v69 )
      goto LABEL_76;
    if ( *(_WORD *)(*(_QWORD *)v69 + 36LL) != 148 )
    {
      v70 = (__int64 *)(v69 + 8);
      while ( v68 != v70 )
      {
        v71 = *v70++;
        if ( *(_WORD *)(v71 + 36) == 148 )
          goto LABEL_121;
      }
      goto LABEL_76;
    }
LABEL_121:
    sub_168B9F0((__int64)&v109, a1 + 1, *(_DWORD *)(v30 + 24), 0xD03u, 0);
    sub_15F7200(&v109);
    goto LABEL_76;
  }
  v82 = *v67;
  while ( *(_WORD *)(*(_QWORD *)v82 + 36LL) != 148 )
  {
    v82 += 8LL;
    if ( v69 == v82 )
      goto LABEL_76;
  }
  if ( v69 != v82 )
    goto LABEL_121;
LABEL_76:
  if ( (*(_BYTE *)(a1[29] + 47) & 0x20) != 0 )
    sub_17A40B0((__int64)a1, v30);
  return v30;
}
