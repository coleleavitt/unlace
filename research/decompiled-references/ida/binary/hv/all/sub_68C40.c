_QWORD *__fastcall sub_68C40(_QWORD *a1, __int64 a2, char a3, __int64 a4, __int64 a5, int a6)
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
  _QWORD *v20; // r14
  __int64 v21; // r13
  _QWORD *v22; // rbx
  const char *v23; // rsi
  _QWORD *v24; // rbp
  const char *v25; // rdi
  int v26; // eax
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  const char *v30; // rsi
  const char *v31; // rdi
  __int64 v32; // rax
  size_t v33; // r13
  __int64 v34; // rbp
  _QWORD *v35; // rax
  __int64 v36; // rdx
  const char *v37; // rsi
  const char *v38; // rdi
  _QWORD *v39; // rdi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  int *v43; // rdx
  int *v44; // rcx
  __int64 v45; // rdx
  __m128 v46; // xmm0
  int *v47; // rdx
  void *v48; // rdi
  __m128 v49; // xmm0
  int *v50; // rax
  __int64 v51; // rax
  void *v52; // rax
  const char *v53; // rsi
  _QWORD *v54; // [rsp+0h] [rbp-98h]
  char v57[8]; // [rsp+20h] [rbp-78h] BYREF
  int v58; // [rsp+28h] [rbp-70h] BYREF
  __m128 v59; // [rsp+30h] [rbp-68h] BYREF
  int *v60; // [rsp+40h] [rbp-58h]
  __int64 v61; // [rsp+48h] [rbp-50h]
  unsigned __int64 v62; // [rsp+58h] [rbp-40h]

  v7 = (_QWORD *)a1[4];
  v8 = *(_QWORD *)(a2 + 8);
  v62 = __readfsqword(0x28u);
  v9 = a1 + 3;
  v54 = a1 + 3;
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
  if ( v54 != v9 )
  {
    v15 = haystack;
    if ( !v9[5] )
    {
      if ( v8 )
        goto LABEL_17;
LABEL_20:
      if ( *v15 )
      {
        v58 = 0;
        v59.m128_u64[0] = 0;
        v59.m128_u64[1] = (unsigned __int64)&v58;
        v60 = &v58;
        v61 = 0;
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
    v58 = 0;
    v59.m128_u64[0] = 0;
    v59.m128_u64[1] = (unsigned __int64)&v58;
    v60 = &v58;
    v61 = 0;
LABEL_61:
    LODWORD(v19) = (_DWORD)v16;
    goto LABEL_23;
  }
LABEL_73:
  v58 = 0;
  v59.m128_u64[0] = 0;
  v59.m128_u64[1] = (unsigned __int64)&v58;
  v60 = &v58;
  v61 = 0;
  if ( v8 )
  {
    v16 = *(const char **)a2;
    goto LABEL_61;
  }
LABEL_22:
  v19 = haystack;
LABEL_23:
  if ( (unsigned __int8)sub_67830((__int64)a1, (__int64)v57, (int)v19, a4, a5, a6) != 1 && a3 )
  {
    v17 = nullptr;
    sub_67190(v59.m128_u64[0]);
    return v17;
  }
  v20 = (_QWORD *)a1[4];
  if ( !v20 )
  {
    v22 = v54;
    goto LABEL_45;
  }
  v21 = *(_QWORD *)(a2 + 8);
  v22 = v54;
  while ( 2 )
  {
    v28 = v20[5];
    if ( v21 )
    {
      v23 = *(const char **)a2;
      v24 = v20;
      v25 = haystack;
      if ( !v28 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( v28 )
    {
LABEL_36:
      v23 = haystack;
LABEL_28:
      v25 = (const char *)v20[4];
      v24 = v20;
LABEL_29:
      v26 = strcmp(v25, v23);
      v27 = (_QWORD *)v20[2];
      v20 = (_QWORD *)v20[3];
      if ( v26 >= 0 )
      {
        v22 = v24;
        v20 = v27;
      }
      if ( !v20 )
        goto LABEL_40;
      continue;
    }
    break;
  }
  while ( 1 )
  {
    v29 = v20[2];
    if ( !v29 )
      break;
    v22 = v20;
    v20 = (_QWORD *)v20[2];
    if ( *(_QWORD *)(v29 + 40) )
      goto LABEL_36;
  }
  v22 = v20;
LABEL_40:
  if ( v54 == v22 )
    goto LABEL_45;
  if ( v22[5] )
  {
    v30 = (const char *)v22[4];
    v31 = haystack;
    if ( v21 )
      goto LABEL_43;
LABEL_44:
    if ( strcmp(v31, v30) < 0 )
    {
LABEL_45:
      v32 = operator new(0x68u);
      v33 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(v32 + 32) = 0;
      v34 = v32;
      *(_OWORD *)(v32 + 40) = 0;
      if ( v33 )
      {
        v52 = (void *)sub_96030(v33);
        *(_QWORD *)(v34 + 32) = v52;
        v53 = *(const char **)a2;
        *(_QWORD *)(v34 + 48) = v33;
        memcpy(v52, v53, v33);
        *(_QWORD *)(v34 + 40) = v33;
      }
      *(_DWORD *)(v34 + 64) = 0;
      *(_QWORD *)(v34 + 72) = 0;
      *(_QWORD *)(v34 + 80) = v34 + 64;
      *(_QWORD *)(v34 + 88) = v34 + 64;
      *(_QWORD *)(v34 + 96) = 0;
      v35 = sub_68A80(a1 + 2, v22, v34 + 32);
      v22 = v35;
      if ( v36 )
      {
        if ( v54 != (_QWORD *)v36 && !v35 )
        {
          v37 = haystack;
          if ( *(_QWORD *)(v36 + 40) )
            v37 = *(const char **)(v36 + 32);
          v38 = haystack;
          if ( *(_QWORD *)(v34 + 40) )
            v38 = *(const char **)(v34 + 32);
          strcmp(v38, v37);
        }
        v22 = (_QWORD *)v34;
        std::_Rb_tree_insert_and_rebalance();
        ++a1[7];
      }
      else if ( v34 )
      {
        sub_67190(nullptr);
        v48 = *(void **)(v34 + 32);
        if ( v48 )
        {
          *(_QWORD *)(v34 + 40) = 0;
          j__free(v48);
        }
        operator delete((void *)v34, 0x68u);
      }
    }
  }
  else
  {
    v30 = haystack;
    if ( v21 )
    {
LABEL_43:
      v31 = *(const char **)a2;
      goto LABEL_44;
    }
  }
  v39 = (_QWORD *)v22[9];
  v40 = v59.m128_u64[0];
  v17 = v22 + 7;
  if ( v39 )
  {
    if ( v59.m128_u64[0] )
    {
      v41 = v22[10];
      v42 = v59.m128_u64[1];
      v59.m128_u64[0] = v22[9];
      v22[9] = v40;
      v59.m128_u64[1] = v41;
      v43 = (int *)v22[11];
      v22[10] = v42;
      v44 = v60;
      v60 = v43;
      v22[11] = v44;
      *(_QWORD *)(v40 + 8) = v22 + 8;
      *(_QWORD *)(v59.m128_u64[0] + 8) = &v58;
      v45 = v61;
      v39 = (_QWORD *)v59.m128_u64[0];
      v61 = v22[12];
      v22[12] = v45;
    }
    else
    {
      v49 = _mm_loadh_ps((const double *)v22 + 10);
      v58 = *((_DWORD *)v22 + 16);
      v50 = (int *)v22[11];
      v59 = v49;
      v60 = v50;
      v39[1] = &v58;
      v51 = v22[12];
      v22[9] = 0;
      v39 = (_QWORD *)v59.m128_u64[0];
      v61 = v51;
      v22[10] = v22 + 8;
      v22[11] = v22 + 8;
      v22[12] = 0;
    }
  }
  else if ( v59.m128_u64[0] )
  {
    v46 = _mm_loadh_ps((const double *)&v59.m128_u64[1]);
    *((_DWORD *)v22 + 16) = v58;
    v47 = v60;
    *(__m128 *)(v22 + 9) = v46;
    v22[11] = v47;
    *(_QWORD *)(v40 + 8) = v22 + 8;
    v59.m128_u64[0] = 0;
    v22[12] = v61;
    v61 = 0;
    v59.m128_u64[1] = (unsigned __int64)&v58;
    v60 = &v58;
  }
  sub_67190(v39);
  return v17;
}

