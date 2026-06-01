/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DCB0
// Address: 0x000000000043DCB0

//----- (000000000043DCB0) ----------------------------------------------------
const char *__fastcall sub_43DCB0(
        _QWORD *a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v11; // rbx
  const char *v12; // r15
  __int64 v13; // r13
  const char *v14; // rsi
  const char *v15; // rbp
  const char *v16; // rdi
  int v17; // eax
  const char *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  const char *v21; // rsi
  const char *v22; // rdi
  char *v24; // rax
  const char *v25; // r13
  char *v26; // rbp
  __m128i v27; // xmm0
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // r8
  const char *v31; // rax
  __int64 v32; // rdx
  double v33; // xmm4_8
  double v34; // xmm5_8
  unsigned __int64 v35; // xmm0_8
  const char *v36; // rsi
  unsigned int v37; // eax
  __int64 v38; // rdi
  void *v39; // rdi
  const char *v40; // [rsp+0h] [rbp-58h]
  __m128i v42[4]; // [rsp+10h] [rbp-48h] BYREF

  v11 = (const char *)(a1 + 1);
  v12 = (const char *)a1[2];
  v40 = (const char *)(a1 + 1);
  if ( !v12 )
  {
    v11 = (const char *)(a1 + 1);
    goto LABEL_21;
  }
  v13 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v19 = *((_QWORD *)v12 + 5);
    if ( !v13 )
      break;
    v14 = *(const char **)a2;
    v15 = v12;
    v16 = s1;
    if ( v19 )
      goto LABEL_4;
LABEL_5:
    v17 = strcmp(v16, v14);
    v18 = *((const char **)v12 + 2);
    v12 = *((const char **)v12 + 3);
    if ( v17 >= 0 )
    {
      v11 = v15;
      v12 = v18;
    }
    if ( !v12 )
      goto LABEL_14;
  }
  if ( v19 )
  {
LABEL_12:
    v14 = s1;
LABEL_4:
    v16 = *((const char **)v12 + 4);
    v15 = v12;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v20 = *((_QWORD *)v12 + 2);
    if ( !v20 )
      break;
    v11 = v12;
    v12 = *((const char **)v12 + 2);
    if ( *(_QWORD *)(v20 + 40) )
      goto LABEL_12;
  }
  v11 = v12;
LABEL_14:
  if ( v40 == v11 )
    goto LABEL_21;
  if ( *((_QWORD *)v11 + 5) )
  {
    v21 = *((const char **)v11 + 4);
    v22 = s1;
    if ( v13 )
      goto LABEL_17;
LABEL_18:
    if ( strcmp(v22, v21) >= 0 )
      return v11 + 56;
LABEL_21:
    v24 = (char *)operator new(0x58u);
    v25 = *(const char **)a2;
    v24[56] = 2;
    v26 = v24;
    v27 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = 0;
    *((_QWORD *)v24 + 4) = v25;
    *((_QWORD *)v24 + 10) = 0;
    *(_OWORD *)(a2 + 8) = 0;
    v28 = (__int64)(v24 + 56);
    *(__m128i *)(v24 + 40) = v27;
    *((_OWORD *)v24 + 4) = 0;
    v42[0] = v27;
    v31 = sub_43DAF0(a1, v11, (__int64)(v24 + 32), v29, v30);
    v11 = v31;
    if ( v32 )
    {
      if ( v40 == (const char *)v32 || (v35 = _mm_load_si128(v42).m128i_u64[0], v31) )
      {
        v38 = 1;
      }
      else
      {
        v36 = s1;
        if ( *(_QWORD *)(v32 + 40) )
          v36 = *(const char **)(v32 + 32);
        v42[0].m128i_i64[0] = v32;
        if ( !v35 )
          v25 = s1;
        v37 = strcmp(v25, v36);
        v32 = v42[0].m128i_i64[0];
        v38 = v37 >> 31;
      }
      v11 = v26;
      std::_Rb_tree_insert_and_rebalance(v38, v26, v32, v40);
      ++a1[5];
    }
    else if ( v26 )
    {
      sub_441540(v28, *(double *)v27.m128i_i64, (__m128)0LL, a5, a6, v33, v34, a9, a10);
      v39 = *((void **)v26 + 4);
      if ( v39 )
      {
        *((_QWORD *)v26 + 5) = 0;
        j__free(v39);
      }
      operator delete(v26, 0x58u);
    }
    return v11 + 56;
  }
  v21 = s1;
  if ( v13 )
  {
LABEL_17:
    v22 = *(const char **)a2;
    goto LABEL_18;
  }
  return v11 + 56;
}
// 43DDF7: variable 'v29' is possibly undefined
// 43DDF7: variable 'v30' is possibly undefined
// 43DE02: variable 'v32' is possibly undefined
// 43DE84: variable 'v33' is possibly undefined
// 43DE84: variable 'v34' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
