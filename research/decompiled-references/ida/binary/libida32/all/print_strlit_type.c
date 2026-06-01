__int64 __fastcall print_strlit_type(__int64 a1, unsigned int a2, __int64 *a3, int a4)
{
  _BYTE *v8; // rdx
  __int64 v9; // rax
  char **v11; // r14
  char *v12; // r15
  size_t v13; // rax
  size_t v14; // r9
  char *v15; // rsi
  int v16; // ebx
  char *v17; // r14
  size_t v18; // rax
  size_t v19; // rbx
  unsigned int v20; // ebp
  char *v21; // rdi
  __int64 v22; // rax
  char *v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rdi
  unsigned int default_encoding_idx; // eax
  const char *encoding_name; // rax
  const char *v28; // rbx
  size_t v29; // rax
  size_t v30; // xmm0_8
  unsigned __int64 v31; // rbp
  char *v32; // rdi
  unsigned __int64 v33; // rax
  char *v34; // r14
  size_t v35; // rax
  size_t v36; // r9
  char *v37; // r14
  size_t v38; // rax
  size_t v39; // rbx
  char *v40; // rbx
  char *v41; // r15
  char *v42; // rsi
  __int64 v43; // r15
  unsigned __int64 v44; // r14
  char *v45; // rax
  __int64 v46; // r8
  __int64 v47; // r10
  __int64 v48; // rdx
  void *v49; // rdi
  __int64 v50; // rdx
  char *v51; // rdi
  __m128i v52; // xmm0
  __int64 v53; // rdi
  int v54; // ebp
  __int64 v55; // rdi
  __int64 v56; // rbx
  unsigned __int64 v57; // rbp
  __int64 v58; // r13
  char *v59; // rsi
  __m128i si128; // xmm0
  __int64 v61; // rax
  __int64 v62; // r14
  size_t v63; // rax
  size_t v64; // r8
  size_t v65; // r9
  __int64 v66; // rbx
  char *v67; // rdi
  size_t v68; // r15
  char *v69; // rdi
  __int64 v70; // rdx
  char *v71; // rdi
  size_t v72; // r15
  size_t v73; // rax
  char *src; // [rsp+0h] [rbp-98h]
  _BYTE *srcb; // [rsp+0h] [rbp-98h]
  void *srca; // [rsp+0h] [rbp-98h]
  _BYTE *srce; // [rsp+0h] [rbp-98h]
  void *srcc; // [rsp+0h] [rbp-98h]
  void *srcd; // [rsp+0h] [rbp-98h]
  __int64 v80; // [rsp+8h] [rbp-90h]
  size_t v81; // [rsp+8h] [rbp-90h]
  size_t v82; // [rsp+8h] [rbp-90h]
  size_t v83; // [rsp+8h] [rbp-90h]
  __int64 v84; // [rsp+10h] [rbp-88h]
  __int64 v85; // [rsp+18h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-78h] BYREF
  __m128i v87; // [rsp+28h] [rbp-70h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i v89; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v90; // [rsp+58h] [rbp-40h]

  v8 = &unk_2AFC5A0;
  v90 = __readfsqword(0x28u);
  v9 = 0;
  v87 = 0;
  s = nullptr;
  if ( a4 == 11 )
  {
    v24 = HIBYTE(a2);
    if ( (_DWORD)v24 == 255 )
    {
      v28 = "<no conversion>";
      v31 = 16;
      v32 = nullptr;
      v30 = 15;
LABEL_87:
      s = (char *)qvector_reserve(&s, v32, v31, 1);
      v32 = s;
LABEL_88:
      v87.m128i_i64[0] = v31;
      memmove(v32, v28, v30);
      s[v30] = 0;
      goto LABEL_25;
    }
    if ( !(_DWORD)v24 )
    {
      v25 = 2;
      if ( (a2 & 3) != 1 )
        v25 = 3 * (unsigned int)((a2 & 3) == 2) + 1;
      default_encoding_idx = get_default_encoding_idx(v25);
      encoding_name = (const char *)get_encoding_name(default_encoding_idx);
      v28 = encoding_name;
      if ( !encoding_name || !*encoding_name )
      {
        if ( !under_debugger )
          interr(2458);
        BUG();
      }
      goto LABEL_34;
    }
    v28 = (const char *)get_encoding_name(v24);
    if ( !v28 )
    {
      v28 = "<bad>";
LABEL_121:
      v73 = strlen(v28);
      v32 = s;
      v30 = v73;
      v31 = v73 + 1;
      v33 = v87.m128i_u64[1];
      goto LABEL_122;
    }
LABEL_61:
    if ( !*v28 )
    {
      v28 = "<deleted>";
      if ( a4 != 11 )
        goto LABEL_81;
      goto LABEL_121;
    }
    if ( a4 != 11 )
      goto LABEL_81;
LABEL_34:
    v29 = strlen(v28);
    v30 = v29;
    if ( !v29 )
      goto LABEL_25;
    v31 = v29 + 1;
    v32 = s;
    v33 = v87.m128i_u64[1];
LABEL_122:
    if ( v33 >= v31 )
      goto LABEL_88;
    goto LABEL_87;
  }
  while ( *v8 != (_BYTE)a2 )
  {
    ++v9;
    v8 += 40;
    if ( v9 == 12 )
      return 0;
  }
  v11 = &(&off_2AFC580)[5 * v9];
  if ( a3 )
  {
    v12 = v11[2];
    if ( v12 && (v13 = strlen(v11[2]), (v14 = v13) != 0) )
    {
      v49 = (void *)*a3;
      v50 = v13 + 1;
      if ( a3[2] < v13 + 1 )
      {
        srca = (void *)(v13 + 1);
        v81 = v13;
        v61 = qvector_reserve(a3, *a3, v50, 1);
        v14 = v81;
        v50 = (__int64)srca;
        *a3 = v61;
        v49 = (void *)v61;
      }
      a3[1] = v50;
      srcb = (_BYTE *)v14;
      memmove(v49, v12, v14);
      srcb[*a3] = 0;
    }
    else
    {
      a3[1] = 0;
    }
  }
  if ( a4 == 16 )
  {
    v37 = v11[3];
    if ( v37 && (v38 = strlen(v37), (v39 = v38) != 0) )
    {
      v71 = s;
      v72 = v38 + 1;
      if ( v87.m128i_i64[1] < v38 + 1 )
      {
        s = (char *)qvector_reserve(&s, s, v72, 1);
        v71 = s;
      }
      v87.m128i_i64[0] = v72;
      memmove(v71, v37, v39);
      s[v39] = 0;
      if ( (unsigned __int8)a2 >> 2 || !BYTE1(a2) )
      {
LABEL_84:
        ptr = nullptr;
        v89 = 0;
        if ( v87.m128i_i64[0] )
        {
          src = s;
          v40 = strchr(s, 126);
          goto LABEL_47;
        }
LABEL_46:
        v40 = nullptr;
        src = (char *)haystack;
LABEL_47:
        v41 = src;
        v42 = nullptr;
        while ( v40 )
        {
          if ( v40 != v41 )
          {
            v46 = v89.m128i_i64[0];
            v47 = v40 - v41;
            if ( v89.m128i_i64[0] )
            {
              v46 = v89.m128i_i64[0] - 1;
              v47 = v40 - v41 + v89.m128i_i64[0] - 1;
            }
            v48 = v47 + 1;
            if ( v89.m128i_i64[1] < (unsigned __int64)(v47 + 1) )
            {
              v85 = v46;
              v84 = v47;
              v80 = v47 + 1;
              ptr = (void *)qvector_reserve(&ptr, v42, v48, 1);
              v46 = v85;
              v42 = (char *)ptr;
              v47 = v84;
              v48 = v80;
            }
            v89.m128i_i64[0] = v48;
            v42[v47] = 0;
            memmove((char *)ptr + v46, v41, v40 - v41);
            v42 = (char *)ptr;
          }
          v43 = v89.m128i_i64[0];
          v44 = 1;
          if ( v89.m128i_i64[0] )
          {
            v44 = v89.m128i_i64[0];
            v43 = v89.m128i_i64[0] - 1;
          }
          if ( v89.m128i_i64[1] < v44 )
          {
            ptr = (void *)qvector_reserve(&ptr, v42, v44, 1);
            v42 = (char *)ptr;
          }
          v89.m128i_i64[0] = v44;
          v42[v43] = 0;
          v41 = v40 + 1;
          v45 = strchr(v40 + 1, 126);
          v42 = (char *)ptr;
          v40 = v45;
        }
        if ( v41 == src )
        {
          v51 = v42;
        }
        else
        {
          if ( *v41 && v41 )
          {
            v62 = v89.m128i_i64[0];
            v63 = strlen(v41);
            v64 = v63;
            v65 = v63;
            if ( v62 )
            {
              --v62;
              v65 = v63 + v62;
            }
            v66 = v65 + 1;
            if ( v89.m128i_i64[1] < v65 + 1 )
            {
              srcc = (void *)v65;
              v82 = v63;
              ptr = (void *)qvector_reserve(&ptr, v42, v65 + 1, 1);
              v64 = v82;
              v42 = (char *)ptr;
              v65 = (size_t)srcc;
            }
            v89.m128i_i64[0] = v66;
            v42[v65] = 0;
            memmove((char *)ptr + v62, v41, v64);
            v42 = (char *)ptr;
          }
          v51 = s;
          s = v42;
          v52 = _mm_loadu_si128(&v89);
          ptr = v51;
          v89.m128i_i64[1] = v87.m128i_i64[1];
          v87 = v52;
        }
        if ( v51 )
        {
          v89.m128i_i64[0] = 0;
          qfree(v51);
        }
        if ( (a4 & 8) == 0 )
        {
          if ( a4 != 16 )
            goto LABEL_25;
          v53 = HIBYTE(a2);
          if ( (_DWORD)v53 == 255 )
          {
            v56 = v87.m128i_i64[0];
            if ( v87.m128i_i64[0] )
            {
              v58 = v87.m128i_i64[0] + 15;
              v57 = v87.m128i_i64[0] + 16;
              v56 = v87.m128i_i64[0] - 1;
            }
            else
            {
              v57 = 17;
              v58 = 16;
            }
            v59 = s;
            if ( v87.m128i_i64[1] < v57 )
            {
              s = (char *)qvector_reserve(&s, s, v57, 1);
              v59 = s;
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_2383690);
            v87.m128i_i64[0] = v57;
            v59[v58] = 0;
            *(__m128i *)&s[v56] = si128;
            goto LABEL_25;
          }
          if ( !(_DWORD)v53 )
          {
            v54 = a2 & 3;
            v55 = 2;
            if ( v54 != 1 )
              v55 = 3 * (unsigned int)(v54 == 2) + 1;
            v53 = (unsigned int)get_default_encoding_idx(v55);
          }
          get_encoding_name(v53);
          goto LABEL_81;
        }
        goto LABEL_23;
      }
    }
    else
    {
      v87.m128i_i64[0] = 0;
      if ( (unsigned __int8)a2 >> 2 || !BYTE1(a2) )
      {
        ptr = nullptr;
        v89 = 0;
        goto LABEL_46;
      }
    }
    sub_357520((__int64 *)&s);
    goto LABEL_84;
  }
  if ( (unsigned __int8)a2 >> 2 || !BYTE1(a2) )
  {
    v16 = a4 & 3;
    if ( (unsigned int)(v16 - 1) <= 1 )
    {
      v34 = v11[1];
      if ( v34 && (v35 = strlen(v34), (v36 = v35) != 0) )
      {
        v69 = s;
        v70 = v35 + 1;
        if ( v87.m128i_i64[1] < v35 + 1 )
        {
          v83 = v35;
          srcd = (void *)(v35 + 1);
          s = (char *)qvector_reserve(&s, s, v70, 1);
          v36 = v83;
          v69 = s;
          v70 = (__int64)srcd;
        }
        v87.m128i_i64[0] = v70;
        srce = (_BYTE *)v36;
        memmove(v69, v34, v36);
        srce[(_QWORD)s] = 0;
      }
      else
      {
        v87.m128i_i64[0] = 0;
      }
      if ( v16 == 2 && (unsigned __int8)a2 >> 2 )
        qstrlwr(s);
    }
    else
    {
      v17 = *v11;
      if ( v17 && (v18 = strlen(v17), (v19 = v18) != 0) )
      {
        v67 = s;
        v68 = v18 + 1;
        if ( v87.m128i_i64[1] < v18 + 1 )
        {
          s = (char *)qvector_reserve(&s, s, v68, 1);
          v67 = s;
        }
        v87.m128i_i64[0] = v68;
        memmove(v67, v17, v19);
        s[v19] = 0;
      }
      else
      {
        v87.m128i_i64[0] = 0;
      }
    }
  }
  else if ( BYTE1(a2) != 36 || BYTE2(a2) )
  {
    sub_3573A0(&s);
    if ( BYTE2(a2) )
      sub_357520((__int64 *)&s);
  }
  else
  {
    v15 = s;
    if ( v87.m128i_i64[1] <= 3uLL )
    {
      s = (char *)qvector_reserve(&s, s, 4, 1);
      v15 = s;
    }
    v87.m128i_i64[0] = 4;
    *(_WORD *)v15 = 20292;
    v15[2] = 83;
    s[3] = 0;
  }
  if ( (a4 & 4) == 0 )
    goto LABEL_84;
  if ( (a4 & 8) != 0 )
  {
LABEL_23:
    v20 = HIBYTE(a2);
    if ( v20 == 255 )
      goto LABEL_81;
    if ( !v20 )
      goto LABEL_25;
    v28 = (const char *)get_encoding_name(v20);
    if ( !v28 )
    {
LABEL_81:
      sub_357520((__int64 *)&s);
      goto LABEL_25;
    }
    goto LABEL_61;
  }
LABEL_25:
  v21 = *(char **)a1;
  v22 = *(_QWORD *)(a1 + 16);
  v23 = s;
  *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v87.m128i_i64[1]);
  s = v21;
  *(_QWORD *)a1 = v23;
  v87.m128i_i64[1] = v22;
  if ( v21 )
  {
    v87.m128i_i64[0] = 0;
    qfree(v21);
  }
  return 1;
}

