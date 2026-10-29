__int64 __fastcall sub_220140(__m128i *a1, __int64 a2, signed int a3, unsigned __int64 a4, int a5)
{
  __int64 v6; // rbx
  const char *v8; // rsi
  __int64 v9; // rax
  const char *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  int *v14; // r14
  int *v15; // rbp
  const void *v16; // rsi
  __int64 v17; // r13
  size_t v18; // r15
  __int64 v19; // r8
  __m128i v20; // xmm0
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rdi
  void (__fastcall *v24)(__m128i *, int *); // rax
  size_t v26; // r15
  void *v27; // rax
  __int64 v28; // rdi
  void *v29; // rax
  void *v30; // rax
  double v31; // xmm0_8
  const char *v32; // rsi
  int v33; // r15d
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  char *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // r8
  const char *v40; // rax
  const char *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r11
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r11
  const char *v48; // r14
  __int64 v49; // rax
  const void *v50; // r13
  __int64 v51; // rdi
  __int64 v52; // rbp
  __int64 i; // r14
  __int64 v54; // rax
  void *v55; // rbp
  __int64 v56; // rax
  const char *v57; // rsi
  __m128i *v58; // rax
  __int64 v59; // rax
  __m128i v61; // [rsp+10h] [rbp-88h] BYREF
  __m128i v62; // [rsp+20h] [rbp-78h] BYREF
  int *v63; // [rsp+30h] [rbp-68h]
  __int64 v64; // [rsp+38h] [rbp-60h]
  __int64 v65; // [rsp+40h] [rbp-58h] BYREF
  __int128 v66; // [rsp+48h] [rbp-50h]
  unsigned __int64 v67; // [rsp+58h] [rbp-40h]

  v6 = a2;
  v67 = __readfsqword(0x28u);
  v63 = sub_21EBB0(a1, 1u, a3, a4);
  if ( !v63 )
    return 0;
  if ( !a2 )
    goto LABEL_31;
  v8 = &a1[11].m128i_i8[8];
  v9 = a1[12].m128i_i64[0];
  if ( !v9 )
    return 0;
  v10 = &a1[11].m128i_i8[8];
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 16);
      v12 = *(_QWORD *)(v9 + 24);
      if ( *(_DWORD *)(v9 + 32) >= a3 )
        break;
      v9 = *(_QWORD *)(v9 + 24);
      if ( !v12 )
        goto LABEL_8;
    }
    v10 = (const char *)v9;
    v9 = *(_QWORD *)(v9 + 16);
  }
  while ( v11 );
