__int64 __fastcall sub_417670(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        unsigned int a7,
        char a8)
{
  const char *v10; // rdi
  const char *file_ext; // r8
  __int64 v15; // rax
  const char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  size_t v20; // r8
  __m128i v21; // xmm0
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r12
  bool v24; // zf
  __int64 v25; // rsi
  const char *v26; // rax
  char *v27; // rax
  __int64 v28; // rdx
  const char *v29; // r9
  char *v30; // r13
  char *v31; // rax
  char *v32; // rdx
  char *v33; // rdi
  __int64 v34; // rax
  __m128i v35; // xmm1
  char *v36; // rcx
  char *v37; // rdx
  unsigned int v38; // ebx
  unsigned __int64 v40; // r12
  size_t v41; // r9
  const void *v42; // r8
  char *v43; // rax
  unsigned __int64 v44; // r12
  size_t v45; // r12
  __int64 v46; // rbp
  unsigned __int64 v47; // rbp
  size_t v48; // r13
  __int64 v49; // r12
  size_t v50; // r14
  char *v51; // rsi
  __int64 v52; // r13
  __int64 v53; // rax
  void *v54; // rax
  size_t na; // [rsp+0h] [rbp-108h]
  size_t nb; // [rsp+0h] [rbp-108h]
  char *n; // [rsp+0h] [rbp-108h]
  size_t nc; // [rsp+0h] [rbp-108h]
  size_t nd; // [rsp+0h] [rbp-108h]
  __int64 v60; // [rsp+8h] [rbp-100h]
  size_t v61; // [rsp+8h] [rbp-100h]
  const void *v62; // [rsp+8h] [rbp-100h]
  size_t v63; // [rsp+8h] [rbp-100h]
  size_t v64; // [rsp+8h] [rbp-100h]
  const char *src; // [rsp+28h] [rbp-E0h]
  char *s; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v68; // [rsp+38h] [rbp-D0h] BYREF
  char *v69; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v70; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v71[2]; // [rsp+70h] [rbp-98h] BYREF
  char v72; // [rsp+80h] [rbp-88h]
  _QWORD v73[2]; // [rsp+90h] [rbp-78h] BYREF
  char v74; // [rsp+A0h] [rbp-68h]
  void *v75; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v76; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v77; // [rsp+C8h] [rbp-40h]

  v10 = &s1;
  v77 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a4 + 8) )
    v10 = *(const char **)a4;
  file_ext = (const char *)get_file_ext(v10);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 280LL);
  v76 = 0;
  v75 = nullptr;
  v60 = v15;
  if ( file_ext )
  {
    src = file_ext;
    na = strlen(file_ext);
    v75 = (void *)qvector_reserve(&v75, 0, na + 1, 1);
    *(_QWORD *)&v76 = na + 1;
    memmove(v75, src, na);
    *((_BYTE *)v75 + na) = 0;
  }
  v16 = (const char *)&v75;
  v17 = sub_4321A0(v60, &v75);
  v20 = v17;
  if ( v75 )
  {
    nb = v17;
    *(_QWORD *)&v76 = 0;
    qfree(v75, (const char *)&v75, v18, v19, v17);
    v20 = nb;
  }
  if ( !v20 )
  {
    v52 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 280LL);
    v76 = 0;
    v75 = nullptr;
    v75 = (void *)qvector_reserve(&v75, 0, 2, 1);
    v16 = (const char *)&v75;
    *(_QWORD *)&v76 = 2;
    *(_BYTE *)v75 = 42;
    *((_BYTE *)v75 + 1) = 0;
    v53 = sub_4321A0(v52, &v75);
    v20 = v53;
    if ( v75 )
    {
      nc = v53;
      *(_QWORD *)&v76 = 0;
      qfree(v75, (const char *)&v75, v18, v19, v53);
      v20 = nc;
    }
    if ( !v20 )
      return 0;
  }
  s = nullptr;
  v21.m128i_i64[0] = 0;
  v69 = nullptr;
  v68 = 0;
  v70 = 0;
  if ( a3 == 1 )
  {
    if ( &s == (char **)(v20 + 72) || (v44 = *(_QWORD *)(v20 + 80), v44 <= 1) )
    {
      if ( &v69 == (char **)(v20 + 96) )
        goto LABEL_89;
    }
    else
    {
      v63 = v20;
      v16 = *(const char **)(v20 + 72);
      s = (char *)qvector_reserve(&s, 0, *(_QWORD *)(v20 + 80), 1);
      v68.m128i_i64[0] = v44;
      memmove(s, v16, v44 - 1);
      v20 = v63;
      s[v44 - 1] = 0;
      if ( &v69 == (char **)(v63 + 96) )
        goto LABEL_16;
    }
    v23 = *(_QWORD *)(v20 + 104);
    if ( !v23 )
      goto LABEL_15;
    v41 = v23 - 1;
    if ( v23 == 1 )
      goto LABEL_15;
    v42 = *(const void **)(v20 + 96);
    v43 = v69;
    if ( v70.m128i_i64[1] >= v23 )
      goto LABEL_105;
LABEL_100:
    v62 = v42;
    nd = v41;
    v43 = (char *)qvector_reserve(&v69, v43, v23, 1);
    v42 = v62;
    v41 = nd;
    v69 = v43;
    goto LABEL_105;
  }
  if ( a3 == 2 )
  {
    if ( &s != (char **)(v20 + 120) )
    {
      v40 = *(_QWORD *)(v20 + 128);
      if ( v40 > 1 )
      {
        v61 = v20;
        v16 = *(const char **)(v20 + 120);
        s = (char *)qvector_reserve(&s, 0, *(_QWORD *)(v20 + 128), 1);
        v68.m128i_i64[0] = v40;
        memmove(s, v16, v40 - 1);
        v20 = v61;
        s[v40 - 1] = 0;
      }
    }
    if ( a7 == 3 )
    {
      if ( &v69 == (char **)(v20 + 192) )
        goto LABEL_16;
      v23 = *(_QWORD *)(v20 + 200);
      if ( !v23 )
        goto LABEL_15;
      v41 = v23 - 1;
      if ( v23 == 1 )
        goto LABEL_15;
      v42 = *(const void **)(v20 + 192);
      v43 = v69;
      if ( v70.m128i_i64[1] >= v23 )
        goto LABEL_105;
    }
    else
    {
      if ( a7 > 3 )
      {
        if ( a7 == 4 )
        {
          if ( &v69 == (char **)(v20 + 216) )
            goto LABEL_16;
          v23 = *(_QWORD *)(v20 + 224);
          if ( v23 )
          {
            v41 = v23 - 1;
            if ( v23 != 1 )
            {
              v42 = *(const void **)(v20 + 216);
              v43 = v69;
              if ( v70.m128i_i64[1] < v23 )
                goto LABEL_100;
              goto LABEL_105;
            }
          }
        }
LABEL_15:
        v70.m128i_i64[0] = 0;
        goto LABEL_16;
      }
      if ( a7 == 1 )
      {
        if ( &v69 == (char **)(v20 + 144) )
          goto LABEL_16;
        v23 = *(_QWORD *)(v20 + 152);
        if ( v23 )
        {
          v41 = v23 - 1;
          if ( v23 != 1 )
          {
            v42 = *(const void **)(v20 + 144);
            v43 = v69;
            if ( v70.m128i_i64[1] >= v23 )
              goto LABEL_105;
            goto LABEL_100;
          }
        }
        goto LABEL_15;
      }
      if ( a7 != 2 )
        goto LABEL_15;
      if ( &v69 == (char **)(v20 + 168) )
        goto LABEL_16;
      v23 = *(_QWORD *)(v20 + 176);
      if ( !v23 )
        goto LABEL_15;
      v41 = v23 - 1;
      if ( v23 == 1 )
        goto LABEL_15;
      v42 = *(const void **)(v20 + 168);
      v43 = v69;
      if ( v70.m128i_i64[1] >= v23 )
        goto LABEL_105;
    }
    goto LABEL_100;
  }
  if ( a3 )
  {
    if ( !under_debugger )
      interr(80146, &v75, v18, v19, 0.0);
    BUG();
  }
  if ( &s != (char **)(v20 + 24) )
  {
    v22 = *(_QWORD *)(v20 + 32);
    if ( v22 > 1 )
    {
      v64 = v20;
      v16 = *(const char **)(v20 + 24);
      s = (char *)qvector_reserve(&s, 0, *(_QWORD *)(v20 + 32), 1);
      v68.m128i_i64[0] = v22;
      memmove(s, v16, v22 - 1);
      v20 = v64;
      s[v22 - 1] = 0;
      if ( &v69 != (char **)(v64 + 48) )
        goto LABEL_14;
LABEL_16:
      if ( v68.m128i_i64[0] <= 1uLL )
      {
        v33 = v69;
        v38 = 0;
      }
      else
      {
        if ( a2 )
        {
          if ( !a8 )
          {
LABEL_37:
            v32 = *(char **)a2;
            v33 = *(char **)(a2 + 24);
            v34 = *(_QWORD *)(a2 + 40);
            v35 = _mm_loadu_si128((const __m128i *)(a2 + 8));
            v36 = s;
            *(__m128 *)(a2 + 8) = _mm_loadh_ps((const double *)&v68.m128i_i64[1]);
            v21 = _mm_loadu_si128(&v70);
            s = v32;
            v37 = v69;
            v70.m128i_i64[1] = v34;
            v69 = v33;
            *(_QWORD *)a2 = v36;
            *(_QWORD *)(a2 + 24) = v37;
            *(__m128i *)(a2 + 32) = v21;
            v38 = 1;
            v68 = v35;
            goto LABEL_38;
          }
          v24 = *(_QWORD *)(a4 + 8) == 0;
          v71[1] = 0;
          v72 = 0;
          v73[0] = &unk_5C2F25;
          v73[1] = 0;
          v74 = 0;
          if ( v24 )
          {
            v25 = a5;
            v71[0] = &s1;
            if ( a5 )
            {
LABEL_21:
              v26 = &s1;
              if ( *(_QWORD *)(v25 + 8) )
                v26 = *(const char **)v25;
              v73[0] = v26;
            }
          }
          else
          {
            v25 = a5;
            v71[0] = *(_QWORD *)a4;
            if ( a5 )
              goto LABEL_21;
          }
          v16 = (_BYTE *)(&qword_20 + 5);
          n = s;
          v27 = strchr(s, 37);
          if ( v27 && v27 - n != -1 )
          {
            v29 = nullptr;
            if ( a6 )
            {
              v29 = &s1;
              if ( *((_QWORD *)a6 + 1) )
                v29 = *(const char **)a6;
            }
            v16 = n;
            expand_vault_cmdline_macros(&s, n, &unk_5C2F25, v71, v73, v29);
          }
          if ( v70.m128i_i64[0]
            && (v30 = v69, v16 = (_BYTE *)(&qword_20 + 5), (v31 = strchr(v69, 37)) != nullptr)
            && v31 - v30 != -1 )
          {
            if ( a6 )
            {
              if ( *((_QWORD *)a6 + 1) )
                a6 = *(const char **)a6;
              else
                a6 = &s1;
            }
            v16 = v30;
            expand_vault_cmdline_macros(&v69, v30, &unk_5C2F25, v71, v73, a6);
          }
          else
          {
            v45 = *(_QWORD *)(a4 + 8);
            v75 = nullptr;
            v76 = 0;
            if ( v45 )
            {
              v54 = (void *)qalloc_or_throw(v45);
              v16 = *(const char **)a4;
              v75 = v54;
              *((_QWORD *)&v76 + 1) = v45;
              memcpy(v54, v16, v45);
              *(_QWORD *)&v76 = v45;
            }
            quote_cmdline_arg(&v75, v16, v28);
            v46 = v70.m128i_i64[0];
            if ( v70.m128i_i64[0] > 1uLL )
            {
              v16 = v69;
              if ( v70.m128i_i64[1] < (unsigned __int64)(v70.m128i_i64[0] + 1) )
              {
                v69 = (char *)qvector_reserve(&v69, v69, v70.m128i_i64[0] + 1, 1);
                v16 = v69;
              }
              v70.m128i_i64[0] = v46 + 1;
              v16[v46 - 1] = 32;
              v69[v46] = 0;
            }
            v47 = v76;
            if ( (_QWORD)v76 )
            {
              v48 = v76 - 1;
              if ( (_QWORD)v76 != 1 )
              {
                v49 = v70.m128i_i64[0];
                v50 = v76 - 1;
                if ( v70.m128i_i64[0] )
                {
                  v49 = v70.m128i_i64[0] - 1;
                  v50 = v48 + v70.m128i_i64[0] - 1;
                  v47 = v76 + v70.m128i_i64[0] - 1;
                }
                v51 = v69;
                if ( v70.m128i_i64[1] < v47 )
                {
                  v69 = (char *)qvector_reserve(&v69, v69, v47, 1);
                  v51 = v69;
                }
                v70.m128i_i64[0] = v47;
                v51[v50] = 0;
                v16 = (const char *)v75;
                memcpy(&v69[v49], v75, v48);
              }
            }
            if ( v75 )
            {
              *(_QWORD *)&v76 = 0;
              qfree(v75, v16);
            }
          }
          goto LABEL_37;
        }
        v33 = v69;
        v38 = 1;
      }
LABEL_38:
      if ( v33 )
      {
        v70.m128i_i64[0] = 0;
        *(double *)v21.m128i_i64 = qfree(v33, v16);
      }
      goto LABEL_40;
    }
  }
  if ( &v69 != (char **)(v20 + 48) )
  {
LABEL_14:
    v23 = *(_QWORD *)(v20 + 56);
    if ( v23 )
    {
      v41 = v23 - 1;
      if ( v23 != 1 )
      {
        v42 = *(const void **)(v20 + 48);
        v43 = v69;
        if ( v70.m128i_i64[1] < v23 )
          goto LABEL_100;
LABEL_105:
        v16 = (const char *)v42;
        v70.m128i_i64[0] = v23;
        memmove(v43, v42, v41);
        v69[v23 - 1] = 0;
        goto LABEL_16;
      }
    }
    goto LABEL_15;
  }
LABEL_89:
  v38 = 0;
LABEL_40:
  if ( s )
  {
    v68.m128i_i64[0] = 0;
    qfree(s, v16, *(double *)v21.m128i_i64);
  }
  return v38;
}
