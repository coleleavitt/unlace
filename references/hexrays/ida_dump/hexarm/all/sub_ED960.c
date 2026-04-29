__int64 __fastcall sub_ED960(__int64 a1, __int64 a2, __int64 a3, __m128i *a4, unsigned __int8 a5)
{
  __int64 v7; // rax
  __int64 v8; // r14
  int v10; // eax
  unsigned int v11; // edx
  __int8 v12; // dl
  unsigned int v13; // eax
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rax
  void *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // r8
  int v27; // eax
  size_t v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rbx
  unsigned __int64 v38; // r12
  const void *v39; // r15
  void *v40; // rax
  int v41; // eax
  _QWORD *v44; // [rsp+38h] [rbp-120h]
  int v46; // [rsp+48h] [rbp-110h]
  unsigned __int8 v47; // [rsp+4Dh] [rbp-10Bh]
  char v48; // [rsp+4Eh] [rbp-10Ah]
  unsigned __int8 v49; // [rsp+4Fh] [rbp-109h]
  __int64 v50; // [rsp+50h] [rbp-108h] BYREF
  __int128 v51; // [rsp+58h] [rbp-100h]
  _QWORD v52[2]; // [rsp+70h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+80h] [rbp-D8h] BYREF
  void *src; // [rsp+90h] [rbp-C8h]
  size_t n[2]; // [rsp+98h] [rbp-C0h]
  _QWORD v56[2]; // [rsp+A8h] [rbp-B0h] BYREF
  int v57; // [rsp+B8h] [rbp-A0h]
  _BYTE v58[16]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-88h]
  __int64 v60; // [rsp+D8h] [rbp-80h] BYREF
  void *v61; // [rsp+E0h] [rbp-78h]
  __m128i v62; // [rsp+E8h] [rbp-70h] BYREF
  _DWORD v63[4]; // [rsp+F8h] [rbp-60h] BYREF
  int v64; // [rsp+108h] [rbp-50h]
  unsigned __int64 v65; // [rsp+118h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v7 = sub_11FDC0(a3, 0);
  if ( !v7 )
  {
    if ( !under_debugger )
      sub_3835A0(52005);
LABEL_71:
    BUG();
  }
  *(_QWORD *)a1 = a2;
  v8 = *(_QWORD *)(v7 + 72);
  v46 = *(_DWORD *)(v8 + 280) & 0x100;
  if ( v46 )
    return 0;
  v10 = *(_QWORD *)(v8 + 32);
  if ( *(_DWORD *)(a1 + 348) <= v10 )
  {
    v10 = *(_DWORD *)(a1 + 348);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 20) & 0xFFFFFFF0;
    if ( v11 != 64 && v11 != 208 )
      sub_E3460();
  }
  *(_DWORD *)(a1 + 348) = v10;
  v47 = sub_EAC80((_QWORD *)a1, a4, a3, a5, (_QWORD *)(*(_QWORD *)(v8 + 24) + 80LL * (v10 - 1)));
  if ( !v47 )
    return 0;
  v12 = a4[5].m128i_i8[8];
  v13 = v12 & 0xF0;
  if ( (v12 & 0xF0) == 0xC0 )
    v13 = a4[1].m128i_u32[3];
  if ( v13 <= 0x10 )
    v13 = getinf(99);
  if ( v13 - 208 > 0x2F && !(unsigned __int8)calc_arglocs(a4) )
    return 0;
  v14 = *(_QWORD *)(v8 + 32);
  v15 = v14 - 1;
  if ( (int)v14 - 1 < 0 )
  {
    v17 = (int)v14;
  }
  else
  {
    v16 = *(_QWORD *)(v8 + 24) + 80LL * v15;
    while ( 1 )
    {
      if ( *(_DWORD *)(v16 + 56) != 1 )
      {
        v17 = (int)(v15 + 1);
        goto LABEL_20;
      }
      if ( *(_QWORD *)(v16 + 64) < a4[3].m128i_i64[1] )
        break;
      --v15;
      v16 -= 80;
      if ( v15 == -1 )
      {
        v17 = 0;
        goto LABEL_62;
      }
    }
    v17 = (int)(v15 + 1);
  }
