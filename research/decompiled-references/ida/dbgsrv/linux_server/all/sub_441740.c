/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441740
// Address: 0x0000000000441740

//----- (0000000000441740) ----------------------------------------------------
const char *__fastcall sub_441740(
        _QWORD *a1,
        const char *a2,
        __int64 *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rbx
  size_t v18; // r12
  const char *v19; // rax
  __int64 v20; // rdx
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rdi
  _QWORD *v24; // rcx
  const char *v25; // rbp
  void *v27; // rdi
  void *v28; // rax
  const char *v29; // rsi
  const char *v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // [rsp+0h] [rbp-38h]

  v13 = operator new(0x58u);
  v16 = *a3;
  *(_QWORD *)(v13 + 32) = 0;
  v17 = v13;
  *(_OWORD *)(v13 + 40) = 0;
  v18 = *(_QWORD *)(v16 + 8);
  if ( v18 )
  {
    v28 = sub_4814F0(*(_QWORD *)(v16 + 8));
    *(_QWORD *)(v17 + 32) = v28;
    *(_QWORD *)(v17 + 48) = v18;
    memcpy(v28, *(const void **)v16, v18);
    *(_QWORD *)(v17 + 40) = v18;
  }
  *(_BYTE *)(v17 + 56) = 2;
  *(_QWORD *)(v17 + 80) = 0;
  *(_OWORD *)(v17 + 64) = 0;
  v19 = sub_43DAF0(a1, a2, v17 + 32, v14, v15);
  if ( v20 )
  {
    v23 = 1;
    v24 = a1 + 1;
    if ( !v19 && (_QWORD *)v20 != v24 )
    {
      v29 = s1;
      if ( *(_QWORD *)(v20 + 40) )
        v29 = *(const char **)(v20 + 32);
      v30 = s1;
      if ( *(_QWORD *)(v17 + 40) )
        v30 = *(const char **)(v17 + 32);
      v32 = v20;
      v31 = strcmp(v30, v29);
      v24 = a1 + 1;
      v20 = v32;
      v23 = v31 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v23, v17, v20, v24);
    ++a1[5];
    return (const char *)v17;
  }
  v25 = v19;
  if ( !v17 )
    return v25;
  sub_441540(v17 + 56, 0.0, a5, a6, a7, v21, v22, a10, a11);
  v27 = *(void **)(v17 + 32);
  if ( v27 )
  {
    *(_QWORD *)(v17 + 40) = 0;
    j__free(v27);
  }
  operator delete((void *)v17, 0x58u);
  return v25;
}
// 4417A5: variable 'v14' is possibly undefined
// 4417A5: variable 'v15' is possibly undefined
// 4417AD: variable 'v20' is possibly undefined
// 4417F3: variable 'v21' is possibly undefined
// 4417F3: variable 'v22' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
