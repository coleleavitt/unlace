__int64 __fastcall sub_B43BE0(__int64 a1, __int64 a2)
{
  char **v2; // r13
  char **v3; // r13
  char **v4; // r15
  char **exception; // r13
  char **v6; // r13
  char **v7; // r12
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  unsigned int v14; // r12d
  size_t v15; // rsi
  unsigned int *v16; // rax
  unsigned int v17; // eax
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // r12
  unsigned int v22; // ecx
  size_t v23; // rsi
  unsigned int v24; // ebp
  unsigned int *v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rax
  _QWORD *v28; // rax
  unsigned int v29; // r12d
  size_t v30; // rsi
  unsigned int *v31; // rax
  unsigned int v32; // eax
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // r12
  unsigned int v37; // r14d
  size_t v38; // rsi
  unsigned int *v39; // rax
  unsigned int v40; // eax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  double v50; // xmm0_8
  _QWORD *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rdi
  __int64 v54; // rbp
  unsigned int v55; // r13d
  size_t v56; // rsi
  unsigned int *v57; // rax
  unsigned int v58; // eax
  _DWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rbp
  unsigned int v65; // r12d
  size_t v66; // rsi
  unsigned int *v67; // rax
  unsigned int v68; // eax
  _QWORD *v69; // rax
  char v70; // [rsp+0h] [rbp-78h]
  __int64 v71[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = sub_8E7030(a1);
  v9 = *(_DWORD *)(a2 + 580);
  if ( v8 <= 1 )
  {
    if ( (unsigned int)(v9 - 3) <= 2 )
    {
      sub_1875640("relevancy must be enabled to use option CASE_SPLIT=3, 4 or 5", v70);
      *(_DWORD *)(a2 + 580) = 0;
      goto LABEL_6;
    }
  }
  else if ( *(_BYTE *)(a2 + 731) && (unsigned int)(v9 - 3) <= 2 )
  {
    sub_1875640("auto configuration (option AUTO_CONFIG) must be disabled to use option CASE_SPLIT=3, 4 or 5", v70);
    *(_DWORD *)(a2 + 580) = 0;
LABEL_6:
    v10 = sub_186B270(0x30u);
    *(_QWORD *)(v10 + 8) = a1;
    *(_QWORD *)v10 = off_1C56ED0;
    *(_QWORD *)(v10 + 16) = a2;
    *(_QWORD *)(v10 + 24) = a1 + 8880;
    *(_QWORD *)(v10 + 32) = 0;
    *(_QWORD *)(v10 + 40) = 0;
    v11 = sub_186B270(0x10u);
    *(_DWORD *)(v11 + 8) = -1;
    *(_QWORD *)(v10 + 32) = v11 + 8;
    *(_QWORD *)v11 = 0x100000002LL;
    v12 = (_QWORD *)sub_186B270(0x10u);
    v13 = v12 + 1;
    *v12 = 2;
    for ( *(_QWORD *)(v10 + 40) = v12 + 1; ; *(_QWORD *)(v10 + 40) = v16 + 2 )
    {
      v17 = *((_DWORD *)v13 - 2);
      if ( v17 > 0x3FF )
        break;
      v14 = (3 * v17 + 1) >> 1;
      v15 = 4 * v14 + 8;
      if ( 4 * v17 + 8 >= (unsigned int)v15 || v17 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v71, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v71);
        sub_233E40((__int64)v71);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v13 - 1, v15);
      v13 = v16 + 2;
      *v16 = v14;
    }
LABEL_11:
    *((_DWORD *)v13 - 1) = 1024;
    *v13 = 0;
    v13[511] = 0;
    memset(
      (void *)((unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v13 - (((_DWORD)v13 + 8) & 0xFFFFFFF8) + 4096) >> 3));
    return v10;
  }
  switch ( *(_DWORD *)(a2 + 580) )
  {
    case 1:
      v18 = (_QWORD *)sub_186B270(0x48u);
      *v18 = off_1C56ED0;
      v10 = (__int64)v18;
      v18[1] = a1;
      v18[2] = a2;
      v18[3] = a1 + 8880;
      v18[4] = 0;
      v18[5] = 0;
      v19 = sub_186B270(0x10u);
      *(_DWORD *)(v19 + 8) = -1;
      *(_QWORD *)(v10 + 32) = v19 + 8;
      *(_QWORD *)v19 = 0x100000002LL;
      v20 = (_QWORD *)sub_186B270(0x10u);
      v21 = v20 + 1;
      *(_QWORD *)(v10 + 40) = v20 + 1;
      *v20 = 2;
      while ( 1 )
      {
        v26 = *((_DWORD *)v21 - 2);
        if ( v26 > 0x3FF )
          break;
        v22 = (3 * v26 + 1) >> 1;
        v23 = 4 * v22 + 8;
        v24 = v22;
        if ( 4 * v26 + 8 >= (unsigned int)v23 || v26 >= v22 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v71, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v71);
          sub_233E40((__int64)v71);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v25 = (unsigned int *)sub_186B300(v21 - 1, v23);
        v21 = v25 + 2;
        *v25 = v24;
        *(_QWORD *)(v10 + 40) = v25 + 2;
      }
      *v21 = 0;
      v21[511] = 0;
      *((_DWORD *)v21 - 1) = 1024;
      memset(
        (void *)((unsigned __int64)(v21 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)v21 - (((_DWORD)v21 + 8) & 0xFFFFFFF8) + 4096) >> 3));
      *(_QWORD *)(v10 + 56) = 0;
      *(_QWORD *)v10 = off_1C56F70;
      *(_QWORD *)(v10 + 64) = 0;
      *(_QWORD *)(v10 + 48) = a1 + 8880;
      v27 = sub_186B270(0x10u);
      *(_QWORD *)v27 = 0x100000002LL;
      *(_QWORD *)(v10 + 56) = v27 + 8;
      *(_DWORD *)(v27 + 8) = -1;
      v28 = (_QWORD *)sub_186B270(0x10u);
      v13 = v28 + 1;
      *v28 = 2;
      for ( *(_QWORD *)(v10 + 64) = v28 + 1; ; *(_QWORD *)(v10 + 64) = v31 + 2 )
      {
        v32 = *((_DWORD *)v13 - 2);
        if ( v32 > 0x3FF )
          break;
        v29 = (3 * v32 + 1) >> 1;
        v30 = 4 * v29 + 8;
        if ( 4 * v32 + 8 >= (unsigned int)v30 || v32 >= v29 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v71, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v71);
          sub_233E40((__int64)v71);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v13 - 1, v30);
        v13 = v31 + 2;
        *v31 = v29;
      }
      goto LABEL_11;
    case 2:
      v33 = (_QWORD *)sub_186B270(0x58u);
      *v33 = off_1C56ED0;
      v10 = (__int64)v33;
      v33[1] = a1;
      v33[2] = a2;
      v33[3] = a1 + 8880;
      v33[4] = 0;
      v33[5] = 0;
      v34 = sub_186B270(0x10u);
      *(_DWORD *)(v34 + 8) = -1;
      *(_QWORD *)(v10 + 32) = v34 + 8;
      *(_QWORD *)v34 = 0x100000002LL;
      v35 = (_QWORD *)sub_186B270(0x10u);
      v36 = v35 + 1;
      *v35 = 2;
      for ( *(_QWORD *)(v10 + 40) = v35 + 1; ; *(_QWORD *)(v10 + 40) = v39 + 2 )
      {
        v40 = *((_DWORD *)v36 - 2);
        if ( v40 > 0x3FF )
          break;
        v37 = (3 * v40 + 1) >> 1;
        v38 = 4 * v37 + 8;
        if ( 4 * v40 + 8 >= (unsigned int)v38 || v40 >= v37 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v71, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v71);
          sub_233E40((__int64)v71);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v39 = (unsigned int *)sub_186B300(v36 - 1, v38);
        v36 = v39 + 2;
        *v39 = v37;
      }
      *((_DWORD *)v36 - 1) = 1024;
      *v36 = 0;
      v36[511] = 0;
      memset(
        (void *)((unsigned __int64)(v36 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)v36 - (((_DWORD)v36 + 8) & 0xFFFFFFF8) + 4096) >> 3));
      *(_QWORD *)v10 = off_1C57010;
      v41 = (_QWORD *)sub_186B270(0x80u);
      *v41 = 0;
      v41[1] = 0;
      v41[2] = 0;
      v41[3] = 0;
      v41[4] = 0;
      v41[5] = 0;
      v41[6] = 0;
      v41[7] = 0;
      v41[8] = 0;
      v41[9] = 0;
      v41[10] = 0;
      v41[11] = 0;
      v41[12] = 0;
      v41[13] = 0;
      v41[14] = 0;
      v41[15] = 0;
      *(_QWORD *)(v10 + 48) = v41;
      v42 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v10 + 56) = 8;
      *(_DWORD *)(v10 + 64) = 0;
      *(_QWORD *)(v10 + 72) = v42;
      *(_QWORD *)(v10 + 80) = 0;
      return v10;
    case 3:
      v10 = sub_186B270(0x48u);
      *(_QWORD *)v10 = off_1C570B0;
      v43 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v10 + 8) = a1;
      *(_QWORD *)(v10 + 24) = v43;
      *(_QWORD *)(v10 + 16) = a2;
      *(_QWORD *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 40) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v10 + 48) = 0;
      *(_DWORD *)(v10 + 56) = 0;
      *(_QWORD *)(v10 + 64) = 0;
      return v10;
    case 4:
      v10 = sub_186B270(0x50u);
      *(_QWORD *)v10 = off_1C57150;
      v61 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v10 + 8) = a1;
      *(_QWORD *)(v10 + 16) = v61;
      *(_QWORD *)(v10 + 24) = a2;
      *(_QWORD *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 40) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v10 + 48) = a1 + 8880;
      *(_QWORD *)(v10 + 56) = 0;
      *(_QWORD *)(v10 + 64) = 0;
      v62 = sub_186B270(0x10u);
      *(_DWORD *)(v62 + 8) = -1;
      *(_QWORD *)(v10 + 56) = v62 + 8;
      *(_QWORD *)v62 = 0x100000002LL;
      v63 = (_QWORD *)sub_186B270(0x10u);
      v64 = v63 + 1;
      *v63 = 2;
      for ( *(_QWORD *)(v10 + 64) = v63 + 1; ; *(_QWORD *)(v10 + 64) = v67 + 2 )
      {
        v68 = *((_DWORD *)v64 - 2);
        if ( v68 > 0x3FF )
          break;
        v65 = (3 * v68 + 1) >> 1;
        v66 = 4 * v65 + 8;
        if ( 4 * v68 + 8 >= (unsigned int)v66 || v68 >= v65 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v71, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v71);
          sub_233E40((__int64)v71);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v67 = (unsigned int *)sub_186B300(v64 - 1, v66);
        v64 = v67 + 2;
        *v67 = v65;
      }
      *((_DWORD *)v64 - 1) = 1024;
      *v64 = 0;
      v64[511] = 0;
      memset(
        (void *)((unsigned __int64)(v64 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)v64 - (((_DWORD)v64 + 8) & 0xFFFFFFF8) + 4096) >> 3));
      *(_QWORD *)(v10 + 72) = 0;
      return v10;
    case 5:
      v10 = sub_186B270(0x80u);
      *(_QWORD *)v10 = off_1C571F0;
      v45 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v10 + 8) = a1;
      *(_QWORD *)(v10 + 24) = v45;
      *(_QWORD *)(v10 + 16) = a2;
      *(_QWORD *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 40) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v10 + 72) = v10;
      *(_QWORD *)(v10 + 80) = 0;
      *(_QWORD *)(v10 + 88) = 0;
      *(_OWORD *)(v10 + 48) = 0;
      v46 = sub_186B270(0x10u);
      *(_DWORD *)(v46 + 8) = -1;
      *(_QWORD *)(v10 + 80) = v46 + 8;
      *(_QWORD *)v46 = 0x100000002LL;
      v47 = *(_QWORD *)(v10 + 88);
      if ( v47 )
        *(_DWORD *)(v47 - 4) = 0;
      v48 = *(_QWORD *)(v10 + 8);
      *(_BYTE *)(v10 + 120) = 0;
      *(_OWORD *)(v10 + 104) = 0;
      *(_QWORD *)(v10 + 96) = 0;
      *(_DWORD *)(v10 + 64) = 0;
      *(_DWORD *)(v48 + 9496) = 0;
      v49 = *(_QWORD *)(v10 + 16);
      v50 = *(double *)(v49 + 168);
      if ( v50 < 0.0 )
        *(double *)(v49 + 168) = v50 + 0.0;
      return v10;
    case 6:
      v10 = sub_186B270(0x80u);
      *(_QWORD *)(v10 + 8) = a1;
      *(_QWORD *)(v10 + 16) = a2;
      *(_QWORD *)v10 = off_1C57290;
      v51 = (_QWORD *)sub_186B270(0xC0u);
      *(_DWORD *)(v10 + 40) = 0;
      *v51 = 0;
      v51[3] = 0;
      v51[6] = 0;
      v51[9] = 0;
      v51[12] = 0;
      v51[15] = 0;
      v51[18] = 0;
      v51[21] = 0;
      *(_QWORD *)(v10 + 24) = v51;
      *(_QWORD *)(v10 + 32) = 8;
      *(_QWORD *)(v10 + 48) = a1 + 8880;
      *(_QWORD *)(v10 + 56) = v10 + 24;
      *(_OWORD *)(v10 + 64) = 0;
      v52 = sub_186B270(0x10u);
      v53 = *(_QWORD **)(v10 + 72);
      *(_DWORD *)(v52 + 8) = -1;
      *(_QWORD *)(v10 + 64) = v52 + 8;
      *(_QWORD *)v52 = 0x100000002LL;
      if ( v53 )
      {
        v54 = *((unsigned int *)v53 - 1);
        if ( (unsigned int)v54 > 0x3FF )
        {
          *((_DWORD *)v53 - 1) = 1024;
          goto LABEL_45;
        }
      }
      else
      {
        v69 = (_QWORD *)sub_186B270(0x10u);
        v53 = v69 + 1;
        *v69 = 2;
        v54 = 0;
        *(_QWORD *)(v10 + 72) = v69 + 1;
      }
      while ( 1 )
      {
        v58 = *((_DWORD *)v53 - 2);
        if ( v58 > 0x3FF )
          break;
        v55 = (3 * v58 + 1) >> 1;
        v56 = 4 * v55 + 8;
        if ( 4 * v58 + 8 >= (unsigned int)v56 || v58 >= v55 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v71, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v71);
          sub_233E40((__int64)v71);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v57 = (unsigned int *)sub_186B300(v53 - 1, v56);
        v53 = v57 + 2;
        *v57 = v55;
        *(_QWORD *)(v10 + 72) = v57 + 2;
      }
      *((_DWORD *)v53 - 1) = 1024;
      memset((char *)v53 + 4 * v54, 0, 4096 - 4 * v54);
LABEL_45:
      v59 = (_DWORD *)sub_186B270(0x40u);
      v59[1] = 0x80000000;
      v59[3] = 0x80000000;
      v59[5] = 0x80000000;
      v59[7] = 0x80000000;
      v59[9] = 0x80000000;
      v59[11] = 0x80000000;
      v59[13] = 0x80000000;
      v59[15] = 0x80000000;
      *(_QWORD *)(v10 + 80) = v59;
      *(_QWORD *)(v10 + 88) = 8;
      *(_DWORD *)(v10 + 96) = 0;
      v60 = (_QWORD *)sub_186B270(0x80u);
      *v60 = 0;
      v60[2] = 0;
      v60[4] = 0;
      v60[6] = 0;
      v60[8] = 0;
      v60[10] = 0;
      v60[12] = 0;
      v60[14] = 0;
      *(_QWORD *)(v10 + 104) = v60;
      *(_QWORD *)(v10 + 112) = 8;
      *(_DWORD *)(v10 + 120) = 0;
      break;
    default:
      goto LABEL_6;
  }
  return v10;
}