LABEL_20:
  v49 = 0;
  if ( v17 < v14 )
  {
LABEL_62:
    sub_81E80((_QWORD *)(v8 + 24), v17);
    v14 = *(_QWORD *)(v8 + 32);
    v49 = v47;
  }
  v18 = *(int *)(a1 + 348);
  v19 = *(_DWORD *)(a1 + 348);
  if ( v14 < v18 )
  {
    if ( !under_debugger )
      sub_3835A0(52680);
    goto LABEL_71;
  }
  v50 = 0;
  v51 = 0;
  if ( v18 >= a4->m128i_i64[1] )
  {
    v34 = 0;
  }
  else
  {
    v48 = 0;
    v44 = (_QWORD *)(v8 + 24);
    do
    {
      v26 = a4->m128i_i64[0] + 80 * v18;
      v52[1] = 0;
      v52[0] = 0xFFFFFFFF00000000LL;
      src = nullptr;
      v56[0] = 0;
      v56[1] = 0;
      v57 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
      *(_OWORD *)n = 0;
      v27 = sub_E75B0(a1, (__int64)v52, v19, v44, v26, a3);
      if ( v27 == -1 )
      {
        cleanup_argloc(v56);
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        clear_tinfo_t(&si128.m128i_u64[1]);
        sub_11C7E0(v52);
        v47 = v49;
        goto LABEL_40;
      }
      v48 |= v27 & 1;
      sub_123480(v58, v52);
      v60 = 0;
      v59 = si128.m128i_i64[0];
      copy_tinfo_t(&v60, &si128.m128i_u64[1]);
      v28 = n[0];
      v61 = nullptr;
      v62 = 0;
      if ( n[0] )
      {
        v61 = (void *)qalloc_or_throw(n[0]);
        v62.m128i_i64[1] = v28;
        memcpy(v61, src, v28);
        v62.m128i_i64[0] = v28;
      }
      v63[0] = 0;
      copy_argloc(v63, v56);
      v20 = v51;
      v21 = v50;
      v64 = v57;
      if ( *((_QWORD *)&v51 + 1) < (unsigned __int64)(v51 + 1) )
      {
        v50 = qvector_reserve(&v50, v50, v51 + 1, 80);
        v20 = v51;
        v21 = v50;
      }
      v22 = v21 + 80 * v20;
      sub_123480(v22, v58);
      v23 = v59;
      *(_QWORD *)(v22 + 24) = 0;
      *(_QWORD *)(v22 + 16) = v23;
      copy_tinfo_t(v22 + 24, &v60);
      *(_DWORD *)(v22 + 56) = 0;
      v24 = v61;
      v25 = _mm_loadu_si128(&v62);
      v61 = nullptr;
      *(_QWORD *)(v22 + 32) = v24;
      *(__m128i *)(v22 + 40) = v25;
      v62 = 0;
      copy_argloc(v22 + 56, v63);
      *(_QWORD *)&v51 = v51 + 1;
      *(_DWORD *)(v22 + 72) = v64;
      cleanup_argloc(v63);
      if ( v61 )
      {
        v62.m128i_i64[0] = 0;
        qfree(v61);
      }
      clear_tinfo_t(&v60);
      sub_11C7E0(v58);
      cleanup_argloc(v56);
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      ++v19;
      clear_tinfo_t(&si128.m128i_u64[1]);
      sub_11C7E0(v52);
      v18 = v19;
    }
    while ( (unsigned __int64)v19 < a4->m128i_i64[1] );
    v34 = v51;
    v19 = *(_DWORD *)(a1 + 348);
    if ( v48 )
      goto LABEL_51;
    v14 = *(_QWORD *)(v8 + 32);
    v18 = v19 + (int)v51;
  }
  if ( v18 < v14 )
  {
    v44 = (_QWORD *)(v8 + 24);
LABEL_51:
    sub_81E80(v44, v34 + v19);
    if ( (_QWORD)v51 )
    {
      v35 = 0;
      do
      {
        v36 = v50 + 80 * v35;
        v37 = *(_QWORD *)(v8 + 24) + 80LL * (*(_DWORD *)(a1 + 348) + v46);
        sub_124BC0(v37);
        *(_QWORD *)(v37 + 16) = *(_QWORD *)(v36 + 16);
        copy_tinfo_t(v37 + 24, v36 + 24);
        if ( v37 + 32 != v36 + 32 )
        {
          v38 = *(_QWORD *)(v36 + 40);
          if ( v38 < 2 )
          {
            *(_QWORD *)(v37 + 40) = 0;
          }
          else
          {
            v39 = *(const void **)(v36 + 32);
            v40 = *(void **)(v37 + 32);
            if ( *(_QWORD *)(v37 + 48) < v38 )
            {
              v40 = (void *)qvector_reserve(v37 + 32, *(_QWORD *)(v37 + 32), *(_QWORD *)(v36 + 40), 1);
              *(_QWORD *)(v37 + 32) = v40;
            }
            *(_QWORD *)(v37 + 40) = v38;
            memmove(v40, v39, v38 - 1);
            *(_BYTE *)(*(_QWORD *)(v37 + 32) + v38 - 1) = 0;
          }
        }
        copy_argloc(v37 + 56, v36 + 56);
        ++v46;
        *(_DWORD *)(v37 + 72) = *(_DWORD *)(v36 + 72);
        v35 = v46;
      }
      while ( v46 < (unsigned __int64)v51 );
    }
  }
  *(_DWORD *)(v8 + 280) |= 0x100u;
  v41 = *(_DWORD *)(a2 + 24);
  BYTE1(v41) &= ~2u;
  LOBYTE(v41) = v41 | 0x80;
  *(_DWORD *)(a2 + 24) = v41;
LABEL_40:
  v29 = v50;
  if ( v50 )
  {
    v30 = v51;
    if ( (_QWORD)v51 )
    {
      v31 = 0;
      do
      {
        v32 = v29 + 80 * v31;
        cleanup_argloc(v32 + 56);
        v33 = *(_QWORD *)(v32 + 32);
        if ( v33 )
        {
          *(_QWORD *)(v32 + 40) = 0;
          qfree(v33);
        }
        ++v31;
        clear_tinfo_t(v32 + 24);
        sub_11C7E0(v32);
        v29 = v50;
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v51 = 0;
    qfree(v29);
  }
  return v47;
}
