void *__fastcall sub_627360(__int64 a1, __int64 a2)
{
  char **exception; // r14
  char **v3; // rbp
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rbp
  _QWORD *v9; // rbp
  _QWORD *v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  char *v14; // rdi
  int v15; // ecx
  __int64 v16; // rsi
  char *v17; // rax
  char *v18; // rdx
  unsigned int v19; // r13d
  size_t v20; // rbp
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  _OWORD *v23; // rdx
  _QWORD *v24; // rdi
  int v25; // ecx
  __int64 v26; // rsi
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  unsigned int v29; // r13d
  size_t v30; // rbp
  _OWORD *v31; // rax
  _OWORD *v32; // rcx
  _OWORD *v33; // rdx
  __m128i *v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // r14
  int v39; // eax
  unsigned int v40; // ecx
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // rdx
  int v44; // eax
  _QWORD *v45; // rdx
  __m128i v46; // kr00_16
  unsigned int v47; // eax
  unsigned int v48; // edx
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rbp
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // r13
  _QWORD *v54; // rax
  unsigned __int64 *v55; // rdx
  int v56; // eax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned int v59; // eax
  unsigned __int64 v60; // r13
  unsigned __int64 v61; // rdi
  __int64 v62; // rbp
  __int64 v63; // rax
  int v64; // r9d
  __int64 v65; // rbp
  __int64 *v66; // r14
  unsigned __int64 v67; // r15
  __int64 v68; // rsi
  unsigned int v69; // r15d
  size_t v70; // rsi
  unsigned int *v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rax
  void (__fastcall ***v74)(_QWORD); // r14
  __int64 *v75; // rbp
  unsigned __int64 v76; // r12
  __int64 v77; // rsi
  __int64 v78; // r15
  __int64 v79; // rax
  __int64 v80; // r14
  void (***v81)(void); // rdi
  size_t v82; // rsi
  size_t v83; // rsi
  void *ptr; // [rsp+8h] [rbp-F0h]
  __int64 v86; // [rsp+20h] [rbp-D8h]
  __int64 v87; // [rsp+28h] [rbp-D0h]
  unsigned __int64 i; // [rsp+30h] [rbp-C8h]
  __int64 v89; // [rsp+38h] [rbp-C0h]
  __int64 v90; // [rsp+40h] [rbp-B8h]
  unsigned int v91; // [rsp+48h] [rbp-B0h]
  int v92; // [rsp+48h] [rbp-B0h]
  int v93; // [rsp+48h] [rbp-B0h]
  unsigned int v94; // [rsp+4Ch] [rbp-ACh]
  unsigned int v95; // [rsp+50h] [rbp-A8h]
  unsigned int v96; // [rsp+54h] [rbp-A4h]
  __int64 v97; // [rsp+58h] [rbp-A0h]
  __int64 v98; // [rsp+68h] [rbp-90h]
  __m128i v99; // [rsp+90h] [rbp-68h] BYREF
  __m128 v100[5]; // [rsp+A0h] [rbp-58h] BYREF

  if ( !(unsigned __int8)sub_64B3E0(*(_QWORD *)(a1 + 32)) )
    return nullptr;
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 - 4);
    if ( v6 )
    {
      v7 = 0;
      while ( !(unsigned __int8)sub_62A4D0(*(_QWORD *)(v5 + v7)) )
      {
        v7 += 8;
        if ( 8LL * v6 == v7 )
          goto LABEL_11;
        v5 = *(_QWORD *)(a2 + 24);
      }
      return nullptr;
    }
  }
  else
  {
    v6 = 0;
  }
LABEL_11:
  v9 = *(_QWORD **)(a1 + 64);
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(_QWORD *)(a1 + 56);
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_18;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_18:
    v9 = *(_QWORD **)(a1 + 64);
    if ( v9 )
