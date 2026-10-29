unsigned __int64 __fastcall sub_4E9CF0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128 a9,
        unsigned __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v14; // r12
  void *v17; // rdi
  __m128i *v18; // rax
  __m128i v19; // xmm1
  void *v20; // rdi
  char v21; // al
  const char *v23; // rsi
  unsigned __int64 v24; // rbx
  void *v25; // rbp
  void *v26; // rdi
  __m128i v27; // xmm0
  __m128i *v28; // rax
  int v29; // ebx
  int v30; // r13d
  int v31; // r12d
  bool v32; // zf
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  int v35; // ebx
  __int32 v36; // r13d
  int v37; // r12d
  __m128i *v38; // rsi
  __int64 v39; // rdx
  char v40; // al
  __int64 v41; // rax
  char v42; // al
  char v43; // al
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // ebx
  __int32 v47; // r13d
  int v48; // r12d
  __m128i *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  char v56; // dl
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __m128i v71; // [rsp+0h] [rbp-138h] BYREF
  __m128i *v72; // [rsp+10h] [rbp-128h]
  __int64 v73; // [rsp+18h] [rbp-120h]
  __m128i v74; // [rsp+20h] [rbp-118h] BYREF
  __m128i v75; // [rsp+30h] [rbp-108h] BYREF
  __m128i v76; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v77; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v78; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v79; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v80; // [rsp+80h] [rbp-B8h] BYREF
  __m128i v81; // [rsp+90h] [rbp-A8h] BYREF
  __m128i v82; // [rsp+A0h] [rbp-98h] BYREF
  __m128i v83; // [rsp+B0h] [rbp-88h] BYREF
  __m128i v84; // [rsp+C0h] [rbp-78h] BYREF
  _BYTE src[24]; // [rsp+D0h] [rbp-68h] BYREF
  char v86; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v87; // [rsp+F8h] [rbp-40h]

  v14 = a3;
  v71.m128i_i64[0] = a11;
  v73 = a12;
  v87 = __readfsqword(0x28u);
  sub_4E9BC0((__int64)src, a1, a10, a4);
  v17 = *(void **)a2;
  v18 = *(__m128i **)src;
  v19 = _mm_loadu_si128((const __m128i *)&src[8]);
  memset(src, 0, sizeof(src));
  if ( v17 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v72 = v18;
    v74 = v19;
    qfree(v17);
    v19 = _mm_load_si128(&v74);
    v20 = *(void **)src;
    *(_QWORD *)a2 = v72;
    v72 = (__m128i *)(a2 + 8);
    v21 = v86;
    *(__m128i *)(a2 + 8) = v19;
    *(_BYTE *)(a2 + 24) = v21;
    if ( v20 )
    {
      *(_QWORD *)&src[8] = 0;
      qfree(v20);
      v21 = *(_BYTE *)(a2 + 24);
    }
  }
  else
  {
    *(_QWORD *)a2 = v18;
    v72 = (__m128i *)(a2 + 8);
    v21 = v86;
    *(__m128i *)(a2 + 8) = v19;
    *(_BYTE *)(a2 + 24) = v21;
  }
  if ( !v21 )
  {
    if ( !under_debugger )
      interr(2897);
LABEL_183:
    BUG();
  }
  if ( (unsigned __int8)(v21 - 1) <= 1u )
    return v87 - __readfsqword(0x28u);
  if ( (unsigned __int8)(v21 - 3) <= 6u )
  {
    *(_BYTE *)(a2 + 24) = 4;
    v29 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    v30 = *(_DWORD *)(a6 + 8);
    v31 = *(unsigned __int16 *)(a6 + 12);
    v32 = *(_BYTE *)(a6 + 49) == 5;
    *(_QWORD *)src = 0xFFFFFFFFLL;
    *(_DWORD *)&src[8] = v30;
    *(_WORD *)&src[12] = v31;
    if ( v32 )
      v29 = *(_BYTE *)(a6 + 73) == 0;
    v33 = *(_QWORD *)a2;
    v34 = *(_QWORD *)(a2 + 16);
    *(_WORD *)&src[14] = v29;
    if ( (unsigned __int64)src >= v33 && (unsigned __int64)src < v33 + 16 * v34 )
    {
      if ( !v34 )
      {
        v51 = qvector_reserve(a2, v33, 1, 16);
        v52 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v51;
        v33 = v51 + 16 * v52;
      }
      *(_DWORD *)(v33 + 8) = v30;
      *(_QWORD *)v33 = 0xFFFFFFFFLL;
      *(_DWORD *)(v33 + 12) = v31 | (v29 << 16);
    }
    else
    {
      if ( !v34 )
      {
        v44 = qvector_reserve(a2, v33, 1, 16);
        v45 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v44;
        v33 = v44 + 16 * v45;
      }
      *(__m128i *)v33 = _mm_load_si128((const __m128i *)src);
    }
    ++*(_QWORD *)(a2 + 8);
    return v87 - __readfsqword(0x28u);
  }
  v23 = (const char *)a1;
  sub_4E9BC0((__int64)src, a1, a10, a5);
  if ( !v86 )
  {
    if ( !under_debugger )
      interr(2898);
    goto LABEL_183;
  }
  if ( (unsigned __int8)(v86 - 1) <= 1u )
  {
    v24 = *(_QWORD *)&src[8];
    v25 = nullptr;
    if ( *(_QWORD *)&src[8] )
    {
      v25 = (void *)qalloc_or_throw(16LL * *(_QWORD *)&src[8], v23);
      memcpy(v25, *(const void **)src, 16 * v24);
    }
    v26 = *(void **)a2;
    v27 = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v71 = v27;
      qfree(v26);
      v27 = _mm_load_si128(&v71);
    }
    v28 = v72;
    *(_QWORD *)a2 = v25;
    *v28 = v27;
    *(_BYTE *)(a2 + 24) = v86;
