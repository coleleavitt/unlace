__int64 __fastcall sub_D9EC70(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  char **exception; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  void *v10; // rdi
  __int64 v11; // rax
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rbx
  void *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 *v19; // rdi
  __int64 *v20; // rcx
  __int64 *i; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 *v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rdi
  _DWORD *v31; // r15
  __int64 v32; // rax
  __m128 v33; // xmm0
  double v34; // xmm1_8
  __int64 v35; // rbx
  __int64 (__fastcall ***v36)(__int64); // xmm2_8
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  _OWORD *v40; // rax
  __int64 v41; // rax
  unsigned int v42; // r13d
  unsigned int v43; // ebp
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 *v46; // rcx
  __int64 v47; // rax
  int v48; // edi
  unsigned int v49; // edx
  __int64 *v50; // rsi
  __int64 v51; // rdx
  __int64 *v52; // r9
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 *v56; // rdx
  __int64 v57; // r15
  unsigned int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 *v61; // rcx
  int v62; // eax
  __int64 v63; // rdx
  int v64; // eax
  _QWORD *v66; // rax
  __int64 v67; // rax
  unsigned int v68; // ecx
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 (__fastcall *v71)(__int64); // rax
  __int64 v72; // rbp
  __int64 (__fastcall **v73)(__int64); // rbx
  __int64 (__fastcall **v74)(__int64); // rbp
  __int64 (__fastcall *v75)(__int64); // rsi
  __int64 (__fastcall **v76)(__int64); // rdi
  __int64 (__fastcall *v77)(__int64); // rsi
  __int64 (__fastcall **v78)(__int64); // rax
  __int64 (__fastcall *v79)(__int64); // rax
  __int64 v80; // r13
  __int64 *v81; // rbx
  __int64 *v82; // r13
  __int64 v83; // rsi
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int64 *v86; // rax
  __int64 (__fastcall **v87)(__int64); // rbx
  __int64 (__fastcall **v88)(__int64); // rdi
  __int64 (__fastcall **v89)(__int64); // rdi
  void (__fastcall ***v90)(_QWORD); // rbx
  void *v91; // rdi
  void *v92; // rdi
  unsigned int v93; // [rsp+0h] [rbp-88h]
  int v94; // [rsp+8h] [rbp-80h]
  int v95; // [rsp+10h] [rbp-78h]
  int v96; // [rsp+18h] [rbp-70h]
  int v97; // [rsp+20h] [rbp-68h]
  char v98; // [rsp+28h] [rbp-60h]
  __int64 v99; // [rsp+30h] [rbp-58h] BYREF
  int v100; // [rsp+38h] [rbp-50h]
  int v101; // [rsp+40h] [rbp-48h]
  void *v102; // [rsp+48h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  v9 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v10 = *(void **)(v9 + 704);
    if ( v10 )
      sub_186B220(v10);
    v11 = *(_QWORD *)(v9 + 640);
    if ( v11 )
      sub_186B220((void *)(v11 - 8));
    v12 = *(void **)(v9 + 616);
    if ( v12 )
      sub_186B220(v12);
    v13 = *(void **)(v9 + 592);
    if ( v13 )
      sub_186B220(v13);
    sub_1372EF0(v9 + 432);
    v14 = *(void **)(v9 + 424);
    if ( v14 )
    {
      sub_13606C0(*(_QWORD *)(v9 + 424));
      sub_186B220(v14);
    }
    sub_157EB20(v9 + 360);
    v15 = *(void **)(v9 + 320);
    if ( v15 )
      sub_186B220(v15);
    v16 = *(_QWORD *)(v9 + 296);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v9 + 304);
      v18 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v17, v16);
    }
    v19 = *(__int64 **)(v9 + 120);
    v20 = &v19[*(unsigned int *)(v9 + 128)];
    for ( i = v19; v20 != i; *(_BYTE *)(v22 + 6) &= ~1u )
      v22 = *i++;
    *(_DWORD *)(v9 + 128) = 0;
    if ( v19 != (__int64 *)(v9 + 136) && v19 )
      sub_186B220(v19);
    v23 = *(_QWORD *)(v9 + 112);
    if ( v23 )
      sub_186B220((void *)(v23 - 8));
    v24 = *(_QWORD *)(v9 + 104);
    if ( v24 )
      sub_186B220((void *)(v24 - 8));
    v25 = *(_QWORD *)(v9 + 96);
    if ( v25 )
      sub_186B220((void *)(v25 - 8));
    v26 = *(_QWORD *)(v9 + 88);
    if ( v26 )
      sub_186B220((void *)(v26 - 8));
    v27 = *(__int64 **)(v9 + 40);
    if ( v27 )
    {
      v28 = &v27[*((unsigned int *)v27 - 1)];
      if ( v27 >= v28 )
        goto LABEL_40;
      do
      {
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 )
          {
            v30 = *(_QWORD *)(v9 + 32);
            v18 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( ++v27 >= v28 )
            goto LABEL_39;
        }
        sub_15D7BC0(v30, v29);
        ++v27;
      }
      while ( v27 < v28 );