LABEL_19:
      *((_DWORD *)v9 - 1) = 0;
  }
  if ( *(_DWORD *)(a1 + 108) || *(_DWORD *)(a1 + 112) )
  {
    v14 = *(char **)(a1 + 96);
    v15 = 0;
    v16 = *(unsigned int *)(a1 + 104);
    v17 = v14;
    v18 = &v14[16 * v16];
    if ( v14 == v18 )
      goto LABEL_35;
    do
    {
      while ( *(_QWORD *)v17 )
      {
        *(_QWORD *)v17 = 0;
        v17 += 16;
        if ( v18 == v17 )
          goto LABEL_27;
      }
      v17 += 16;
      ++v15;
    }
    while ( v18 != v17 );
LABEL_27:
    if ( (unsigned int)v16 <= 0x10 || 3 * (int)v16 >= (unsigned int)(4 * v15) )
      goto LABEL_35;
    if ( v14 )
    {
      sub_186B220(v14);
      v19 = *(_DWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 96) = 0;
      v19 >>= 1;
      *(_DWORD *)(a1 + 104) = v19;
      v20 = v19;
      v21 = (_OWORD *)sub_186B270(v20 * 16);
      if ( !v19 )
      {
LABEL_34:
        *(_QWORD *)(a1 + 96) = v21;
LABEL_35:
        *(_QWORD *)(a1 + 108) = 0;
        goto LABEL_36;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 96) = 0;
      v83 = (unsigned int)v16 >> 1;
      *(_DWORD *)(a1 + 104) = v83;
      v20 = v83;
      v21 = (_OWORD *)sub_186B270(16 * v83);
    }
    v22 = &v21[v20];
    v23 = v21;
    if ( ((v20 * 16) & 0x10) == 0 || (v23 = v21 + 1, *v21 = 0, v22 != v21 + 1) )
    {
      do
      {
        *v23 = 0;
        v23 += 2;
        *(v23 - 1) = 0;
      }
      while ( v22 != v23 );
    }
    goto LABEL_34;
  }
LABEL_36:
  if ( !*(_DWORD *)(a1 + 84) && !*(_DWORD *)(a1 + 88) )
    goto LABEL_52;
  v24 = *(_QWORD **)(a1 + 72);
  v25 = 0;
  v26 = *(unsigned int *)(a1 + 80);
  v27 = v24;
  v28 = &v24[2 * v26];
  if ( v24 != v28 )
  {
    do
    {
      while ( *v27 )
      {
        *v27 = 0;
        v27 += 2;
        if ( v28 == v27 )
          goto LABEL_43;
      }
      v27 += 2;
      ++v25;
    }
    while ( v28 != v27 );
LABEL_43:
    if ( (unsigned int)v26 > 0x10 && 3 * (int)v26 < (unsigned int)(4 * v25) )
    {
      if ( v24 )
      {
        sub_186B220(v24);
        v29 = *(_DWORD *)(a1 + 80);
        *(_QWORD *)(a1 + 72) = 0;
        v29 >>= 1;
        *(_DWORD *)(a1 + 80) = v29;
        v30 = v29;
        v31 = (_OWORD *)sub_186B270(v30 * 16);
        if ( !v29 )
        {
LABEL_50:
          *(_QWORD *)(a1 + 72) = v31;
          goto LABEL_51;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 72) = 0;
        v82 = (unsigned int)v26 >> 1;
        *(_DWORD *)(a1 + 80) = v82;
        v30 = v82;
        v31 = (_OWORD *)sub_186B270(16 * v82);
      }
      v32 = &v31[v30];
      v33 = v31;
      if ( ((v30 * 16) & 0x10) == 0 || (v33 = v31 + 1, *v31 = 0, v32 != v31 + 1) )
      {
        do
        {
          *v33 = 0;
          v33 += 2;
          *(v33 - 1) = 0;
        }
        while ( v32 != v33 );
      }
      goto LABEL_50;
    }
  }
LABEL_51:
  *(_QWORD *)(a1 + 84) = 0;
