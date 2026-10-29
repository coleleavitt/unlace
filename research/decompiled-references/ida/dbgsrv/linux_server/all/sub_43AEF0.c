/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43AEF0
// Address: 0x000000000043AEF0

//----- (000000000043AEF0) ----------------------------------------------------
__int64 __fastcall sub_43AEF0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const char *v11; // r12
  const char *v12; // r15
  __int64 v14; // r13
  const char *v15; // rsi
  const char *v16; // rbx
  const char *v17; // rdi
  int v18; // eax
  const char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  const char *v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 result; // rax
  const char *v26; // rdi
  size_t v27; // rbx
  unsigned __int64 v28; // r12
  void *v29; // rsi
  double v30; // xmm4_8
  double v31; // xmm5_8
  size_t v32; // rax
  unsigned __int64 v33; // rbx
  size_t v34; // r13
  const char *v35; // rsi
  int v36; // eax
  size_t v37; // rbx
  char *v38; // r12
  const char *v39; // r14
  const char *v40; // r15
  const char *v41; // r13
  const char *v42; // rbp
  const char *v43; // rsi
  const char *v44; // rdi
  int v45; // eax
  const char *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  void *v49; // rdi
  char *v50; // rdx
  __int64 v51; // r13
  __int64 i; // r12
  char *v53; // rax
  void *v54; // rdi
  void *v55; // rdi
  void *v56; // rdi
  __int64 v57; // r13
  __int64 j; // r12
  __int64 v59; // rax
  void *v60; // rax
  const char *v61; // rsi
  const char *v62; // rdi
  __int64 v63; // rbp
  __int64 v64; // rcx
  __int64 v65; // r8
  const char *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdi
  __int64 v69; // r12
  size_t v70; // r14
  _BYTE *v71; // rsi
  const char *v72; // rsi
  unsigned int v73; // eax
  const char *v74; // [rsp+0h] [rbp-78h]
  int v76; // [rsp+8h] [rbp-70h]
  __int64 v78; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v80; // [rsp+28h] [rbp-50h]
  unsigned __int64 v81; // [rsp+38h] [rbp-40h]

  v11 = (const char *)(a1 + 8);
  v12 = *(const char **)(a1 + 16);
  v81 = __readfsqword(0x28u);
  v74 = (const char *)(a1 + 8);
  if ( !v12 )
    goto LABEL_21;
  v14 = *(_QWORD *)(a3 + 8);
  while ( 1 )
  {
    v20 = *((_QWORD *)v12 + 5);
    if ( !v14 )
      break;
    v15 = *(const char **)a3;
    v16 = v12;
    v17 = s1;
    if ( v20 )
      goto LABEL_4;
LABEL_5:
    v18 = strcmp(v17, v15);
    v19 = *((const char **)v12 + 2);
    v12 = *((const char **)v12 + 3);
    if ( v18 >= 0 )
    {
      v11 = v16;
      v12 = v19;
    }
    if ( !v12 )
      goto LABEL_14;
  }
  if ( v20 )
  {
LABEL_12:
    v15 = s1;
LABEL_4:
    v17 = *((const char **)v12 + 4);
    v16 = v12;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v21 = *((_QWORD *)v12 + 2);
    if ( !v21 )
      break;
    v11 = v12;
    v12 = *((const char **)v12 + 2);
    if ( *(_QWORD *)(v21 + 40) )
      goto LABEL_12;
  }
  v11 = v12;
