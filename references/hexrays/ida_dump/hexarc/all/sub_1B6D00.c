unsigned __int64 __fastcall sub_1B6D00(__int64 a1, __int64 **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  __m128i si128; // xmm0
  __m128i v8; // xmm1
  __int64 *v10; // rsi
  unsigned __int64 *v11; // r13
  __int64 v12; // r12
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __int64 v15; // r14
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  _QWORD *v18; // rdx
  __int64 v19; // rdi
  _QWORD *v20; // r8
  unsigned __int64 v21; // rcx
  char v22; // di
  __m128i v23; // xmm0
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  unsigned __int64 v27; // r15
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // r8
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  char v36; // si
  unsigned __int64 v37; // rax
  char v38; // dl
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 *v42; // rcx
  __int64 v43; // rax
  __m128i v44; // xmm1
  __int64 v45; // rax
  unsigned __int64 v46; // rdi
  _QWORD *v47; // rdx
  __int64 v48; // rdi
  _QWORD *v49; // r8
  unsigned __int64 v50; // rcx
  _QWORD *v51; // [rsp+18h] [rbp-1F0h]
  const __m128i *v52; // [rsp+28h] [rbp-1E0h] BYREF
  __int128 v53; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-1C8h]
  __int64 v55; // [rsp+48h] [rbp-1C0h] BYREF
  int v56; // [rsp+50h] [rbp-1B8h]
  __int128 v57; // [rsp+58h] [rbp-1B0h]
  __int64 v58; // [rsp+68h] [rbp-1A0h]
  char v59; // [rsp+70h] [rbp-198h]
  int v60; // [rsp+80h] [rbp-188h]
  __m128i v61; // [rsp+88h] [rbp-180h] BYREF
  int v62; // [rsp+98h] [rbp-170h]
  __int64 v63; // [rsp+A0h] [rbp-168h] BYREF
  __m128i v64; // [rsp+A8h] [rbp-160h]
  __m128i v65; // [rsp+B8h] [rbp-150h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-140h]
  __int64 v67; // [rsp+D0h] [rbp-138h]
  __int64 v68; // [rsp+D8h] [rbp-130h]
  __int64 v69; // [rsp+E0h] [rbp-128h]
  __int64 v70; // [rsp+E8h] [rbp-120h]
  __int64 v71; // [rsp+F0h] [rbp-118h]
  __int64 v72; // [rsp+F8h] [rbp-110h]
  void *src; // [rsp+100h] [rbp-108h]
  __int128 v74; // [rsp+108h] [rbp-100h]
  unsigned __int64 v75; // [rsp+120h] [rbp-E8h] BYREF
  int v76; // [rsp+128h] [rbp-E0h]
  __m128i v77; // [rsp+130h] [rbp-D8h]
  int v78; // [rsp+140h] [rbp-C8h]
  int v79; // [rsp+148h] [rbp-C0h]
  __int16 v80; // [rsp+14Ch] [rbp-BCh]
  __m128i v81; // [rsp+150h] [rbp-B8h]
  __m128i v82; // [rsp+160h] [rbp-A8h]
  int v83; // [rsp+170h] [rbp-98h]
  __int64 v84; // [rsp+178h] [rbp-90h]
  __int64 v85; // [rsp+180h] [rbp-88h]
  int v86; // [rsp+188h] [rbp-80h]
  char v87; // [rsp+18Ch] [rbp-7Ch]
  __int64 v88; // [rsp+190h] [rbp-78h]
  int v89; // [rsp+198h] [rbp-70h]
  __int64 v90; // [rsp+1A0h] [rbp-68h]
  void *v91; // [rsp+1A8h] [rbp-60h]
  __int128 v92; // [rsp+1B0h] [rbp-58h]
  unsigned __int64 v93; // [rsp+1C8h] [rbp-40h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_3FA120);
  v8 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
  v93 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(__m128i *)(a1 + 8) = si128;
  v64 = v8;
  *(_QWORD *)(a1 + 40) = 0;
  v60 = -1;
  v62 = 0;
  v63 = 0x800000;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0xFFFFFFFFLL;
  *(_OWORD *)(a1 + 24) = 0;
  v61 = 0;
  v65 = (__m128i)-1LL;
  v70 = 0;
  v10 = *a2;
  v71 = 2;
  v72 = -1;
  src = nullptr;
  v54 = -1;
  v55 = 0;
  v56 = -1;
  v58 = -1;
  v59 = 1;
  v74 = 0;
  v53 = 0;
  v57 = 0;
  if ( v10 )
  {
    v58 = *v10;
    if ( (unsigned __int8)func_tail_iterator_set(&v55, v10, -1) )
    {
      v59 = 0;
      sub_32AF20(&v53, a2 + 1);
      goto LABEL_4;
    }
  }
  if ( (unsigned __int8)sub_32AF20(&v53, a2 + 1) )
  {
LABEL_4:
    v11 = nullptr;
    while ( 1 )
    {
      v12 = v59 ? v54 : v58;
      if ( get_switch_info(&v63, v12) > 0 )
        break;
LABEL_41:
      if ( v59 )
      {
LABEL_44:
        if ( !(unsigned __int8)sub_32AF40(&v53) )
          goto LABEL_45;
      }
      else if ( !(unsigned __int8)func_item_iterator_next(&v55, sub_1B1930, 0) )
      {
        v59 = 1;
        goto LABEL_44;
      }
    }
    v75 = v12;
    v13 = _mm_loadu_si128(&v61);
    v76 = v60;
    v77 = v13;
    v14 = _mm_loadu_si128(&v65);
    v78 = v62;
    v82 = v14;
    v79 = v63;
    v80 = WORD2(v63);
    v81 = v64;
    v83 = v66;
    v84 = v67;
    v85 = v68;
    v86 = v69;
    v87 = BYTE4(v69);
    v88 = v70;
    v89 = v71;
    v90 = v72;
    v15 = v74;
    v91 = nullptr;
    v92 = 0;
    if ( (_QWORD)v74 )
    {
      v91 = (void *)qalloc_or_throw(8 * v74);
      *((_QWORD *)&v92 + 1) = v15;
      memcpy(v91, src, 8 * v15);
      *(_QWORD *)&v92 = v15;
    }
    v16 = *(_QWORD *)a1;
    v52 = (const __m128i *)&v75;
    if ( !v16 )
    {
      v16 = qalloc(184);
      v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
      if ( !v16 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)a1 = v16;
      memset((void *)v16, 0, 0xB8u);
      *(__m128i *)(v16 + 8) = v23;
      *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_26:
      v24 = sub_1B6720((__m128i *)a1, (unsigned __int64 *)v16, 1, &v52);
      goto LABEL_27;
    }
    if ( !*(_QWORD *)(a1 + 8) )
      goto LABEL_26;
    if ( !v11 )
      goto LABEL_61;
    if ( (unsigned __int64 *)v16 != v11 )
    {
      if ( v11[3] < v75 )
      {
        if ( (*v11 & 2) != 0 )
        {
          v21 = (unsigned __int64)v11;
          goto LABEL_96;
        }
        v17 = v11[2];
        if ( (*(_BYTE *)v17 & 2) != 0 )
        {
          v18 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
          v19 = *v18;
          if ( (*v18 & 2) != 0 )
          {
            v22 = 0;
            if ( (_QWORD *)v16 == v18 || v75 < v18[3] )
              goto LABEL_89;
          }
          else
          {
            if ( (unsigned __int64 *)v18[2] == v11 )
            {
              while ( 1 )
              {
                v20 = v18;
                v21 = v19 & 0xFFFFFFFFFFFFFFFCLL;
                v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v19 & 2) != 0 )
                  break;
                v18 = (_QWORD *)v21;
                if ( *(_QWORD **)(v21 + 16) != v20 )
                  goto LABEL_21;
              }
            }
            else
            {
LABEL_21:
              v21 = (unsigned __int64)v18;
            }
            if ( v16 == v21 )
              goto LABEL_23;
LABEL_96:
            if ( v75 < *(_QWORD *)(v21 + 24) )
            {
              if ( (*(_BYTE *)v11[2] & 2) != 0 )
              {
LABEL_23:
                v22 = 0;
                goto LABEL_89;
              }
              if ( (**(_BYTE **)(v21 + 8) & 2) != 0 )
              {
                v11 = (unsigned __int64 *)v21;
LABEL_88:
                v22 = 1;
LABEL_89:
                v24 = sub_1B6720((__m128i *)a1, v11, v22, &v52);
                goto LABEL_27;
              }
            }
          }
        }
        else
        {
          do
          {
            v21 = v17;
            v17 = *(_QWORD *)(v17 + 8);
          }
          while ( (*(_BYTE *)v17 & 2) == 0 );
          if ( v16 != v21 )
            goto LABEL_96;
        }
LABEL_61:
        v38 = 1;
        v11 = (unsigned __int64 *)(*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (*(_BYTE *)v11 & 2) != 0 )
          goto LABEL_62;
        while ( 1 )
        {
          v41 = v11[3];
          if ( v75 < v41 )
          {
            v42 = (unsigned __int64 *)v11[1];
            v38 = 1;
            if ( (*(_BYTE *)v42 & 2) != 0 )
              goto LABEL_72;
          }
          else
          {
            if ( v41 >= v75 )
            {
              if ( !v11 )
              {
LABEL_72:
                v16 = (__int64)v11;
LABEL_62:
                v24 = sub_1B6720((__m128i *)a1, (unsigned __int64 *)v16, v38, &v52);
                goto LABEL_27;
              }
              goto LABEL_28;
            }
            v42 = (unsigned __int64 *)v11[2];
            v38 = 0;
            if ( (*(_BYTE *)v42 & 2) != 0 )
              goto LABEL_72;
          }
          v11 = v42;
        }
      }
      if ( v11[3] == v75 )
      {
        v24 = (unsigned __int64)v11;
        goto LABEL_27;
      }
      if ( (*v11 & 2) != 0 )
      {
        v50 = (unsigned __int64)v11;
      }
      else
      {
        v46 = v11[1];
        if ( (*(_BYTE *)v46 & 2) != 0 )
        {
          v47 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
          v48 = *v47;
          if ( (*v47 & 2) != 0 )
          {
            v22 = 1;
            if ( (_QWORD *)v16 == v47 )
              goto LABEL_89;
            v22 = 1;
            if ( v47[3] < v75 )
              goto LABEL_89;
            goto LABEL_61;
          }
          if ( (unsigned __int64 *)v47[1] == v11 )
          {
            while ( 1 )
            {
              v49 = v47;
              v50 = v48 & 0xFFFFFFFFFFFFFFFCLL;
              v48 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v48 & 2) != 0 )
                break;
              v47 = (_QWORD *)v50;
              if ( *(_QWORD **)(v50 + 8) != v49 )
                goto LABEL_86;
            }
          }
          else
          {
LABEL_86:
            v50 = (unsigned __int64)v47;
          }
          if ( v16 == v50 )
            goto LABEL_88;
        }
        else
        {
          do
          {
            v50 = v46;
            v46 = *(_QWORD *)(v46 + 16);
          }
          while ( (*(_BYTE *)v46 & 2) == 0 );
          if ( v16 == v50 )
            goto LABEL_61;
        }
      }
      if ( *(_QWORD *)(v50 + 24) < v75 )
      {
        if ( (*(_BYTE *)v11[1] & 2) != 0 )
          goto LABEL_88;
        if ( (**(_BYTE **)(v50 + 16) & 2) != 0 )
        {
          v11 = (unsigned __int64 *)v50;
          v22 = 0;
          goto LABEL_89;
        }
      }
      goto LABEL_61;
    }
    v24 = v11[2];
    if ( (*(_BYTE *)v24 & 2) != 0 )
      goto LABEL_88;
    if ( *(_QWORD *)(v24 + 24) < v75 )
    {
      v11 = (unsigned __int64 *)v11[2];
      v22 = 0;
      goto LABEL_89;
    }
    if ( *(_QWORD *)(v24 + 24) != v75 )
      goto LABEL_61;
    if ( !v24 )
      goto LABEL_88;