LABEL_52:
  v90 = *(_QWORD *)(a1 + 24);
  v97 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2952LL) )
  {
    v34 = (__m128i *)sub_186B270(0x60u);
    v35 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
    v34[1].m128i_i8[8] = 1;
    v34->m128i_i32[2] = 0;
    v34[1].m128i_i64[0] = 0;
    v34->m128i_i64[0] = (__int64)&off_1C68A28;
    v34[3].m128i_i64[0] = 0;
    v34[4].m128i_i64[0] = 0;
    v34[4].m128i_i64[1] = 0;
    v34[5].m128i_i64[0] = 0;
    v34[5].m128i_i64[1] = 0;
    *(_QWORD *)(a1 + 120) = v34;
    v34[2] = _mm_unpacklo_epi64(v35, v35);
    v34[3].m128i_i64[1] = v35.m128i_i64[0];
  }
  ptr = (void *)sub_186B270(0xF8u);
  sub_63D370(ptr, *(_QWORD *)(a1 + 32));
  if ( v6 )
  {
    v86 = 0;
    v36 = 8LL * v6;
    v37 = nullptr;
    v89 = 0;
    v98 = v36;
    for ( i = 0; ; i = v60 )
    {
      v38 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + v86);
      v87 = v38;
      v39 = sub_648530(v97 + 16, v38);
      v40 = *(_DWORD *)(v38 + 68);
      v96 = v39 + 1;
      v94 = v40;
      v95 = *(_DWORD *)(v38 + 56);
      if ( v40 )
      {
        v41 = v38;
        v42 = v38 + 8LL * v40;
        do
        {
          while ( 1 )
          {
            sub_6267A0(&v99, a1, a2, (__int64)ptr, *(_QWORD *)(v41 + 80) & 0xFFFFFFFFFFFFFFF8LL);
            v46 = v99;
            if ( v99.m128i_i64[0] )
              ++*(_DWORD *)(v99.m128i_i64[0] + 8);
            if ( v37 )
            {
              v47 = *((_DWORD *)v37 - 1);
              if ( v47 == *((_DWORD *)v37 - 2) )
              {
                v48 = (3 * v47 + 1) >> 1;
                v49 = 8 * v48 + 8;
                if ( 8 * v47 + 8 >= (unsigned int)v49 || v47 >= v48 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v100, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v100);
                  sub_233E40((__int64)v100);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v91 = (3 * v47 + 1) >> 1;
                v50 = (unsigned int *)sub_186B300(v37 - 1, v49);
                v37 = v50 + 2;
                *v50 = v91;
                LODWORD(v50) = v50[1];
                v45 = &v37[(unsigned int)v50];
                v44 = (_DWORD)v50 + 1;
              }
              else
              {
                v43 = v47;
                v44 = v47 + 1;
                v45 = &v37[v43];
              }
            }
            else
            {
              v73 = (_QWORD *)sub_186B270(0x18u);
              v37 = v73 + 1;
              v45 = v73 + 1;
              *v73 = 2;
              v44 = 1;
            }
            *v45 = v46.m128i_i64[0];
            *((_DWORD *)v37 - 1) = v44;
            if ( v46.m128i_i64[0] )
            {
              v13 = (*(_DWORD *)(v46.m128i_i64[0] + 8))-- == 1;
              if ( v13 )
                break;
            }
            v41 += 8;
            if ( v41 == v42 )
              goto LABEL_70;
          }
          v41 += 8;
          sub_15D7BC0(v46.m128i_i64[1], v46.m128i_i64[0]);
        }
        while ( v41 != v42 );
      }
LABEL_70:
      if ( v94 < v95 )
      {
        v51 = v87 + 8LL * v94;
        v52 = v87 + 8 * (v94 + (unsigned __int64)(v95 - 1 - v94)) + 8;
        v53 = *(_QWORD *)(v51 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v51 + 80) > 7u )
          ++*(_DWORD *)(v53 + 8);
        if ( !v37 )
        {
          v54 = (_QWORD *)sub_186B270(0x18u);
          v37 = v54 + 1;
          v55 = v54 + 1;
          *v54 = 2;
          v56 = 1;
          goto LABEL_75;
        }
        while ( 1 )
        {
          v59 = *((_DWORD *)v37 - 1);
          if ( v59 == *((_DWORD *)v37 - 2) )
          {
            v69 = (3 * v59 + 1) >> 1;
            v70 = 8 * v69 + 8;
            if ( 8 * v59 + 8 >= (unsigned int)v70 || v59 >= v69 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v100, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v100);
              sub_233E40((__int64)v100);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v71 = (unsigned int *)sub_186B300(v37 - 1, v70);
            v72 = v71[1];
            v37 = v71 + 2;
            *v71 = v69;
            LODWORD(v71) = v72;
            v55 = &v37[v72];
            v56 = (_DWORD)v71 + 1;
LABEL_75:
            v51 += 8;
            *v55 = v53;
            *((_DWORD *)v37 - 1) = v56;
            if ( v52 == v51 )
              break;
          }
          else
          {
            v51 += 8;
            v37[v59] = v53;
            *((_DWORD *)v37 - 1) = v59 + 1;
            if ( v52 == v51 )
              break;
          }
          v57 = *(_QWORD *)(v51 + 80);
          v53 = 0;
          if ( v57 > 7 )
          {
            v58 = v57 & 0xFFFFFFFFFFFFFFF8LL;
            ++*(_DWORD *)(v58 + 8);
            v53 = v58;
          }
        }
      }
      sub_6262E0(v100, a1, a2, (__int64)ptr, *(_QWORD *)(v87 + 40), v96);
      v60 = v100[0].m128_u64[0];
      if ( i && (v61 = v100[0].m128_u64[1], v92 = *(_DWORD *)(i + 8), *(_DWORD *)(i + 8) = v92 - 1, v92 == 1) )
      {
        sub_15D7BC0(v61, i);
        v62 = *(_QWORD *)(a1 + 24);
      }
      else
      {
        v62 = *(_QWORD *)(a1 + 24);
      }
      sub_15E1AF0(v62);
      v63 = sub_15E1B70(v62);
      v65 = v63;
      if ( v63 )
        ++*(_DWORD *)(v63 + 8);
      if ( v89 )
      {
        v93 = *(_DWORD *)(v89 + 8);
        *(_DWORD *)(v89 + 8) = v93 - 1;
        if ( v93 == 1 )
          sub_15D7BC0(v90, v89);
      }
      sub_631ED0(v97, v65, 0, (_DWORD)ptr, v87 + 72, v64);
      v86 += 8;
      if ( v98 == v86 )
        goto LABEL_104;
      if ( v37 )
      {
        v66 = v37;
        v67 = (unsigned __int64)&v37[*((unsigned int *)v37 - 1)];
        if ( (unsigned __int64)v37 < v67 )
        {
          do
          {
            while ( 1 )
            {
              v68 = *v66;
              if ( *v66 )
              {
                v13 = (*(_DWORD *)(v68 + 8))-- == 1;
                if ( v13 )
                  break;
              }
              if ( (unsigned __int64)++v66 >= v67 )
                goto LABEL_96;
            }
            sub_15D7BC0(v90, v68);
            ++v66;
          }
          while ( (unsigned __int64)v66 < v67 );
        }
LABEL_96:
        *((_DWORD *)v37 - 1) = 0;
      }
      v89 = v65;
    }
  }
  v65 = 0;
  v60 = 0;
  v37 = nullptr;
