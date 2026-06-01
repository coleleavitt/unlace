/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41AA70
// Address: 0x000000000041AA70

//----- (000000000041AA70) ----------------------------------------------------
__m128i *__fastcall sub_41AA70(_QWORD *a1, __m128i *a2, __int64 a3)
{
  __m128i *v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  __m128i *v10; // rbp
  __m128i v11; // xmm2
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __m128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __m128i v20; // xmm0
  void *v21; // r14
  void *v22; // r15
  __m128i v23; // xmm1
  __int32 v24; // eax
  __m128i *v25; // rbx
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __m128i *v28; // rax
  _BOOL8 v29; // rdi
  __m128i *v30; // r12
  __int64 v31; // rbx
  _QWORD *v32; // r13
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // [rsp+0h] [rbp-48h]
  unsigned __int64 v40; // [rsp+0h] [rbp-48h]
  unsigned __int64 v41; // [rsp+0h] [rbp-48h]
  unsigned __int64 v42; // [rsp+8h] [rbp-40h]

  v5 = (__m128i *)operator new(0xD0u);
  v8 = _mm_loadu_si128((const __m128i *)a3);
  v9 = _mm_loadu_si128((const __m128i *)(a3 + 32));
  v10 = v5;
  v11 = _mm_loadu_si128((const __m128i *)(a3 + 56));
  v5[2] = v8;
  v12 = *(_QWORD *)(a3 + 16);
  v10[4] = v9;
  v10[3].m128i_i64[0] = v12;
  v13 = *(_QWORD *)(a3 + 24);
  *(_OWORD *)(a3 + 32) = 0;
  v10[3].m128i_i64[1] = v13;
  v14 = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 24) = 0;
  v10[5].m128i_i64[0] = v14;
  v15 = *(_QWORD *)(a3 + 88);
  *(_QWORD *)(a3 + 48) = 0;
  *(__m128i *)((char *)v10 + 88) = v11;
  *(_OWORD *)(a3 + 56) = 0;
  if ( v15 )
  {
    v16 = _mm_loadh_ps((const double *)(a3 + 96));
    v10[7].m128i_i32[0] = *(_DWORD *)(a3 + 80);
    v17 = *(_QWORD *)(a3 + 104);
    *(__m128 *)((char *)v10 + 120) = v16;
    v10[8].m128i_i64[1] = v17;
    v6 = (unsigned __int64)&v10[7];
    *(_QWORD *)(v15 + 8) = v10 + 7;
    v18 = *(_QWORD *)(a3 + 112);
    *(_QWORD *)(a3 + 88) = 0;
    v19 = v10[2].m128i_u64[0];
    v10[9].m128i_i64[0] = v18;
    *(_QWORD *)(a3 + 96) = a3 + 80;
    *(_QWORD *)(a3 + 104) = a3 + 80;
    *(_QWORD *)(a3 + 112) = 0;
  }
  else
  {
    v19 = v8.m128i_i64[0];
    v10[7].m128i_i32[0] = 0;
    v10[7].m128i_i64[1] = 0;
    v10[8].m128i_i64[0] = (__int64)v10[7].m128i_i64;
    v10[8].m128i_i64[1] = (__int64)v10[7].m128i_i64;
    v10[9].m128i_i64[0] = 0;
  }
  v20 = _mm_loadu_si128((const __m128i *)(a3 + 128));
  v21 = *(void **)(a3 + 120);
  *(_QWORD *)(a3 + 120) = 0;
  v22 = *(void **)(a3 + 144);
  v23 = _mm_loadu_si128((const __m128i *)(a3 + 152));
  *(_QWORD *)(a3 + 144) = 0;
  v24 = *(_DWORD *)(a3 + 168);
  v10[10] = v20;
  *(_OWORD *)(a3 + 128) = 0;
  *(_OWORD *)(a3 + 152) = 0;
  v25 = a2;
  v10[9].m128i_i64[1] = (__int64)v21;
  v10[11].m128i_i64[0] = (__int64)v22;
  v10[12].m128i_i32[2] = v24;
  *(__m128i *)((char *)v10 + 184) = v23;
  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( a1[5] )
    {
      v6 = a1[4];
      v25 = nullptr;
      if ( *(_QWORD *)(v6 + 32) < v19 )
        goto LABEL_8;
    }
