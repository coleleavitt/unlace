__int64 __fastcall sub_2CF600(__m128i *a1, char **a2, __m128i *a3, __m128 a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  unsigned __int64 *v8; // rsi
  char **v9; // rdi
  int v10; // edx
  unsigned __int64 v11; // r12
  const char *v12; // rax
  const char *v13; // rbp
  size_t v14; // rax
  char *v15; // rax
  char *v16; // r15
  char *v17; // rdx
  unsigned int v18; // eax
  char *v19; // rbp
  bool v20; // cf
  char *v21; // rax
  const void *v22; // r15
  size_t v23; // rbp
  size_t v24; // rax
  __int64 v25; // r9
  size_t v26; // r10
  size_t v27; // r11
  size_t v28; // rdx
  size_t v29; // rbp
  size_t v30; // rdx
  void *v31; // r15
  void *v32; // rdi
  unsigned __int64 *v33; // rsi
  unsigned __int64 v34; // rdi
  unsigned __int64 *v35; // rdx
  unsigned __int64 v36; // rdi
  unsigned __int64 *v37; // r8
  unsigned __int64 v38; // rcx
  char v39; // di
  __int64 v40; // rax
  __m128i v41; // xmm1
  __int64 v42; // rax
  unsigned int v44; // eax
  bool v45; // cl
  size_t v46; // rax
  void *v47; // rax
  void *v48; // rax
  unsigned __int64 v49; // rcx
  char v50; // dl
  char v51; // cl
  unsigned __int64 v52; // rax
  char v53; // dl
  unsigned __int64 v54; // rdx
  _BYTE *v55; // rdx
  char v56; // al
  unsigned __int64 v57; // rcx
  unsigned __int64 *v58; // rcx
  unsigned __int64 v59; // rdi
  unsigned __int64 *v60; // rdx
  unsigned __int64 v61; // rdi
  unsigned __int64 *v62; // r8
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  __m128i v65; // xmm1
  unsigned __int64 *v66; // rax
  int v68; // [rsp+10h] [rbp-168h]
  int v69; // [rsp+14h] [rbp-164h]
  unsigned __int64 *v70; // [rsp+18h] [rbp-160h]
  size_t v71; // [rsp+20h] [rbp-158h]
  size_t v72; // [rsp+20h] [rbp-158h]
  __int64 module_data; // [rsp+30h] [rbp-148h]
  size_t v74; // [rsp+38h] [rbp-140h]
  __int64 v75; // [rsp+40h] [rbp-138h]
  size_t v76; // [rsp+48h] [rbp-130h]
  char *s; // [rsp+58h] [rbp-120h] BYREF
  char *v78; // [rsp+60h] [rbp-118h] BYREF
  unsigned __int64 *v79; // [rsp+68h] [rbp-110h] BYREF
  char **v80; // [rsp+70h] [rbp-108h] BYREF
  __m128 v81; // [rsp+78h] [rbp-100h]
  __int64 v82; // [rsp+88h] [rbp-F0h] BYREF
  void *dest; // [rsp+90h] [rbp-E8h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-E0h]
  void *src; // [rsp+A8h] [rbp-D0h] BYREF
  __int128 v86; // [rsp+B0h] [rbp-C8h]
  _QWORD *v87; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned __int64 v88; // [rsp+100h] [rbp-78h] BYREF
  void *v89; // [rsp+108h] [rbp-70h] BYREF
  __m128i v90; // [rsp+110h] [rbp-68h]
  void *v91; // [rsp+120h] [rbp-58h] BYREF
  __m128 v92; // [rsp+128h] [rbp-50h]
  unsigned __int64 v93; // [rsp+138h] [rbp-40h]

  v93 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_4C2AB8);
  if ( (unsigned int)unpack_dd(a2) != 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(51492);
    BUG();
  }
  v8 = (unsigned __int64 *)a2[1];
  v9 = a2;
  v10 = unpack_dd(a2);
  v69 = v10;
  if ( a2[1] - *a2 < (unsigned __int64)v10 )
    return 0;
  if ( v10 > 0 )
  {
    v68 = 0;
    v70 = (unsigned __int64 *)a1->m128i_i64[0];
    while ( 1 )
    {
      v80 = nullptr;
      v82 = 0;
      v81 = 0;
      if ( (unsigned __int8)is_cvt64(v9, v8) )
      {
        v11 = (unsigned int)unpack_dd(a2);
        if ( v11 == 0xFFFFFFFF )
          v11 = -1;
      }
      else
      {
        v11 = unpack_dq(a2, a2[1]);
      }
      v12 = (const char *)unpack_ds(a2, a2[1], 0);
      v13 = v12;
      if ( v12 )
      {
        v14 = strlen(v12);
        v80 = (char **)v13;
        a4 = (__m128)_mm_unpacklo_epi64((__m128i)(v14 + 1), (__m128i)(v14 + 1));
        v81 = a4;
      }
      v15 = *a2;
      v16 = a2[1];
      v17 = nullptr;
      if ( *a2 < v16 )
      {
        v44 = unpack_dd(a2);
        v17 = *a2;
        v20 = __CFADD__(*a2, v44);
        v15 = &(*a2)[v44];
        v45 = v20;
        v20 = v16 < v15;
        v16 = a2[1];
        if ( v20 || v45 )
        {
          v15 = *a2;
          v17 = nullptr;
        }
        else
        {
          *a2 = v15;
        }
      }
      if ( v17 == v15 )
        v17 = nullptr;
      s = v17;
      v18 = unpack_dd(a2);
      v19 = *a2;
      v20 = __CFADD__(*a2, v18);
      v21 = &(*a2)[v18];
      if ( v20 || v16 < v21 )
      {
        v21 = *a2;
        v19 = nullptr;
      }
      else
      {
        *a2 = v21;
      }
      v22 = s;
      if ( v19 == v21 )
        v19 = nullptr;
      v78 = v19;
      if ( !a3 )
      {
        if ( s
          && (unsigned __int8)deserialize_tinfo(&v82, 0, &s, &v78, 0, 0)
          && (unsigned __int8)sub_327100(&v82, module_data, -1) )
        {
          goto LABEL_38;
        }
        v8 = (unsigned __int64 *)v11;
        sub_68620((__int64)"%a: cannot restore user defined call prototype\n", *(double *)a4.m128_u64);
        goto LABEL_57;
      }
      dest = nullptr;
      src = nullptr;
      *(_OWORD *)n = 0;
      v86 = 0;
      if ( !s )
        break;
      v23 = strlen(s);
      dest = (void *)qvector_reserve(&dest, 0, v23 + 1, 1);
      n[0] = v23 + 1;
      *((_BYTE *)dest + v23) = 0;
      memmove(dest, v22, v23);
      v19 = v78;
      if ( !v78 )
        goto LABEL_24;
      v24 = strlen(v78);
      v25 = v86;
      v22 = src;
      v26 = v24;
      if ( (_QWORD)v86 )
      {
        v25 = v86 - 1;
        v27 = v24 + v86 - 1;
      }
      else
      {
        v27 = v24;
      }
      v28 = v27 + 1;
      if ( *((_QWORD *)&v86 + 1) < v27 + 1 )
        goto LABEL_68;
LABEL_23:
      *(_QWORD *)&v86 = v28;
      *((_BYTE *)v22 + v27) = 0;
      memmove((char *)src + v25, v19, v26);
LABEL_24:
      v29 = n[0];
      v87 = (_QWORD *)v11;
      if ( !n[0] )
        goto LABEL_25;
      v31 = (void *)qalloc_or_throw(n[0]);
      memcpy(v31, dest, v29);
      v30 = v86;
      v32 = nullptr;
      if ( (_QWORD)v86 )
      {
LABEL_73:
        v72 = v30;
        v47 = (void *)qalloc_or_throw(v30);
        v48 = memcpy(v47, src, v72);
        v30 = v72;
        v32 = v48;
      }
LABEL_26:
      v33 = (unsigned __int64 *)a3->m128i_i64[0];
      v88 = v11;
      v89 = v31;
      v90 = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v29);
      a4 = (__m128)_mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
      v91 = v32;
      v79 = &v88;
      v92 = a4;
      if ( !v33 )
      {
        v64 = qalloc(80);
        v65 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v64, (__m128i)(unsigned __int64)v64);
        if ( !v64 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v64 + 16) = 0;
        *(_OWORD *)(v64 + 32) = 0;
        *(_OWORD *)(v64 + 48) = 0;
        *(_QWORD *)v64 = v64 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(_OWORD *)(v64 + 64) = 0;
        *(__m128i *)(v64 + 8) = v65;
        a3->m128i_i64[0] = v64;
        *(_QWORD *)v64 = v64 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v64 & 3LL;
        a4 = (__m128)_mm_unpacklo_epi64((__m128i)a3->m128i_u64[0], (__m128i)a3->m128i_u64[0]);
        *(__m128 *)(a3->m128i_i64[0] + 8) = a4;
        *(_QWORD *)a3->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a3->m128i_i64[0] |= 2uLL;
        v33 = (unsigned __int64 *)a3->m128i_i64[0];
LABEL_28:
        sub_2CEFC0(a3, v33, 1, &v79);
        goto LABEL_29;
      }
      if ( !a3->m128i_i64[1] )
        goto LABEL_28;
      v51 = 1;
      v52 = *v33 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v52 & 2) != 0 )
      {
        v53 = 1;
        goto LABEL_81;
      }
      while ( 1 )
      {
        v54 = *(_QWORD *)(v52 + 24);
        if ( v11 < v54 )
        {
          v55 = *(_BYTE **)(v52 + 8);
          v51 = 1;
          goto LABEL_85;
        }
        if ( v54 >= v11 )
          break;
        v55 = *(_BYTE **)(v52 + 16);
        v51 = 0;
LABEL_85:
        if ( (*v55 & 2) != 0 )
          goto LABEL_86;
        v52 = (unsigned __int64)v55;
      }
      if ( !v52 )
      {
LABEL_86:
        v53 = v51;
        v33 = (unsigned __int64 *)v52;
LABEL_81:
        sub_2CEFC0(a3, v33, v53, &v79);
LABEL_29:
        v32 = v91;
      }
      if ( v32 )
      {
        v92.m128_u64[0] = 0;
        qfree(v32);
      }
      if ( v89 )
      {
        v90.m128i_i64[0] = 0;
        qfree(v89);
      }
      if ( src )
      {
        *(_QWORD *)&v86 = 0;
        qfree(src);
      }
      if ( dest )
      {
        n[0] = 0;
        qfree(dest);
      }