LABEL_104:
  v74 = *(void (__fastcall ****)(_QWORD))(a1 + 120);
  if ( *(_DWORD *)(a1 + 108) )
  {
    v78 = *(_QWORD *)(a1 + 32);
    v79 = sub_1336AB0(*(_QWORD *)(v78 + 2952), *(_QWORD *)(a1 + 120));
    v80 = v79;
    if ( v79 )
      ++*(_DWORD *)(v79 + 8);
    v81 = *(void (****)(void))(v78 + 2952);
    if ( v81 )
    {
      v13 = (*((_DWORD *)v81 + 2))-- == 1;
      if ( v13 )
      {
        (**v81)();
        sub_186B220(v81);
      }
    }
    *(_QWORD *)(v78 + 2952) = v80;
  }
  else
  {
    if ( v74 )
    {
      (**v74)(*(_QWORD *)(a1 + 120));
      sub_186B220(v74);
    }
    sub_63D960(ptr);
    sub_186B220(ptr);
    ptr = nullptr;
  }
  *(_QWORD *)(a1 + 120) = 0;
  if ( v65 )
  {
    v13 = (*(_DWORD *)(v65 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v90, v65);
  }
  if ( v60 )
  {
    v13 = (*(_DWORD *)(v60 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v90, v60);
  }
  if ( v37 )
  {
    v75 = v37;
    v76 = (unsigned __int64)&v37[*((unsigned int *)v37 - 1)];
    if ( (unsigned __int64)v37 < v76 )
    {
      do
      {
        while ( 1 )
        {
          v77 = *v75;
          if ( *v75 )
          {
            v13 = (*(_DWORD *)(v77 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( (unsigned __int64)++v75 >= v76 )
            goto LABEL_121;
        }
        ++v75;
        sub_15D7BC0(v90, v77);
      }
      while ( (unsigned __int64)v75 < v76 );
    }
LABEL_121:
    sub_186B220(v37 - 1);
  }
  return ptr;
}

