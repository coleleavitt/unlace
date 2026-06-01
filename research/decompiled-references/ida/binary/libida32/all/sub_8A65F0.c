_QWORD *__fastcall sub_8A65F0(_QWORD *a1, __int64 a2, char a3, __int64 a4, __int64 a5, int a6)
{
  _QWORD *v7; // r15
  __int64 v8; // r13
  _QWORD *v9; // rbp
  const char *v10; // rsi
  _QWORD *v11; // rbx
  const char *v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  const char *v15; // rsi
  const char *v16; // rbx
  _QWORD *v17; // rbp
  const char *v19; // rdx
  const char *v20; // rsi
  _QWORD *v21; // r14
  __int64 v22; // r13
  _QWORD *v23; // rbx
  _QWORD *v24; // rbp
  const char *v25; // rdi
  int v26; // eax
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  const char *v30; // rdi
  __int64 v31; // rax
  size_t v32; // r13
  __int64 v33; // rbp
  _QWORD *v34; // rax
  __int64 v35; // rdx
  const char *v36; // rsi
  const char *v37; // rdi
  _QWORD *v38; // rdi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  int *v42; // rdx
  int *v43; // rcx
  __int64 v44; // rdx
  __m128 v45; // xmm0
  int *v46; // rdx
  void *v47; // rdi
  __m128 v48; // xmm0
  int *v49; // rax
  __int64 v50; // rax
  void *v51; // rax
  const char *v52; // rsi
  _QWORD *v53; // [rsp+0h] [rbp-98h]
  __int64 v56; // [rsp+20h] [rbp-78h] BYREF
  int v57; // [rsp+28h] [rbp-70h] BYREF
  __m128 v58; // [rsp+30h] [rbp-68h] BYREF
  int *v59; // [rsp+40h] [rbp-58h]
  __int64 v60; // [rsp+48h] [rbp-50h]
  unsigned __int64 v61; // [rsp+58h] [rbp-40h]

  v7 = (_QWORD *)a1[4];
  v8 = *(_QWORD *)(a2 + 8);
  v61 = __readfsqword(0x28u);
  v9 = a1 + 3;
  v53 = a1 + 3;
  if ( !v7 )
    goto LABEL_73;
  while ( 1 )
  {
    v14 = v7[5];
    if ( !v8 )
      break;
    v10 = *(const char **)a2;
    v11 = v7;
    v12 = haystack;
    if ( v14 )
      goto LABEL_4;
LABEL_5:
    v13 = strcmp(v12, v10);
    a4 = v7[2];
    v7 = (_QWORD *)v7[3];
    if ( v13 >= 0 )
    {
      v9 = v11;
      v7 = (_QWORD *)a4;
    }
    if ( !v7 )
      goto LABEL_14;
  }
  if ( v14 )
  {
LABEL_12:
    v10 = haystack;
LABEL_4:
    v12 = (const char *)v7[4];
    v11 = v7;
    goto LABEL_5;
  }
  while ( 1 )
  {
    a4 = v7[2];
    if ( !a4 )
      break;
    v9 = v7;
    v7 = (_QWORD *)v7[2];
    if ( *(_QWORD *)(a4 + 40) )
      goto LABEL_12;
  }
  v9 = v7;
LABEL_14:
  if ( v53 != v9 )
  {
    v15 = haystack;
    if ( !v9[5] )
    {
      if ( v8 )
        goto LABEL_17;
LABEL_20:
      if ( *v15 )
      {
        v57 = 0;
        v58.m128_u64[0] = 0;
        v58.m128_u64[1] = (unsigned __int64)&v57;
        v59 = &v57;
        v60 = 0;
        goto LABEL_22;
      }
      return v9 + 7;
    }
    v15 = (const char *)v9[4];
    if ( !v8 )
      goto LABEL_20;
LABEL_17:
    v16 = *(const char **)a2;
    if ( strcmp(*(const char **)a2, v15) >= 0 )
      return v9 + 7;
    v57 = 0;
    v58.m128_u64[0] = 0;
    v58.m128_u64[1] = (unsigned __int64)&v57;
    v59 = &v57;
    v60 = 0;
LABEL_61:
    LODWORD(v19) = (_DWORD)v16;
    goto LABEL_23;
  }
LABEL_73:
  v57 = 0;
  v58.m128_u64[0] = 0;
  v58.m128_u64[1] = (unsigned __int64)&v57;
  v59 = &v57;
  v60 = 0;
  if ( v8 )
  {
    v16 = *(const char **)a2;
    goto LABEL_61;
  }
LABEL_22:
  v19 = haystack;
LABEL_23:
  v20 = (const char *)&v56;
  if ( (unsigned __int8)sub_8A51E0((__int64)a1, &v56, (int)v19, a4, a5, a6) != 1 && a3 )
  {
    v17 = nullptr;
    sub_8A4990(v58.m128_u64[0]);
    return v17;
  }
  v21 = (_QWORD *)a1[4];
  if ( !v21 )
  {
    v23 = v53;
    goto LABEL_45;
  }
  v22 = *(_QWORD *)(a2 + 8);
  v23 = v53;
  while ( 2 )
  {
    v28 = v21[5];
    if ( v22 )
    {
      v20 = *(const char **)a2;
      v24 = v21;
      v25 = haystack;
      if ( !v28 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( v28 )
    {
LABEL_36:
      v20 = haystack;
LABEL_28:
      v25 = (const char *)v21[4];
      v24 = v21;
LABEL_29:
      v26 = strcmp(v25, v20);
      v27 = (_QWORD *)v21[2];
      v21 = (_QWORD *)v21[3];
      if ( v26 >= 0 )
      {
        v23 = v24;
        v21 = v27;
      }
      if ( !v21 )
        goto LABEL_40;
      continue;
    }
    break;
  }
  while ( 1 )
  {
    v29 = v21[2];
    if ( !v29 )
      break;
    v23 = v21;
    v21 = (_QWORD *)v21[2];
    if ( *(_QWORD *)(v29 + 40) )
      goto LABEL_36;
  }
  v23 = v21;
LABEL_40:
  if ( v53 == v23 )
    goto LABEL_45;
  if ( v23[5] )
  {
    v20 = (const char *)v23[4];
    v30 = haystack;
    if ( v22 )
      goto LABEL_43;
LABEL_44:
    if ( strcmp(v30, v20) < 0 )
    {
LABEL_45:
      v31 = operator new(0x68u);
      v32 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(v31 + 32) = 0;
      v33 = v31;
      *(_OWORD *)(v31 + 40) = 0;
      if ( v32 )
      {
        v51 = (void *)qalloc_or_throw(v32, v20);
        *(_QWORD *)(v33 + 32) = v51;
        v52 = *(const char **)a2;
        *(_QWORD *)(v33 + 48) = v32;
        memcpy(v51, v52, v32);
        *(_QWORD *)(v33 + 40) = v32;
      }
      *(_DWORD *)(v33 + 64) = 0;
      *(_QWORD *)(v33 + 72) = 0;
      *(_QWORD *)(v33 + 80) = v33 + 64;
      *(_QWORD *)(v33 + 88) = v33 + 64;
      *(_QWORD *)(v33 + 96) = 0;
      v34 = sub_8A6430(a1 + 2, v23, v33 + 32);
      v23 = v34;
      if ( v35 )
      {
        if ( v53 != (_QWORD *)v35 && !v34 )
        {
          v36 = haystack;
          if ( *(_QWORD *)(v35 + 40) )
            v36 = *(const char **)(v35 + 32);
          v37 = haystack;
          if ( *(_QWORD *)(v33 + 40) )
            v37 = *(const char **)(v33 + 32);
          strcmp(v37, v36);
        }
        v23 = (_QWORD *)v33;
        std::_Rb_tree_insert_and_rebalance();
        ++a1[7];
      }
      else if ( v33 )
      {
        sub_8A4990(nullptr);
        v47 = *(void **)(v33 + 32);
        if ( v47 )
        {
          *(_QWORD *)(v33 + 40) = 0;
          qfree(v47);
        }
        operator delete((void *)v33, 0x68u);
      }
    }
  }
  else
  {
    v20 = haystack;
    if ( v22 )
    {
LABEL_43:
      v30 = *(const char **)a2;
      goto LABEL_44;
    }
  }
  v38 = (_QWORD *)v23[9];
  v39 = v58.m128_u64[0];
  v17 = v23 + 7;
  if ( v38 )
  {
    if ( v58.m128_u64[0] )
    {
      v40 = v23[10];
      v41 = v58.m128_u64[1];
      v58.m128_u64[0] = v23[9];
      v23[9] = v39;
      v58.m128_u64[1] = v40;
      v42 = (int *)v23[11];
      v23[10] = v41;
      v43 = v59;
      v59 = v42;
      v23[11] = v43;
      *(_QWORD *)(v39 + 8) = v23 + 8;
      *(_QWORD *)(v58.m128_u64[0] + 8) = &v57;
      v44 = v60;
      v38 = (_QWORD *)v58.m128_u64[0];
      v60 = v23[12];
      v23[12] = v44;
    }
    else
    {
      v48 = _mm_loadh_ps((const double *)v23 + 10);
      v57 = *((_DWORD *)v23 + 16);
      v49 = (int *)v23[11];
      v58 = v48;
      v59 = v49;
      v38[1] = &v57;
      v50 = v23[12];
      v23[9] = 0;
      v38 = (_QWORD *)v58.m128_u64[0];
      v60 = v50;
      v23[10] = v23 + 8;
      v23[11] = v23 + 8;
      v23[12] = 0;
    }
  }
  else if ( v58.m128_u64[0] )
  {
    v45 = _mm_loadh_ps((const double *)&v58.m128_u64[1]);
    *((_DWORD *)v23 + 16) = v57;
    v46 = v59;
    *(__m128 *)(v23 + 9) = v45;
    v23[11] = v46;
    *(_QWORD *)(v39 + 8) = v23 + 8;
    v58.m128_u64[0] = 0;
    v23[12] = v60;
    v60 = 0;
    v58.m128_u64[1] = (unsigned __int64)&v57;
    v59 = &v57;
  }
  sub_8A4990(v38);
  return v17;
}