LABEL_16:
    if ( *(_QWORD *)src )
    {
      *(_QWORD *)&src[8] = 0;
      qfree(*(void **)src);
    }
    return v87 - __readfsqword(0x28u);
  }
  if ( (unsigned __int8)(v86 - 3) <= 6u )
  {
    *(_BYTE *)(a2 + 24) = 4;
    v46 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    v47 = *(_DWORD *)(a6 + 8);
    v48 = *(unsigned __int16 *)(a6 + 12);
    v32 = *(_BYTE *)(a6 + 49) == 5;
    v75.m128i_i64[0] = 0xFFFFFFFFLL;
    v75.m128i_i32[2] = v47;
    v75.m128i_i16[6] = v48;
    if ( v32 )
      v46 = *(_BYTE *)(a6 + 73) == 0;
    v49 = *(__m128i **)a2;
    v75.m128i_i16[7] = v46;
    v50 = *(_QWORD *)(a2 + 16);
    if ( &v75 < v49 || &v75 >= &v49[v50] )
    {
      if ( !v50 )
      {
        v54 = qvector_reserve(a2, v49, 1, 16);
        v55 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v54;
        v49 = (__m128i *)(v54 + 16 * v55);
      }
      *v49 = _mm_load_si128(&v75);
    }
    else
    {
      if ( !v50 )
      {
        v70 = qvector_reserve(a2, v49, 1, 16);
        *(_QWORD *)a2 = v70;
        v49 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v70);
      }
      v49->m128i_i32[2] = v47;
      v49->m128i_i64[0] = 0xFFFFFFFFLL;
      v49->m128i_i32[3] = v48 | (v46 << 16);
    }
    ++*(_QWORD *)(a2 + 8);
    goto LABEL_16;
  }
  if ( v71.m128i_i64[0] )
    ((void (__fastcall *)(__int64, _BYTE *, __int64, __int64))v71.m128i_i64[0])(a2, src, a6, v73);
  switch ( v14 )
  {
    case 0LL:
      sub_4E2450(a2, (__int64)src, a6, 0.0, *(double *)v19.m128i_i64, a9);
      goto LABEL_43;
    case 1LL:
      v43 = *(_BYTE *)(a2 + 24);
      if ( (unsigned __int8)(v43 - 12) <= 1u )
      {
        if ( (unsigned __int8)(v86 - 10) > 3u )
          goto LABEL_86;
      }
      else if ( (unsigned __int8)(v43 - 10) > 1u || (unsigned __int8)(v86 - 10) > 1u )
      {
        goto LABEL_86;
      }
      if ( (unsigned __int8)sub_4E1D40((__int64 *)a2, (__int64 *)src, 1, a6, 0.0, *(double *)v19.m128i_i64, a9) )
      {
        if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 12) <= 1u )
        {
          v56 = 12;
          if ( (unsigned __int8)(v86 - 12) <= 1u )
            v56 = 10;
          *(_BYTE *)(a2 + 24) = v56;
        }
        goto LABEL_43;
      }