LABEL_14:
  if ( v74 != v11 )
  {
    if ( *((_QWORD *)v11 + 5) )
    {
      v22 = *((const char **)v11 + 4);
      v26 = s1;
      if ( v14 )
        goto LABEL_44;
    }
    else
    {
      v22 = s1;
      if ( !v14 )
        goto LABEL_17;
LABEL_44:
      v26 = *(const char **)a3;
    }
    if ( strcmp(v26, v22) >= 0 )
    {
LABEL_17:
      v23 = *((int *)v11 + 14);
      v24 = *(_QWORD *)(*a2 + 8 * v23);
      result = -1;
      if ( !*(_DWORD *)(v24 + 136) )
      {
        v49 = *(void **)(v24 + 32);
        if ( v49 )
        {
          *(_QWORD *)(v24 + 40) = 0;
          j__free(v49);
          *(_QWORD *)(v24 + 32) = 0;
          *(_QWORD *)(v24 + 48) = 0;
        }
        v50 = *(char **)(v24 + 88);
        if ( v50 )
        {
          v51 = *(_QWORD *)(v24 + 96);
          if ( v51 )
          {
            for ( i = 0; i != v51; ++i )
            {
              v53 = &v50[32 * i];
              v54 = *((void **)v53 + 1);
              if ( v54 )
              {
                *((_QWORD *)v53 + 2) = 0;
                j__free(v54);
                v50 = *(char **)(v24 + 88);
              }
            }
          }
          *(_QWORD *)(v24 + 96) = 0;
          j__free(v50);
          *(_QWORD *)(v24 + 88) = 0;
          *(_QWORD *)(v24 + 104) = 0;
        }
        v55 = *(void **)(v24 + 112);
        if ( v55 )
        {
          *(_QWORD *)(v24 + 120) = 0;
          j__free(v55);
          *(_QWORD *)(v24 + 112) = 0;
          *(_QWORD *)(v24 + 128) = 0;
        }
        v56 = *(void **)(v24 + 64);
        if ( v56 )
        {
          v57 = *(_QWORD *)(v24 + 72);
          if ( v57 )
          {
            for ( j = 0; j != v57; ++j )
            {
              v59 = j;
              sub_441540((__int64)v56 + 32 * v59, a4, a5, a6, a7, a8, a9, a10, a11);
              v56 = *(void **)(v24 + 64);
            }
          }
          *(_QWORD *)(v24 + 72) = 0;
          j__free(v56);
          *(_QWORD *)(v24 + 64) = 0;
          *(_QWORD *)(v24 + 80) = 0;
        }
        *(_DWORD *)(v24 + 24) = 0;
        *(_DWORD *)(v24 + 136) = -1;
        return v23;
      }
      return result;
    }
  }
LABEL_21:
  ptr = nullptr;
  v80 = 0;
  v27 = *(_QWORD *)(a1 + 64);
  if ( !v27 )
  {
    v28 = 2;
    v29 = nullptr;
    goto LABEL_23;
  }
  v28 = v27 + 1;
  v60 = sub_4814F0(*(_QWORD *)(a1 + 64));
  *((_QWORD *)&v80 + 1) = v27;
  ptr = v60;
  memcpy(v60, *(const void **)(a1 + 56), v27);
  *(_QWORD *)&v80 = v27;
  v29 = ptr;
  v32 = v27 - 1;
  if ( v27 < v27 + 1 )
  {
    --v27;
LABEL_23:
    ptr = sub_481540((__int64)&ptr, v29, v28, 1u);
    v29 = ptr;
    v32 = v27;
  }
  *(_QWORD *)&v80 = v28;
  *((_BYTE *)v29 + v32) = 46;
  *((_BYTE *)ptr + v32 + 1) = 0;
  v33 = *(_QWORD *)(a3 + 8);
  if ( v33 )
  {
    v34 = v33 - 1;
    if ( v33 != 1 )
    {
      v69 = v80;
      v70 = v33 - 1;
      if ( (_QWORD)v80 )
      {
        v69 = v80 - 1;
        v70 = v34 + v80 - 1;
        v33 += v80 - 1;
      }
      v71 = ptr;
      if ( *((_QWORD *)&v80 + 1) < v33 )
      {
        ptr = sub_481540((__int64)&ptr, ptr, v33, 1u);
        v71 = ptr;
      }
      *(_QWORD *)&v80 = v33;
      v71[v70] = 0;
      memcpy((char *)ptr + v69, *(const void **)a3, v34);
    }
  }
  v35 = s1;
  if ( (_QWORD)v80 )
    v35 = (const char *)ptr;
  v36 = sub_4396E0(a2, v35, 0.0, a5, a6, a7, v30, v31, a10, a11);
  v37 = *(_QWORD *)(a3 + 8);
  v76 = v36;
  v38 = nullptr;
  if ( v37 )
  {
    v38 = (char *)sub_4814F0(v37);
    memcpy(v38, *(const void **)a3, v37);
  }
  v39 = *(const char **)(a1 + 16);
  if ( !v39 )
  {
    v41 = v74;
    goto LABEL_69;
  }
  v40 = s1;
  v41 = v74;
  if ( v37 )
    v40 = v38;
  while ( 2 )
  {
    v47 = *((_QWORD *)v39 + 5);
    if ( v37 )
    {
      if ( !v47 )
      {
        v42 = v39;
        v43 = v38;
        v44 = s1;
        goto LABEL_36;
      }
LABEL_43:
      v44 = *((const char **)v39 + 4);
      v42 = v39;
      v43 = v40;
LABEL_36:
      v45 = strcmp(v44, v43);
      v46 = *((const char **)v39 + 2);
      v39 = *((const char **)v39 + 3);
      if ( v45 >= 0 )
      {
        v41 = v42;
        v39 = v46;
      }
      if ( !v39 )
        goto LABEL_65;
      continue;
    }
    break;
  }
  if ( v47 )
    goto LABEL_43;
  while ( 1 )
  {
    v48 = *((_QWORD *)v39 + 2);
    if ( !v48 )
      break;
    v41 = v39;
    v39 = *((const char **)v39 + 2);
    if ( *(_QWORD *)(v48 + 40) )
      goto LABEL_43;
  }
  v41 = v39;
