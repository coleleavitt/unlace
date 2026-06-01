_QWORD *__fastcall sub_10E9650(_QWORD *a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rdx
  size_t v17; // r14
  void *v18; // rax
  void *v19; // rdi
  size_t v20; // r14
  __int64 *v21; // rax
  char *v22; // r14
  __int64 v23; // r15
  __int64 v24; // r12
  size_t v25; // r15
  void *v26; // rax
  void *v27; // rdx
  __int64 v28; // rax
  _BYTE *v29; // rsi
  __int64 v30; // rdx
  void **v31; // rbp
  void **v32; // rbx
  __int64 *v34; // rdi
  __int64 *v35; // rdi
  __int64 *v36; // rdi
  __m128i *v37; // r12
  __m128i *v38; // rdx
  int v39; // r14d
  __m128i *v40; // r12
  __m128i *v41; // rdi
  int v42; // eax
  _BYTE *v43; // rsi
  __int64 v44; // rdx
  __int64 v47; // [rsp+28h] [rbp-230h]
  __int64 v48; // [rsp+28h] [rbp-230h]
  int v49; // [rsp+28h] [rbp-230h]
  __int64 *src; // [rsp+38h] [rbp-220h]
  void *srca; // [rsp+38h] [rbp-220h]
  void *srcb; // [rsp+38h] [rbp-220h]
  __int64 v54; // [rsp+48h] [rbp-210h]
  char *v56; // [rsp+58h] [rbp-200h]
  __int64 v57; // [rsp+68h] [rbp-1F0h] BYREF
  void *v58; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v59; // [rsp+78h] [rbp-1E0h]
  __m128i v60; // [rsp+80h] [rbp-1D8h] BYREF
  __int16 v61; // [rsp+90h] [rbp-1C8h]
  void *v62[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  _BYTE v63[16]; // [rsp+B0h] [rbp-1A8h] BYREF
  __int16 v64; // [rsp+C0h] [rbp-198h]
  __m128i v65; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v66; // [rsp+E0h] [rbp-178h] BYREF
  __int16 v67; // [rsp+F0h] [rbp-168h]
  unsigned __int128 v68; // [rsp+100h] [rbp-158h] BYREF
  _BYTE *v69; // [rsp+110h] [rbp-148h]
  __int64 v70; // [rsp+118h] [rbp-140h]
  __int16 v71; // [rsp+120h] [rbp-138h]
  void *v72; // [rsp+130h] [rbp-128h] BYREF
  __int64 v73; // [rsp+138h] [rbp-120h]
  _BYTE v74[64]; // [rsp+140h] [rbp-118h] BYREF
  _BYTE ptr[24]; // [rsp+180h] [rbp-D8h] BYREF
  __int64 v76; // [rsp+198h] [rbp-C0h] BYREF
  __int16 v77; // [rsp+1A0h] [rbp-B8h]

  v6 = *(_BYTE **)(a2 + 944);
  v68 = __PAIR128__(a4, (unsigned __int64)a3);
  v7 = *(_QWORD *)(a2 + 952);
  v71 = 261;
  v73 = 0x200000000LL;
  v62[0] = v63;
  v72 = v74;
  sub_10D8CD0(v62, v6, (__int64)&v6[v7]);
  v8 = j__strlen("-");
  if ( v8 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v62[1] )
    std::__throw_length_error("basic_string::append");
  sub_9EE560(v62, "-", v8);
  *(_QWORD *)ptr = v62;
  v77 = 260;
  sub_A41580(&v65, (const __m128i *)ptr, (const __m128i *)&v68, v9, v10, v11);
  sub_2253560(&v58, &v65);
  if ( HIDWORD(v73) <= (unsigned int)v73 )
  {
    v37 = (__m128i *)sub_2237400(&v72, v74, 0, 32, &v57);
    v38 = &v37[2 * (unsigned int)v73];
    v38->m128i_i64[0] = (__int64)v38[1].m128i_i64;
    if ( v58 == &v60 )
    {
      v38[1] = _mm_load_si128(&v60);
    }
    else
    {
      v38->m128i_i64[0] = (__int64)v58;
      v38[1].m128i_i64[0] = v60.m128i_i64[0];
    }
    v38->m128i_i64[1] = v59;
    v59 = 0;
    v60.m128i_i8[0] = 0;
    v58 = &v60;
    sub_10E9550((__int64)&v72, v37);
    v39 = v57;
    if ( v72 != v74 )
      free(v72);
    v72 = v37;
    HIDWORD(v73) = v39;
    LODWORD(v73) = v73 + 1;
    if ( v58 != &v60 )
      operator delete(v58);
  }
  else
  {
    v12 = (__m128i *)((char *)v72 + 32 * (unsigned int)v73);
    v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
    if ( v58 == &v60 )
    {
      v12[1] = _mm_load_si128(&v60);
    }
    else
    {
      v12->m128i_i64[0] = (__int64)v58;
      v12[1].m128i_i64[0] = v60.m128i_i64[0];
    }
    v12->m128i_i64[1] = v59;
    LODWORD(v73) = v73 + 1;
  }
  if ( v62[0] != v63 )
    operator delete(v62[0]);
  v54 = (__int64)&a3[a4];
  if ( HIDWORD(v73) <= (unsigned int)v73 )
  {
    v40 = (__m128i *)sub_2237400(&v72, v74, 0, 32, ptr);
    v41 = &v40[2 * (unsigned int)v73];
    v41->m128i_i64[0] = (__int64)v41[1].m128i_i64;
    sub_10D8DB0(v41, a3, v54);
    sub_10E9550((__int64)&v72, v40);
    v42 = *(_DWORD *)ptr;
    if ( v72 != v74 )
    {
      v49 = *(_DWORD *)ptr;
      free(v72);
      v42 = v49;
    }
    HIDWORD(v73) = v42;
    v72 = v40;
    v14 = (unsigned int)(v73 + 1);
    LODWORD(v73) = v73 + 1;
  }
  else
  {
    v13 = (char *)v72 + 32 * (unsigned int)v73;
    *v13 = v13 + 2;
    sub_10D8DB0(v13, a3, v54);
    v14 = (unsigned int)(v73 + 1);
    LODWORD(v73) = v73 + 1;
  }
  v15 = *(_QWORD *)(a2 + 344);
  v16 = 32LL * *(unsigned int *)(a2 + 352);
  v47 = v15 + v16;
  if ( v15 + v16 == v15 )
    goto LABEL_28;
  while ( 1 )
  {
    *(_QWORD *)ptr = v15;
    v77 = 260;
    if ( !(unsigned int)sub_228B230(ptr, &v68) && (_BYTE)v68 )
    {
      v17 = *(_QWORD *)(v15 + 8);
      v18 = *(void **)v15;
      *(_QWORD *)ptr = &v76;
      *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( v17 > 0x80 )
      {
        srca = v18;
        sub_2236E10(ptr, &v76, v17, 1);
        v18 = srca;
        v35 = (__int64 *)(*(_QWORD *)ptr + *(_QWORD *)&ptr[8]);
      }
      else
      {
        if ( !v17 )
          goto LABEL_15;
        v35 = &v76;
      }
      memcpy(v35, v18, v17);
      v17 += *(_QWORD *)&ptr[8];
LABEL_15:
      v67 = 257;
      v64 = 257;
      v61 = 261;
      *(_QWORD *)&ptr[8] = v17;
      v58 = a3;
      v71 = 257;
      v59 = a4;
      sub_228A3B0(ptr, &v58, v62, &v65, &v68);
      v71 = 261;
      v68 = *(_OWORD *)ptr;
      if ( (unsigned __int8)sub_228C2C0(&v68) )
        break;
      sub_228A5F0(ptr, 0);
      v19 = *(void **)ptr;
      if ( *(__int64 **)ptr == &v76 )
        goto LABEL_18;
      goto LABEL_17;
    }
    *(_QWORD *)&v68 = v15;
    v69 = a3;
    v71 = 1284;
    v70 = a4;
    sub_2253560(&v65, &v68);
    v20 = v65.m128i_u64[1];
    *(_QWORD *)ptr = &v76;
    v21 = (__int64 *)v65.m128i_i64[0];
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v65.m128i_i64[1] > 0x80uLL )
    {
      src = (__int64 *)v65.m128i_i64[0];
      sub_2236E10(ptr, &v76, v65.m128i_i64[1], 1);
      v21 = src;
      v34 = (__int64 *)(*(_QWORD *)ptr + *(_QWORD *)&ptr[8]);
    }
    else
    {
      if ( !v65.m128i_i64[1] )
        goto LABEL_22;
      v34 = &v76;
    }
    memcpy(v34, v21, v20);
    v21 = (__int64 *)v65.m128i_i64[0];
    v20 += *(_QWORD *)&ptr[8];
LABEL_22:
    *(_QWORD *)&ptr[8] = v20;
    if ( v21 != &v66 )
    {
      operator delete(v21);
      v20 = *(_QWORD *)&ptr[8];
    }
    *((_QWORD *)&v68 + 1) = v20;
    v71 = 261;
    *(_QWORD *)&v68 = *(_QWORD *)ptr;
    if ( (unsigned __int8)sub_228C2C0(&v68) )
      break;
    v19 = *(void **)ptr;
    if ( *(__int64 **)ptr == &v76 )
    {
      v15 += 32;
      if ( v47 == v15 )
      {
LABEL_27:
        v14 = (unsigned int)v73;
LABEL_28:
        v22 = (char *)v72;
        v56 = (char *)v72 + 32 * v14;
        if ( v72 == v56 )
        {
LABEL_37:
          *a1 = a1 + 2;
          sub_10D8DB0(a1, a3, v54);
          goto LABEL_40;
        }
        while ( 1 )
        {
          v23 = 32LL * *(unsigned int *)(a5 + 1160);
          v24 = *(_QWORD *)(a5 + 1152);
          v48 = v24 + v23;
          if ( v24 != v24 + v23 )
            break;
LABEL_35:
          sub_22910E0(ptr, *(_QWORD *)v22, *((_QWORD *)v22 + 1), 0, 0);
          if ( (v77 & 1) == 0 )
          {
            v43 = *(_BYTE **)ptr;
            v44 = *(_QWORD *)&ptr[8];
            *a1 = a1 + 2;
            sub_10D8CD0(a1, v43, (__int64)&v43[v44]);
            if ( (v77 & 1) == 0 && *(_BYTE **)ptr != &ptr[16] )
              operator delete(*(void **)ptr);
            goto LABEL_40;
          }
          v22 += 32;
          if ( v56 == v22 )
            goto LABEL_37;
        }
        while ( 1 )
        {
          v25 = *(_QWORD *)(v24 + 8);
          v26 = *(void **)v24;
          *(_QWORD *)ptr = &v76;
          *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          if ( v25 > 0x80 )
            break;
          if ( v25 )
          {
            v36 = &v76;
            goto LABEL_58;
          }
LABEL_32:
          *(_QWORD *)&ptr[8] = v25;
          v27 = *(void **)v22;
          v28 = *((_QWORD *)v22 + 1);
          v71 = 257;
          v67 = 257;
          v58 = v27;
          v64 = 257;
          v61 = 261;
          v59 = v28;
          sub_228A3B0(ptr, &v58, v62, &v65, &v68);
          v71 = 261;
          v68 = *(_OWORD *)ptr;
          if ( (unsigned __int8)sub_228C2C0(&v68) )
            goto LABEL_38;
          sub_228A5F0(ptr, 0);
          if ( *(__int64 **)ptr == &v76 )
          {
            v24 += 32;
            if ( v48 == v24 )
              goto LABEL_35;
          }
          else
          {
            free(*(void **)ptr);
            v24 += 32;
            if ( v48 == v24 )
              goto LABEL_35;
          }
        }
        srcb = v26;
        sub_2236E10(ptr, &v76, v25, 1);
        v26 = srcb;
        v36 = (__int64 *)(*(_QWORD *)ptr + *(_QWORD *)&ptr[8]);
LABEL_58:
        memcpy(v36, v26, v25);
        v25 += *(_QWORD *)&ptr[8];
        goto LABEL_32;
      }
    }
    else
    {
LABEL_17:
      free(v19);
LABEL_18:
      v15 += 32;
      if ( v47 == v15 )
        goto LABEL_27;
    }
  }
LABEL_38:
  v29 = *(_BYTE **)ptr;
  v30 = *(_QWORD *)&ptr[8];
  *a1 = a1 + 2;
  sub_10D8DB0(a1, v29, (__int64)&v29[v30]);
  if ( *(__int64 **)ptr != &v76 )
    free(*(void **)ptr);
LABEL_40:
  v31 = (void **)v72;
  v32 = (void **)((char *)v72 + 32 * (unsigned int)v73);
  if ( v72 != v32 )
  {
    do
    {
      while ( 1 )
      {
        v32 -= 4;
        if ( *v32 == v32 + 2 )
          break;
        operator delete(*v32);
        if ( v31 == v32 )
          goto LABEL_43;
      }
    }
    while ( v31 != v32 );
LABEL_43:
    v32 = (void **)v72;
  }
  if ( v32 != (void **)v74 )
    free(v32);
  return a1;
}
