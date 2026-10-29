__int64 __fastcall sub_1CD25D0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int16 a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        __int64 a9)
{
  __int64 *v13; // rax
  char *v14; // r14
  char v15; // al
  char v16; // al
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned __int64 v20; // r14
  _QWORD *v21; // rdi
  __int64 *v22; // r10
  __int64 v23; // rcx
  __int64 v24; // r8
  char v25; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdi
  int v31; // eax
  unsigned __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r14
  int v45; // r13d
  __int64 v46; // rbp
  __int64 v47; // rcx
  unsigned __int8 v48; // al
  __int64 *v49; // rcx
  __int64 v50; // rdi
  __int64 *v51; // rdx
  __int64 *v52; // rax
  __int64 *v53; // rcx
  __int64 *v54; // rax
  __int64 *v55; // rdx
  __int64 *v56; // rdx
  __int64 v57; // rdi
  __int64 *v58; // rcx
  __int64 *v59; // rax
  __int64 *v60; // rcx
  _QWORD *v61; // r11
  __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 *v67; // rax
  __int64 *v68; // rdx
  unsigned int v69; // r14d
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  __int64 v75; // [rsp-8h] [rbp-170h]
  bool v76; // [rsp+8h] [rbp-160h]
  unsigned int v77; // [rsp+10h] [rbp-158h]
  unsigned int v78; // [rsp+10h] [rbp-158h]
  __int64 v79; // [rsp+10h] [rbp-158h]
  unsigned int v80; // [rsp+10h] [rbp-158h]
  unsigned int v81; // [rsp+10h] [rbp-158h]
  unsigned int v82; // [rsp+10h] [rbp-158h]
  unsigned int v83; // [rsp+10h] [rbp-158h]
  unsigned __int8 v84; // [rsp+18h] [rbp-150h]
  __int64 v85; // [rsp+18h] [rbp-150h]
  int v86; // [rsp+20h] [rbp-148h]
  __int64 v87; // [rsp+20h] [rbp-148h]
  __int64 v89; // [rsp+28h] [rbp-140h]
  unsigned __int64 v91; // [rsp+38h] [rbp-130h]
  __int64 v92; // [rsp+38h] [rbp-130h]
  __int64 v93; // [rsp+38h] [rbp-130h]
  __int64 *v94; // [rsp+40h] [rbp-128h]
  __int64 *v95; // [rsp+40h] [rbp-128h]
  char v96; // [rsp+48h] [rbp-120h]
  int v97; // [rsp+4Ch] [rbp-11Ch]
  int v98; // [rsp+4Ch] [rbp-11Ch]
  __int64 *v99; // [rsp+58h] [rbp-110h] BYREF
  unsigned __int64 v100; // [rsp+60h] [rbp-108h] BYREF
  _BYTE v101[12]; // [rsp+68h] [rbp-100h]
  char v102; // [rsp+74h] [rbp-F4h]
  void *v103; // [rsp+78h] [rbp-F0h]
  __int64 v104; // [rsp+80h] [rbp-E8h]
  _BYTE v105[16]; // [rsp+88h] [rbp-E0h] BYREF
  char v106; // [rsp+98h] [rbp-D0h]
  __m128i v107[12]; // [rsp+A0h] [rbp-C8h] BYREF

  v13 = (__int64 *)sub_1E85170(a1, a3);
  v14 = *(char **)a3;
  v99 = v13;
  v15 = *v14;
  if ( (*v14 & 7) != 0 )
  {
    v81 = *((_DWORD *)v14 + 42);
    sub_168B9F0((__int64)v107, a1 + 1, v81, 0xFC2u, 0);
    *(_QWORD *)&v101[4] = 0;
    v103 = v105;
    v102 = 0;
    v104 = 0;
    v105[0] = 0;
    v106 = 0;
    LODWORD(v100) = v81;
    HIDWORD(v100) = v81;
    v101[0] = 1;
    sub_1589170((__int64)v107, &v100);
    if ( v103 != v105 )
      operator delete(v103);
    sub_15F7200(v107);
    v15 = *v14;
  }
  if ( (v15 & 0x18) != 0 )
  {
    v80 = *((_DWORD *)v14 + 43);
    sub_168B9F0((__int64)v107, a1 + 1, v80, 0xFC2u, 0);
    *(_QWORD *)&v101[4] = 0;
    v103 = v105;
    v102 = 0;
    v104 = 0;
    v105[0] = 0;
    v106 = 0;
    LODWORD(v100) = v80;
    HIDWORD(v100) = v80;
    v101[0] = 1;
    sub_1589170((__int64)v107, &v100);
    if ( v103 != v105 )
      operator delete(v103);
    sub_15F7200(v107);
  }
  v16 = v14[4];
  if ( v16 & 1 | ((unsigned __int8)v14[3] >> 7) )
  {
    if ( v14[3] < 0 )
      v17 = *((_DWORD *)v14 + 60);
    else
      v17 = *((_DWORD *)v14 + 65);
    v77 = v17;
    sub_168B9F0((__int64)v107, a1 + 1, v17, 0xFC2u, 0);
    *(_QWORD *)&v101[4] = 0;
    v103 = v105;
    v102 = 0;
    v104 = 0;
    v105[0] = 0;
    v106 = 0;
    LODWORD(v100) = v77;
    HIDWORD(v100) = v77;
    v101[0] = 1;
    sub_1589170((__int64)v107, &v100);
    if ( v103 != v105 )
      operator delete(v103);
    sub_15F7200(v107);
    v16 = v14[4];
  }
  if ( (v16 & 0x30) != 0 )
  {
    v83 = *((_DWORD *)v14 + 68);
    sub_168B9F0((__int64)v107, a1 + 1, v83, 0xFC2u, 0);
    *(_QWORD *)&v101[4] = 0;
    v103 = v105;
    v102 = 0;
    v104 = 0;
    v105[0] = 0;
    v106 = 0;
    LODWORD(v100) = v83;
    HIDWORD(v100) = v83;
    v101[0] = 1;
    sub_1589170((__int64)v107, &v100);
    if ( v103 != v105 )
      operator delete(v103);
    sub_15F7200(v107);
    v16 = v14[4];
  }
  if ( (v16 & 2) != 0 )
  {
    v82 = *((_DWORD *)v14 + 61);
    sub_168B9F0((__int64)v107, a1 + 1, v82, 0xFC2u, 0);
    *(_QWORD *)&v101[4] = 0;
    v103 = v105;
    v102 = 0;
    v104 = 0;
    v105[0] = 0;
    v106 = 0;
    LODWORD(v100) = v82;
    HIDWORD(v100) = v82;
    v101[0] = 1;
    sub_1589170((__int64)v107, &v100);
    if ( v103 != v105 )
      operator delete(v103);
    sub_15F7200(v107);
  }
  if ( *((_QWORD *)v14 + 3) )
  {
    v78 = *((_DWORD *)v14 + 62);
    sub_168B9F0((__int64)v107, a1 + 1, v78, 0xFC2u, 0);
    *(_QWORD *)&v101[4] = 0;
    v103 = v105;
    v102 = 0;
    v104 = 0;
    v105[0] = 0;
    v106 = 0;
    LODWORD(v100) = v78;
    HIDWORD(v100) = v78;
    v101[0] = 1;
    sub_1589170((__int64)v107, &v100);
    if ( v103 != v105 )
      operator delete(v103);
    sub_15F7200(v107);
  }
  if ( (v14[4] & 4) != 0 )
  {
    v69 = *((_DWORD *)v14 + 63);
    sub_168B9F0((__int64)v107, a1 + 1, v69, 0xFC2u, 0);
    *(_QWORD *)&v101[4] = 0;
    v102 = 0;
    v103 = v105;
    v104 = 0;
    v105[0] = 0;
    v106 = 0;
    LODWORD(v100) = v69;
    HIDWORD(v100) = v69;
    v101[0] = 1;
    sub_1589170((__int64)v107, &v100);
    if ( v103 != v105 )
      operator delete(v103);
    sub_15F7200(v107);
  }
  v18 = sub_F57E80(*(_QWORD *)(*v99 & 0xFFFFFFFFFFFFFFF0LL));
  v19 = *(_DWORD *)(a3 + 80);
  if ( v18 && *(_BYTE *)(v18 + 16) == 16 )
  {
    sub_168B9F0((__int64)v107, a1 + 1, v19, 0x1A4Cu, 0);
    v73 = sub_F57E80(*(_QWORD *)(*v99 & 0xFFFFFFFFFFFFFFF0LL));
    v74 = 0;
    if ( v73 && *(_BYTE *)(v73 + 16) == 16 )
      v74 = v73 & 0xFFFFFFFFFFFFFFF0LL;
    v100 = v74;
    sub_162B6D0((__int64)v107, (__int64 *)&v100);
    sub_15F7200(v107);
    v19 = *(_DWORD *)(a3 + 80);
  }
  v84 = 0;
  v20 = sub_1CBC0D0((__int64)a1, &v99, v19, a7);
  if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v84 = 1;
    v20 = *(_QWORD *)(a1[31] + 18720);
  }
  sub_17B4700(a1, *(double *)a7.m128_u64, a2, a3);
  v79 = 0;
  if ( !*(_DWORD *)(a3 + 56) )
    v79 = *(_QWORD *)(a3 + 64);
  v21 = (_QWORD *)a1[31];
  v22 = v99;
  v86 = *(_DWORD *)(a3 + 88);
  v23 = *(unsigned int *)(a3 + 80);
  v24 = *(_QWORD *)(v21[283] + 80LL);
  v76 = *(_DWORD *)(a3 + 2652) != 0;
  v25 = v76;
  v26 = *(_QWORD *)(v24 + 72);
  v27 = v26 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v26 & 1) == 0 )
  {
    v61 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v26 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v62 = v26 & 2;
      v29 = (__int64)v61;
      if ( !(_DWORD)v62 )
        goto LABEL_30;
      v98 = *(_DWORD *)(a3 + 80);
      v95 = v99;
      v93 = *(_QWORD *)(v21[283] + 80LL);
      v63 = sub_6E2500(v61, v24, v62, v23, v24, v76);
      v24 = v93;
      LODWORD(v23) = v98;
      v27 = v63 & 0xFFFFFFFFFFFFFFFELL;
      v25 = v76;
      v22 = v95;
      v26 = v27 | 1;
      *(_QWORD *)(v93 + 72) = v27 | 1;
    }
  }
  v28 = v26 & 0xFFFFFFFFFFFFFFF8LL;
  v29 = v28;
  if ( v27 )
  {
    if ( (v27 & 4) != 0 )
    {
      v29 = 0;
      if ( v28 )
      {
        v30 = *(_QWORD *)v28;
        v31 = *(_DWORD *)(*(_QWORD *)v28 + 12LL);
        if ( *(_DWORD *)(v28 + 8) != v31 )
        {
          *(_DWORD *)(v28 + 8) = v31;
          v97 = v23;
          v96 = v25;
          v94 = v22;
          v91 = v28;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 152LL))(v30, v24);
          LODWORD(v23) = v97;
          v25 = v96;
          v22 = v94;
          v28 = v91;
        }
        v29 = *(_QWORD *)(v28 + 16);
      }
    }
  }
  v21 = (_QWORD *)a1[31];