LABEL_27:
    v11 = (unsigned __int64 *)v24;
LABEL_28:
    if ( v91 )
    {
      *(_QWORD *)&v92 = 0;
      qfree(v91);
    }
    v25 = *(_QWORD *)(a1 + 32);
    if ( v25 )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        v27 = *(_QWORD *)v25 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v27 & 2) != 0 )
        {
          v36 = 1;
        }
        else
        {
          v35 = *(_QWORD *)(v27 + 24);
          v36 = 1;
          v30 = (_QWORD *)(v27 + 24);
          if ( v65.m128i_i64[0] >= v35 )
            goto LABEL_55;
LABEL_53:
          v37 = *(_QWORD *)(v27 + 8);
          v36 = 1;
          if ( (*(_BYTE *)v37 & 2) != 0 )
          {
LABEL_57:
            v25 = v27;
          }
          else
          {
            while ( 1 )
            {
              v27 = v37;
              v35 = *(_QWORD *)(v37 + 24);
              v30 = (_QWORD *)(v27 + 24);
              if ( v65.m128i_i64[0] < v35 )
                goto LABEL_53;
LABEL_55:
              if ( v35 >= v65.m128i_i64[0] )
                break;
              v37 = *(_QWORD *)(v27 + 16);
              v36 = 0;
              if ( (*(_BYTE *)v37 & 2) != 0 )
                goto LABEL_57;
            }
            if ( v27 )
            {
LABEL_38:
              v31 = v30[2];
              v32 = v30[1];
              if ( v30[3] < (unsigned __int64)(v31 + 1) )
              {
                v51 = v30;
                v34 = qvector_reserve(v27 + 32, v32, v31 + 1, 8);
                v30 = v51;
                v32 = v34;
                v51[1] = v34;
                v31 = v51[2];
              }
              *(_QWORD *)(v32 + 8 * v31) = v12;
              ++v30[2];
              goto LABEL_41;
            }
            v25 = 0;
          }
        }
        v39 = qalloc(56);
        v27 = v39;
        if ( !v39 )
        {
          v5 = __cxa_allocate_exception(8u);
          *v5 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v5,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v39 + 48) = 0;
        *(_OWORD *)v39 = 0;
        *(_OWORD *)(v39 + 16) = 0;
        *(_OWORD *)(v39 + 32) = 0;
        v40 = v65.m128i_i64[0];
        *(_OWORD *)(v27 + 40) = 0;
        *(_QWORD *)(v27 + 24) = v40;
        *(_QWORD *)(v27 + 32) = 0;
        v29 = *(_QWORD **)(a1 + 32);
        *(_QWORD *)v27 = v25 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v29);
        if ( v29 != (_QWORD *)v25 )
        {
          if ( !v36 )
          {
            *(_QWORD *)(v25 + 16) = v27;
            if ( v29[2] == v25 )
              v29[2] = v27;
            goto LABEL_36;
          }
LABEL_34:
          *(_QWORD *)(v25 + 8) = v27;
          if ( v29[1] == v25 )
            v29[1] = v27;
LABEL_36:
          sub_1B6920((_QWORD *)(a1 + 32), (__int64 *)v27);
LABEL_37:
          ++*(_QWORD *)(a1 + 40);
          v30 = (_QWORD *)(v27 + 24);
          goto LABEL_38;
        }
