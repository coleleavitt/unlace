__int64 __fastcall sub_4B6A40(__int64 a1, __int64 *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 *v10; // rbp
  volatile signed __int32 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 i; // rbx
  __int64 *v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rax
  __m128i si128; // xmm1
  __int64 v25; // rdx
  __int64 v26; // r13
  unsigned __int64 v27; // r14
  __int64 *v28; // r14
  __int64 v29; // rbp
  __int64 v30; // r12
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rbp
  __int64 v35; // r12
  __int64 v36; // rax
  unsigned __int64 v37; // rbp
  size_t v38; // r11
  __int64 v39; // r12
  __int64 v40; // r14
  __int64 v41; // rbp
  __int64 *v42; // rax
  unsigned __int64 v43; // rbp
  __int64 v44; // r14
  __int64 v45; // r13
  __int64 v46; // r12
  _DWORD *v47; // r13
  __int64 v48; // rsi
  __int64 v49; // r12
  __int64 *v50; // rax
  __m128i v51; // xmm2
  void *v52; // rdi
  __int64 v53; // r14
  __int64 v54; // rax
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rbx
  __int64 v59; // r12
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // rbp
  unsigned __int64 v62; // rbp
  __int64 v63; // rax
  __int64 v64; // rbx
  unsigned __int64 v65; // rbx
  unsigned __int64 v66; // rbp
  __int64 v67; // r12
  const char *v68; // rdi
  __int64 v69; // rdx
  const void *v70; // r12
  void *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  const void *v75; // r12
  void *v76; // rax
  __int64 v77; // [rsp+0h] [rbp-A0h]
  int v78; // [rsp+0h] [rbp-A0h]
  __int64 v79; // [rsp+0h] [rbp-A0h]
  __int64 *v80; // [rsp+0h] [rbp-A0h]
  __int64 v81; // [rsp+0h] [rbp-A0h]
  unsigned __int8 v82; // [rsp+8h] [rbp-98h]
  __int64 v83; // [rsp+8h] [rbp-98h]
  __int64 *v84; // [rsp+10h] [rbp-90h]
  __int64 v85; // [rsp+10h] [rbp-90h]
  __int64 v86; // [rsp+10h] [rbp-90h]
  __int64 v88; // [rsp+28h] [rbp-78h] BYREF
  __m128i v89; // [rsp+30h] [rbp-70h]
  void *ptr[2]; // [rsp+48h] [rbp-58h] BYREF
  __int64 v91; // [rsp+58h] [rbp-48h]
  unsigned __int64 v92; // [rsp+60h] [rbp-40h]

  v2.m128i_i64[0] = 0;
  v3 = 0;
  v4 = a2[1];
  v92 = __readfsqword(0x28u);
  v5 = 0;
  v89 = 0;
  v88 = 0;
  if ( !v4 )
    goto LABEL_2;
  v88 = qvector_reserve(&v88, 0, v4, 120);
  v6 = v88;
  v83 = *a2 + 40 * a2[1];
  if ( v83 == *a2 )
  {
LABEL_93:
    v5 = v89.m128i_i64[1];
    v4 = v89.m128i_i64[0];
    v3 = v6;
LABEL_2:
    v6 = *(_QWORD *)a1;
    v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = v4;
    v88 = v6;
    *(_QWORD *)(a1 + 16) = v5;
    v7 = 1;
    v89 = v2;
    goto LABEL_3;
  }
  v22 = *a2;
  while ( *(_DWORD *)(v22 + 24) == 3 )
  {
    v23 = v89.m128i_i64[0];
    if ( v89.m128i_i64[1] < (unsigned __int64)(v89.m128i_i64[0] + 1) )
    {
      v88 = qvector_reserve(&v88, v6, v89.m128i_i64[0] + 1, 120);
      v6 = v88;
      v23 = v89.m128i_i64[0];
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
    v2.m128i_i64[0] = 0;
    v25 = 15 * v23;
    v26 = v6 + 120 * v23;
    *(_QWORD *)v26 = 0;
    *(_OWORD *)(v26 + 8) = 0;
    *(_QWORD *)(v26 + 24) = 0;
    ++v89.m128i_i64[0];
    *(_QWORD *)(v26 + 48) = 0;
    *(_QWORD *)(v26 + 104) = 0;
    *(_DWORD *)(v26 + 112) = 0;
    *(_OWORD *)(v26 + 32) = 0;
    *(_OWORD *)(v26 + 56) = 0;
    *(__m128i *)(v26 + 72) = si128;
    *(_OWORD *)(v26 + 88) = 0;
    if ( v26 != v22 )
    {
      v27 = *(_QWORD *)(v22 + 8);
      if ( v27 > 1 )
      {
        v70 = *(const void **)v22;
        v71 = (void *)qvector_reserve(v26, *(_QWORD *)v26, *(_QWORD *)(v22 + 8), 1);
        *(_QWORD *)v26 = v71;
        v6 = (__int64)v70;
        *(_QWORD *)(v26 + 8) = v27;
        memmove(v71, v70, v27 - 1);
        *(_BYTE *)(*(_QWORD *)v26 + v27 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v26 + 8) = 0;
      }
    }
    if ( *(_DWORD *)(v22 + 24) != 3 )
    {
      if ( under_debugger )
        BUG();
      v68 = (_BYTE *)(elf_gnu_hash_bucket + 423);
      interr(1279, v6, v25, v21, 0.0);
LABEL_120:
      sub_4B5640(*(double *)v2.m128i_i64, (__int64)v68, v6, v69, v21);
LABEL_121:
      sub_4B5640(*(double *)v2.m128i_i64, (__int64)v68, v6, v72, v21);
    }
    v28 = *(__int64 **)(v22 + 32);
    v29 = v28[1];
    if ( !v29 )
      goto LABEL_95;
    v30 = *v28;
    v31 = 0;
    while ( !*(_QWORD *)(v30 + 8) || strcmp(*(const char **)v30, "options") )
    {
      ++v31;
      v30 += 40;
      if ( v29 == v31 )
        goto LABEL_95;
    }
    if ( *(_DWORD *)(v30 + 24) != 1 )
    {
LABEL_95:
      v6 = v88;
      v7 = 0;
      goto LABEL_3;
    }
    v32 = *(_QWORD *)(v30 + 32);
    *(_DWORD *)(v26 + 112) = v32;
    v33 = v28[1];
    LOBYTE(v78) = v32;
    if ( v33 )
    {
      v34 = *v28;
      v35 = 0;
      while ( !*(_QWORD *)(v34 + 8) || strcmp(*(const char **)v34, "anchor") )
      {
        ++v35;
        v34 += 40;
        if ( v33 == v35 )
          goto LABEL_49;
      }
      if ( *(_DWORD *)(v34 + 24) == 2 )
      {
        v36 = *(_QWORD *)(v34 + 32);
        if ( v36 != v26 + 24 )
        {
          v37 = *(_QWORD *)(v36 + 8);
          if ( v37 && (v38 = v37 - 1, v37 != 1) )
          {
            v75 = *(const void **)v36;
            v76 = *(void **)(v26 + 24);
            if ( *(_QWORD *)(v26 + 40) < v37 )
            {
              v76 = (void *)qvector_reserve(v26 + 24, *(_QWORD *)(v26 + 24), v37, 1);
              *(_QWORD *)(v26 + 24) = v76;
              v38 = v37 - 1;
            }
            *(_QWORD *)(v26 + 32) = v37;
            memmove(v76, v75, v38);
            *(_BYTE *)(*(_QWORD *)(v26 + 24) + v37 - 1) = 0;
            v78 = *(_DWORD *)(v26 + 112);
          }
          else
          {
            *(_QWORD *)(v26 + 32) = 0;
          }
        }
      }
LABEL_49:
      if ( (v78 & 0x80u) == 0 )
        goto LABEL_92;
      v39 = v28[1];
      if ( !v39 )
        goto LABEL_95;
      v40 = *v28;
      v41 = 0;
      while ( !*(_QWORD *)(v40 + 8) || strcmp(*(const char **)v40, "floating") )
      {
        ++v41;
        v40 += 40;
        if ( v39 == v41 )
          goto LABEL_95;
      }
      if ( *(_DWORD *)(v40 + 24) != 3 )
        goto LABEL_95;
      v42 = *(__int64 **)(v40 + 32);
      v43 = v42[1];
      if ( !v43 )
        goto LABEL_95;
      v44 = *v42;
      v79 = v26;
      v45 = 0;
      v84 = v42;
      v46 = *v42;
      while ( !*(_QWORD *)(v46 + 8) || strcmp(*(const char **)v46, "window_geom") )
      {
        ++v45;
        v46 += 40;
        if ( v43 == v45 )
        {
          v47 = (_DWORD *)v79;
          v21 = v44;
          v49 = 0;
          goto LABEL_72;
        }
      }
      v21 = v44;
      v47 = (_DWORD *)v79;
      if ( *(_DWORD *)(v46 + 24) != 3 )
      {
        v49 = 0;
        goto LABEL_72;
      }
      v48 = *(_QWORD *)(v46 + 32);
      v49 = v46 + 24;
      sub_51AE60(ptr, v48, 0, v44);
      v2 = _mm_load_si128((const __m128i *)ptr);
      v50 = v84;
      v21 = v91;
      if ( v2.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)v2.m128i_i64[0], 1u);
      v51 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
      v52 = *(void **)(v79 + 88);
      *(_QWORD *)(v79 + 104) = v21;
      *(__m128i *)(v79 + 88) = v2;
      *(__m128i *)(v79 + 72) = v51;
      if ( v52 && !_InterlockedSub((volatile signed __int32 *)v52, 1u) )
      {
        free(v52);
        v50 = v84;
      }
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      {
        v80 = v50;
        free(ptr[0]);
        v50 = v80;
      }
      v43 = v50[1];
      if ( v43 )
      {
        v21 = *v50;
LABEL_72:
        v53 = v21;
        v54 = v21;
        v55 = 0;
        while ( !*(_QWORD *)(v54 + 8) || **(_BYTE **)v54 != 120 || *(_BYTE *)(*(_QWORD *)v54 + 1LL) )
        {
          ++v55;
          v54 += 40;
          if ( v55 >= v43 )
            goto LABEL_94;
        }
        v56 = 0;
        v57 = v21;
        if ( *(_DWORD *)(v54 + 24) != 1 )
        {
LABEL_94:
          if ( !v49 )
            goto LABEL_95;
          goto LABEL_92;
        }
        while ( !*(_QWORD *)(v57 + 8) || **(_BYTE **)v57 != 121 || *(_BYTE *)(*(_QWORD *)v57 + 1LL) )
        {
          ++v56;
          v57 += 40;
          if ( v56 >= v43 )
          {
            v58 = 0;
            goto LABEL_83;
          }
        }
        v58 = 0;
        if ( *(_DWORD *)(v57 + 24) == 1 )
          v58 = v57 + 24;
LABEL_83:
        v85 = v54;
        v59 = v21;
        v81 = v58;
        v60 = v43;
        v61 = 0;
        while ( !*(_QWORD *)(v59 + 8) || strcmp(*(const char **)v59, "width") )
        {
          ++v61;
          v59 += 40;
          if ( v61 >= v60 )
          {
            v62 = v60;
            v63 = v85;
            v64 = v81;
            v6 = 0;
            goto LABEL_88;
          }
        }
        v6 = 0;
        v62 = v60;
        v63 = v85;
        v64 = v81;
        if ( *(_DWORD *)(v59 + 24) == 1 )
          v6 = v59 + 24;
LABEL_88:
        v86 = v64;
        v65 = v62;
        v66 = 0;
        v67 = v63;
        while ( 1 )
        {
          if ( *(_QWORD *)(v53 + 8) )
          {
            v68 = *(const char **)v53;
            if ( !strcmp(*(const char **)v53, "height") )
              break;
          }
          ++v66;
          v53 += 40;
          if ( v66 >= v65 )
            goto LABEL_92;
        }
        if ( *(_DWORD *)(v53 + 24) != 1 || !v6 || !v86 )
          goto LABEL_92;
        if ( *(_DWORD *)v86 != 1 )
          goto LABEL_120;
        v72 = *(_QWORD *)(v86 + 8);
        v73 = *(_QWORD *)(v67 + 32);
        v47[19] = v72;
        v47[18] = v73;
        if ( *(_DWORD *)(v53 + 24) != 1 )
          goto LABEL_121;
        if ( *(_DWORD *)v6 != 1 )
          sub_4B5640(*(double *)v2.m128i_i64, (__int64)v68, v6, v72, v21);
        v74 = *(_QWORD *)(v6 + 8);
        v22 += 40;
        v47[21] = *(_QWORD *)(v53 + 32);
        v6 = v88;
        v47[20] = v74;
        if ( v83 == v22 )
          goto LABEL_93;
      }
      else
      {
LABEL_92:
        v6 = v88;
        v22 += 40;
        if ( v83 == v22 )
          goto LABEL_93;
      }
    }
    else
    {
      if ( (v32 & 0x80) != 0 )
        goto LABEL_95;
      v6 = v88;
      v22 += 40;
      if ( v83 == v22 )
        goto LABEL_93;
    }
  }
  v7 = 0;
LABEL_3:
  if ( v6 )
  {
    if ( v89.m128i_i64[0] )
    {
      v77 = v89.m128i_i64[0];
      v8 = 0;
      v9 = 0;
      v82 = v7;
      do
      {
        v10 = (__int64 *)(v6 + v8);
        v11 = *(volatile signed __int32 **)(v6 + v8 + 88);
        if ( v11 && !_InterlockedSub(v11, 1u) )
          free((void *)v10[11]);
        v12 = v10[6];
        if ( v12 )
        {
          v13 = v10[7];
          if ( v13 )
          {
            for ( i = 0; i != v13; ++i )
            {
              v15 = (__int64 *)(v12 + 40 * i);
              jvalue_t_clear(v15 + 3);
              v16 = *v15;
              if ( *v15 )
              {
                v15[1] = 0;
                qfree(v16, (const char *)v6);
              }
              v12 = v10[6];
            }
          }
          v10[7] = 0;
          *(double *)v2.m128i_i64 = qfree(v12, (const char *)v6);
        }
        v17 = v10[3];
        if ( v17 )
        {
          v10[4] = 0;
          *(double *)v2.m128i_i64 = qfree(v17, (const char *)v6, *(double *)v2.m128i_i64);
        }
        v18 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          *(double *)v2.m128i_i64 = qfree(v18, (const char *)v6, *(double *)v2.m128i_i64);
        }
        v6 = v88;
        ++v9;
        v8 += 120;
      }
      while ( v77 != v9 );
      v7 = v82;
    }
    v89.m128i_i64[0] = 0;
    qfree(v6, (const char *)v6);
  }
  return v7;
}
