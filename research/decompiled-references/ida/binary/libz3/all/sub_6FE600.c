__int64 __fastcall sub_6FE600(const __m128i *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rsi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  char *v16; // rdx
  _QWORD *v17; // rdi
  __int64 v18; // rax
  char *v19; // rcx
  __int64 v20; // r15
  _QWORD *v21; // rax
  char *v22; // rdx
  _QWORD *v23; // rsi
  int i; // eax
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __m128i v32; // xmm0
  _QWORD *v33; // r14
  __int64 v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rdi
  bool v37; // zf
  _QWORD *v38; // r12
  unsigned __int64 v39; // r14
  __int64 v40; // rsi
  char *v41; // r12
  char *v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rdi
  _QWORD *v45; // rbx
  unsigned int v46; // r12d
  _QWORD *v47; // rbp
  __int64 v48; // rax
  unsigned int v50; // r9d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rsi
  _QWORD *v54; // rbp
  __int64 v55; // rsi
  char **exception; // r12
  __int64 v57; // [rsp+0h] [rbp-178h]
  int v58[2]; // [rsp+0h] [rbp-178h]
  __int64 v59; // [rsp+0h] [rbp-178h]
  int v60[2]; // [rsp+0h] [rbp-178h]
  int v61[2]; // [rsp+0h] [rbp-178h]
  char *v62; // [rsp+8h] [rbp-170h]
  char *v63; // [rsp+8h] [rbp-170h]
  unsigned int v64; // [rsp+14h] [rbp-164h]
  __int64 m128i_i64; // [rsp+18h] [rbp-160h]
  __int64 v67; // [rsp+38h] [rbp-140h] BYREF
  int v68[2]; // [rsp+40h] [rbp-138h] BYREF
  int v69[2]; // [rsp+48h] [rbp-130h]
  int v70[2]; // [rsp+50h] [rbp-128h]
  __int64 v71; // [rsp+58h] [rbp-120h]
  char v72[16]; // [rsp+60h] [rbp-118h] BYREF
  char v73[16]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v74[2]; // [rsp+80h] [rbp-F8h] BYREF
  char v75[32]; // [rsp+90h] [rbp-E8h] BYREF
  int v76[4]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-B8h]
  __int64 v78; // [rsp+C8h] [rbp-B0h]
  __int64 v79; // [rsp+D0h] [rbp-A8h]
  __int64 v80; // [rsp+D8h] [rbp-A0h]
  __int64 v81; // [rsp+E0h] [rbp-98h]
  __int64 v82; // [rsp+E8h] [rbp-90h]
  __int64 v83; // [rsp+F0h] [rbp-88h]
  __int64 v84; // [rsp+F8h] [rbp-80h]
  __int64 *v85; // [rsp+100h] [rbp-78h]
  __int64 v86; // [rsp+108h] [rbp-70h]
  __int64 v87; // [rsp+110h] [rbp-68h]
  __int64 v88; // [rsp+118h] [rbp-60h]
  int v89; // [rsp+120h] [rbp-58h]
  __int64 v90; // [rsp+128h] [rbp-50h]
  __int64 v91; // [rsp+130h] [rbp-48h] BYREF

  sub_1360C00(&v67, a3, &a1->m128i_u64[1]);
  sub_1360B80(&v67, 1);
  v7 = a1->m128i_i64[0];
  *(_QWORD *)v69 = 0;
  v71 = 0;
  *(_QWORD *)v68 = v7;
  *(_QWORD *)v70 = v7;
  sub_1684300(v72, v7);
  sub_16669D0(v73, a1->m128i_i64[0]);
  sub_15F01E0(v75, a1->m128i_i64[0]);
  sub_E65950(v76, a1->m128i_i64[0], &a1->m128i_u64[1]);
  sub_E659B0(v76, a2, a4);
  m128i_i64 = (__int64)a1[1].m128i_i64;
  sub_14B9B80(&a1[1], a4);
  sub_E65980(v76);
  sub_15EF030((_DWORD)a4, (_DWORD)a4, v8, v9, v10, v11, a1[2].m128i_i8[8]);
  sub_EAA3C0(v76, a1->m128i_i64[0], &a1->m128i_u64[1]);
  sub_EAA590(v76, a2, a4, a3);
  if ( (_BYTE)v57 )
    sub_6F0A40(*a4, a3, a4);
  sub_14B9B80(m128i_i64, a4);
  sub_EAA4C0(v76);
  sub_15EF030((_DWORD)a4, (_DWORD)a4, v12, v13, v14, v15, v57);
  sub_14B9B80(m128i_i64, a4);
  sub_6F0450(*a4, a3, (__int64)a4);
  v16 = (char *)a2[1];
  v17 = *(_QWORD **)v69;
  if ( !v16 || (v18 = *((unsigned int *)v16 - 1), v19 = &v16[8 * v18], v19 == v16) )
  {
    if ( !*(_QWORD *)v69 )
      goto LABEL_39;
  }
  else
  {
    v20 = *(_QWORD *)v16;
    if ( *(_QWORD *)v16 )
      ++*(_DWORD *)(v20 + 8);
    if ( v17 )
      goto LABEL_12;
    v62 = v16;
    *(_QWORD *)v58 = &v16[8 * v18];
    v21 = (_QWORD *)sub_186B270(0x18u);
    v17 = v21 + 1;
    v19 = *(char **)v58;
    v22 = v62;
    *v21 = 2;
    *(_QWORD *)v69 = v21 + 1;
    v23 = v21 + 1;
    for ( i = 1; ; i = (_DWORD)v52 + 1 )
    {
      v16 = v22 + 8;
      *v23 = v20;
      *((_DWORD *)v17 - 1) = i;
      if ( v19 == v16 )
        break;
      while ( 1 )
      {
        v20 = *(_QWORD *)v16;
        if ( *(_QWORD *)v16 )
          ++*(_DWORD *)(v20 + 8);
LABEL_12:
        v25 = *((_DWORD *)v17 - 1);
        if ( v25 == *((_DWORD *)v17 - 2) )
          break;
        v16 += 8;
        v17[v25] = v20;
        *((_DWORD *)v17 - 1) = v25 + 1;
        if ( v19 == v16 )
          goto LABEL_14;
      }
      v50 = (3 * v25 + 1) >> 1;
      v51 = 8 * v50 + 8;
      if ( 8 * v25 + 8 >= (unsigned int)v51 || v25 >= v50 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v76, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v76);
        sub_233E40((__int64)v76);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v64 = (3 * v25 + 1) >> 1;
      v63 = v16;
      *(_QWORD *)v61 = v19;
      v52 = (unsigned int *)sub_186B300(v17 - 1, v51);
      v53 = v52[1];
      v17 = v52 + 2;
      v19 = *(char **)v61;
      v22 = v63;
      *(_QWORD *)v69 = v52 + 2;
      *v52 = v64;
      LODWORD(v52) = v53;
      v23 = &v17[v53];
    }
  }