LABEL_86:
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_DWORD *)(a6 + 8);
      v37 = *(unsigned __int16 *)(a6 + 12);
      v32 = *(_BYTE *)(a6 + 49) == 5;
      v76.m128i_i64[0] = 0xFFFFFFFFLL;
      v76.m128i_i32[2] = v36;
      v76.m128i_i16[6] = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 73) == 0;
      v38 = *(__m128i **)a2;
      v76.m128i_i16[7] = v35;
      v41 = *(_QWORD *)(a2 + 16);
      if ( &v76 < v38 || &v76 >= &v38[v41] )
      {
        if ( !v41 )
        {
          v69 = qvector_reserve(a2, v38, 1, 16);
          *(_QWORD *)a2 = v69;
          v38 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v69);
        }
        *v38 = _mm_load_si128(&v76);
        goto LABEL_42;
      }
      goto LABEL_132;
    case 2LL:
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u
        && (unsigned __int8)(v86 - 10) <= 1u
        && (unsigned __int8)sub_4E1D40((__int64 *)a2, (__int64 *)src, 2, a6, 0.0, *(double *)v19.m128i_i64, a9) )
      {
        goto LABEL_43;
      }
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_DWORD *)(a6 + 8);
      v37 = *(unsigned __int16 *)(a6 + 12);
      v32 = *(_BYTE *)(a6 + 49) == 5;
      v77.m128i_i64[0] = 0xFFFFFFFFLL;
      v77.m128i_i32[2] = v36;
      v77.m128i_i16[6] = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 73) == 0;
      v38 = *(__m128i **)a2;
      v77.m128i_i16[7] = v35;
      v41 = *(_QWORD *)(a2 + 16);
      if ( &v77 >= v38 && &v77 < &v38[v41] )
        goto LABEL_132;
      if ( !v41 )
      {
        v68 = qvector_reserve(a2, v38, 1, 16);
        *(_QWORD *)a2 = v68;
        v38 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v68);
      }
      *v38 = _mm_load_si128(&v77);
      goto LABEL_42;
    case 3LL:
      v40 = *(_BYTE *)(a2 + 24);
      if ( (unsigned __int8)(v40 - 12) > 1u )
        goto LABEL_64;
      if ( (unsigned __int8)(v86 - 10) > 1u )
        goto LABEL_66;
      v59 = **(_QWORD **)src;
      if ( *(_QWORD *)&src[8] == 1 )
        goto LABEL_156;
      v60 = (_QWORD *)(*(_QWORD *)src + 16LL);
      if ( 16LL * *(_QWORD *)&src[8] == 16 )
        goto LABEL_156;
      while ( *v60 == v59 )
      {
        v60 += 2;
        if ( v60 == (_QWORD *)(16LL * *(_QWORD *)&src[8] + *(_QWORD *)src) )
        {
LABEL_156:
          if ( ((unsigned int)v59 & ((_DWORD)v59 + 1)) == 0 && (unsigned int)v59 <= 0x1F )
          {
            if ( (unsigned __int8)sub_4E1D40((__int64 *)a2, (__int64 *)src, 3, a6, 0.0, *(double *)v19.m128i_i64, a9) )
            {
              *(_BYTE *)(a2 + 24) = 10;
              goto LABEL_43;
            }
            v40 = *(_BYTE *)(a2 + 24);
LABEL_64:
            if ( (unsigned __int8)(v40 - 10) <= 1u
              && (unsigned __int8)(v86 - 10) <= 1u
              && (unsigned __int8)sub_4E1D40((__int64 *)a2, (__int64 *)src, 3, a6, 0.0, *(double *)v19.m128i_i64, a9) )
            {
              goto LABEL_43;
            }
          }
          break;
        }
      }
