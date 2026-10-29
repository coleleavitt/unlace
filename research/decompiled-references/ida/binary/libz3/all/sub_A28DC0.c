__int64 __fastcall sub_A28DC0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _QWORD *v8; // rdx
  unsigned int v9; // ebp
  unsigned int v10; // r13d
  __int64 **v11; // rcx
  int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  _QWORD *v15; // r15
  int v16; // r14d
  __int64 v17; // rax
  _QWORD *v18; // rax
  _DWORD *v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  _DWORD *v23; // rdx
  __int64 v24; // rdx
  int v25; // eax
  int v26; // esi
  int v27; // ecx
  unsigned int v28; // eax
  void *v29; // r15
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned __int64 v41; // r15
  unsigned int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  _QWORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  signed int v51; // eax
  size_t v53; // rdi
  __int64 v54; // rax
  __int64 *v55; // rdx
  __int64 *v56; // rsi
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 *v59; // r10
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rdi
  __m128i v63; // xmm0
  unsigned __int64 v64; // rdi
  __int64 *v65; // rax
  __int64 v66; // r10
  size_t v67; // rdi
  __int64 v68; // rax
  _QWORD *v69; // rsi
  __int64 v70; // r8
  __int64 v71; // rdx
  _QWORD *v72; // rax
  _QWORD *v73; // r8
  __int64 v74; // rdi
  __int64 v75; // rdx
  _QWORD *v76; // rax
  unsigned int v77; // r14d
  size_t v78; // rsi
  unsigned int *v79; // rax
  __int64 v80; // rcx
  unsigned int v81; // r15d
  size_t v82; // rsi
  unsigned int *v83; // rax
  __int64 v84; // rdx
  __int64 *v85; // rax
  unsigned __int64 v86; // rdi
  __int64 v87; // r11
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  char **exception; // rbx
  int v93; // [rsp+0h] [rbp-88h]
  __int64 *v94; // [rsp+0h] [rbp-88h]
  int v95; // [rsp+8h] [rbp-80h]
  __int64 *v96; // [rsp+8h] [rbp-80h]
  _QWORD *v97; // [rsp+8h] [rbp-80h]
  int v98; // [rsp+10h] [rbp-78h]
  _DWORD *v99; // [rsp+10h] [rbp-78h]
  void *v100; // [rsp+18h] [rbp-70h]
  unsigned int v101; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v102; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v103; // [rsp+2Ch] [rbp-5Ch] BYREF
  __int64 v104; // [rsp+30h] [rbp-58h] BYREF
  __int64 v105; // [rsp+38h] [rbp-50h]
  __int64 v106; // [rsp+40h] [rbp-48h] BYREF
  __int64 v107; // [rsp+48h] [rbp-40h]

  v8 = *(_QWORD **)(a1 + 32);
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    v10 = v9;
    if ( v9 == *((_DWORD *)v8 - 2) )
    {
      v77 = (3 * v9 + 1) >> 1;
      v78 = 8 * v77 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v78 || v9 >= v77 )
        goto LABEL_90;
      v79 = (unsigned int *)sub_186B300(v8 - 1, v78);
      v80 = v79[1];
      v8 = v79 + 2;
      *v79 = v77;
      *(_QWORD *)(a1 + 32) = v79 + 2;
      LODWORD(v79) = v80;
      v11 = (__int64 **)&v8[v80];
      v12 = (_DWORD)v79 + 1;
    }
    else
    {
      v11 = (__int64 **)&v8[v9];
      v12 = v9 + 1;
    }
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v88 = (_QWORD *)sub_186B270(0x18u);
    v8 = v88 + 1;
    *v88 = 2;
    v12 = 1;
    *(_QWORD *)(a1 + 32) = v8;
    v11 = (__int64 **)v8;
  }
  *v11 = a2;
  v13 = *a2;
  *((_DWORD *)v8 - 1) = v12;
  v103 = v10;
  v14 = sub_16666A0((int)a1 + 344, v13, (int)v8, (int)v11, a5, a6, v93, v95, v98, v100);
  v15 = *(_QWORD **)(a1 + 584);
  v16 = v14;
  if ( v15 )
  {
    v17 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v17 == *((_DWORD *)v15 - 2) )
    {
      v102 = (unsigned int)(3 * v17 + 1) >> 1;
      v67 = 16 * v102 + 8;
      if ( 16 * (int)v17 + 8 >= (unsigned int)v67 || (unsigned int)v17 >= (unsigned int)(3 * v17 + 1) >> 1 )
        goto LABEL_90;
      v68 = sub_186B270(v67);
      v69 = *(_QWORD **)(a1 + 584);
      v99 = (_DWORD *)v68;
      v15 = (_QWORD *)(v68 + 8);
      if ( v69 )
      {
        v70 = *((unsigned int *)v69 - 1);
        v71 = v68 + 8;
        *(_DWORD *)(v68 + 4) = v70;
        v72 = v69;
        v73 = &v69[2 * v70];
        if ( v73 != v69 )
        {
          do
          {
            v74 = *v72;
            *v72 = 0;
            v72 += 2;
            v71 += 16;
            *(_QWORD *)(v71 - 16) = v74;
            *(_DWORD *)(v71 - 8) = *((_DWORD *)v72 - 2);
            *(_DWORD *)(v71 - 4) = *((_DWORD *)v72 - 1);
          }
          while ( v73 != v72 );
        }
        v75 = *((unsigned int *)v69 - 1);
        v76 = &v69[2 * v75];
        if ( (_DWORD)v75 )
        {
          do
          {
            while ( *v69 )
            {
              v97 = v76;
              sub_186B220((void *)(*v69 - 8LL));
              v76 = v97;
              v69 += 2;
              if ( v69 == v97 )
                goto LABEL_65;
            }
            v69 += 2;
          }
          while ( v76 != v69 );
LABEL_65:
          v69 = *(_QWORD **)(a1 + 584);
        }
        sub_186B220(v69 - 1);
        v18 = &v15[2 * (unsigned int)v99[1]];
      }
      else
      {
        *(_DWORD *)(v68 + 4) = 0;
        v18 = (_QWORD *)(v68 + 8);
      }
      *(_QWORD *)(a1 + 584) = v15;
      *v99 = v102;
    }
    else
    {
      v18 = &v15[2 * v17];
    }
  }
  else
  {
    v91 = (_QWORD *)sub_186B270(0x28u);
    v15 = v91 + 1;
    *v91 = 2;
    *(_QWORD *)(a1 + 584) = v91 + 1;
    v18 = v91 + 1;
  }
  *v18 = 0;
  v18[1] = 0xFFFFFFFF00000000LL;
  v19 = *(_DWORD **)(a1 + 592);
  ++*((_DWORD *)v15 - 1);
  if ( v19 )
  {
    v20 = *(v19 - 1);
    if ( v20 != *(v19 - 2) )
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v19[v21];
      goto LABEL_10;
    }
    v81 = (3 * v20 + 1) >> 1;
    v82 = 4 * v81 + 8;
    if ( 4 * v20 + 8 < (unsigned int)v82 && v20 < v81 )
    {
      v83 = (unsigned int *)sub_186B300(v19 - 2, v82);
      v84 = v83[1];
      v19 = v83 + 2;
      *v83 = v81;
      *(_QWORD *)(a1 + 592) = v83 + 2;
      LODWORD(v83) = v84;
      v23 = &v19[v84];
      v22 = (_DWORD)v83 + 1;
      goto LABEL_10;
    }