LABEL_38:
      v88 = v11;
      v90 = 0;
      v89 = nullptr;
      sub_2A8F60(&v89, (__int64)&v80);
      v91 = nullptr;
      copy_tinfo_t(&v91, &v82);
      v87 = &v88;
      v8 = (unsigned __int64 *)a1->m128i_i64[0];
      if ( !a1->m128i_i64[0] )
      {
        v40 = qalloc(64);
        v41 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v40, (__m128i)(unsigned __int64)v40);
        if ( !v40 )
        {
          v5 = __cxa_allocate_exception(8u);
          *v5 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v5,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v40 + 16) = 0;
        *(_OWORD *)(v40 + 32) = 0;
        *(_OWORD *)(v40 + 48) = 0;
        *(_QWORD *)v40 = v40 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(__m128i *)(v40 + 8) = v41;
        a1->m128i_i64[0] = v40;
        *(_QWORD *)v40 = v40 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v40 & 3LL;
        a4 = (__m128)_mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
        *(__m128 *)(a1->m128i_i64[0] + 8) = a4;
        *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
        v8 = (unsigned __int64 *)a1->m128i_i64[0];
LABEL_54:
        v42 = sub_2CF430(a1, v8, 1, &v87);
        goto LABEL_55;
      }
      if ( !a1->m128i_i64[1] )
        goto LABEL_54;
      if ( !v70 )
        goto LABEL_76;
      if ( v70 == v8 )
      {
        v66 = (unsigned __int64 *)v70[2];
        v70 = v66;
        if ( (*(_BYTE *)v66 & 2) != 0 )
          goto LABEL_120;
        if ( v66[3] < v88 )
          goto LABEL_51;
        if ( v66[3] != v88 )
          goto LABEL_76;
        if ( !v66 )
        {
LABEL_120:
          v70 = (unsigned __int64 *)a1->m128i_i64[0];
          v39 = 1;
          goto LABEL_121;
        }
        goto LABEL_56;
      }
      if ( v70[3] >= v88 )
      {
        if ( v70[3] == v88 )
          goto LABEL_56;
        if ( (*v70 & 2) != 0 )
        {
          v63 = (unsigned __int64)v70;
          goto LABEL_123;
        }
        v59 = v70[1];
        if ( (*(_BYTE *)v59 & 2) == 0 )
        {
          do
          {
            v63 = v59;
            v59 = *(_QWORD *)(v59 + 16);
          }
          while ( (*(_BYTE *)v59 & 2) == 0 );
          if ( v8 == (unsigned __int64 *)v63 )
            goto LABEL_76;
          goto LABEL_123;
        }
        v60 = (unsigned __int64 *)(*v70 & 0xFFFFFFFFFFFFFFFCLL);
        v61 = *v60;
        if ( (*v60 & 2) == 0 )
        {
          if ( (unsigned __int64 *)v60[1] == v70 )
          {
            while ( 1 )
            {
              v62 = v60;
              v63 = v61 & 0xFFFFFFFFFFFFFFFCLL;
              v61 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v61 & 2) != 0 )
                break;
              v60 = (unsigned __int64 *)v63;
              if ( *(unsigned __int64 **)(v63 + 8) != v62 )
                goto LABEL_105;
            }
          }
          else
          {
LABEL_105:
            v63 = (unsigned __int64)v60;
          }
          if ( v8 == (unsigned __int64 *)v63 )
          {
LABEL_107:
            v39 = 1;
            goto LABEL_121;
          }