LABEL_66:
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_DWORD *)(a6 + 8);
      v37 = *(unsigned __int16 *)(a6 + 12);
      v32 = *(_BYTE *)(a6 + 49) == 5;
      v78.m128i_i64[0] = 0xFFFFFFFFLL;
      v78.m128i_i32[2] = v36;
      v78.m128i_i16[6] = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 73) == 0;
      v38 = *(__m128i **)a2;
      v78.m128i_i16[7] = v35;
      v41 = *(_QWORD *)(a2 + 16);
      if ( &v78 < v38 || &v78 >= &v38[v41] )
      {
        if ( !v41 )
        {
          v67 = qvector_reserve(a2, v38, 1, 16);
          *(_QWORD *)a2 = v67;
          v38 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v67);
        }
        *v38 = _mm_load_si128(&v78);
        goto LABEL_42;
      }
      goto LABEL_132;
    case 4LL:
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u
        && (unsigned __int8)(v86 - 10) <= 1u
        && (unsigned __int8)sub_4E1D40((__int64 *)a2, (__int64 *)src, 4, a6, 0.0, *(double *)v19.m128i_i64, a9) )
      {
        goto LABEL_43;
      }
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_DWORD *)(a6 + 8);
      v37 = *(unsigned __int16 *)(a6 + 12);
      v32 = *(_BYTE *)(a6 + 49) == 5;
      v79.m128i_i64[0] = 0xFFFFFFFFLL;
      v79.m128i_i32[2] = v36;
      v79.m128i_i16[6] = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 73) == 0;
      v38 = *(__m128i **)a2;
      v79.m128i_i16[7] = v35;
      v41 = *(_QWORD *)(a2 + 16);
      if ( &v79 >= v38 && &v79 < &v38[v41] )
        goto LABEL_132;
      if ( !v41 )
      {
        v66 = qvector_reserve(a2, v38, 1, 16);
        *(_QWORD *)a2 = v66;
        v38 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v66);
      }
      *v38 = _mm_load_si128(&v79);
      goto LABEL_42;
    case 5LL:
      v42 = *(_BYTE *)(a2 + 24);
      if ( (unsigned __int8)(v42 - 12) > 1u )
        goto LABEL_74;
      if ( (unsigned __int8)(v86 - 10) > 1u )
        goto LABEL_76;
      v57 = **(_QWORD **)src;
      if ( *(_QWORD *)&src[8] == 1 )
        goto LABEL_147;
      v58 = (_QWORD *)(*(_QWORD *)src + 16LL);
      if ( 16LL * *(_QWORD *)&src[8] == 16 )
        goto LABEL_147;
      break;
    case 6LL:
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u
        && (unsigned __int8)(v86 - 10) <= 1u
        && (unsigned __int8)sub_4E1D40((__int64 *)a2, (__int64 *)src, 6, a6, 0.0, *(double *)v19.m128i_i64, a9) )
      {
        goto LABEL_43;
      }
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_DWORD *)(a6 + 8);
      v37 = *(unsigned __int16 *)(a6 + 12);
      v32 = *(_BYTE *)(a6 + 49) == 5;
      v81.m128i_i64[0] = 0xFFFFFFFFLL;
      v81.m128i_i32[2] = v36;
      v81.m128i_i16[6] = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 73) == 0;
      v38 = *(__m128i **)a2;
      v81.m128i_i16[7] = v35;
      v39 = *(_QWORD *)(a2 + 16);
      if ( &v81 >= v38 && &v81 < &v38[v39] )
        goto LABEL_134;
      if ( !v39 )
      {
        v64 = qvector_reserve(a2, v38, 1, 16);
        *(_QWORD *)a2 = v64;
        v38 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v64);
      }
      *v38 = _mm_load_si128(&v81);
      goto LABEL_42;
    case 7LL:
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u
        && (unsigned __int8)(v86 - 10) <= 1u
        && (unsigned __int8)sub_4E1D40((__int64 *)a2, (__int64 *)src, 7, a6, 0.0, *(double *)v19.m128i_i64, a9) )
      {
        goto LABEL_43;
      }
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_DWORD *)(a6 + 8);
      v37 = *(unsigned __int16 *)(a6 + 12);
      v32 = *(_BYTE *)(a6 + 49) == 5;
      v82.m128i_i64[0] = 0xFFFFFFFFLL;
      v82.m128i_i32[2] = v36;
      v82.m128i_i16[6] = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 73) == 0;
      v38 = *(__m128i **)a2;
      v82.m128i_i16[7] = v35;
      v39 = *(_QWORD *)(a2 + 16);
      if ( &v82 >= v38 && &v82 < &v38[v39] )
        goto LABEL_134;
      if ( !v39 )
      {
        v62 = qvector_reserve(a2, v38, 1, 16);
        *(_QWORD *)a2 = v62;
        v38 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v62);
      }
      *v38 = _mm_load_si128(&v82);
      goto LABEL_42;
    case 8LL:
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u
        && (unsigned __int8)(v86 - 10) <= 1u
        && (unsigned __int8)sub_4E1D40((__int64 *)a2, (__int64 *)src, 8, a6, 0.0, *(double *)v19.m128i_i64, a9) )
      {
        goto LABEL_43;
      }
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_DWORD *)(a6 + 8);
      v37 = *(unsigned __int16 *)(a6 + 12);
      v32 = *(_BYTE *)(a6 + 49) == 5;
      v83.m128i_i64[0] = 0xFFFFFFFFLL;
      v83.m128i_i32[2] = v36;
      v83.m128i_i16[6] = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 73) == 0;
      v38 = *(__m128i **)a2;
      v83.m128i_i16[7] = v35;
      v39 = *(_QWORD *)(a2 + 16);
      if ( &v83 >= v38 && &v83 < &v38[v39] )
        goto LABEL_134;
      if ( !v39 )
      {
        v61 = qvector_reserve(a2, v38, 1, 16);
        *(_QWORD *)a2 = v61;
        v38 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v61);
      }
      *v38 = _mm_load_si128(&v83);
      goto LABEL_42;
    case 9LL:
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 1u
        && (unsigned __int8)(v86 - 10) <= 1u
        && (unsigned __int8)sub_4E1D40((__int64 *)a2, (__int64 *)src, 9, a6, 0.0, *(double *)v19.m128i_i64, a9) )
      {
        goto LABEL_43;
      }
      *(_BYTE *)(a2 + 24) = 4;
      v35 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v36 = *(_DWORD *)(a6 + 8);
      v37 = *(unsigned __int16 *)(a6 + 12);
      v32 = *(_BYTE *)(a6 + 49) == 5;
      v84.m128i_i64[0] = 0xFFFFFFFFLL;
      v84.m128i_i32[2] = v36;
      v84.m128i_i16[6] = v37;
      if ( v32 )
        v35 = *(_BYTE *)(a6 + 73) == 0;
      v38 = *(__m128i **)a2;
      v84.m128i_i16[7] = v35;
      v39 = *(_QWORD *)(a2 + 16);
      if ( &v84 < v38 || &v84 >= &v38[v39] )
      {
        if ( !v39 )
        {
          v63 = qvector_reserve(a2, v38, 1, 16);
          *(_QWORD *)a2 = v63;
          v38 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v63);
        }
        *v38 = _mm_load_si128(&v84);
        goto LABEL_42;
      }