LABEL_77:
        v45 = *(_QWORD *)v25 & 3LL;
        *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
        *(_QWORD *)v25 = v27 & 0xFFFFFFFFFFFFFFFCLL | v45;
        *(_QWORD *)v27 = v25 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v27 & 2LL;
        goto LABEL_37;
      }
    }
    else
    {
      v43 = qalloc(56);
      v25 = v43;
      v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v43, (__m128i)(unsigned __int64)v43);
      if ( !v43 )
      {
        v3 = __cxa_allocate_exception(8u);
        *v3 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v3,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v43 + 48) = 0;
      *(_OWORD *)(v43 + 16) = 0;
      *(_OWORD *)(v43 + 32) = 0;
      *(__m128i *)(v43 + 8) = v44;
      *(_QWORD *)(a1 + 32) = v43;
      *(_QWORD *)v43 = v43 & 0xFFFFFFFFFFFFFFFCLL | 2;
    }
    v26 = qalloc(56);
    v27 = v26;
    if ( !v26 )
    {
      v2 = __cxa_allocate_exception(8u);
      *v2 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v26 + 48) = 0;
    *(_OWORD *)v26 = 0;
    *(_OWORD *)(v26 + 16) = 0;
    *(_OWORD *)(v26 + 32) = 0;
    v28 = v65.m128i_i64[0];
    *(_OWORD *)(v27 + 40) = 0;
    *(_QWORD *)(v27 + 24) = v28;
    *(_QWORD *)(v27 + 32) = 0;
    v29 = *(_QWORD **)(a1 + 32);
    *(_QWORD *)v27 = v25 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v29);
    if ( v29 != (_QWORD *)v25 )
      goto LABEL_34;
    goto LABEL_77;
  }
LABEL_45:
  if ( v55 )
    lock_func_range(v55, 0);
  if ( src )
  {
    *(_QWORD *)&v74 = 0;
    qfree(src);
  }
  return v93 - __readfsqword(0x28u);
}