LABEL_39:
      v27 = *(__int64 **)(v9 + 40);
      if ( v27 )
LABEL_40:
        sub_186B220(v27 - 1);
    }
    v31 = *(_DWORD **)(v9 + 8);
    if ( v31 && (v18 = v31[32] == 1, --v31[32], v18) )
    {
      v79 = **(__int64 (__fastcall ***)(__int64))v31;
      if ( v79 == sub_38D2C0 )
      {
        v80 = (unsigned int)v31[6];
        v81 = *((__int64 **)v31 + 2);
        *(_QWORD *)v31 = &off_1C4DD50;
        v82 = &v81[2 * v80];
        if ( v81 != v82 )
        {
          while ( (unsigned __int64)*v81 <= 1 )
          {
            v81 += 2;
            if ( v82 == v81 )
              goto LABEL_126;
          }
          if ( v82 != v81 )
          {
            v83 = *v81;
            v84 = *((_QWORD *)v31 + 1);
            if ( *v81 )
              goto LABEL_116;
            while ( 1 )
            {
              v85 = v81[1];
              if ( v85 )
              {
                v18 = (*(_DWORD *)(v85 + 8))-- == 1;
                if ( v18 )
                  sub_15D7BC0(v84, v85);
              }
              v86 = v81 + 2;
              if ( v82 == v81 + 2 )
                break;
              while ( 1 )
              {
                v83 = *v86;
                v81 = v86;
                if ( (unsigned __int64)*v86 > 1 )
                  break;
                v86 += 2;
                if ( v82 == v86 )
                  goto LABEL_126;
              }
              if ( v86 == v82 )
                break;
              v84 = *((_QWORD *)v31 + 1);
LABEL_116:
              v18 = (*(_DWORD *)(v83 + 8))-- == 1;
              if ( v18 )
              {
                sub_15D7BC0(v84, v83);
                v84 = *((_QWORD *)v31 + 1);
              }
            }
          }
        }
LABEL_126:
        sub_1695230(v31 + 18);
        v90 = *((void (__fastcall ****)(_QWORD))v31 + 8);
        if ( v90 )
        {
          (**v90)(*((_QWORD *)v31 + 8));
          sub_186B220(v90);
        }
        v91 = *((void **)v31 + 5);
        if ( v91 )
          sub_186B220(v91);
        v92 = *((void **)v31 + 2);
        if ( v92 )
          sub_186B220(v92);
      }
      else
      {
        v79((__int64)v31);
      }
      sub_186B220(v31);
      sub_186B220((void *)v9);
    }
    else
    {
      sub_186B220((void *)v9);
    }
  }
  v32 = sub_186B270(0x2C8u);
  v33 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)&v34 = _mm_loadu_si128((const __m128i *)(a1 + 8)).m128i_u64[0];
  v35 = v32;
  v36 = (__int64 (__fastcall ***)(__int64))_mm_movehl_ps(a5, v33).m128_u64[0];
  if ( v36 )
  {
    v37 = *((_DWORD *)v36 + 32);
    *(double *)v33.m128_u64 = v34;
    *(__m128 *)v35 = v33;
    *((_DWORD *)v36 + 32) = v37 + 2;
  }
  else
  {
    *(double *)v32 = v34;
    *(_QWORD *)(v32 + 8) = 0;
  }
  *(_QWORD *)(v35 + 24) = a1 + 24;
  *(_QWORD *)(v35 + 16) = a2;
  *(double *)(v35 + 32) = v34;
  *(_QWORD *)(v35 + 40) = 0;
  *(double *)(v35 + 48) = v34;
  *(_DWORD *)(v35 + 56) = 256;
  *(_WORD *)(v35 + 60) = 0;
  *(_DWORD *)(v35 + 76) = 0;
  *(_QWORD *)(v35 + 120) = v35 + 136;
  *(_QWORD *)(v35 + 128) = 0x1000000000LL;
  *(_OWORD *)(v35 + 88) = 0;
  *(_OWORD *)(v35 + 104) = 0;
  v96 = v35 + 48;
  v99 = 0;
  sub_14DC230(v35 + 48, &v99);
  sub_18572D0(&v99);
  *(double *)(v35 + 264) = v34;
  v93 = v35 + 264;
  v99 = 0;
  sub_16744A0(v35 + 272, *(_QWORD *)&v34);
  *(_QWORD *)(v35 + 296) = 0;
  *(double *)(v35 + 304) = v34;
  *(_QWORD *)(v35 + 312) = 0;
  v38 = sub_186B270(0x80u);
  *(_QWORD *)v38 = 0;
  *(_DWORD *)(v38 + 8) = 0;
  *(_QWORD *)(v38 + 16) = 0;
  *(_DWORD *)(v38 + 24) = 0;
  *(_QWORD *)(v38 + 32) = 0;
  *(_DWORD *)(v38 + 40) = 0;
  *(_QWORD *)(v38 + 48) = 0;
  *(_DWORD *)(v38 + 56) = 0;
  *(_QWORD *)(v38 + 64) = 0;
  *(_DWORD *)(v38 + 72) = 0;
  *(_QWORD *)(v38 + 80) = 0;
  *(_DWORD *)(v38 + 88) = 0;
  *(_QWORD *)(v38 + 96) = 0;
  *(_DWORD *)(v38 + 104) = 0;
  *(_QWORD *)(v38 + 112) = 0;
  *(_DWORD *)(v38 + 120) = 0;
  *(_QWORD *)(v35 + 320) = v38;
  *(_QWORD *)(v35 + 328) = 8;
  *(_DWORD *)(v35 + 336) = 0;
  *(_BYTE *)(v35 + 352) = 0;
  sub_1427860(v35 + 264, &v99);
  v95 = v35 + 360;
  sub_157EB00(v35 + 360, v35 + 272);
  sub_16669D0(v35 + 392, *(_QWORD *)&v34);
  *(_BYTE *)(v35 + 420) = 0;
  sub_1409FB0(v35 + 264, &v99);
  sub_18572D0(&v99);
  *(_QWORD *)(v35 + 424) = 0;
  v94 = v35 + 432;
  sub_1373200(v35 + 432, *(_QWORD *)&v34);
  v39 = sub_186B270(0xC0u);
  *(_QWORD *)v39 = 0;
  *(_QWORD *)(v39 + 24) = 0;
  *(_QWORD *)(v39 + 48) = 0;
  *(_QWORD *)(v39 + 72) = 0;
  *(_QWORD *)(v39 + 96) = 0;
  *(_QWORD *)(v39 + 120) = 0;
  *(_QWORD *)(v39 + 144) = 0;
  *(_QWORD *)(v39 + 168) = 0;
  *(_QWORD *)(v35 + 592) = v39;
  *(_QWORD *)(v35 + 600) = 8;
  *(_DWORD *)(v35 + 608) = 0;
  *(_OWORD *)(v39 + 8) = 0;
  *(_OWORD *)(v39 + 32) = 0;
  *(_OWORD *)(v39 + 56) = 0;
  *(_OWORD *)(v39 + 80) = 0;
  *(_OWORD *)(v39 + 104) = 0;
  *(_OWORD *)(v39 + 128) = 0;
  *(_OWORD *)(v39 + 152) = 0;
  *(_OWORD *)(v39 + 176) = 0;
  v40 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v35 + 616) = v40;
  *(_QWORD *)(v35 + 624) = 8;
  *(_DWORD *)(v35 + 632) = 0;
  *(_QWORD *)(v35 + 640) = 0;
  *v40 = 0;
  v40[1] = 0;
  v40[2] = 0;
  v40[3] = 0;
  v40[4] = 0;
  v40[5] = 0;
  v40[6] = 0;
  v40[7] = 0;
  sub_16744A0(v35 + 648, *(_QWORD *)&v34);
  sub_1684300(v35 + 672, *(_QWORD *)&v34);
  *(_QWORD *)(v35 + 696) = 0;
  *(_QWORD *)(v35 + 704) = 0;
  *(_QWORD *)a1 = v35;
  if ( v36 )
  {
    v18 = (*((_DWORD *)v36 + 32))-- == 1;
    if ( v18 )
    {
      v71 = **v36;
      if ( v71 == sub_38D2C0 )
      {
        v72 = *((unsigned int *)v36 + 6);
        v73 = v36[2];
        *v36 = (__int64 (__fastcall **)(__int64))&off_1C4DD50;
        v74 = &v73[2 * v72];
        if ( v73 != v74 )
        {
          while ( (unsigned __int64)*v73 <= 1 )
          {
            v73 += 2;
            if ( v74 == v73 )
              goto LABEL_118;
          }
          if ( v74 != v73 )
          {
            v75 = *v73;
            v76 = v36[1];
            if ( *v73 )
              goto LABEL_98;
            while ( 1 )
            {
              v77 = v73[1];
              if ( v77 )
              {
                v18 = (*((_DWORD *)v77 + 2))-- == 1;
                if ( v18 )
                  sub_15D7BC0(v76, v77);
              }
              v78 = v73 + 2;
              if ( v74 == v73 + 2 )
                break;
              while ( 1 )
              {
                v75 = *v78;
                v73 = v78;
                if ( (unsigned __int64)*v78 > 1 )
                  break;
                v78 += 2;
                if ( v74 == v78 )
                  goto LABEL_118;
              }
              if ( v74 == v78 )
                break;
              v76 = v36[1];
LABEL_98:
              v18 = (*((_DWORD *)v75 + 2))-- == 1;
              if ( v18 )
              {
                sub_15D7BC0(v76, v75);
                v76 = v36[1];
              }
            }
          }
        }
LABEL_118:
        sub_1695230(v36 + 9);
        v87 = v36[8];
        if ( v87 )
        {
          (*(void (__fastcall **)(__int64 (__fastcall **)(__int64)))*v87)(v36[8]);
          sub_186B220(v87);
        }
        v88 = v36[5];
        if ( v88 )
          sub_186B220(v88);
        v89 = v36[2];
        if ( v89 )
          sub_186B220(v89);
      }
      else
      {
        v71((__int64)v36);
      }
      sub_186B220(v36);
      v35 = *(_QWORD *)a1;
      v41 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)a1 + 16LL) + 80LL);
      if ( v41 )
        goto LABEL_49;