LABEL_65:
  if ( v74 == v41 )
    goto LABEL_69;
  if ( *((_QWORD *)v41 + 5) )
  {
    v61 = *((const char **)v41 + 4);
    v62 = s1;
    if ( !v37 )
      goto LABEL_68;
    goto LABEL_75;
  }
  v61 = s1;
  if ( v37 )
  {
LABEL_75:
    v62 = v38;
LABEL_68:
    if ( strcmp(v62, v61) < 0 )
    {
LABEL_69:
      v63 = operator new(0x40u);
      *(_QWORD *)(v63 + 32) = v38;
      *(__m128i *)(v63 + 40) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
      *(_DWORD *)(v63 + 56) = v76;
      v66 = sub_43AD30((_QWORD *)a1, v41, v63 + 32, v64, v65);
      if ( v67 )
      {
        if ( v66 || v74 == (const char *)v67 )
        {
          v68 = 1;
        }
        else
        {
          v72 = s1;
          if ( *(_QWORD *)(v67 + 40) )
            v72 = *(const char **)(v67 + 32);
          v78 = v67;
          if ( !v37 )
            v38 = (char *)s1;
          v73 = strcmp(v38, v72);
          v67 = v78;
          v68 = v73 >> 31;
        }
        std::_Rb_tree_insert_and_rebalance(v68, v63, v67, v74);
        ++*(_QWORD *)(a1 + 40);
      }
      else if ( v63 )
      {
        if ( v38 )
        {
          *(_QWORD *)(v63 + 40) = 0;
          j__free(v38);
        }
        operator delete((void *)v63, 0x40u);
      }
      goto LABEL_78;
    }
  }
  if ( v38 )
    j__free(v38);
LABEL_78:
  if ( ptr )
  {
    *(_QWORD *)&v80 = 0;
    j__free(ptr);
  }
  return v76;
}
// 43B0B9: variable 'v30' is possibly undefined
// 43B0B9: variable 'v31' is possibly undefined
// 43B25E: variable 'a8' is possibly undefined
// 43B25E: variable 'a9' is possibly undefined
// 43B34F: variable 'v64' is possibly undefined
// 43B34F: variable 'v65' is possibly undefined
// 43B357: variable 'v67' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