LABEL_8:
  if ( v8 == v10 || *((_DWORD *)v10 + 8) > a3 )
    return 0;
  if ( a5 == 2 )
  {
    v51 = *((_QWORD *)v10 + 5);
    if ( v51 )
    {
      v52 = *((_QWORD *)v10 + 6);
      if ( v52 )
      {
        for ( i = 0; i != v52; ++i )
        {
          v54 = v51 + 32 * i;
          if ( *(int *)v54 >= -1 )
          {
            v11 = *(_QWORD *)(v54 + 8);
            if ( v11 )
            {
              *(_QWORD *)(v54 + 16) = 0;
              qfree(v11, v8);
              v51 = *((_QWORD *)v10 + 5);
            }
          }
        }
      }
      *((_QWORD *)v10 + 6) = 0;
      qfree(v51, v8, v11);
      *((_QWORD *)v10 + 5) = 0;
      *((_QWORD *)v10 + 7) = 0;
    }
  }
  if ( *((_QWORD *)v10 + 6) )
  {
    v13 = operator new(0x60u);
    sub_216A30(v13, *((__int64 **)v10 + 5), v6, a5 == 0);
  }
  else
  {
    v13 = operator new(0x60u);
    sub_216730(v13, v6);
  }
  *((_QWORD *)v63 + 3) = v13;
  if ( !v13 )
    return 0;
  v14 = nullptr;
  v15 = (int *)*(int *)(dbg + 64);
  v16 = v15;
  sub_216180((int **)v10 + 5, v15);
  v17 = *((_QWORD *)v10 + 5);
  if ( v15 )
  {
    do
    {
      if ( v6 != v17 )
      {
        v22 = *(_DWORD *)v17;
        if ( *(int *)v6 >= -1 )
        {
          if ( v22 < -1 )
          {
            *(_QWORD *)(v17 + 8) = 0;
            *(_OWORD *)(v17 + 16) = 0;
            v26 = *(_QWORD *)(v6 + 16);
            if ( v26 )
            {
              v27 = (void *)qalloc_or_throw(*(_QWORD *)(v6 + 16));
              *(_QWORD *)(v17 + 24) = v26;
              *(_QWORD *)(v17 + 8) = v27;
              v16 = *(const void **)(v6 + 8);
              memcpy(v27, v16, v26);
              *(_QWORD *)(v17 + 16) = v26;
            }
          }
          else
          {
            v18 = *(_QWORD *)(v6 + 16);
            v19 = 0;
            v20 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
            if ( v18 )
            {
              v28 = *(_QWORD *)(v6 + 16);
              v61 = v20;
              v29 = (void *)qalloc_or_throw(v28);
              v16 = *(const void **)(v6 + 8);
              v30 = memcpy(v29, v16, v18);
              v20 = _mm_load_si128(&v61);
              v19 = (__int64)v30;
            }
            v21 = *(_QWORD *)(v17 + 8);
            if ( v21 )
            {
              *(_QWORD *)(v17 + 16) = 0;
              v61.m128i_i64[0] = v19;
              v62 = v20;
              qfree(v21, (const char *)v16);
              v20 = _mm_load_si128(&v62);
              v19 = v61.m128i_i64[0];
            }
            *(_QWORD *)(v17 + 8) = v19;
            *(__m128i *)(v17 + 16) = v20;
          }
        }
        else
        {
          if ( v22 >= -1 )
          {
            v23 = *(_QWORD *)(v17 + 8);
            if ( v23 )
            {
              *(_QWORD *)(v17 + 16) = 0;
              qfree(v23, (const char *)v16);
            }
          }
          *(_QWORD *)(v17 + 8) = *(_QWORD *)(v6 + 8);
        }
        *(_DWORD *)v17 = *(_DWORD *)v6;
      }
      v14 = (int *)((char *)v14 + 1);
      v6 += 32;
      v17 += 32;
    }
    while ( v15 != v14 );
  }
  if ( qword_8CB650 )
  {
    v31 = 0.0;
    v32 = nullptr;
    v33 = 0;
    v66 = 0;
    v34 = *((_QWORD *)v63 + 3);
    v62.m128i_i64[0] = (__int64)&v65;
    v65 = 0;
    v61.m128i_i64[0] = v34;
    v64 = v34 + 72;
    v35 = 0;
    if ( *((_QWORD *)v10 + 6) )
    {
      while ( 1 )
      {
        v36 = *(_QWORD *)(*((_QWORD *)v10 + 5) + 32 * v35 + 8);
        if ( v36 == -1 )
          goto LABEL_48;
        v37 = (char *)&v32[8 * v66];
        v38 = (8 * (__int64)v66) >> 5;
        v39 = (8 * (__int64)v66) >> 3;
        if ( v38 > 0 )
        {
          v40 = v32;
          v41 = &v32[32 * v38];
          while ( v36 != *(_QWORD *)v40 )
          {
            if ( v36 == *((_QWORD *)v40 + 1) )
            {
              v40 += 8;
              goto LABEL_47;
            }
            if ( v36 == *((_QWORD *)v40 + 2) )
            {
              v40 += 16;
              goto LABEL_47;
            }
            if ( v36 == *((_QWORD *)v40 + 3) )
            {
              v40 += 24;
              goto LABEL_47;
            }
            v40 += 32;
            if ( v40 == v41 )
            {
              v39 = (v37 - v40) >> 3;
              goto LABEL_52;
            }
          }
          goto LABEL_47;
        }
        v40 = v32;
LABEL_52:
        if ( v39 == 2 )
          goto LABEL_71;
        if ( v39 != 3 )
        {
          if ( v39 != 1 )
            goto LABEL_56;
LABEL_55:
          if ( v36 != *(_QWORD *)v40 )
          {
LABEL_56:
            if ( *((_QWORD *)&v66 + 1) < (unsigned __int64)(v66 + 1) )
            {
              v65 = qvector_reserve(v62.m128i_i64[0], v32, v66 + 1, 8);
              v37 = (char *)(v65 + 8 * v66);
            }
            *(_QWORD *)v37 = v36;
            *(_QWORD *)&v66 = v66 + 1;
            v42 = getseg(v36);
            if ( v42 )
            {
              v45 = *(_QWORD *)(v42 + 8);
              v46 = qword_8CB650;
              v47 = v45 - v36;
              if ( v47 <= qword_8CB650 )
                v46 = v47;
              v48 = (const char *)v46;
              if ( v46 > 0x400 )
              {
                if ( !under_debugger )
                  interr(40247, v32, v43, v44, v31);
                BUG();
              }
              v49 = qalloc(v46);
              v50 = (const void *)v49;
              if ( v49 )
              {
                if ( v48 == (const char *)get_bytes(v49, v48, v36, 0, 0) )
                {
                  v55 = nullptr;
                  if ( v48 )
                  {
                    v55 = (void *)qalloc_or_throw(v48);
                    memcpy(v55, v50, (size_t)v48);
                  }
                  v56 = *(_QWORD *)(v61.m128i_i64[0] + 80);
                  v57 = *(const char **)(v61.m128i_i64[0] + 72);
                  if ( *(_QWORD *)(v61.m128i_i64[0] + 88) < (unsigned __int64)(v56 + 1) )
                  {
                    v57 = (const char *)qvector_reserve(v64, v57, v56 + 1, 32);
                    v59 = v61.m128i_i64[0];
                    *(_QWORD *)(v61.m128i_i64[0] + 72) = v57;
                    v56 = *(_QWORD *)(v59 + 80);
                  }
                  v58 = (__m128i *)&v57[32 * v56];
                  v58->m128i_i64[0] = v36;
                  v58->m128i_i64[1] = (__int64)v55;
                  v58[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v48, (__m128i)(unsigned __int64)v48);
                  ++*(_QWORD *)(v61.m128i_i64[0] + 80);
                  v31 = qfree(v50, v57);
                }
                else
                {
                  v31 = qfree(v50, v48);
                }
              }
            }
            v32 = (const char *)v65;
            goto LABEL_48;
          }
          goto LABEL_47;
        }
        if ( v36 != *(_QWORD *)v40 )
          break;
LABEL_47:
        if ( v37 == v40 )
          goto LABEL_56;
LABEL_48:
        v35 = ++v33;
        if ( (unsigned __int64)v33 >= *((_QWORD *)v10 + 6) )
        {
          if ( v32 )
          {
            *(_QWORD *)&v66 = 0;
            qfree(v32, v32);
          }
          goto LABEL_31;
        }
      }
      v40 += 8;
LABEL_71:
      if ( v36 != *(_QWORD *)v40 )
      {
        v40 += 8;
        goto LABEL_55;
      }
      goto LABEL_47;
    }
  }
LABEL_31:
  v24 = (void (__fastcall *)(__m128i *, int *))a1[14].m128i_i64[0];
  if ( v24 )
    v24(a1, v63);
  return 1;
}
