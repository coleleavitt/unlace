unsigned __int64 __fastcall sub_2D2AF0(__int64 a1, __int64 a2, __m128i *a3, __int64 a4, __int64 *a5, __m128i a6)
{
  int v9; // eax
  int v10; // ecx
  int v11; // r15d
  __m128i si128; // xmm2
  __int64 v13; // r12
  const char *v14; // rax
  const char *v15; // r14
  size_t v16; // rax
  void *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r14
  char *v21; // r9
  size_t v22; // rax
  __int64 v23; // r8
  void *v24; // r9
  size_t v25; // r10
  size_t v26; // r11
  __int64 v27; // rsi
  void *v28; // rdx
  __int64 tinfo_size; // r14
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rdi
  const char *v40; // rax
  const char *v41; // r14
  size_t v42; // rax
  void *v43; // r8
  void *v44; // rdi
  void *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  void *v48; // rdi
  void *v49; // rdx
  __int64 v50; // rax
  int v51; // r15d
  int v52; // r14d
  __int64 v53; // rax
  __m128i v54; // xmm4
  _QWORD *v55; // rcx
  _BYTE *v56; // rdx
  int v57; // eax
  _QWORD *v58; // rdx
  __int64 v59; // rax
  int v60; // eax
  int v61; // eax
  __int64 v62; // r12
  unsigned __int64 v63; // r13
  __m128i v64; // xmm6
  bool v65; // cf
  __int64 v66; // r12
  __int64 v67; // r14
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  void *v71; // rax
  __int64 v72; // r13
  __int64 v73; // rax
  size_t v74; // r15
  void *v75; // rax
  size_t v76; // rdx
  int v79; // [rsp+18h] [rbp-160h]
  int v80; // [rsp+1Ch] [rbp-15Ch]
  size_t v81[2]; // [rsp+20h] [rbp-158h] BYREF
  _QWORD *v82; // [rsp+30h] [rbp-148h]
  void *src; // [rsp+38h] [rbp-140h]
  void *v84; // [rsp+40h] [rbp-138h]
  __int64 v85; // [rsp+48h] [rbp-130h]
  size_t v86; // [rsp+50h] [rbp-128h]
  size_t v87; // [rsp+58h] [rbp-120h]
  __int64 *v88; // [rsp+68h] [rbp-110h] BYREF
  __int64 v89; // [rsp+70h] [rbp-108h] BYREF
  __m128i v90; // [rsp+78h] [rbp-100h]
  void *v91; // [rsp+88h] [rbp-F0h]
  size_t n[2]; // [rsp+90h] [rbp-E8h]
  __int64 v93; // [rsp+A0h] [rbp-D8h] BYREF
  void *v94; // [rsp+A8h] [rbp-D0h]
  __int128 v95; // [rsp+B0h] [rbp-C8h]
  __int64 v96; // [rsp+C0h] [rbp-B8h]
  __int64 v97; // [rsp+C8h] [rbp-B0h]
  char *s; // [rsp+D0h] [rbp-A8h] BYREF
  __m128i v99; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v100; // [rsp+138h] [rbp-40h]

  v100 = __readfsqword(0x28u);
  v9 = unpack_dd(a3);
  v79 = v9;
  if ( v9 > 111 )
  {
    v61 = unpack_dd(a3);
    *(_DWORD *)(a2 + 48) = 0;
    v80 = v61;
    if ( v79 > 115 )
    {
      *(_DWORD *)(a2 + 48) = v61;
      v80 = unpack_dd(a3);
      LODWORD(v81[0]) = unpack_dd(a3);
      *(_QWORD *)(a2 + 40) = (unsigned int)unpack_dd(a3);
      if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] || (v10 = v81[0], SLODWORD(v81[0]) <= 0) )
      {
LABEL_31:
        if ( v79 <= 116 )
          return v100 - __readfsqword(0x28u);
        goto LABEL_44;
      }
    }
    else if ( v79 <= 113 )
    {
      if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
        return v100 - __readfsqword(0x28u);
      v80 = 448;
      v10 = v61;
      if ( v61 <= 0 )
        return v100 - __readfsqword(0x28u);
    }
    else
    {
      v10 = unpack_dd(a3);
      if ( v79 == 114 )
      {
        if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] || v10 <= 0 )
          return v100 - __readfsqword(0x28u);
      }
      else
      {
        LODWORD(v81[0]) = v10;
        *(_QWORD *)(a2 + 40) = (unsigned int)unpack_dd(a3);
        if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
          return v100 - __readfsqword(0x28u);
        v10 = v81[0];
        if ( SLODWORD(v81[0]) <= 0 )
          return v100 - __readfsqword(0x28u);
      }
    }
  }
  else
  {
    *(_DWORD *)(a2 + 48) = 0;
    if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
      return v100 - __readfsqword(0x28u);
    v80 = 448;
    v10 = v9;
    if ( v9 <= 0 )
      return v100 - __readfsqword(0x28u);
  }
  LODWORD(v82) = v10;
  v11 = 0;
  *(__m128i *)v81 = _mm_load_si128((const __m128i *)&xmmword_407240);
  while ( 1 )
  {
    v30 = *(_QWORD *)(a2 + 8);
    v31 = *(_QWORD *)a2;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v30 + 1) )
    {
      v32 = qvector_reserve(a2, v31, v30 + 1, 96);
      v30 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v32;
      v31 = v32;
    }
    si128 = _mm_load_si128((const __m128i *)v81);
    v13 = v31 + 96 * v30;
    *(_DWORD *)v13 = 0;
    *(_QWORD *)(v13 + 24) = 0;
    *(_QWORD *)(v13 + 48) = 0;
    *(_QWORD *)(v13 + 56) = 0;
    *(_QWORD *)(v13 + 80) = -1;
    *(_DWORD *)(v13 + 88) = 0;
    *(__m128i *)(v13 + 8) = si128;
    *(_OWORD *)(v13 + 32) = 0;
    *(_OWORD *)(v13 + 64) = 0;
    ++*(_QWORD *)(a2 + 8);
    if ( !(unsigned __int8)sub_2B06C0(a1, v13, a3, v79, v80, a4, a6) )
      break;
    v14 = (const char *)sub_32D340(a3, a3->m128i_i64[1]);
    v15 = v14;
    if ( v14 && (v16 = strlen(v14), (v17 = (void *)v16) != nullptr) )
    {
      v44 = *(void **)(v13 + 24);
      v45 = (void *)(v16 + 1);
      if ( *(_QWORD *)(v13 + 40) < v16 + 1 )
      {
        v84 = (void *)v16;
        src = (void *)(v16 + 1);
        v50 = qvector_reserve(v13 + 24, v44, v45, 1);
        v17 = v84;
        v45 = src;
        *(_QWORD *)(v13 + 24) = v50;
        v44 = (void *)v50;
      }
      *(_QWORD *)(v13 + 32) = v45;
      src = v17;
      memmove(v44, v15, (size_t)v17);
      *((_BYTE *)src + *(_QWORD *)(v13 + 24)) = 0;
    }
    else
    {
      *(_QWORD *)(v13 + 32) = 0;
    }
    s = (char *)sub_32D340(a3, a3->m128i_i64[1]);
    if ( a5 )
    {
      v18 = a5[1];
      v19 = *a5;
      if ( a5[2] < (unsigned __int64)(v18 + 1) )
      {
        v46 = qvector_reserve(a5, v19, v18 + 1, 24);
        v18 = a5[1];
        *a5 = v46;
        v19 = v46;
      }
      v20 = v19 + 24 * v18;
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = 0;
      v21 = s;
      ++a5[1];
      if ( v21 )
      {
        src = v21;
        v22 = strlen(v21);
        v23 = *(_QWORD *)(v20 + 8);
        v24 = src;
        v25 = v22;
        v26 = v22;
        if ( v23 )
        {
          --v23;
          v26 = v22 + v23;
        }
        v27 = *(_QWORD *)v20;
        v28 = (void *)(v26 + 1);
        if ( *(_QWORD *)(v20 + 16) < v26 + 1 )
        {
          v87 = v22;
          v86 = v26;
          v85 = v23;
          v84 = src;
          src = (void *)(v26 + 1);
          v47 = qvector_reserve(v20, v27, v28, 1);
          v25 = v87;
          v26 = v86;
          v23 = v85;
          v24 = v84;
          *(_QWORD *)v20 = v47;
          v27 = v47;
          v28 = src;
        }
        *(_QWORD *)(v20 + 8) = v28;
        *(_BYTE *)(v27 + v26) = 0;
        memmove((void *)(v23 + *(_QWORD *)v20), v24, v25);
      }
    }
    deserialize_tinfo(v13 + 48, 0, &s, 0, 0, 0);
    if ( v79 > 111 )
    {
      v40 = (const char *)sub_32D340(a3, a3->m128i_i64[1]);
      v41 = v40;
      if ( v40 && (v42 = strlen(v40), (v43 = (void *)v42) != nullptr) )
      {
        v48 = *(void **)(v13 + 56);
        v49 = (void *)(v42 + 1);
        if ( *(_QWORD *)(v13 + 72) < v42 + 1 )
        {
          v84 = (void *)v42;
          src = (void *)(v42 + 1);
          v59 = qvector_reserve(v13 + 56, v48, v49, 1);
          v43 = v84;
          v49 = src;
          *(_QWORD *)(v13 + 56) = v59;
          v48 = (void *)v59;
        }
        *(_QWORD *)(v13 + 64) = v49;
        src = v43;
        memmove(v48, v41, (size_t)v43);
        *((_BYTE *)src + *(_QWORD *)(v13 + 56)) = 0;
      }
      else
      {
        *(_QWORD *)(v13 + 64) = 0;
      }
      if ( v79 > 118 )
        *(_DWORD *)(v13 + 88) = unpack_dd(a3);
    }
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(v13 + 48), 0);
    if ( (unsigned __int64)(tinfo_size - 1) > 0xFFFFFFFFFFFFFFFDLL
      || (unsigned __int8)sub_32B7D0(v13, *(_QWORD *)(a1 + 112), tinfo_size) )
    {
      goto LABEL_20;
    }
    sub_68EA0(
      (__int64)"%a: lvar locator cannot be imported (illegal size %zu), skipping...\n",
      *(double *)a6.m128i_i64,
      a4);
    v33 = *(_QWORD *)(a2 + 8);
    if ( v33 )
    {
      v69 = v33 - 1;
      *(_QWORD *)(a2 + 8) = v69;
      sub_2B5100((_QWORD *)(*(_QWORD *)a2 + 96 * v69));
    }
    if ( a5
      && (v34 = a5[1]) != 0
      && (v35 = v34 - 1, v36 = *a5, a5[1] = v35, v37 = (__int64 *)(v36 + 24 * v35), (v38 = *v37) != 0) )
    {
      v37[1] = 0;
      ++v11;
      qfree(v38);
      if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
        goto LABEL_31;
    }
    else
    {
LABEL_20:
      ++v11;
      if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] )
        goto LABEL_31;
    }
    if ( v11 >= (int)v82 )
      goto LABEL_31;
  }
  v62 = *(_QWORD *)(a2 + 8);
  a6 = 0;
  v63 = *(_QWORD *)a2;
  v64 = _mm_load_si128((const __m128i *)v81);
  v97 = 0;
  v65 = v62 != 0;
  v66 = v62 - 1;
  LODWORD(v89) = 0;
  v67 = v65;
  v91 = nullptr;
  v93 = 0;
  v94 = nullptr;
  v96 = -1;
  v90 = v64;
  *(_OWORD *)n = 0;
  v95 = 0;
  if ( v65 )
  {
    sub_2B5100((_QWORD *)(v63 + 96 * v66));
    *(_QWORD *)(a2 + 8) = v66;
  }
  else
  {
    v68 = *(_QWORD *)(a2 + 16);
    if ( (unsigned __int64)&v89 < v63 || (unsigned __int64)&v89 >= v63 + 96 * v68 )
    {
      if ( v68 == -1
        || (v70 = qvector_reserve(a2, v63, -1, 96), v67 = *(_QWORD *)(a2 + 8), *(_QWORD *)a2 = v70, v63 = v70, v67 != -1) )
      {
        while ( 1 )
        {
          v72 = 96 * v67 + v63;
          *(_DWORD *)v72 = 0;
          copy_argloc(v72, &v89);
          v73 = v90.m128i_i64[1];
          *(_QWORD *)(v72 + 24) = 0;
          *(_OWORD *)(v72 + 32) = 0;
          *(_QWORD *)(v72 + 16) = v73;
          v74 = n[0];
          if ( n[0] )
          {
            v71 = (void *)qalloc_or_throw(n[0]);
            *(_QWORD *)(v72 + 24) = v71;
            *(_QWORD *)(v72 + 40) = v74;
            memcpy(v71, v91, v74);
            *(_QWORD *)(v72 + 32) = v74;
          }
          *(_QWORD *)(v72 + 48) = 0;
          copy_tinfo_t(v72 + 48, &v93);
          *(_QWORD *)(v72 + 56) = 0;
          *(_OWORD *)(v72 + 64) = 0;
          if ( (_QWORD)v95 )
          {
            v81[0] = v95;
            v75 = (void *)qalloc_or_throw(v95);
            v76 = v81[0];
            *(_QWORD *)(v72 + 56) = v75;
            *(_QWORD *)(v72 + 72) = v76;
            memcpy(v75, v94, v76);
            *(_QWORD *)(v72 + 64) = v81[0];
          }
          ++v67;
          *(_QWORD *)(v72 + 80) = v96;
          *(_DWORD *)(v72 + 88) = v97;
          if ( v67 == -1 )
            break;
          v63 = *(_QWORD *)a2;
        }
      }
      *(_QWORD *)(a2 + 8) = -1;
    }
    else
    {
      sub_2B8950((__int64)&s, (__int64)&v89);
      sub_2C0F70((_QWORD *)a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&s);
      sub_2B5100(&s);
    }
  }
  sub_2B5100(&v89);
  if ( v79 > 116 )
  {
LABEL_44:
    v51 = unpack_dd(a3);
    if ( a3->m128i_i64[0] < (unsigned __int64)a3->m128i_i64[1] && v51 > 0 )
    {
      v52 = 0;
      *(__m128i *)v81 = _mm_load_si128((const __m128i *)&xmmword_407240);
      while ( 1 )
      {
        v54 = _mm_load_si128((const __m128i *)v81);
        v89 = 0;
        v90 = v54;
        s = nullptr;
        v99 = v54;
        if ( !(unsigned __int8)sub_2B06C0(a1, (__int64)&v89, a3, v79, v80, a4, a6)
          || !(unsigned __int8)sub_2B06C0(a1, (__int64)&s, a3, v79, v80, a4, a6) )
        {
          break;
        }
        if ( (unsigned int)sub_32B790(&v89, &s) )
        {
          v55 = *(_QWORD **)(a2 + 24);
          if ( !v55 )
            goto LABEL_47;
          v56 = (_BYTE *)(*v55 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v56 )
          {
            if ( (*(_BYTE *)(*v55 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
              goto LABEL_47;
            do
            {
              src = v55;
              v82 = v56;
              v84 = v56 + 24;
              v57 = sub_32B790(&s, v56 + 24);
              v55 = src;
              if ( v57 >= 0 )
              {
                src = v82;
                v82 = v55;
                v60 = sub_32B790(v84, &s);
                v55 = v82;
                v58 = src;
                if ( v60 >= 0 )
                  goto LABEL_60;
                v56 = *((_BYTE **)src + 2);
              }
              else
              {
                v56 = (_BYTE *)v82[1];
              }
            }
            while ( (*v56 & 2) == 0 );
            v58 = *(_QWORD **)(a2 + 24);
LABEL_60:
            if ( v55 == v58 )
            {
LABEL_47:
              v88 = &v89;
              v53 = sub_214CC0((__m128i *)(a2 + 24), (__int64)&v89, (__int64 *)&v88);
              v82 = (_QWORD *)(v53 + 24);
              copy_argloc(v53 + 48, &s);
              v82[5] = v99.m128i_i64[1];
            }
          }
        }
        ++v52;
        cleanup_argloc(&s);
        cleanup_argloc(&v89);
        if ( a3->m128i_i64[0] >= (unsigned __int64)a3->m128i_i64[1] || v51 <= v52 )
          return v100 - __readfsqword(0x28u);
      }
      cleanup_argloc(&s);
      cleanup_argloc(&v89);
    }
  }
  return v100 - __readfsqword(0x28u);
}
