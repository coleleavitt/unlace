__int64 __fastcall sub_2D49C0(__m128i *a1, char **a2, __m128i *a3, __m128 a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  int v8; // edx
  unsigned __int64 v9; // r12
  const char *v10; // rax
  __int64 v11; // rbp
  size_t v12; // rax
  char *v13; // rax
  char *v14; // r15
  char *v15; // rdx
  void *v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rcx
  char *v19; // rbp
  bool v20; // cf
  char *v21; // rax
  _BYTE *v22; // r15
  size_t v23; // rbp
  __int64 v24; // rdx
  size_t v25; // rax
  __int64 v26; // r9
  size_t v27; // r10
  size_t v28; // r11
  __int64 v29; // rdx
  size_t v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // r15
  __int64 v33; // rdi
  unsigned __int64 *v34; // rsi
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 *v37; // rsi
  unsigned __int64 v38; // rdi
  unsigned __int64 *v39; // rdx
  unsigned __int64 v40; // rdi
  unsigned __int64 *v41; // r8
  unsigned __int64 v42; // rcx
  char v43; // di
  __int64 v44; // rax
  __m128i v45; // xmm1
  __int64 v46; // rax
  unsigned int v48; // eax
  bool v49; // cl
  size_t v50; // rax
  void *v51; // rax
  void *v52; // rax
  void *v53; // rax
  unsigned __int64 v54; // rcx
  char v55; // dl
  unsigned __int64 v56; // rax
  char v57; // dl
  _BYTE *v58; // rdx
  unsigned __int64 v59; // rsi
  char v60; // al
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdi
  unsigned __int64 *v64; // rdx
  unsigned __int64 v65; // rdi
  unsigned __int64 *v66; // r8
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  __m128i v69; // xmm1
  unsigned __int64 *v70; // rax
  int v72; // [rsp+10h] [rbp-168h]
  int v73; // [rsp+14h] [rbp-164h]
  unsigned __int64 *v74; // [rsp+18h] [rbp-160h]
  size_t v75; // [rsp+20h] [rbp-158h]
  size_t v76; // [rsp+20h] [rbp-158h]
  __int64 module_data; // [rsp+30h] [rbp-148h]
  size_t v78; // [rsp+38h] [rbp-140h]
  __int64 v79; // [rsp+40h] [rbp-138h]
  size_t v80; // [rsp+48h] [rbp-130h]
  char *s; // [rsp+58h] [rbp-120h]
  char *v82; // [rsp+60h] [rbp-118h]
  unsigned __int64 *v83; // [rsp+68h] [rbp-110h] BYREF
  __int64 v84; // [rsp+70h] [rbp-108h] BYREF
  __m128 v85; // [rsp+78h] [rbp-100h]
  __int64 v86; // [rsp+88h] [rbp-F0h] BYREF
  void *dest; // [rsp+90h] [rbp-E8h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-E0h]
  void *src; // [rsp+A8h] [rbp-D0h] BYREF
  __int128 v90; // [rsp+B0h] [rbp-C8h]
  _QWORD *v91; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned __int64 v92; // [rsp+100h] [rbp-78h] BYREF
  __int64 v93; // [rsp+108h] [rbp-70h] BYREF
  __m128i v94; // [rsp+110h] [rbp-68h]
  __int64 v95; // [rsp+120h] [rbp-58h]
  __m128 v96; // [rsp+128h] [rbp-50h]
  unsigned __int64 v97; // [rsp+138h] [rbp-40h]

  v97 = __readfsqword(0x28u);
  module_data = get_module_data();
  if ( (unsigned int)unpack_dd() != 1 )
  {
    if ( !under_debugger )
      sub_383060(51492);
    BUG();
  }
  v8 = unpack_dd();
  v73 = v8;
  if ( a2[1] - *a2 < (unsigned __int64)v8 )
    return 0;
  if ( v8 > 0 )
  {
    v72 = 0;
    v74 = (unsigned __int64 *)a1->m128i_i64[0];
    while ( 1 )
    {
      v84 = 0;
      v86 = 0;
      v85 = 0;
      if ( (unsigned __int8)is_cvt64() )
      {
        v9 = (unsigned int)unpack_dd();
        if ( v9 == 0xFFFFFFFF )
          v9 = -1;
      }
      else
      {
        v9 = unpack_dq();
      }
      v10 = (const char *)unpack_ds();
      v11 = (__int64)v10;
      if ( v10 )
      {
        v12 = strlen(v10);
        v84 = v11;
        a4 = (__m128)_mm_unpacklo_epi64((__m128i)(v12 + 1), (__m128i)(v12 + 1));
        v85 = a4;
      }
      v13 = *a2;
      v14 = a2[1];
      v15 = nullptr;
      if ( *a2 < v14 )
      {
        v48 = unpack_dd();
        v15 = *a2;
        v20 = __CFADD__(*a2, v48);
        v13 = &(*a2)[v48];
        v49 = v20;
        v20 = v14 < v13;
        v14 = a2[1];
        if ( v20 || v49 )
        {
          v13 = *a2;
          v15 = nullptr;
        }
        else
        {
          *a2 = v13;
        }
      }
      v16 = v14;
      if ( v15 == v13 )
        v15 = nullptr;
      s = v15;
      v17 = unpack_dd();
      v19 = *a2;
      v20 = __CFADD__(*a2, v17);
      v21 = &(*a2)[v17];
      if ( v20 || v14 < v21 )
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
      v82 = v19;
      if ( !a3 )
      {
        if ( s && (unsigned __int8)deserialize_tinfo() && (unsigned __int8)sub_32CB80(&v86, module_data, -1) )
          goto LABEL_38;
        sub_6D0A0((__int64)"%a: cannot restore user defined call prototype\n", *(double *)a4.m128_u64);
        goto LABEL_57;
      }
      dest = nullptr;
      src = nullptr;
      *(_OWORD *)n = 0;
      v90 = 0;
      if ( !s )
        break;
      v23 = strlen(s);
      dest = (void *)qvector_reserve((__int64)&dest, 0, v23 + 1, 1);
      v16 = s;
      n[0] = v23 + 1;
      *((_BYTE *)dest + v23) = 0;
      memmove(dest, s, v23);
      v19 = v82;
      if ( !v82 )
        goto LABEL_24;
      v25 = strlen(v82);
      v26 = v90;
      v22 = src;
      v27 = v25;
      if ( (_QWORD)v90 )
      {
        v26 = v90 - 1;
        v28 = v25 + v90 - 1;
      }
      else
      {
        v28 = v25;
      }
      v29 = v28 + 1;
      if ( *((_QWORD *)&v90 + 1) < v28 + 1 )
        goto LABEL_68;
LABEL_23:
      *(_QWORD *)&v90 = v29;
      v16 = v19;
      v22[v28] = 0;
      memmove((char *)src + v26, v19, v27);
LABEL_24:
      v30 = n[0];
      v91 = (_QWORD *)v9;
      if ( !n[0] )
        goto LABEL_25;
      v51 = (void *)qalloc_or_throw(n[0], (__int64)v16, v24, v18);
      v16 = dest;
      v32 = (__int64)v51;
      memcpy(v51, dest, v30);
      v31 = v90;
      v33 = 0;
      if ( (_QWORD)v90 )
      {
LABEL_73:
        v76 = v31;
        v52 = (void *)qalloc_or_throw(v31, (__int64)v16, v31, v18);
        v53 = memcpy(v52, src, v76);
        v31 = v76;
        v33 = (__int64)v53;
      }
LABEL_26:
      v34 = (unsigned __int64 *)a3->m128i_i64[0];
      v92 = v9;
      v93 = v32;
      v94 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
      a4 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
      v95 = v33;
      v83 = &v92;
      v96 = a4;
      if ( !v34 )
      {
        v68 = qalloc();
        v69 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v68, (__m128i)(unsigned __int64)v68);
        if ( !v68 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v68 + 16) = 0;
        *(_OWORD *)(v68 + 32) = 0;
        *(_OWORD *)(v68 + 48) = 0;
        *(_QWORD *)v68 = v68 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(_OWORD *)(v68 + 64) = 0;
        *(__m128i *)(v68 + 8) = v69;
        a3->m128i_i64[0] = v68;
        *(_QWORD *)v68 = v68 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v68 & 3LL;
        a4 = (__m128)_mm_unpacklo_epi64((__m128i)a3->m128i_u64[0], (__m128i)a3->m128i_u64[0]);
        *(__m128 *)(a3->m128i_i64[0] + 8) = a4;
        *(_QWORD *)a3->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a3->m128i_i64[0] |= 2uLL;
        v34 = (unsigned __int64 *)a3->m128i_i64[0];
LABEL_28:
        sub_2D4380(a3, v34, 1, &v83);
        goto LABEL_29;
      }
      if ( !a3->m128i_i64[1] )
        goto LABEL_28;
      v36 = 1;
      v56 = *v34 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v56 & 2) != 0 )
      {
        v57 = 1;
        goto LABEL_81;
      }
      while ( 1 )
      {
        v35 = *(_QWORD *)(v56 + 24);
        if ( v9 < v35 )
        {
          v58 = *(_BYTE **)(v56 + 8);
          v36 = 1;
          goto LABEL_85;
        }
        if ( v35 >= v9 )
          break;
        v58 = *(_BYTE **)(v56 + 16);
        v36 = 0;
LABEL_85:
        if ( (*v58 & 2) != 0 )
          goto LABEL_86;
        v56 = (unsigned __int64)v58;
      }
      if ( !v56 )
      {
LABEL_86:
        v57 = v36;
        v34 = (unsigned __int64 *)v56;
LABEL_81:
        sub_2D4380(a3, v34, v57, &v83);
LABEL_29:
        v33 = v95;
      }
      if ( v33 )
      {
        v96.m128_u64[0] = 0;
        qfree(v33);
      }
      if ( v93 )
      {
        v94.m128i_i64[0] = 0;
        qfree(v93);
      }
      if ( src )
      {
        *(_QWORD *)&v90 = 0;
        qfree((__int64)src);
      }
      if ( dest )
      {
        n[0] = 0;
        qfree((__int64)dest);
      }
