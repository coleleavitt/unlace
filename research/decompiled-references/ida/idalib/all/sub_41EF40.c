__int64 __fastcall sub_41EF40(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  __m128i *v16; // r8
  void *v17; // rcx
  __m128i *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __m128i *v21; // rax
  __m128i si128; // xmm1
  unsigned __int64 v23; // rdx
  __m128i *v24; // rax
  _BOOL8 v25; // rdi
  const __m128i *v26; // r15
  __int64 v27; // rcx
  _QWORD **v28; // rbp
  void *v29; // rdi
  __m128i *v31; // rdi
  __m128i *v32; // rax
  unsigned __int64 v33; // rbp
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  void *v36; // rax
  unsigned __int64 v37; // rbp
  unsigned __int64 v38; // r12
  unsigned __int64 v40; // [rsp+10h] [rbp-A8h]
  bool v41; // [rsp+10h] [rbp-A8h]
  __int64 v42; // [rsp+10h] [rbp-A8h]
  void *v43; // [rsp+18h] [rbp-A0h]
  __m128i *v44; // [rsp+18h] [rbp-A0h]
  __m128i *v45; // [rsp+18h] [rbp-A0h]
  __int64 *v46; // [rsp+20h] [rbp-98h]
  _QWORD *v47; // [rsp+20h] [rbp-98h]
  unsigned __int64 v48; // [rsp+28h] [rbp-90h]
  __int64 v51; // [rsp+40h] [rbp-78h] BYREF
  int v52; // [rsp+48h] [rbp-70h] BYREF
  void *v53; // [rsp+50h] [rbp-68h]
  const __m128i *v54; // [rsp+58h] [rbp-60h]
  int *v55; // [rsp+60h] [rbp-58h]
  __int64 v56; // [rsp+68h] [rbp-50h]
  unsigned __int64 v57; // [rsp+78h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v7 = (_QWORD *)a1[311];
  if ( v7 )
  {
    v8 = a1 + 310;
    v9 = (__int64)(a1 + 310);
    do
    {
      while ( 1 )
      {
        v10 = v7[2];
        v11 = v7[3];
        if ( v7[4] < a2 )
          break;
        v9 = (__int64)v7;
        v7 = (_QWORD *)v7[2];
        if ( !v10 )
          goto LABEL_6;
      }
      v7 = (_QWORD *)v7[3];
    }
    while ( v11 );
LABEL_6:
    if ( v8 != (_QWORD *)v9 )
    {
      v12 = a1[3];
      v52 = 0;
      v13 = *(_QWORD *)(v12 + 16) & (a4 + a2);
      v54 = (const __m128i *)&v52;
      v53 = nullptr;
      v55 = &v52;
      v56 = 0;
      v40 = v13;
      v14 = v9;
      do
      {
        v15 = *(_QWORD *)(v14 + 32);
        if ( v15 >= v40 )
          break;
        v16 = (__m128i *)&v52;
        v17 = (void *)(*(_QWORD *)(a1[3] + 16LL) & (v15 + a3 - a2));
        v18 = (__m128i *)v53;
        if ( !v53 )
          goto LABEL_16;
        do
        {
          while ( 1 )
          {
            v19 = v18[1].m128i_i64[0];
            v20 = v18[1].m128i_i64[1];
            if ( v18[2].m128i_i64[0] < (unsigned __int64)v17 )
              break;
            v16 = v18;
            v18 = (__m128i *)v18[1].m128i_i64[0];
            if ( !v19 )
              goto LABEL_14;
          }
          v18 = (__m128i *)v18[1].m128i_i64[1];
        }
        while ( v20 );
LABEL_14:
        if ( v16 == (__m128i *)&v52 || (unsigned __int64)v17 < v16[2].m128i_i64[0] )
        {
LABEL_16:
          v46 = (__int64 *)v16;
          v43 = v17;
          v21 = (__m128i *)operator new(0x50u);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
          v21[2].m128i_i64[1] = 0;
          v21[4].m128i_i64[0] = 0;
          v19 = (__int64)v46;
          v21[2].m128i_i64[0] = (__int64)v43;
          v23 = (unsigned __int64)v43;
          v21[4].m128i_i64[1] = 0;
          v21[3] = si128;
          v44 = v21;
          v48 = v23;
          v24 = (__m128i *)sub_41A180(&v51, v46, v23, v23);
          v16 = v24;
          if ( v20 )
          {
            v25 = &v52 == (int *)v20 || v24 || v48 < *(_QWORD *)(v20 + 32);
            v19 = (__int64)v44;
            std::_Rb_tree_insert_and_rebalance(v25, v44, v20, &v52);
            ++v56;
            v16 = v44;
          }
          else if ( v44 )
          {
            v19 = 80;
            v31 = v44;
            v45 = v24;
            operator delete(v31, 0x50u);
            v16 = v45;
          }
        }
        *(__m128i *)((char *)v16 + 40) = _mm_loadu_si128((const __m128i *)(v14 + 40));
        *(__m128i *)((char *)v16 + 56) = _mm_loadu_si128((const __m128i *)(v14 + 56));
        v16[4].m128i_i64[1] = *(_QWORD *)(v14 + 72);
        v14 = std::_Rb_tree_increment(v14, v19, v20, v17);
      }
      while ( v8 != (_QWORD *)v14 );
      if ( (unsigned __int8)sub_41ECC0(v9, v14, 167) )
      {
        if ( a1[312] == v9 && v8 == (_QWORD *)v14 )
        {
          sub_41A640((_QWORD *)a1[311]);
          a1[312] = v8;
          a1[311] = 0;
          a1[313] = v8;
          a1[314] = 0;
        }
        else
        {
          for ( ; v14 != v9; --a1[314] )
          {
            v42 = v9;
            v9 = std::_Rb_tree_increment(v9);
            v36 = (void *)std::_Rb_tree_rebalance_for_erase(v42, v8);
            operator delete(v36, 0x50u);
          }
        }
      }
      v26 = v54;
      if ( (unsigned __int8)sub_41ECC0((__int64)v54, (__int64)&v52, 168) && v26 != (const __m128i *)&v52 )
      {
        do
        {
          v33 = v26[2].m128i_u64[0];
          v34 = sub_41A180(a1 + 309, v8, v33, v27);
          if ( v35 )
          {
            v41 = v8 == v35 || v34 != nullptr;
            if ( !v41 )
              v41 = v33 < v35[4];
            v47 = v35;
            v32 = (__m128i *)operator new(0x50u);
            v32[2] = _mm_loadu_si128(v26 + 2);
            v32[3] = _mm_loadu_si128(v26 + 3);
            v32[4] = _mm_loadu_si128(v26 + 4);
            std::_Rb_tree_insert_and_rebalance(v41, v32, v47, v8);
            ++a1[314];
          }
          v26 = (const __m128i *)std::_Rb_tree_increment(v26);
        }
        while ( v26 != (const __m128i *)&v52 );
      }
      v28 = (_QWORD **)v53;
      if ( v53 )
      {
        do
        {
          sub_41A640(v28[3]);
          v29 = v28;
          v28 = (_QWORD **)v28[2];
          operator delete(v29, 0x50u);
        }
        while ( v28 );
      }
    }
  }
  if ( a5 )
    return v57 - __readfsqword(0x28u);
  v37 = sub_3BDD60(a1, a2);
  v38 = sub_3BDD60(a1, a3);
  sub_7BED70(a1 + 308, *a1, v37, v38, a4, 65);
  sub_7BED70(a1 + 308, *a1, v37, v38, a4, 67);
  return sub_7BEDC0(a1 + 308, *a1, v37, v38, a4, 83);
}