LABEL_125:
      v64 = 0;
      v42 = 1;
      goto LABEL_65;
    }
  }
  v41 = *(_QWORD *)(**(_QWORD **)(v35 + 16) + 80LL);
  if ( !v41 )
    goto LABEL_125;
LABEL_49:
  v42 = 1;
  v43 = 0;
  do
  {
    if ( v43 >= *(_DWORD *)(v41 - 4) )
      break;
    v44 = *(_QWORD *)(v41 + 8LL * v43);
    v45 = *(_QWORD *)(v35 + 8);
    v46 = *(__int64 **)(v45 + 40);
    v47 = *(unsigned int *)(v45 + 48);
    v48 = *(_DWORD *)(v44 + 12);
    v49 = v47 - 1;
    v47 *= 16;
    v50 = (__int64 *)((char *)v46 + v47);
    v51 = 16LL * (v48 & v49);
    v52 = &v46[(unsigned __int64)v51 / 8];
    if ( v51 == v47 )
    {
LABEL_70:
      while ( v52 != v46 )
      {
        v67 = *v46;
        if ( (unsigned __int64)*v46 > 1 )
        {
          if ( *(_DWORD *)(v67 + 12) == v48 && v44 == v67 )
          {
            v53 = v46;
            goto LABEL_67;
          }
        }
        else if ( !v67 )
        {
          break;
        }
        v46 += 2;
      }
LABEL_58:
      v55 = sub_15DC610(*(_QWORD *)v35, v44, 0, 0, v44, (int)v52, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102);
      v56 = *(__int64 **)(v35 + 640);
      v57 = v55;
      if ( !v56 )
        goto LABEL_69;
      goto LABEL_59;
    }
    v53 = &v46[(unsigned __int64)v51 / 8];
    while ( 1 )
    {
      v54 = *v53;
      if ( (unsigned __int64)*v53 > 1 )
        break;
      if ( !v54 )
        goto LABEL_58;
LABEL_55:
      v53 += 2;
      if ( v50 == v53 )
        goto LABEL_70;
    }
    if ( *(_DWORD *)(v54 + 12) != v48 || v44 != v54 )
      goto LABEL_55;
LABEL_67:
    v57 = v53[1];
    if ( !v57 )
      goto LABEL_58;
    v56 = *(__int64 **)(v35 + 640);
    if ( !v56 )
    {
LABEL_69:
      v66 = (_QWORD *)sub_186B270(0x18u);
      v56 = v66 + 1;
      *v66 = 2;
      v60 = 1;
      *(_QWORD *)(v35 + 640) = v56;
      v61 = v56;
      goto LABEL_61;
    }
LABEL_59:
    v58 = *((_DWORD *)v56 - 1);
    if ( v58 == *((_DWORD *)v56 - 2) )
    {
      v68 = (3 * v58 + 1) >> 1;
      v69 = 8 * v68 + 8;
      if ( 8 * v58 + 8 >= (unsigned int)v69 || v58 >= v68 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v99, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v99);
        sub_233E40((__int64)&v99);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v93 = (3 * v58 + 1) >> 1;
      v70 = (unsigned int *)sub_186B300(v56 - 1, v69);
      v56 = (__int64 *)(v70 + 2);
      *(_QWORD *)(v35 + 640) = v70 + 2;
      *v70 = v93;
      LODWORD(v70) = v70[1];
      v61 = &v56[(unsigned int)v70];
      v60 = (_DWORD)v70 + 1;
    }
    else
    {
      v59 = v58;
      v60 = v58 + 1;
      v61 = &v56[v59];
    }
LABEL_61:
    *v61 = v57;
    *((_DWORD *)v56 - 1) = v60;
    v62 = sub_DA1520(v35);
    v63 = *(_QWORD *)(v35 + 640);
    if ( v63 )
      *(_DWORD *)(v63 - 4) = 0;
    v42 &= v62;
    ++v43;
    v41 = *(_QWORD *)(**(_QWORD **)(v35 + 16) + 80LL);
  }
  while ( v41 );
  v64 = (unsigned __int8)v42 ^ 1;
LABEL_65:
  *(_DWORD *)(a1 + 16) = v64;
  return v42;
}