LABEL_38:
      v92 = v9;
      v94 = 0;
      v93 = 0;
      sub_2AE320(&v93, (__int64)&v84, v35, v36);
      v95 = 0;
      copy_tinfo_t();
      v91 = &v92;
      v37 = (unsigned __int64 *)a1->m128i_i64[0];
      if ( !a1->m128i_i64[0] )
      {
        v44 = qalloc();
        v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v44, (__m128i)(unsigned __int64)v44);
        if ( !v44 )
        {
          v5 = __cxa_allocate_exception(8u);
          *v5 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v5,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v44 + 16) = 0;
        *(_OWORD *)(v44 + 32) = 0;
        *(_OWORD *)(v44 + 48) = 0;
        *(_QWORD *)v44 = v44 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(__m128i *)(v44 + 8) = v45;
        a1->m128i_i64[0] = v44;
        *(_QWORD *)v44 = v44 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v44 & 3LL;
        a4 = (__m128)_mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
        *(__m128 *)(a1->m128i_i64[0] + 8) = a4;
        *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
        v37 = (unsigned __int64 *)a1->m128i_i64[0];
LABEL_54:
        v46 = sub_2D47F0(a1, v37, 1, &v91);
        goto LABEL_55;
      }
      if ( !a1->m128i_i64[1] )
        goto LABEL_54;
      if ( !v74 )
        goto LABEL_76;
      if ( v74 == v37 )
      {
        v70 = (unsigned __int64 *)v74[2];
        v74 = v70;
        if ( (*(_BYTE *)v70 & 2) != 0 )
          goto LABEL_120;
        if ( v70[3] < v92 )
          goto LABEL_51;
        if ( v70[3] == v92 )
        {
          if ( v70 )
            goto LABEL_56;
LABEL_120:
          v74 = (unsigned __int64 *)a1->m128i_i64[0];
          v43 = 1;
LABEL_121:
          v46 = sub_2D47F0(a1, v74, v43, &v91);
          goto LABEL_55;
        }
LABEL_76:
        v54 = *v37 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v54 & 2) != 0 )
        {
          v55 = 1;
LABEL_78:
          v46 = sub_2D47F0(a1, v37, v55, &v91);
          goto LABEL_55;
        }
        v59 = *v37 & 0xFFFFFFFFFFFFFFFCLL;
        v60 = 1;
        v61 = *(_QWORD *)(v54 + 24);
        if ( v92 < v61 )
        {
          while ( 1 )
          {
            v62 = *(_QWORD *)(v59 + 8);
            v60 = 1;
            if ( (*(_BYTE *)v62 & 2) != 0 )
              break;
LABEL_92:
            v59 = v62;
            v61 = *(_QWORD *)(v62 + 24);
            if ( v92 >= v61 )
              goto LABEL_90;
          }
LABEL_94:
          v74 = (unsigned __int64 *)v59;
        }
        else
        {
LABEL_90:
          if ( v61 < v92 )
          {
            v62 = *(_QWORD *)(v59 + 16);
            v60 = 0;
            if ( (*(_BYTE *)v62 & 2) == 0 )
              goto LABEL_92;
            goto LABEL_94;
          }
          v74 = (unsigned __int64 *)v59;
          if ( v59 )
            goto LABEL_56;
        }
        v37 = v74;
        v55 = v60;
        goto LABEL_78;
      }
      if ( v74[3] >= v92 )
      {
        if ( v74[3] == v92 )
          goto LABEL_56;
        if ( (*v74 & 2) != 0 )
        {
          v67 = (unsigned __int64)v74;
        }
        else
        {
          v63 = v74[1];
          if ( (*(_BYTE *)v63 & 2) != 0 )
          {
            v64 = (unsigned __int64 *)(*v74 & 0xFFFFFFFFFFFFFFFCLL);
            v65 = *v64;
            if ( (*v64 & 2) != 0 )
            {
              v43 = 1;
              if ( v37 == v64 )
                goto LABEL_121;
              v43 = 1;
              if ( v64[3] < v92 )
                goto LABEL_121;
              goto LABEL_76;
            }
            if ( (unsigned __int64 *)v64[1] == v74 )
            {
              while ( 1 )
              {
                v66 = v64;
                v67 = v65 & 0xFFFFFFFFFFFFFFFCLL;
                v65 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v65 & 2) != 0 )
                  break;
                v64 = (unsigned __int64 *)v67;
                if ( *(unsigned __int64 **)(v67 + 8) != v66 )
                  goto LABEL_105;
              }
            }
            else
            {
LABEL_105:
              v67 = (unsigned __int64)v64;
            }
            if ( v37 == (unsigned __int64 *)v67 )
            {
LABEL_107:
              v43 = 1;
              goto LABEL_121;
            }
          }
          else
          {
            do
            {
              v67 = v63;
              v63 = *(_QWORD *)(v63 + 16);
            }
            while ( (*(_BYTE *)v63 & 2) == 0 );
            if ( v37 == (unsigned __int64 *)v67 )
              goto LABEL_76;
          }
        }
        if ( *(_QWORD *)(v67 + 24) >= v92 )
          goto LABEL_76;
        if ( (*(_BYTE *)v74[1] & 2) == 0 )
        {
          if ( (**(_BYTE **)(v67 + 16) & 2) != 0 )
          {
            v46 = sub_2D47F0(a1, (unsigned __int64 *)v67, 0, &v91);
            goto LABEL_55;
          }
          goto LABEL_76;
        }
        goto LABEL_107;
      }
      if ( (*v74 & 2) != 0 )
      {
        v42 = (unsigned __int64)v74;
        goto LABEL_75;
      }
      v38 = v74[2];
      if ( (*(_BYTE *)v38 & 2) == 0 )
      {
        do
        {
          v42 = v38;
          v38 = *(_QWORD *)(v38 + 8);
        }
        while ( (*(_BYTE *)v38 & 2) == 0 );
        if ( v37 != (unsigned __int64 *)v42 )
          goto LABEL_75;
        goto LABEL_76;
      }
      v39 = (unsigned __int64 *)(*v74 & 0xFFFFFFFFFFFFFFFCLL);
      v40 = *v39;
      if ( (*v39 & 2) != 0 )
      {
        v43 = 0;
        if ( v37 == v39 )
          goto LABEL_121;
        if ( v92 < v39[3] )
        {
          v43 = 0;
          goto LABEL_121;
        }
        goto LABEL_76;
      }
      if ( (unsigned __int64 *)v39[2] == v74 )
      {
        while ( 1 )
        {
          v41 = v39;
          v42 = v40 & 0xFFFFFFFFFFFFFFFCLL;
          v40 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v40 & 2) != 0 )
            break;
          v39 = (unsigned __int64 *)v42;
          if ( *(unsigned __int64 **)(v42 + 16) != v41 )
            goto LABEL_49;
        }
      }
      else
      {
LABEL_49:
        v42 = (unsigned __int64)v39;
      }
      if ( v37 == (unsigned __int64 *)v42 )
      {
LABEL_51:
        v43 = 0;
        goto LABEL_121;
      }
