__m128i *__fastcall sub_130CC20(_QWORD *a1, const __m128i *a2)
{
  _QWORD *v3; // rbx
  size_t v4; // r15
  void *v5; // r10
  _QWORD *v6; // rax
  char v7; // dl
  size_t v8; // r14
  const void *v9; // r8
  size_t v10; // rcx
  signed __int64 v11; // rax
  _QWORD *v12; // r13
  int v13; // eax
  __int64 v14; // r14
  _BOOL4 v15; // r14d
  __m128i *v16; // rax
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  __m128i *v19; // rbx
  const __m128i *v20; // rdx
  __int64 v21; // rdx
  __int64 v23; // rax
  _QWORD *v24; // [rsp+0h] [rbp-58h]
  void *s2; // [rsp+8h] [rbp-50h]
  void *s1; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]

  v3 = (_QWORD *)a1[2];
  v24 = a1 + 1;
  if ( !v3 )
  {
    v3 = a1 + 1;
    goto LABEL_29;
  }
  v4 = a2->m128i_u64[1];
  v5 = (void *)a2->m128i_i64[0];
  while ( 1 )
  {
    v8 = v3[5];
    v9 = (const void *)v3[4];
    v10 = v8;
    if ( v4 <= v8 )
      v10 = v4;
    if ( !v10
      || (n = v10,
          s1 = (void *)v3[4],
          s2 = v5,
          LODWORD(v11) = memcmp(v5, s1, v10),
          v5 = s2,
          v9 = s1,
          v10 = n,
          !(_DWORD)v11) )
    {
      v11 = v4 - v8;
      if ( (__int64)(v4 - v8) > 0x7FFFFFFF )
        goto LABEL_3;
      if ( v11 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v11 <= 0 )
      break;
LABEL_3:
    v6 = (_QWORD *)v3[2];
    v7 = 1;
    if ( !v6 )
      goto LABEL_11;
LABEL_4:
    v3 = v6;
  }
  v6 = (_QWORD *)v3[3];
  v7 = 0;
  if ( v6 )
    goto LABEL_4;
LABEL_11:
  v12 = v3;
  if ( !v7 )
    goto LABEL_12;
LABEL_29:
  if ( (_QWORD *)a1[3] == v3 )
  {
    v12 = v3;
    v15 = 1;
    if ( v24 == v3 )
      goto LABEL_20;
    goto LABEL_34;
  }
  v12 = v3;
  v23 = std::_Rb_tree_decrement(v3);
  v4 = a2->m128i_u64[1];
  v5 = (void *)a2->m128i_i64[0];
  v8 = *(_QWORD *)(v23 + 40);
  v9 = *(const void **)(v23 + 32);
  v3 = (_QWORD *)v23;
  v10 = v4;
  if ( v8 <= v4 )
    v10 = *(_QWORD *)(v23 + 40);
LABEL_12:
  if ( v10 )
  {
    v13 = memcmp(v9, v5, v10);
    if ( v13 )
    {
LABEL_17:
      if ( v13 <= 0 )
        return (__m128i *)v3;
LABEL_18:
      if ( !v12 )
        return nullptr;
      v15 = 1;
      if ( v24 == v12 )
        goto LABEL_20;
LABEL_34:
      v15 = sub_9C4B50((__int64)a2, (__int64)(v12 + 4)) > 0;
LABEL_20:
      v16 = (__m128i *)operator new(0x60u);
      v17 = (_BYTE *)a2->m128i_i64[0];
      v18 = a2->m128i_i64[1];
      v19 = v16;
      v16[2].m128i_i64[0] = (__int64)v16[3].m128i_i64;
      sub_12FAA20((__m128i *)v16[2].m128i_i64, v17, (__int64)&v17[v18]);
      v20 = (const __m128i *)a2[2].m128i_i64[0];
      v19[4].m128i_i64[0] = (__int64)v19[5].m128i_i64;
      if ( v20 == &a2[3] )
      {
        v19[5] = _mm_loadu_si128(a2 + 3);
      }
      else
      {
        v19[4].m128i_i64[0] = (__int64)v20;
        v19[5].m128i_i64[0] = a2[3].m128i_i64[0];
      }
      v21 = a2[2].m128i_i64[1];
      a2[2].m128i_i64[0] = (__int64)a2[3].m128i_i64;
      a2[2].m128i_i64[1] = 0;
      v19[4].m128i_i64[1] = v21;
      a2[3].m128i_i8[0] = 0;
      std::_Rb_tree_insert_and_rebalance(v15, v19, v12, v24);
      ++a1[5];
      return v19;
    }
  }
  v14 = v8 - v4;
  if ( v14 > 0x7FFFFFFF )
    goto LABEL_18;
  if ( v14 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v13 = v14;
    goto LABEL_17;
  }
  return (__m128i *)v3;
}
