__int64 __fastcall sub_6F64D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned __int64 v3; // rbx
  const char *v4; // rbp
  _BYTE *v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rbp
  _BYTE *v11; // r13
  char *v12; // rax
  char *v13; // rbx
  __int64 v14; // rbp
  size_t v15; // r14
  size_t v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // r14
  unsigned __int64 v21; // r13
  __int64 v22; // rsi
  char *v23; // rax
  __int64 v24; // r13
  size_t v25; // r8
  size_t v26; // r9
  __int64 v27; // rdx
  char v28; // r13
  unsigned __int64 v29; // r14
  __int64 v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // r13
  __int64 v34; // r14
  _BYTE *v35; // r13
  char *v36; // rax
  __int64 v37; // rbp
  size_t v38; // r14
  size_t v39; // r8
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  size_t v45; // rax
  __int64 v46; // rbx
  size_t v47; // r15
  size_t v48; // r13
  __int64 v49; // rdx
  __m128i v50; // xmm0
  const char *v51; // rax
  __int64 v52; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // [rsp+0h] [rbp-78h]
  __int64 v57; // [rsp+0h] [rbp-78h]
  __int64 v58; // [rsp+0h] [rbp-78h]
  __int64 v59; // [rsp+0h] [rbp-78h]
  size_t v60; // [rsp+8h] [rbp-70h]
  size_t v61; // [rsp+8h] [rbp-70h]
  size_t v62; // [rsp+8h] [rbp-70h]
  size_t v63; // [rsp+10h] [rbp-68h]
  __int64 v65; // [rsp+20h] [rbp-58h] BYREF
  __m128i v66; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v67; // [rsp+38h] [rbp-40h]

  v2 = 0;
  v67 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 <= 1 )
    return v2;
  v4 = *(const char **)a2;
  if ( !strchr(*(const char **)a2, 64) && !strstr(v4, "__spoils") )
    return v2;
  v65 = 0;
  v5 = nullptr;
  v66 = 0;
  v6 = v3 + 30;
  if ( v6 )
  {
    v65 = qvector_reserve(&v65, 0, v6, 1);
    v5 = (_BYTE *)v65;
  }
  v2 = 0;
  while ( 1 )
  {
    v23 = strpbrk(v4, "@_");
    v13 = v23;
    if ( !v23 )
      break;
    v24 = v66.m128i_i64[0];
    v25 = v23 - v4;
    v26 = v23 - v4;
    if ( v66.m128i_i64[0] )
    {
      v24 = v66.m128i_i64[0] - 1;
      v26 = v25 + v66.m128i_i64[0] - 1;
    }
    v27 = v26 + 1;
    if ( v66.m128i_i64[1] < v26 + 1 )
    {
      v63 = v26;
      v60 = v23 - v4;
      v56 = v26 + 1;
      v42 = qvector_reserve(&v65, v5, v27, 1);
      v26 = v63;
      v25 = v60;
      v65 = v42;
      v27 = v56;
      v5 = (_BYTE *)v42;
    }
    v66.m128i_i64[0] = v27;
    v5[v26] = 0;
    memmove((void *)(v24 + v65), v4, v25);
    v28 = *v13;
    v10 = v66.m128i_i64[0];
    if ( *v13 == 64 && v13[1] == 60 )
    {
      if ( v66.m128i_i64[0] )
      {
        v34 = v66.m128i_i64[0] + 3;
        v33 = v66.m128i_i64[0] + 4;
        v32 = v65;
        v10 = v66.m128i_i64[0] - 1;
        if ( v66.m128i_i64[1] < (unsigned __int64)(v66.m128i_i64[0] + 4) )
          goto LABEL_57;
      }
      else
      {
        v32 = v65;
        v33 = 5;
        v34 = 4;
        if ( v66.m128i_i64[1] >= 5uLL )
          goto LABEL_30;
LABEL_57:
        v65 = qvector_reserve(&v65, v32, v33, 1);
        v32 = v65;
      }
LABEL_30:
      v66.m128i_i64[0] = v33;
      v35 = v13 + 2;
      *(_BYTE *)(v32 + v34) = 0;
      *(_DWORD *)(v65 + v10) = 573071136;
      v36 = strchr(v13 + 2, 62);
      v13 = v36;
      if ( !v36 )
      {
LABEL_59:
        v5 = (_BYTE *)v65;
        v2 = 0;
        goto LABEL_53;
      }
      v37 = v66.m128i_i64[0];
      v38 = v36 - v35;
      v39 = v36 - v35;
      if ( v66.m128i_i64[0] )
      {
        v37 = v66.m128i_i64[0] - 1;
        v39 = v38 + v66.m128i_i64[0] - 1;
      }
      v40 = v65;
      v41 = v39 + 1;
      if ( v66.m128i_i64[1] < v39 + 1 )
      {
        v62 = v39;
        v59 = v39 + 1;
        v54 = qvector_reserve(&v65, v65, v41, 1);
        v39 = v62;
        v41 = v59;
        v65 = v54;
        v40 = v54;
      }
      v66.m128i_i64[0] = v41;
      *(_BYTE *)(v40 + v39) = 0;
      memmove((void *)(v37 + v65), v35, v38);
      v19 = v66.m128i_i64[0];
      if ( v66.m128i_i64[0] )
      {
        v20 = v66.m128i_i64[0] + 1;
        v21 = v66.m128i_i64[0] + 2;
        v19 = v66.m128i_i64[0] - 1;
      }
      else
      {
        v21 = 3;
        v20 = 2;
      }
      v22 = v65;
      if ( v66.m128i_i64[1] < v21 )
      {
LABEL_38:
        v65 = qvector_reserve(&v65, v22, v21, 1);
        v22 = v65;
      }
      goto LABEL_15;
    }
    if ( !strncmp(v13, "__spoils<", 9u) )
    {
      if ( v10 )
      {
        v7 = v10 + 7;
        v8 = v10 + 8;
        v9 = v65;
        --v10;
        if ( v66.m128i_i64[1] >= v8 )
          goto LABEL_8;
LABEL_40:
        v65 = qvector_reserve(&v65, v9, v8, 1);
        v9 = v65;
      }
      else
      {
        v9 = v65;
        v8 = 9;
        v7 = 8;
        if ( v66.m128i_i64[1] < 9uLL )
          goto LABEL_40;
      }
LABEL_8:
      v66.m128i_i64[0] = v8;
      v11 = v13 + 9;
      *(_BYTE *)(v9 + v7) = 0;
      *(_QWORD *)(v65 + v10) = 0x2228696F70735F5FLL;
      v12 = strchr(v13 + 9, 62);
      v13 = v12;
      if ( !v12 )
        goto LABEL_59;
      v14 = v66.m128i_i64[0];
      v15 = v12 - v11;
      v16 = v12 - v11;
      if ( v66.m128i_i64[0] )
      {
        v14 = v66.m128i_i64[0] - 1;
        v16 = v15 + v66.m128i_i64[0] - 1;
      }
      v17 = v65;
      v18 = v16 + 1;
      if ( v66.m128i_i64[1] < v16 + 1 )
      {
        v61 = v16;
        v58 = v16 + 1;
        v44 = qvector_reserve(&v65, v65, v18, 1);
        v16 = v61;
        v18 = v58;
        v65 = v44;
        v17 = v44;
      }
      v66.m128i_i64[0] = v18;
      *(_BYTE *)(v17 + v16) = 0;
      memmove((void *)(v14 + v65), v11, v15);
      v19 = v66.m128i_i64[0];
      if ( v66.m128i_i64[0] )
      {
        v20 = v66.m128i_i64[0] + 1;
        v21 = v66.m128i_i64[0] + 2;
        v22 = v65;
        v19 = v66.m128i_i64[0] - 1;
        if ( v66.m128i_i64[1] < (unsigned __int64)(v66.m128i_i64[0] + 2) )
          goto LABEL_38;
      }
      else
      {
        v22 = v65;
        v21 = 3;
        v20 = 2;
        if ( v66.m128i_i64[1] < 3uLL )
          goto LABEL_38;
      }
LABEL_15:
      v66.m128i_i64[0] = v21;
      ++v2;
      *(_BYTE *)(v22 + v20) = 0;
      *(_WORD *)(v65 + v19) = 10530;
      goto LABEL_16;
    }
    if ( v10 )
    {
      v29 = v10 + 1;
      v30 = v10;
      v31 = v65;
      --v10;
      if ( v66.m128i_i64[1] < v29 )
        goto LABEL_42;
    }
    else
    {
      v31 = v65;
      v30 = 1;
      v29 = 2;
      if ( v66.m128i_i64[1] < 2uLL )
      {
LABEL_42:
        v57 = v30;
        v43 = qvector_reserve(&v65, v31, v29, 1);
        v30 = v57;
        v65 = v43;
        v31 = v43;
      }
    }
    v66.m128i_i64[0] = v29;
    *(_BYTE *)(v31 + v10) = v28;
    *(_BYTE *)(v65 + v30) = 0;
LABEL_16:
    v5 = (_BYTE *)v65;
    v4 = v13 + 1;
  }
  if ( v4 )
  {
    v45 = strlen(v4);
    v46 = v66.m128i_i64[0];
    v47 = v45;
    v48 = v45;
    if ( v66.m128i_i64[0] )
    {
      v46 = v66.m128i_i64[0] - 1;
      v48 = v45 + v66.m128i_i64[0] - 1;
    }
    v49 = v48 + 1;
    if ( v66.m128i_i64[1] < v48 + 1 )
    {
      v55 = qvector_reserve(&v65, v5, v49, 1);
      v49 = v48 + 1;
      v65 = v55;
      v5 = (_BYTE *)v55;
    }
    v66.m128i_i64[0] = v49;
    v5[v48] = 0;
    memmove((void *)(v65 + v46), v4, v47);
    v5 = (_BYTE *)v65;
  }
  if ( v2 )
  {
    v50 = _mm_loadu_si128(&v66);
    v51 = *(const char **)a2;
    v52 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v5;
    *(__m128i *)(a2 + 8) = v50;
    v65 = (__int64)v51;
    v5 = v51;
    v66.m128i_i64[1] = v52;
  }
LABEL_53:
  if ( v5 )
  {
    v66.m128i_i64[0] = 0;
    qfree(v5);
  }
  return v2;
}