LABEL_14:
  if ( *((_DWORD *)v17 - 1) )
  {
    v26 = a1->m128i_i64[0];
    v27 = *a4;
    *(_QWORD *)&v76[2] = 0;
    *(_QWORD *)v76 = v26;
    sub_15EEF60(v27);
    sub_6F8E80(a1, 0, (__int64 *)v68, a3, (__int64)v76, nullptr);
    if ( *(_QWORD *)&v76[2] )
      v28 = *(unsigned int *)(*(_QWORD *)&v76[2] - 4LL);
    else
      v28 = 0;
    v59 = *(_QWORD *)v76;
    v29 = sub_15EC1C0(*(_QWORD *)v76, v28);
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    v30 = *a4;
    *a4 = v29;
    sub_6EF400(v30, v59);
    sub_14B9B80(m128i_i64, a4);
    sub_2334C0((__int64 *)v76);
    if ( *(_QWORD *)v69 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v69 - 4LL) )
      {
        sub_6F3B20(a1, a3, (__int64 *)v68, a4);
        sub_14B9B80(m128i_i64, a4);
        if ( !a1[2].m128i_i8[9] )
        {
          if ( *(_QWORD *)v69 )
          {
            v31 = *(unsigned int *)(*(_QWORD *)v69 - 4LL);
            if ( (_DWORD)v31 )
            {
              v32 = _mm_loadl_epi64(a1);
              v33 = *(_QWORD **)v69;
              v77 = 0;
              v85 = &v91;
              v34 = *(_QWORD *)v69 + 8 * v31;
              v79 = 0;
              v80 = 0;
              v81 = 0;
              v82 = 0;
              v84 = 0;
              v86 = 1;
              v87 = 0;
              v88 = 0;
              v89 = 1065353216;
              v90 = 0;
              v91 = 0;
              *(__m128i *)v76 = _mm_unpacklo_epi64(v32, v32);
              v78 = v32.m128i_i64[0];
              v83 = v32.m128i_i64[0];
              do
              {
                while ( 1 )
                {
                  *(_QWORD *)v60 = *v33;
                  sub_13615B0(v74, &v67, *v33);
                  sub_14EA0D0(v76, *(_QWORD *)v60, v74[0]);
                  v35 = v74[0];
                  if ( v74[0] )
                  {
                    v36 = v74[1];
                    v37 = (*(_DWORD *)(v74[0] + 8LL))-- == 1;
                    if ( v37 )
                      break;
                  }
                  if ( (_QWORD *)v34 == ++v33 )
                    goto LABEL_29;
                }
                sub_15D7BC0(v36, v35);
                ++v33;
              }
              while ( (_QWORD *)v34 != v33 );
LABEL_29:
              sub_14EA2A0(v76, *a4, a4);
              sub_268600((__int64)v76);
              sub_14B9B80(m128i_i64, a4);
              v38 = *(_QWORD **)v69;
              if ( *(_QWORD *)v69 )
              {
                v39 = *(_QWORD *)v69 + 8LL * *(unsigned int *)(*(_QWORD *)v69 - 4LL);
                if ( *(_QWORD *)v69 >= v39 )
                  goto LABEL_37;
                do
                {
                  while ( 1 )
                  {
                    v40 = *v38;
                    if ( *v38 )
                    {
                      v37 = (*(_DWORD *)(v40 + 8))-- == 1;
                      if ( v37 )
                        break;
                    }
                    if ( (unsigned __int64)++v38 >= v39 )
                      goto LABEL_36;
                  }
                  sub_15D7BC0(*(_QWORD *)v68, v40);
                  ++v38;
                }
                while ( (unsigned __int64)v38 < v39 );
LABEL_36:
                v38 = *(_QWORD **)v69;
                if ( *(_QWORD *)v69 )
LABEL_37:
                  *((_DWORD *)v38 - 1) = 0;
              }
            }
          }
        }
      }
    }
  }
  v16 = (char *)a2[1];