LABEL_123:
          if ( *(_QWORD *)(v63 + 24) < v88 )
          {
            if ( (*(_BYTE *)v70[1] & 2) != 0 )
              goto LABEL_107;
            if ( (**(_BYTE **)(v63 + 16) & 2) != 0 )
            {
              v70 = (unsigned __int64 *)v63;
              v39 = 0;
              goto LABEL_121;
            }
          }
          goto LABEL_76;
        }
        v39 = 1;
        if ( v8 != v60 )
        {
          v39 = 1;
          if ( v60[3] >= v88 )
            goto LABEL_76;
        }
LABEL_121:
        v8 = v70;
        v42 = sub_2CF430(a1, v70, v39, &v87);
        goto LABEL_55;
      }
      if ( (*v70 & 2) != 0 )
      {
        v38 = (unsigned __int64)v70;
        goto LABEL_75;
      }
      v34 = v70[2];
      if ( (*(_BYTE *)v34 & 2) == 0 )
      {
        do
        {
          v38 = v34;
          v34 = *(_QWORD *)(v34 + 8);
        }
        while ( (*(_BYTE *)v34 & 2) == 0 );
        if ( v8 != (unsigned __int64 *)v38 )
          goto LABEL_75;
        goto LABEL_76;
      }
      v35 = (unsigned __int64 *)(*v70 & 0xFFFFFFFFFFFFFFFCLL);
      v36 = *v35;
      if ( (*v35 & 2) != 0 )
      {
        v39 = 0;
        if ( v8 != v35 )
        {
          if ( v88 >= v35[3] )
            goto LABEL_76;
          v39 = 0;
        }
        goto LABEL_121;
      }
      if ( (unsigned __int64 *)v35[2] == v70 )
      {
        while ( 1 )
        {
          v37 = v35;
          v38 = v36 & 0xFFFFFFFFFFFFFFFCLL;
          v36 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v36 & 2) != 0 )
            break;
          v35 = (unsigned __int64 *)v38;
          if ( *(unsigned __int64 **)(v38 + 16) != v37 )
            goto LABEL_49;
        }
      }
      else
      {
LABEL_49:
        v38 = (unsigned __int64)v35;
      }
      if ( v8 == (unsigned __int64 *)v38 )
      {
LABEL_51:
        v39 = 0;
        goto LABEL_121;
      }