LABEL_7:
    v40 = v19;
    v28 = (__m128i *)sub_40DC80((__int64)a1, v19, v6, v19, v7);
    v19 = v40;
    v25 = v28;
    goto LABEL_8;
  }
  v26 = a2[2].m128i_u64[0];
  if ( v19 < v26 )
  {
    v6 = (unsigned __int64)v25;
    if ( (__m128i *)a1[3] == v25 )
      goto LABEL_8;
    v39 = v19;
    v27 = std::_Rb_tree_decrement(v25, v26, v25, v19, v7);
    v19 = v39;
    v6 = v27;
    if ( *(_QWORD *)(v27 + 32) >= v39 )
      goto LABEL_7;
    if ( *(_QWORD *)(v27 + 24) )
      v6 = (unsigned __int64)v25;
    else
      v25 = nullptr;
LABEL_8:
    if ( v6 )
    {
      if ( a1 + 1 == (_QWORD *)v6 || v25 )
      {
        v29 = 1;
LABEL_12:
        v30 = v10;
        std::_Rb_tree_insert_and_rebalance(v29, v10, v6, a1 + 1);
        ++a1[5];
        return v30;
      }
      goto LABEL_40;
    }
    goto LABEL_14;
  }
  v41 = v25[2].m128i_u64[0];
  if ( v26 >= v19 )
    goto LABEL_14;
  if ( (__m128i *)a1[4] != v25 )
  {
    v42 = v19;
    v37 = std::_Rb_tree_increment(v25);
    v19 = v42;
    v6 = v37;
    if ( v42 < *(_QWORD *)(v37 + 32) )
    {
      v38 = v41;
      if ( !v25[1].m128i_i64[1] )
      {
        v6 = (unsigned __int64)v25;
        if ( v25 )
          goto LABEL_41;
        goto LABEL_14;
      }
      v25 = (__m128i *)v37;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v6 = (unsigned __int64)v25;
  if ( v25 )
  {
LABEL_40:
    v38 = *(_QWORD *)(v6 + 32);
LABEL_41:
    v29 = v19 < v38;
    goto LABEL_12;
  }
LABEL_14:
  v30 = v25;
  if ( v10 )
  {
    if ( v22 )
    {
      v10[11].m128i_i64[1] = 0;
      j__free(v22);
      v21 = (void *)v10[9].m128i_i64[1];
    }
    if ( v21 )
    {
      v10[10].m128i_i64[0] = 0;
      j__free(v21);
    }
    v31 = v10[7].m128i_i64[1];
    while ( v31 )
    {
      v32 = (_QWORD *)v31;
      sub_40F970(*(_QWORD **)(v31 + 24));
      v33 = *(void **)(v31 + 40);
      v31 = *(_QWORD *)(v31 + 16);
      if ( v33 )
      {
        v32[6] = 0;
        j__free(v33);
      }
      operator delete(v32, 0x40u);
    }
    v34 = (void *)v10[5].m128i_i64[0];
    if ( v34 )
    {
      v10[5].m128i_i64[1] = 0;
      j__free(v34);
    }
    v35 = (void *)v10[3].m128i_i64[1];
    if ( v35 )
    {
      v10[4].m128i_i64[0] = 0;
      j__free(v35);
    }
    operator delete(v10, 0xD0u);
  }
  return v30;
}
// 41ABD1: variable 'v7' is possibly undefined
// 41ABF1: variable 'v6' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 405650: using guessed type __int64 __fastcall std::_Rb_tree_decrement(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
