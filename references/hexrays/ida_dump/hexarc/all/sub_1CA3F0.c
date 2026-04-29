unsigned __int64 __fastcall sub_1CA3F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5, _QWORD *a6)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  _QWORD *exception; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  __m128i v16; // xmm7
  __int64 v17; // rax
  __m128i v18; // xmm1
  unsigned __int64 v19; // rsi
  __m128i v20; // xmm6
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rax
  __m128i v26; // xmm0
  unsigned __int64 **v27; // rsi
  __int64 v28; // rcx
  __m128i v29; // xmm5
  unsigned __int64 v30; // rdi
  __int64 v31; // rcx
  bool v32; // r15
  unsigned __int64 *v33; // rax
  unsigned __int64 **v34; // rsi
  bool v35; // di
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  unsigned __int64 **v38; // rsi
  unsigned __int64 v39; // r8
  __m128i v40; // xmm4
  _BYTE *v41; // rax
  __int64 v42; // rsi
  unsigned __int64 **v43; // rax
  int v44; // ebx
  __int64 v45; // r12
  unsigned __int64 v46; // rdx
  char *v47; // rdi
  unsigned __int64 *v48; // rax
  __int64 v49; // rdx
  unsigned __int64 *v50; // r15
  unsigned __int64 *v51; // r10
  __int64 v52; // r13
  int v53; // ebx
  unsigned __int64 v54; // rdi
  _DWORD *v55; // rax
  _DWORD *v56; // rdx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r15
  int v60; // ebx
  __int64 v61; // r13
  __int64 v62; // rax
  __m128i v63; // xmm0
  unsigned __int64 **v64; // rcx
  __m128i v65; // xmm2
  __int64 v66; // rdx
  unsigned __int64 v67; // rdx
  char v68; // si
  _BYTE *v69; // rax
  __int64 v70; // rax
  unsigned __int64 **v71; // rcx
  unsigned __int64 v72; // rdx
  __m128i v73; // xmm5
  char v74; // si
  unsigned __int64 v75; // rcx
  __int64 v77; // rax
  __m128i v78; // xmm7
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned __int64 v81; // rsi
  __m128i v82; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 **v83; // [rsp+10h] [rbp-A8h]
  __int64 *v84; // [rsp+18h] [rbp-A0h]
  __int64 v85; // [rsp+20h] [rbp-98h]
  unsigned __int64 v86; // [rsp+28h] [rbp-90h]
  unsigned __int64 **v87; // [rsp+30h] [rbp-88h]
  __int64 v88; // [rsp+38h] [rbp-80h]
  __int64 v89; // [rsp+40h] [rbp-78h]
  __int64 v90; // [rsp+48h] [rbp-70h]
  __int64 *v91; // [rsp+50h] [rbp-68h]
  unsigned __int64 v92; // [rsp+58h] [rbp-60h]
  unsigned __int64 v93; // [rsp+60h] [rbp-58h] BYREF
  __int64 v94; // [rsp+68h] [rbp-50h]
  unsigned __int64 v95; // [rsp+78h] [rbp-40h]

  v90 = a1;
  v85 = a2;
  v89 = a3;
  v91 = a4;
  v84 = a5;
  v95 = __readfsqword(0x28u);
  v14 = qalloc(40);
  v15 = v14;
  v82 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
  if ( !v14 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v16 = _mm_load_si128(&v82);
  *(_QWORD *)(v14 + 32) = 0;
  *(_OWORD *)(v14 + 16) = 0;
  v86 = v14 & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(__m128i *)(v14 + 8) = v16;
  v17 = qalloc(40);
  v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
  if ( !v17 )
  {
    v7 = __cxa_allocate_exception(8u);
    *v7 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v7, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v19 = v86;
  v20 = _mm_load_si128(&v82);
  *(_QWORD *)(v17 + 32) = 0;
  *(_OWORD *)(v17 + 16) = 0;
  v21 = 1;
  *(__m128i *)(v17 + 8) = v20;
  *(_QWORD *)v17 = v19 | 1;
  v22 = *(_QWORD *)v15;
  v88 = v19 | 1;
  *(__m128i *)(v15 + 8) = v18;
  *(_QWORD *)v15 = v17 & 0xFFFFFFFFFFFFFFFCLL | v22 & 3;
  v23 = *(_QWORD *)v17;
  *(_QWORD *)(v17 + 32) = 0;
  *(_QWORD *)v17 = v19 | v23 & 2;
  if ( !a6 )
    goto LABEL_29;
  v24 = 0;
  v83 = (unsigned __int64 **)&v93;
  if ( !*(_DWORD *)(v85 + 96) )
    goto LABEL_29;
  while ( 2 )
  {
    v87 = v83;
    v32 = sub_5E3B0(a6, v24);
    if ( !v32 )
      goto LABEL_8;
    v33 = sub_1C8C20(v90, *(_QWORD *)(*(_QWORD *)(v85 + 72) + (v24 << 6)));
    v34 = nullptr;
    if ( v33 )
      v34 = (unsigned __int64 **)v33[1];
    if ( !v21 )
    {
      v87 = v34;
      v25 = qalloc(40);
      v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
      if ( !v25 )
      {
        v11 = __cxa_allocate_exception(8u);
        *v11 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v11,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v27 = v87;
      v28 = v88;
      v21 = 1;
      v29 = _mm_load_si128(&v82);
      *(_OWORD *)(v25 + 16) = 0;
      v30 = v86;
      *(_QWORD *)v25 = v28;
      *(_QWORD *)(v25 + 32) = v27;
      *(_DWORD *)(v25 + 24) = v24;
      *(__m128i *)(v25 + 8) = v29;
      v31 = *(_QWORD *)v15;
      *(__m128i *)(v15 + 8) = v26;
      *(_QWORD *)v15 = v25 & 0xFFFFFFFFFFFFFFFCLL | v31 & 3;
      *(_QWORD *)v25 = v30 | *(_QWORD *)v25 & 2LL;
      goto LABEL_8;
    }
    v35 = v32;
    v36 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v36 & 2) != 0 )
    {
      v36 = v15;
LABEL_15:
      v92 = v36;
      v87 = v34;
      v37 = qalloc(40);
      if ( !v37 )
      {
        v12 = __cxa_allocate_exception(8u);
        *v12 = (char *)&`vtable for'std::bad_alloc + 16;
        v87 = (unsigned __int64 **)&v93;
        __cxa_throw(
          v12,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v38 = v87;
      v39 = v92;
      v40 = _mm_load_si128(&v82);
      *(_OWORD *)(v37 + 16) = 0;
      *(_QWORD *)(v37 + 32) = v38;
      *(_DWORD *)(v37 + 24) = v24;
      *(__m128i *)(v37 + 8) = v40;
      *(_QWORD *)v37 = v39 & 0xFFFFFFFFFFFFFFFCLL | 1;
      if ( v39 == v15 )
      {
        v80 = *(_QWORD *)v15 & 3LL;
        *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v37);
        v81 = v86;
        *(_QWORD *)v15 = v37 & 0xFFFFFFFFFFFFFFFCLL | v80;
        *(_QWORD *)v37 = v81 | *(_QWORD *)v37 & 2LL;
      }
      else
      {
        if ( v32 )
        {
          *(_QWORD *)(v39 + 8) = v37;
          if ( v39 == *(_QWORD *)(v15 + 8) )
            *(_QWORD *)(v15 + 8) = v37;
        }
        else
        {
          *(_QWORD *)(v39 + 16) = v37;
          if ( v39 == *(_QWORD *)(v15 + 16) )
            *(_QWORD *)(v15 + 16) = v37;
        }
        v93 = v15;
        v94 = v21;
        sub_1CA010(&v93, (__int64 *)v37);
      }
      ++v21;
      goto LABEL_8;
    }
    while ( *(_DWORD *)(v36 + 24) > (int)v24 )
    {
      v41 = *(_BYTE **)(v36 + 8);
      v35 = v32;
      if ( (*v41 & 2) != 0 )
        goto LABEL_27;
LABEL_24:
      v36 = (unsigned __int64)v41;
    }
    if ( *(_DWORD *)(v36 + 24) < (int)v24 )
    {
      v41 = *(_BYTE **)(v36 + 16);
      v35 = 0;
      if ( (*v41 & 2) != 0 )
        goto LABEL_27;
      goto LABEL_24;
    }
    if ( !v36 )
    {
LABEL_27:
      v32 = v35;
      goto LABEL_15;
    }
LABEL_8:
    if ( ++v24 < (unsigned __int64)*(int *)(v85 + 96) )
      continue;
    break;
  }
  if ( !v21 )
  {
LABEL_99:
    qfree(v15);
    return v95 - __readfsqword(0x28u);
  }
LABEL_29:
  v87 = (unsigned __int64 **)&v93;
LABEL_30:
  v42 = 0;
  if ( !v15 )
    goto LABEL_32;
  do
  {
    v42 = *(_QWORD *)(v15 + 8);
LABEL_32:
    v43 = *(unsigned __int64 ***)(v42 + 32);
    v93 = v15;
    v94 = v21;
    v44 = *(_DWORD *)(v42 + 24);
    v83 = v43;
    sub_1C9C70(v87, (__int64 *)v42);
    v15 = v93;
    v21 = v94;
    LOBYTE(v88) = sub_5DC10(v91, v44);
    if ( !(_BYTE)v88 )
      goto LABEL_75;
    v45 = *(_QWORD *)(v85 + 72) + ((__int64)v44 << 6);
    v46 = *(_QWORD *)v45;
    if ( *(_QWORD *)v45 >= *(_QWORD *)(v45 + 8) )
      goto LABEL_75;
    v47 = *(char **)(v90 + 1192);
    v82.m128i_i64[0] = (__int64)&v47[16 * *(_QWORD *)(v90 + 1200)];
    v48 = sub_1C6650(v47, v82.m128i_i64[0], v46);
    v50 = v48;
    if ( v48 == v51 )
    {
      sub_30FCC0(v89, v49);
LABEL_56:
      v58 = *(_QWORD *)(v45 + 24);
      if ( (int)v58 <= 0 )
        goto LABEL_75;
LABEL_57:
      v59 = 4LL * (unsigned int)(v58 - 1) + 4;
      v60 = **(_DWORD **)(v45 + 16);
      if ( v15 )
      {
        v61 = 0;
        v82 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
        goto LABEL_63;
      }
      v77 = qalloc(40);
      v15 = v77;
      v82 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v77, (__m128i)(unsigned __int64)v77);
      if ( !v77 )
      {
        v6 = __cxa_allocate_exception(8u);
        *v6 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v6,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v78 = _mm_load_si128(&v82);
      *(_QWORD *)(v77 + 32) = 0;
      v61 = 0;
      *(_OWORD *)(v77 + 16) = 0;
      *(__m128i *)(v77 + 8) = v78;
      *(_QWORD *)v77 = v77 & 0xFFFFFFFFFFFFFFFCLL | 2;
      while ( 2 )
      {
        v62 = qalloc(40);
        v63 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v62, (__m128i)(unsigned __int64)v62);
        if ( !v62 )
        {
          v9 = __cxa_allocate_exception(8u);
          *v9 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v9,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v64 = v83;
        ++v21;
        v65 = _mm_load_si128(&v82);
        *(_OWORD *)(v62 + 16) = 0;
        *(_QWORD *)(v62 + 32) = v64;
        *(_DWORD *)(v62 + 24) = v60;
        *(__m128i *)(v62 + 8) = v65;
        *(_QWORD *)v62 = v15 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v66 = *(_QWORD *)v15;
        *(__m128i *)(v15 + 8) = v63;
        *(_QWORD *)v15 = v62 & 0xFFFFFFFFFFFFFFFCLL | v66 & 3;
        *(_QWORD *)v62 = v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v62 & 2LL;
LABEL_61:
        v61 += 4;
        if ( v61 == v59 )
          goto LABEL_75;
LABEL_62:
        v60 = *(_DWORD *)(*(_QWORD *)(v45 + 16) + v61);
LABEL_63:
        if ( !v21 )
          continue;
        break;
      }
      v67 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v67 & 2) != 0 )
      {
        v68 = v88;
        v67 = v15;
        goto LABEL_68;
      }
      v68 = v88;
      while ( 1 )
      {
        if ( *(_DWORD *)(v67 + 24) <= v60 )
        {
          if ( *(_DWORD *)(v67 + 24) >= v60 )
          {
            if ( v67 )
              goto LABEL_61;
LABEL_68:
            v92 = v67;
            LOBYTE(v86) = v68;
            v70 = qalloc(40);
            if ( !v70 )
            {
              v8 = __cxa_allocate_exception(8u);
              *v8 = (char *)&`vtable for'std::bad_alloc + 16;
              __cxa_throw(
                v8,
                (struct type_info *)&`typeinfo for'std::bad_alloc,
                (void (*)(void *))&std::bad_alloc::~bad_alloc);
            }
            v71 = v83;
            v72 = v92;
            v73 = _mm_load_si128(&v82);
            *(_OWORD *)(v70 + 16) = 0;
            v74 = v86;
            *(_QWORD *)(v70 + 32) = v71;
            v75 = v72 & 0xFFFFFFFFFFFFFFFCLL;
            *(_DWORD *)(v70 + 24) = v60;
            *(__m128i *)(v70 + 8) = v73;
            *(_QWORD *)v70 = v72 & 0xFFFFFFFFFFFFFFFCLL | 1;
            if ( v72 == v15 )
            {
              v79 = *(_QWORD *)v15 & 3LL;
              *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v70, (__m128i)(unsigned __int64)v70);
              *(_QWORD *)v15 = v70 & 0xFFFFFFFFFFFFFFFCLL | v79;
              *(_QWORD *)v70 = v75 | *(_QWORD *)v70 & 2LL;
            }
            else
            {
              if ( v74 )
              {
                *(_QWORD *)(v72 + 8) = v70;
                if ( v72 == *(_QWORD *)(v15 + 8) )
                  *(_QWORD *)(v15 + 8) = v70;
              }
              else
              {
                *(_QWORD *)(v72 + 16) = v70;
                if ( v72 == *(_QWORD *)(v15 + 16) )
                  *(_QWORD *)(v15 + 16) = v70;
              }
              v93 = v15;
              v94 = v21;
              sub_1CA010(v87, (__int64 *)v70);
            }
            v61 += 4;
            ++v21;
            if ( v61 == v59 )
            {
LABEL_75:
              if ( !v21 )
                goto LABEL_76;
              goto LABEL_30;
            }
            goto LABEL_62;
          }
          v69 = *(_BYTE **)(v67 + 16);
          v68 = 0;
          if ( (*v69 & 2) != 0 )
            goto LABEL_68;
        }
        else
        {
          v69 = *(_BYTE **)(v67 + 8);
          v68 = v88;
          if ( (*v69 & 2) != 0 )
            goto LABEL_68;
        }
        v67 = (unsigned __int64)v69;
      }
    }
    v52 = ((char *)v48 - v47) >> 4;
    if ( sub_5E3B0(v84, v52) )
    {
      LODWORD(v52) = v52 + 1;
      v50 += 2;
    }
    LOBYTE(v86) = sub_30FCC0(v89, *(_QWORD *)v45);
    if ( v50 == (unsigned __int64 *)v82.m128i_i64[0] )
      goto LABEL_56;
    v53 = v44 + 1;
    while ( 1 )
    {
      v54 = *(_QWORD *)(v45 + 8);
      if ( v54 < *v50 )
        goto LABEL_56;
      if ( *v50 == v54 )
      {
        v55 = *(_DWORD **)(v45 + 16);
        v56 = &v55[*(_QWORD *)(v45 + 24)];
        if ( v55 == v56 )
          goto LABEL_78;
        while ( v53 != *v55 )
        {
          if ( v56 == ++v55 )
            goto LABEL_78;
        }
        if ( v56 == v55 )
        {
LABEL_78:
          if ( (get_flags_ex(v54, 4) & 0x10000) == 0 )
            goto LABEL_56;
          goto LABEL_52;
        }
        if ( v15 )
        {
          v57 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
          if ( !v57 )
            break;
          if ( (*(_BYTE *)(*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
          {
            while ( v53 < *(_DWORD *)(v57 + 24) )
            {
              v57 = *(_QWORD *)(v57 + 8);
LABEL_51:
              if ( (*(_BYTE *)v57 & 2) != 0 )
                goto LABEL_52;
            }
            if ( v53 > *(_DWORD *)(v57 + 24) )
            {
              v57 = *(_QWORD *)(v57 + 16);
              goto LABEL_51;
            }
            if ( v15 != v57 )
              break;
          }
        }
      }
LABEL_52:
      if ( (unsigned __int8)sub_5DC10(v84, v52) )
      {
        if ( (_BYTE)v86 )
        {
          v83 = (unsigned __int64 **)((char *)v83 + v50[1]);
          v50[1] = (unsigned __int64)v83;
        }
        else
        {
          v83 = (unsigned __int64 **)v50[1];
        }
      }
      v50 += 2;
      LODWORD(v52) = v52 + 1;
      if ( v50 == (unsigned __int64 *)v82.m128i_i64[0] )
        goto LABEL_56;
    }
    if ( !(unsigned __int8)sub_30FCC0(v89, *(_QWORD *)(v45 + 8)) )
      goto LABEL_52;
    v50[1] = 0;
    v58 = *(_QWORD *)(v45 + 24);
    if ( (int)v58 > 0 )
      goto LABEL_57;
  }
  while ( v21 );
LABEL_76:
  if ( v15 )
    goto LABEL_99;
  return v95 - __readfsqword(0x28u);
}