LABEL_75:
      if ( v88 < *(_QWORD *)(v38 + 24) )
      {
        if ( (*(_BYTE *)v70[2] & 2) != 0 )
          goto LABEL_51;
        if ( (**(_BYTE **)(v38 + 8) & 2) != 0 )
        {
          v70 = (unsigned __int64 *)v38;
          v39 = 1;
          goto LABEL_121;
        }
      }
LABEL_76:
      v49 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v49 & 2) != 0 )
      {
        v50 = 1;
        goto LABEL_78;
      }
      v8 = (unsigned __int64 *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
      v56 = 1;
      v57 = *(_QWORD *)(v49 + 24);
      if ( v88 < v57 )
      {
LABEL_93:
        v58 = (unsigned __int64 *)v8[1];
        v56 = 1;
        if ( (*(_BYTE *)v58 & 2) == 0 )
          goto LABEL_92;
        goto LABEL_94;
      }
      while ( 2 )
      {
        if ( v57 >= v88 )
        {
          v70 = v8;
          if ( !v8 )
            goto LABEL_95;
        }
        else
        {
          v58 = (unsigned __int64 *)v8[2];
          v56 = 0;
          if ( (*(_BYTE *)v58 & 2) == 0 )
          {
LABEL_92:
            v8 = v58;
            v57 = v58[3];
            if ( v88 >= v57 )
              continue;
            goto LABEL_93;
          }
LABEL_94:
          v70 = v8;
LABEL_95:
          v8 = v70;
          v50 = v56;
LABEL_78:
          v42 = sub_2CF430(a1, v8, v50, &v87);
LABEL_55:
          v70 = (unsigned __int64 *)v42;
        }
        break;
      }
LABEL_56:
      sub_2AFDA0((__int64 *)&v89);
LABEL_57:
      clear_tinfo_t(&v82);
      v9 = v80;
      if ( v80 )
      {
        v81.m128_u64[0] = 0;
        qfree(v80);
      }
      if ( v69 == ++v68 )
        return 1;
    }
    if ( !v19 )
    {
      v87 = (_QWORD *)v11;
LABEL_25:
      v30 = v86;
      v29 = 0;
      v31 = nullptr;
      v32 = nullptr;
      if ( (_QWORD)v86 )
        goto LABEL_73;
      goto LABEL_26;
    }
    v46 = strlen(v19);
    v25 = 0;
    v26 = v46;
    v28 = v46 + 1;
    v27 = v46;
LABEL_68:
    v76 = v27;
    v75 = v25;
    v74 = v26;
    v71 = v28;
    src = (void *)qvector_reserve(&src, v22, v28, 1);
    v27 = v76;
    v22 = src;
    v25 = v75;
    v26 = v74;
    v28 = v71;
    goto LABEL_23;
  }
  return 1;
}
