__int64 *__fastcall sub_12334C0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  size_t v4; // r13
  _QWORD *v5; // rax
  char v6; // dl
  size_t v7; // rbp
  const void *v8; // r10
  size_t v9; // r8
  signed __int64 v10; // rax
  _QWORD *v11; // r14
  int v12; // eax
  __int64 v13; // rbp
  unsigned int v14; // ebp
  __m128i *v15; // rax
  const void *v16; // rsi
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // rax
  size_t v22; // rbx
  size_t v23; // rdx
  unsigned int v24; // eax
  void *s1; // [rsp+0h] [rbp-58h]
  _QWORD *v26; // [rsp+8h] [rbp-50h]
  void *v27; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]

  v3 = (_QWORD *)a1[2];
  v26 = a1 + 1;
  if ( !v3 )
  {
    if ( a1 + 1 != (_QWORD *)a1[3] )
    {
      v3 = a1 + 1;
      v4 = *(_QWORD *)(a2 + 8);
      s1 = *(void **)a2;
      goto LABEL_29;
    }
    v11 = a1 + 1;
    goto LABEL_45;
  }
  v4 = *(_QWORD *)(a2 + 8);
  s1 = *(void **)a2;
  while ( 1 )
  {
    v7 = v3[5];
    v8 = (const void *)v3[4];
    v9 = v7;
    if ( v4 <= v7 )
      v9 = v4;
    if ( !v9 || (n = v9, v27 = (void *)v3[4], LODWORD(v10) = memcmp(s1, v27, v9), v8 = v27, v9 = n, !(_DWORD)v10) )
    {
      v10 = v4 - v7;
      if ( (__int64)(v4 - v7) > 0x7FFFFFFF )
        goto LABEL_3;
      if ( v10 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v10 < 0 )
      break;
LABEL_3:
    v5 = (_QWORD *)v3[3];
    v6 = 0;
    if ( !v5 )
      goto LABEL_11;
LABEL_4:
    v3 = v5;
  }
  v5 = (_QWORD *)v3[2];
  v6 = 1;
  if ( v5 )
    goto LABEL_4;
LABEL_11:
  v11 = v3;
  if ( !v6 )
    goto LABEL_12;
  if ( (_QWORD *)a1[3] == v3 )
  {
    v11 = v3;
    goto LABEL_19;
  }
LABEL_29:
  v11 = v3;
  v21 = std::_Rb_tree_decrement(v3);
  v7 = *(_QWORD *)(v21 + 40);
  v8 = *(const void **)(v21 + 32);
  v3 = (_QWORD *)v21;
  v9 = v7;
  if ( v4 <= v7 )
    v9 = v4;
LABEL_12:
  if ( v9 )
  {
    v12 = memcmp(v8, s1, v9);
    if ( v12 )
    {
LABEL_17:
      if ( v12 < 0 )
        goto LABEL_18;
      return v3;
    }
  }
  v13 = v7 - v4;
  if ( v13 > 0x7FFFFFFF )
    return v3;
  if ( v13 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v12 = v13;
    goto LABEL_17;
  }
LABEL_18:
  if ( !v11 )
    return nullptr;
LABEL_19:
  v14 = 1;
  if ( v11 == v26 )
    goto LABEL_20;
  v22 = v11[5];
  v23 = v22;
  if ( v4 <= v22 )
    v23 = v4;
  if ( v23 && (v24 = memcmp(*(const void **)a2, (const void *)v11[4], v23)) != 0 )
  {
LABEL_40:
    v14 = v24 >> 31;
  }
  else
  {
    v14 = 0;
    if ( (__int64)(v4 - v22) <= 0x7FFFFFFF )
    {
      if ( (__int64)(v4 - v22) >= (__int64)0xFFFFFFFF80000000LL )
      {
        v24 = v4 - v22;
        goto LABEL_40;
      }
LABEL_45:
      v14 = 1;
    }
  }
LABEL_20:
  v15 = (__m128i *)operator new(0x40u);
  v16 = *(const void **)a2;
  v17 = (__int64 *)v15;
  v15[2].m128i_i64[0] = (__int64)v15[3].m128i_i64;
  if ( v16 == (const void *)(a2 + 16) )
  {
    v15[3] = _mm_loadu_si128((const __m128i *)(a2 + 16));
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 16);
    v17[4] = (__int64)v16;
    v17[6] = v18;
  }
  v19 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = a2 + 16;
  *(_QWORD *)(a2 + 8) = 0;
  v17[5] = v19;
  *(_BYTE *)(a2 + 16) = 0;
  std::_Rb_tree_insert_and_rebalance(v14, v17, v11, v26);
  ++a1[5];
  return v17;
}
