unsigned __int64 *__fastcall sub_5C7FE0(void **a1, int a2, unsigned __int64 a3, char a4)
{
  __m128i *v7; // r12
  __int64 v8; // rdx
  unsigned __int64 *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // r12
  unsigned __int64 *v14; // rax

  v7 = *(__m128i **)(switch_dbctx(a2) + 1672);
  if ( !a4 )
  {
    v14 = sub_505D70((__int64)&v7[106].m128i_i64[1], a3);
    v9 = v14;
    if ( v14 )
    {
      if ( *((char *)v14 + 17) >= 0 )
        goto LABEL_16;
      v9 = sub_505D70((__int64)&v7[106].m128i_i64[1], v14[3]);
      if ( v9 )
        goto LABEL_3;
    }
    return nullptr;
  }
  v9 = sub_505D70((__int64)&v7[106].m128i_i64[1], a3);
  if ( !v9 )
    return nullptr;
LABEL_3:
  if ( *((char *)v9 + 17) >= 0 )
  {
LABEL_16:
    sub_5B8DA0(v7, (__int64)v9);
    sub_674A10(v7, v9);
    sub_63F420(v7, v9);
    sub_673D30(v7, v9);
    sub_5C7820(v7, (__int64)v9, 1);
    goto LABEL_5;
  }
  sub_5C7D50(v7->m128i_i64, (__int64)v9, v8);
LABEL_5:
  if ( a1 )
  {
    v10 = *a1;
    if ( *a1 )
    {
      a1[1] = nullptr;
      qfree(v10);
      *a1 = nullptr;
      a1[2] = nullptr;
    }
    v11 = a1[3];
    if ( v11 )
    {
      a1[4] = nullptr;
      qfree(v11);
      a1[3] = nullptr;
      a1[5] = nullptr;
    }
    v12 = qword_2CCB598;
    sub_504090((__int64)a1, (_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 1704LL), v9, 0);
    sub_504090((__int64)(a1 + 3), (_QWORD *)(*(_QWORD *)(v12 + 1672) + 1704LL), v9, 1);
  }
  return v9;
}