LABEL_90:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(&v104, "Overflow encountered when expanding vector");
LABEL_89:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v104);
    sub_233E40((__int64)&v104);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v90 = (_QWORD *)sub_186B270(0x10u);
  v19 = v90 + 1;
  *v90 = 2;
  v22 = 1;
  *(_QWORD *)(a1 + 592) = v19;
  v23 = v19;
LABEL_10:
  *v23 = v16 << 30;
  v24 = *(_QWORD *)(a1 + 336);
  *(v19 - 1) = v22;
  if ( *(_BYTE *)(v24 + 48) )
  {
    v25 = 214013 * *(_DWORD *)(a1 + 920);
    v26 = *(_DWORD *)(v24 + 52);
    v27 = *(_DWORD *)(v24 + 56);
    v104 = 0;
    v105 = 0;
    v106 = 1;
    v28 = v25 + 2531011;
    *(_DWORD *)(a1 + 920) = v28;
    v107 = 0;
    v29 = qword_1C7F2C0;
    v30 = v26 + (int)(HIWORD(v28) & 0x7FFF) % (v27 - v26);
    if ( v30 < 0 )
      sub_1830C40(qword_1C7F2C0, &v104, (unsigned int)v30);
    else
      LODWORD(v104) = v26 + (int)(HIWORD(v28) & 0x7FFF) % (v27 - v26);
    sub_182CBA0(v29, &v106);
    v31 = *(_QWORD *)(a1 + 600);
    BYTE4(v106) &= ~1u;
    LODWORD(v106) = 1;
    if ( !v31 || (v32 = *(unsigned int *)(v31 - 4), (_DWORD)v32 == *(_DWORD *)(v31 - 8)) )
    {
      sub_53D790((__int64 *)(a1 + 600));
      v31 = *(_QWORD *)(a1 + 600);
      v32 = *(unsigned int *)(v31 - 4);
    }
  }
  else
  {
    v104 = 0;
    v31 = *(_QWORD *)(a1 + 600);
    v105 = 0;
    v106 = 1;
    v107 = 0;
    if ( !v31 || (v32 = *(unsigned int *)(v31 - 4), (_DWORD)v32 == *(_DWORD *)(v31 - 8)) )
    {
      sub_53D790((__int64 *)(a1 + 600));
      v31 = *(_QWORD *)(a1 + 600);
      v32 = *(unsigned int *)(v31 - 4);
    }
  }
  v33 = v31 + 32 * v32;
  *(_DWORD *)v33 = v104;
  *(_BYTE *)(v33 + 4) = BYTE4(v104) & 3 | *(_BYTE *)(v33 + 4) & 0xFC;
  v34 = v105;
  v105 = 0;
  *(_QWORD *)(v33 + 8) = v34;
  *(_DWORD *)(v33 + 16) = v106;
  *(_BYTE *)(v33 + 20) = BYTE4(v106) & 3 | *(_BYTE *)(v33 + 20) & 0xFC;
  v35 = v107;
  v107 = 0;
  *(_QWORD *)(v33 + 24) = v35;
  ++*(_DWORD *)(v31 - 4);
  sub_25A130((char *)&v104);
  v104 = 0;
  v36 = *(_QWORD *)(a1 + 608);
  v105 = 0;
  v106 = 1;
  v107 = 0;
  if ( !v36 || (v37 = *(unsigned int *)(v36 - 4), (_DWORD)v37 == *(_DWORD *)(v36 - 8)) )
  {
    sub_53D790((__int64 *)(a1 + 608));
    v36 = *(_QWORD *)(a1 + 608);
    v37 = *(unsigned int *)(v36 - 4);
  }
  v38 = v36 + 32 * v37;
  *(_DWORD *)v38 = v104;
  *(_BYTE *)(v38 + 4) = BYTE4(v104) & 3 | *(_BYTE *)(v38 + 4) & 0xFC;
  v39 = v105;
  v105 = 0;
  *(_QWORD *)(v38 + 8) = v39;
  *(_DWORD *)(v38 + 16) = v106;
  *(_BYTE *)(v38 + 20) = BYTE4(v106) & 3 | *(_BYTE *)(v38 + 20) & 0xFC;
  v40 = v107;
  v107 = 0;
  *(_QWORD *)(v38 + 24) = v40;
  ++*(_DWORD *)(v36 - 4);
  sub_25A130((char *)&v104);
  v41 = *(_QWORD *)(a1 + 632);
  if ( !v41 )
  {
    v89 = (_QWORD *)sub_186B270(0x18u);
    v41 = (unsigned __int64)(v89 + 1);
    *v89 = 2;
    v44 = 1;
    *(_QWORD *)(a1 + 632) = v41;
    v45 = (_QWORD *)v41;
    goto LABEL_23;
  }
  v42 = *(_DWORD *)(v41 - 4);
  if ( v42 != *(_DWORD *)(v41 - 8) )
  {
    v43 = v42;
    v44 = v42 + 1;
    v45 = (_QWORD *)(v41 + 8 * v43);
    goto LABEL_23;
  }
  v101 = (3 * v42 + 1) >> 1;
  v53 = 8 * v101 + 8;
  if ( 8 * v42 + 8 >= (unsigned int)v53 || v42 >= (3 * v42 + 1) >> 1 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(&v104, "Overflow encountered when expanding vector");
    goto LABEL_89;
  }
  v54 = sub_186B270(v53);
  v55 = *(__int64 **)(a1 + 632);
  v56 = (__int64 *)v54;
  v41 = v54 + 8;
  if ( v55 )
  {
    v57 = *((unsigned int *)v55 - 1);
    *(_DWORD *)(v54 + 4) = v57;
    v58 = 8 * v57;
    v59 = &v55[v57];
    if ( v59 != v55 )
    {
      v60 = v58 - 8;
      if ( (unsigned __int64)(v58 - 8) <= 8 || v41 < (unsigned __int64)(v55 + 2) && v55 < v56 + 3 )
      {
        v85 = v55;
        v86 = v41;
        do
        {
          v87 = *v85;
          *v85++ = 0;
          v86 += 8LL;
          *(_QWORD *)(v86 - 8) = v87;
        }
        while ( v85 != v59 );
      }
      else
      {
        v61 = 0;
        v62 = (v60 >> 3) + 1;
        do
        {
          v63 = _mm_loadu_si128((const __m128i *)&v55[v61]);
          *(_OWORD *)&v55[v61] = 0;
          *(__m128i *)&v56[v61 + 1] = v63;
          v61 += 2LL;
        }
        while ( v61 != 2 * (v62 >> 1) );
        if ( (v62 & 1) != 0 )
        {
          v64 = v62 & 0xFFFFFFFFFFFFFFFELL;
          v65 = &v55[v64];
          v66 = *v65;
          *v65 = 0;
          *(_QWORD *)(v41 + 8 * v64) = v66;
        }
      }
    }
    v94 = &v55[v57];
    if ( (_DWORD)v57 )
    {
      do
      {
        while ( *v55 )
        {
          v96 = v55;
          sub_186B220((void *)(*v55 - 8));
          v55 = v96 + 1;
          if ( v94 == v96 + 1 )
            goto LABEL_52;
        }
        ++v55;
      }
      while ( v94 != v55 );
LABEL_52:
      v55 = *(__int64 **)(a1 + 632);
    }
    sub_186B220(v55 - 1);
    v45 = (_QWORD *)(v41 + 8LL * *((unsigned int *)v56 + 1));
    v44 = *((_DWORD *)v56 + 1) + 1;
  }
  else
  {
    *(_DWORD *)(v54 + 4) = 0;
    v45 = (_QWORD *)(v54 + 8);
    v44 = 1;
  }
  *(_QWORD *)(a1 + 632) = v41;
  *(_DWORD *)v56 = v101;