LABEL_30:
  if ( v29 )
    v29 += 40;
  v32 = sub_BBE620(v21, v29, v86, v23, a4, a5, v79, v20, v25, (__int64)v22);
  *(_BYTE *)(v32 + 29) &= 0x9Fu;
  v33 = v32;
  v34 = *v99;
  v107[0].m128i_i64[1] = (__int64)(v99 + 1);
  v107[0].m128i_i64[0] = v34;
  v35 = sub_F6E530((__int64)v107);
  v40 = v35;
  v87 = v36;
  if ( v35 && *(_QWORD *)(v35 + 32) )
  {
    if ( !*(_DWORD *)(a3 + 2652) && (*(_BYTE *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) != 0 )
    {
      v41 = *(_QWORD *)(*(_QWORD *)(v36 + 8) + 64LL);
      v42 = v41 + 16;
      v43 = v41 + 16 + 32LL * *(unsigned int *)(v41 + 8);
      if ( v43 != v42 )
      {
        v92 = v40;
        v44 = v43;
        v89 = v33;
        v45 = v84;
        v46 = v42;
        do
        {
          v75 = *(_QWORD *)(v46 + 24);
          v46 += 32;
          v45 |= sub_1E52D80(
                   (_DWORD)a1,
                   21,
                   v42,
                   v37,
                   v38,
                   v39,
                   *(_QWORD *)(v46 - 32),
                   *(_QWORD *)(v46 - 24),
                   *(_QWORD *)(v46 - 16),
                   v75);
        }
        while ( v44 != v46 );
        v40 = v92;
        v84 = v45;
        v33 = v89;
      }
    }
    if ( !v84 )
    {
      v29 = v40;
      if ( !(unsigned __int8)sub_1CD20D0((__int64)a1, v40, v87, v33, v33, *(_DWORD *)(a3 + 2652), a7, a8) )
      {
LABEL_42:
        if ( !*(_BYTE *)(v33 + 80) )
          goto LABEL_43;
        goto LABEL_74;
      }
    }
LABEL_41:
    v29 = 1;
    sub_B88650(v33, 1);
    goto LABEL_42;
  }
  if ( v84 )
    goto LABEL_41;
  if ( !*(_BYTE *)(v33 + 80) )
    goto LABEL_43;
LABEL_74:
  v64 = sub_15F25A0((__int64)a1, v29, v36, v37, v38, v39);
  if ( !v64 )
  {
LABEL_43:
    v47 = v79;
    if ( !v79 )
      goto LABEL_78;
    goto LABEL_44;
  }
  v65 = *(unsigned int *)(v64 + 1488);
  if ( v65 + 1 > (unsigned __int64)*(unsigned int *)(v64 + 1492) )
  {
    v85 = v64;
    sub_2237220(v64 + 1480, v64 + 1496, v65 + 1, 8);
    v64 = v85;
    v65 = *(unsigned int *)(v85 + 1488);
  }
  *(_QWORD *)(*(_QWORD *)(v64 + 1480) + 8 * v65) = v33;
  v47 = v79;
  ++*(_DWORD *)(v64 + 1488);
  if ( v79 )
  {
LABEL_44:
    sub_1CCBE80((__int64)a1, (__int64 *)a2, *(_DWORD *)(a3 + 80), v47, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
    v48 = *(_BYTE *)(v33 + 28) & 0x7F;
    if ( (unsigned int)v48 - 40 > 6 || v48 == 43 )
    {
LABEL_60:
      if ( !*(_BYTE *)(a2 + 100) )
        goto LABEL_86;
      v56 = *(__int64 **)(a2 + 80);
      v57 = *(unsigned int *)(a2 + 92);
      v58 = &v56[v57];
      if ( v56 != v58 )
      {
        v59 = *(__int64 **)(a2 + 80);
        if ( v33 == *v56 )
          goto LABEL_68;
        while ( v58 != ++v59 )
        {
          if ( v33 == *v59 )
            goto LABEL_68;
        }
      }
      if ( (unsigned int)v57 < *(_DWORD *)(a2 + 88) )
      {
        *(_DWORD *)(a2 + 92) = v57 + 1;
        *v58 = v33;
        v56 = *(__int64 **)(a2 + 80);
        v59 = &v56[v57];
      }
      else
      {
LABEL_86:
        v59 = (__int64 *)sub_2236760(a2 + 80, v33);
        v56 = *(__int64 **)(a2 + 80);
        if ( !*(_BYTE *)(a2 + 100) )
        {
          v60 = &v56[*(unsigned int *)(a2 + 88)];
LABEL_88:
          if ( v60 != v59 && (unsigned __int64)*v59 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v67 = v59 + 1;
            do
            {
              v68 = v67;
              if ( v60 == v67 )
                break;
              ++v67;
            }
            while ( (unsigned __int64)*v68 >= 0xFFFFFFFFFFFFFFFELL );
          }
          sub_15C17C0((__int64)(a1 + 326), v33);
          goto LABEL_78;
        }
      }
LABEL_68:
      v60 = &v56[*(unsigned int *)(a2 + 92)];
      goto LABEL_88;
    }
    if ( !*(_BYTE *)(a2 + 452) )
      goto LABEL_53;
    v49 = *(__int64 **)(a2 + 432);
    v50 = *(unsigned int *)(a2 + 444);
    v51 = &v49[v50];
    if ( v49 != v51 )
    {
      v52 = *(__int64 **)(a2 + 432);
      if ( v33 == *v49 )
        goto LABEL_116;
      while ( v51 != ++v52 )
      {
        if ( v33 == *v52 )
          goto LABEL_116;
      }
    }
    if ( (unsigned int)v50 < *(_DWORD *)(a2 + 440) )
    {
      *(_DWORD *)(a2 + 444) = v50 + 1;
      *v51 = v33;
      v49 = *(__int64 **)(a2 + 432);
      v52 = &v49[v50];
    }
    else
    {
LABEL_53:
      v52 = (__int64 *)sub_2236760(a2 + 432, v33);
      v49 = *(__int64 **)(a2 + 432);
      if ( !*(_BYTE *)(a2 + 452) )
      {
        v53 = &v49[*(unsigned int *)(a2 + 440)];
LABEL_55:
        if ( v53 != v52 && (unsigned __int64)*v52 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v54 = v52 + 1;
          do
          {
            v55 = v54;
            if ( v53 == v54 )
              break;
            ++v54;
          }
          while ( (unsigned __int64)*v55 >= 0xFFFFFFFFFFFFFFFELL );
        }
        goto LABEL_60;
      }
    }
LABEL_116:
    v53 = &v49[*(unsigned int *)(a2 + 444)];
    goto LABEL_55;
  }
LABEL_78:
  if ( a9 && v76 )
  {
    sub_168B9F0((__int64)v107, a1 + 1, a6, 0x141Au, 0);
    sub_15F7200(v107);
  }
  else if ( a9 && !(unsigned __int8)sub_1E534E0(a1, a9, 12) )
  {
    v100 = v100 & 0xFFFFFFFE00000000LL | 8;
    *(_QWORD *)v101 = a9;
    sub_1D3AAD0(v107, a1, &v100, 0, 0, 0);
    sub_BC4850(v33, (_QWORD *)a1[31], v107, v70, v71, v72);
  }
  return v33;
}