LABEL_75:
      if ( v92 >= *(_QWORD *)(v42 + 24) )
        goto LABEL_76;
      if ( (*(_BYTE *)v74[2] & 2) != 0 )
        goto LABEL_51;
      if ( (**(_BYTE **)(v42 + 8) & 2) == 0 )
        goto LABEL_76;
      v46 = sub_2D47F0(a1, (unsigned __int64 *)v42, 1, &v91);
LABEL_55:
      v74 = (unsigned __int64 *)v46;
LABEL_56:
      sub_2B5160(&v93);
LABEL_57:
      clear_tinfo_t();
      if ( v84 )
      {
        v85.m128_u64[0] = 0;
        qfree(v84);
      }
      if ( v73 == ++v72 )
        return 1;
    }
    if ( !v19 )
    {
      v91 = (_QWORD *)v9;
LABEL_25:
      v31 = v90;
      v30 = 0;
      v32 = 0;
      v33 = 0;
      if ( (_QWORD)v90 )
        goto LABEL_73;
      goto LABEL_26;
    }
    v50 = strlen(v19);
    v26 = 0;
    v27 = v50;
    v29 = v50 + 1;
    v28 = v50;
LABEL_68:
    v80 = v28;
    v79 = v26;
    v78 = v27;
    v75 = v29;
    src = (void *)qvector_reserve((__int64)&src, (__int64)v22, v29, 1);
    v28 = v80;
    v22 = src;
    v26 = v79;
    v27 = v78;
    v29 = v75;
    goto LABEL_23;
  }
  return 1;
}