LABEL_23:
  *v45 = 0;
  *(_DWORD *)(v41 - 4) = v44;
  v46 = *(_QWORD *)(a1 + 640);
  if ( !v46 || (v47 = *(unsigned int *)(v46 - 4), (_DWORD)v47 == *(_DWORD *)(v46 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 640));
    v46 = *(_QWORD *)(a1 + 640);
    v47 = *(unsigned int *)(v46 - 4);
  }
  *(_DWORD *)(v46 + 4 * v47) = 0;
  ++*(_DWORD *)(v46 - 4);
  v48 = *(_QWORD *)(a1 + 656);
  if ( !v48 || (v49 = *(unsigned int *)(v48 - 4), (_DWORD)v49 == *(_DWORD *)(v48 - 8)) )
  {
    sub_313C10((unsigned int **)(a1 + 656));
    v48 = *(_QWORD *)(a1 + 656);
    v49 = *(unsigned int *)(v48 - 4);
  }
  *(_DWORD *)(v48 + 4 * v49) = -1;
  ++*(_DWORD *)(v48 - 4);
  v104 = 0;
  sub_98CD80((_QWORD *)(a1 + 616), &v104);
  v104 = 0;
  sub_98CD80((_QWORD *)(a1 + 624), &v104);
  v50 = *(_QWORD *)(a1 + 808);
  if ( v50 )
    v51 = *(_DWORD *)(v50 - 4);
  else
    v51 = 0;
  if ( (int)v10 >= v51 )
    sub_8C3430((_QWORD *)(a1 + 808), v10 + 1, 0);
  sub_9CB4A0(a1 + 848, v9);
  sub_9CB4A0(a1 + 816, v9);
  sub_9CB4A0(a1 + 872, v9);
  if ( (unsigned __int8)sub_98AD60(*a2) )
    sub_98D100((_QWORD *)(a1 + 696), &v103);
  sub_B66EF0(*(_QWORD *)(a1 + 16), a2, a1, v10);
  return v10;
}