LABEL_39:
  v41 = v16;
  if ( v16 )
  {
    v42 = &v16[8 * *((unsigned int *)v16 - 1)];
    if ( v16 >= v42 )
      goto LABEL_47;
    do
    {
      while ( 1 )
      {
        v43 = *(_QWORD *)v41;
        if ( *(_QWORD *)v41 )
        {
          v44 = *a2;
          v37 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v37 )
            break;
        }
        v41 += 8;
        if ( v41 >= v42 )
          goto LABEL_46;
      }
      sub_15D7BC0(v44, v43);
      v41 += 8;
    }
    while ( v41 < v42 );
LABEL_46:
    v41 = (char *)a2[1];
    if ( v41 )
LABEL_47:
      *((_DWORD *)v41 - 1) = 0;
  }
  v45 = *(_QWORD **)v69;
  v46 = 0;
  v47 = a2 + 1;
  if ( *(_QWORD *)v69 )
  {
    while ( v46 < *((_DWORD *)v45 - 1) )
    {
      v48 = v45[v46];
      *(_QWORD *)v76 = v48;
      if ( v48 )
        ++*(_DWORD *)(v48 + 8);
      sub_6EF800(v47, v76);
      v45 = *(_QWORD **)v69;
      ++v46;
      if ( !*(_QWORD *)v69 )
        return sub_13606C0(&v67);
    }
    v54 = &v45[*((unsigned int *)v45 - 1)];
    if ( v45 >= v54 )
      goto LABEL_64;
    do
    {
      while ( 1 )
      {
        v55 = *v45;
        if ( *v45 )
        {
          v37 = (*(_DWORD *)(v55 + 8))-- == 1;
          if ( v37 )
            break;
        }
        if ( ++v45 >= v54 )
          goto LABEL_63;
      }
      sub_15D7BC0(*(_QWORD *)v68, v55);
      ++v45;
    }
    while ( v45 < v54 );
LABEL_63:
    v45 = *(_QWORD **)v69;
    if ( *(_QWORD *)v69 )
LABEL_64:
      sub_186B220(v45 - 1);
  }
  return sub_13606C0(&v67);
}