LABEL_134:
      if ( v39 )
        goto LABEL_133;
      goto LABEL_135;
    default:
      if ( !under_debugger )
        interr(2870);
      goto LABEL_183;
  }
  while ( *v58 == v57 )
  {
    v58 += 2;
    if ( (_QWORD *)(16LL * *(_QWORD *)&src[8] + *(_QWORD *)src) == v58 )
    {
LABEL_147:
      if ( ((unsigned int)v57 & ((_DWORD)v57 + 1)) == 0 && (unsigned int)v57 <= 0x1F )
      {
        if ( (unsigned __int8)sub_4E1D40((__int64 *)a2, (__int64 *)src, 5, a6, 0.0, *(double *)v19.m128i_i64, a9) )
          goto LABEL_43;
        v42 = *(_BYTE *)(a2 + 24);
LABEL_74:
        if ( (unsigned __int8)(v42 - 10) <= 1u
          && (unsigned __int8)(v86 - 10) <= 1u
          && (unsigned __int8)sub_4E1D40((__int64 *)a2, (__int64 *)src, 5, a6, 0.0, *(double *)v19.m128i_i64, a9) )
        {
          goto LABEL_43;
        }
      }
      break;
    }
  }
LABEL_76:
  *(_BYTE *)(a2 + 24) = 4;
  v35 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  v36 = *(_DWORD *)(a6 + 8);
  v37 = *(unsigned __int16 *)(a6 + 12);
  v32 = *(_BYTE *)(a6 + 49) == 5;
  v80.m128i_i64[0] = 0xFFFFFFFFLL;
  v80.m128i_i32[2] = v36;
  v80.m128i_i16[6] = v37;
  if ( v32 )
    v35 = *(_BYTE *)(a6 + 73) == 0;
  v38 = *(__m128i **)a2;
  v80.m128i_i16[7] = v35;
  v41 = *(_QWORD *)(a2 + 16);
  if ( &v80 >= v38 && &v80 < &v38[v41] )
  {
LABEL_132:
    if ( !v41 )
    {
LABEL_135:
      v53 = qvector_reserve(a2, v38, 1, 16);
      *(_QWORD *)a2 = v53;
      v38 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v53);
    }
LABEL_133:
    v38->m128i_i32[2] = v36;
    v38->m128i_i64[0] = 0xFFFFFFFFLL;
    v38->m128i_i32[3] = v37 | (v35 << 16);
  }
  else
  {
    if ( !v41 )
    {
      v65 = qvector_reserve(a2, v38, 1, 16);
      *(_QWORD *)a2 = v65;
      v38 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v65);
    }
    *v38 = _mm_load_si128(&v80);
  }
LABEL_42:
  ++*(_QWORD *)(a2 + 8);
LABEL_43:
  if ( *(_QWORD *)src )
  {
    *(_QWORD *)&src[8] = 0;
    qfree(*(void **)src);
  }
  return v87 - __readfsqword(0x28u);
}

