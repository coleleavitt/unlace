unsigned __int64 __fastcall sub_5D7A00(__int64 a1, int a2, int a3, __m128 a4)
{
  char **exception; // r15
  int *v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __m128 *v11; // rbx
  unsigned int v12; // r9d
  __int64 v13; // rcx
  unsigned __int64 *v14; // r13
  __int64 v15; // rdx
  int v16; // r8d
  __int64 *v17; // rax
  __int64 *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r9
  __m128 *v21; // rax
  __m128 *v22; // rcx
  unsigned __int64 *v23; // r11
  int *v24; // r9
  __int64 v25; // rdi
  int v26; // esi
  __int64 *v27; // rdx
  __int64 *v28; // r10
  __int64 v29; // rdi
  __int64 v30; // rax
  unsigned __int64 *v31; // r11
  int *v32; // rdi
  __int64 v33; // rsi
  int v34; // ecx
  __int64 *v35; // rdx
  __int64 *v36; // r9
  __int64 v37; // rsi
  int **v38; // rax
  __int64 v39; // rbx
  void *v40; // r13
  __int64 v41; // rbx
  int v42; // r8d
  int v43; // r9d
  _QWORD *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rcx
  unsigned __int64 v47; // rsi
  int v48; // eax
  __int64 *v49; // rcx
  __int64 v50; // r13
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // r12
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  int v57; // r9d
  bool v58; // zf
  char *v59; // rbx
  unsigned __int64 v60; // r12
  char *v61; // r15
  __int64 v62; // rsi
  __m128 *v64; // rax
  int v65; // r10d
  __m128 *v66; // r8
  __m128i *v67; // r11
  __int64 v68; // rax
  __int64 v69; // rsi
  unsigned int v70; // edx
  __int64 *v71; // rax
  __int64 *v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rdx
  __m128 *v75; // rsi
  const __m128i *v76; // rdi
  __m128 *v77; // rax
  unsigned int v78; // r13d
  unsigned int v79; // ecx
  unsigned int *v80; // rax
  _QWORD *v81; // rax
  int v82; // [rsp+0h] [rbp-150h]
  int v83; // [rsp+0h] [rbp-150h]
  int v84; // [rsp+8h] [rbp-148h]
  int v85; // [rsp+8h] [rbp-148h]
  int v86; // [rsp+10h] [rbp-140h]
  int v87; // [rsp+10h] [rbp-140h]
  int v88; // [rsp+18h] [rbp-138h]
  int v89; // [rsp+18h] [rbp-138h]
  int v90; // [rsp+20h] [rbp-130h]
  __int64 v91; // [rsp+20h] [rbp-130h]
  int v92; // [rsp+20h] [rbp-130h]
  int v93; // [rsp+28h] [rbp-128h]
  unsigned int v94; // [rsp+28h] [rbp-128h]
  int v95; // [rsp+28h] [rbp-128h]
  __int64 v96; // [rsp+28h] [rbp-128h]
  int v97; // [rsp+30h] [rbp-120h]
  __int64 *v98; // [rsp+38h] [rbp-118h]
  int v99; // [rsp+38h] [rbp-118h]
  int v100[2]; // [rsp+40h] [rbp-110h]
  int v101; // [rsp+48h] [rbp-108h]
  unsigned __int64 *v102; // [rsp+48h] [rbp-108h]
  int v103[2]; // [rsp+48h] [rbp-108h]
  size_t v104; // [rsp+48h] [rbp-108h]
  const __m128i *v105; // [rsp+48h] [rbp-108h]
  unsigned int v106; // [rsp+48h] [rbp-108h]
  int v107; // [rsp+50h] [rbp-100h]
  __int64 v108; // [rsp+58h] [rbp-F8h] BYREF
  void *v109; // [rsp+60h] [rbp-F0h] BYREF
  int v110; // [rsp+70h] [rbp-E0h]
  int v111[2]; // [rsp+80h] [rbp-D0h] BYREF
  void *ptr; // [rsp+88h] [rbp-C8h]
  __int64 v113; // [rsp+90h] [rbp-C0h]
  _BYTE v114[184]; // [rsp+98h] [rbp-B8h] BYREF

  *(_QWORD *)v111 = *(_QWORD *)(a1 + 32);
  ptr = v114;
  v113 = 0x1000000000LL;
  v7 = (int *)sub_186B270(0xA8u);
  v8 = *(_QWORD *)(a1 + 32);
  HIDWORD(v108) = 0;
  *((_QWORD *)v7 + 4) = 0x1000000000LL;
  *((_QWORD *)v7 + 1) = v8;
  v101 = v8;
  *((_QWORD *)v7 + 2) = v8;
  *(_QWORD *)v7 = 0;
  *((_QWORD *)v7 + 3) = v7 + 10;
  v9 = (_QWORD *)sub_186B270(0xC0u);
  *v9 = 0;
  v9[3] = 0;
  v9[6] = 0;
  v9[9] = 0;
  v9[12] = 0;
  v9[15] = 0;
  v9[18] = 0;
  v9[21] = 0;
  v110 = 0;
  sub_645160(
    v101,
    a2,
    a3,
    (int)&v108 + 4,
    (int)&v109,
    (int)v111,
    (__int64)(v7 + 4),
    (__int64)v7,
    v82,
    v84,
    v86,
    v88,
    v90,
    v93,
    (int)&v108 + 4,
    (int)&v109,
    a2,
    v101,
    v107,
    v108,
    v9,
    8);
  if ( v109 )
    sub_186B220(v109);
  v10 = *(unsigned int *)(a1 + 56);
  if ( 3 * (int)v10 < (unsigned int)(4 * (*(_DWORD *)(a1 + 60) + *(_DWORD *)(a1 + 64))) )
  {
    v95 = 2 * v10;
    v104 = 16LL * (unsigned int)(2 * v10);
    v64 = (__m128 *)sub_186B270(v104);
    v13 = v104;
    v65 = v95;
    v11 = v64;
    v66 = &v64[v104 / 0x10];
    if ( v95 )
    {
      a4.m128_u64[0] = 0;
      if ( (v104 & 0x10) == 0 || (*v64 = 0, ++v64, v66 != v64) )
      {
        do
        {
          *v64 = 0;
          v64 += 2;
          v64[-1] = 0;
        }
        while ( v66 != v64 );
      }
    }
    v12 = v95 - 1;
    v14 = (unsigned __int64 *)v66;
    v105 = *(const __m128i **)(a1 + 48);
    v67 = (__m128i *)&v105[*(unsigned int *)(a1 + 56)];
    if ( v105 != v67 )
    {
      do
      {
        v68 = v105->m128i_i64[0];
        if ( v105->m128i_i64[0] > 1uLL )
        {
          v69 = *(unsigned int *)(v68 + 32);
          v70 = *(_DWORD *)(*(_QWORD *)v68 + 12LL);
          if ( (_DWORD)v69 )
          {
            v71 = *(__int64 **)(v68 + 24);
            v72 = &v71[v69];
            do
            {
              v73 = *v71++;
              v70 ^= *(_DWORD *)(v73 + 12);
            }
            while ( v71 != v72 );
          }
          v74 = 16LL * (v12 & v70);
          v75 = &v11[(unsigned __int64)v74 / 0x10];
          if ( v13 == v74 )
          {
LABEL_75:
            if ( v11 == v75 )
            {
LABEL_90:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v76 = v105;
            v77 = v11;
            while ( v77->m128_u64[0] )
            {
              if ( v75 == ++v77 )
                goto LABEL_90;
            }
          }
          else
          {
            v76 = v105;
            v77 = &v11[(unsigned __int64)v74 / 0x10];
            while ( v77->m128_u64[0] )
            {
              if ( v66 == ++v77 )
                goto LABEL_75;
            }
          }
          a4 = (__m128)_mm_loadu_si128(v76);
          v105 = v76;
          *v77 = a4;
        }
        ++v105;
      }
      while ( v67 != v105 );
      v67 = *(__m128i **)(a1 + 48);
    }
    if ( v67 )
    {
      v92 = v95;
      v96 = v13;
      v106 = v65 - 1;
      sub_186B220(v67);
      v65 = v92;
      v13 = v96;
      v12 = v106;
    }
    *(_QWORD *)(a1 + 48) = v11;
    *(_DWORD *)(a1 + 56) = v65;
    *(_DWORD *)(a1 + 64) = 0;
  }
  else
  {
    v11 = *(__m128 **)(a1 + 48);
    v12 = v10 - 1;
    v13 = 16 * v10;
    v14 = (unsigned __int64 *)((char *)v11 + v13);
  }
  v15 = (unsigned int)v7[8];
  v16 = *(_DWORD *)(*(_QWORD *)v7 + 12LL);
  if ( (_DWORD)v15 )
  {
    v17 = *((__int64 **)v7 + 3);
    v18 = &v17[v15];
    do
    {
      v19 = *v17++;
      v16 ^= *(_DWORD *)(v19 + 12);
    }
    while ( v18 != v17 );
  }
  v20 = 16LL * (v16 & v12);
  v21 = &v11[(unsigned __int64)v20 / 0x10];
  if ( v20 == v13 )
  {
    *(_QWORD *)v103 = 0;
    goto LABEL_23;
  }
  v22 = &v11[(unsigned __int64)v20 / 0x10];
  v23 = nullptr;
  while ( 1 )
  {
    v24 = (int *)v22->m128_u64[0];
    if ( v22->m128_u64[0] <= 1 )
    {
      if ( !v24 )
      {
        v102 = v23;
        v38 = (int **)v23;
        if ( v23 )
          goto LABEL_36;
        v102 = (unsigned __int64 *)v22;
        v38 = (int **)v22;
LABEL_37:
        *v38 = v7;
        v38[1] = nullptr;
        ++*(_DWORD *)(a1 + 60);
        goto LABEL_38;
      }
      v23 = (unsigned __int64 *)v22;
      goto LABEL_12;
    }
    v25 = (unsigned int)v24[8];
    v26 = *(_DWORD *)(*(_QWORD *)v24 + 12LL);
    if ( (_DWORD)v25 )
    {
      v27 = *((__int64 **)v24 + 3);
      v28 = &v27[v25];
      do
      {
        v29 = *v27++;
        v26 ^= *(_DWORD *)(v29 + 12);
      }
      while ( v27 != v28 );
    }
    if ( v16 == v26 && v7 == v24 )
      break;
LABEL_12:
    if ( ++v22 == (__m128 *)v14 )
    {
      *(_QWORD *)v103 = v23;
LABEL_23:
      if ( v21 == v11 )
      {
LABEL_84:
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v31 = *(unsigned __int64 **)v103;
      while ( 1 )
      {
        v32 = (int *)v11->m128_u64[0];
        if ( v11->m128_u64[0] <= 1 )
        {
          if ( !v32 )
          {
            v102 = v31;
            v38 = (int **)v31;
            if ( !v31 )
            {
              v102 = (unsigned __int64 *)v11;
              v38 = (int **)v11;
              goto LABEL_37;
            }
LABEL_36:
            --*(_DWORD *)(a1 + 64);
            goto LABEL_37;
          }
          v31 = (unsigned __int64 *)v11;
        }
        else
        {
          v33 = (unsigned int)v32[8];
          v34 = *(_DWORD *)(*(_QWORD *)v32 + 12LL);
          if ( (_DWORD)v33 )
          {
            v35 = *((__int64 **)v32 + 3);
            v36 = &v35[v33];
            do
            {
              v37 = *v35++;
              v34 ^= *(_DWORD *)(v37 + 12);
            }
            while ( v35 != v36 );
          }
          if ( v16 == v34 && v7 == v32 )
          {
            v102 = (unsigned __int64 *)v11;
            v30 = v11->m128_i64[1];
            goto LABEL_20;
          }
        }
        if ( v21 == ++v11 )
          goto LABEL_84;
      }
    }
  }
  v102 = (unsigned __int64 *)v22;
  v30 = v22->m128_i64[1];
LABEL_20:
  if ( v30 )
  {
    sub_5D8FC0(v7);
    goto LABEL_48;
  }
LABEL_38:
  v39 = *(_QWORD *)(a1 + 24);
  v94 = v113;
  v40 = ptr;
  v91 = *(_QWORD *)(*(_QWORD *)v100 + 16LL);
  sub_180C5A0(v98, "filter");
  v41 = sub_651680(v39, *(_QWORD *)(*(_QWORD *)v100 + 16LL) + 16LL, v98, v94, v40, v91);
  v102[1] = v41;
  if ( v41 )
    ++*(_DWORD *)(v41 + 8);
  v44 = *(_QWORD **)(a1 + 104);
  if ( v44 )
  {
    v45 = *((_DWORD *)v44 - 1);
    if ( v45 == *((_DWORD *)v44 - 2) )
    {
      v78 = (3 * v45 + 1) >> 1;
      v79 = 8 * v78 + 8;
      if ( 8 * v45 + 8 >= v79 || v45 >= v78 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v98, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v98);
        sub_233E40((__int64)v98);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v80 = (unsigned int *)sub_186B300(v44 - 1, v79);
      v44 = v80 + 2;
      *v80 = v78;
      *(_QWORD *)(a1 + 104) = v80 + 2;
      v47 = v102[1];
      LODWORD(v80) = v80[1];
      v49 = &v44[(unsigned int)v80];
      v48 = (_DWORD)v80 + 1;
    }
    else
    {
      v46 = v45;
      LODWORD(v47) = v41;
      v48 = v45 + 1;
      v49 = &v44[v46];
    }
  }
  else
  {
    v81 = (_QWORD *)sub_186B270(0x18u);
    *v81 = 2;
    v44 = v81 + 1;
    v47 = v102[1];
    *(_QWORD *)(a1 + 104) = v81 + 1;
    v49 = v81 + 1;
    v48 = 1;
  }
  *v49 = v41;
  v50 = *(_QWORD *)(a1 + 32);
  *((_DWORD *)v44 - 1) = v48;
  v51 = sub_15DC610(
          v50,
          v47,
          v7[8],
          *((_QWORD *)v7 + 3),
          v42,
          v43,
          v83,
          v85,
          v87,
          v89,
          v91,
          v94,
          v97,
          (int)v98,
          v100[0],
          v102);
  v52 = v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  v109 = *(void **)v7;
  v53 = sub_62C680(*(_DWORD *)(a1 + 24) + 656, v51, 1, v99, 0, (unsigned int)&qword_18D6CD0, 1);
  sub_629AF0(v53, *(_QWORD *)(a1 + 24));
  sub_63DAD0(*(_QWORD *)(a1 + 72), v53, *(double *)a4.m128_u64);
  sub_62F900(*(_DWORD *)(a1 + 24) + 656, v53, v54, v55, v56, v57);
  if ( v52 )
  {
    v58 = (*(_DWORD *)(v52 + 8))-- == 1;
    if ( v58 )
      sub_15D7BC0(v50, v52);
  }
LABEL_48:
  v59 = (char *)ptr;
  v60 = v102[1];
  if ( ptr < (char *)ptr + 8 * (unsigned int)v113 )
  {
    v61 = (char *)ptr + 8 * (unsigned int)v113;
    do
    {
      while ( 1 )
      {
        v62 = *(_QWORD *)v59;
        if ( *(_QWORD *)v59 )
        {
          v58 = (*(_DWORD *)(v62 + 8))-- == 1;
          if ( v58 )
            break;
        }
        v59 += 8;
        if ( v59 >= v61 )
          goto LABEL_54;
      }
      sub_15D7BC0(*(_QWORD *)v111, v62);
      v59 += 8;
    }
    while ( v59 < v61 );
LABEL_54:
    v59 = (char *)ptr;
  }
  if ( v59 != v114 && v59 )
    sub_186B220(v59);
  return v60;
}

