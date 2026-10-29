__int64 __fastcall sub_2D0F00(__int64 a1, const char *a2)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  unsigned __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  bool v15; // zf
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int128 v19; // xmm0
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rdx
  size_t v23; // r15
  void *v24; // rax
  __int64 v25; // rax
  const void **v26; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 1032);
  if ( !v3 )
  {
    v4 = *(_QWORD *)(a1 + 1136);
    v5 = 0;
    if ( !v4 )
    {
      *(_OWORD *)(a1 + 1144) = 0;
      goto LABEL_10;
    }
    v6 = *(_QWORD *)(a1 + 1144);
    if ( !v6 )
      goto LABEL_8;
    goto LABEL_4;
  }
  v18 = 0;
  v19 = 0;
  v5 = qalloc_or_throw(24 * v3);
  v20 = v5;
  do
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(a1 + 1024);
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = v19;
      v22 = v21 + 24 * v18;
      v23 = *(_QWORD *)(v22 + 8);
      if ( v23 )
        break;
      ++v18;
      v20 += 24;
      if ( v3 == v18 )
        goto LABEL_26;
    }
    v26 = (const void **)v22;
    ++v18;
    v20 += 24;
    v24 = (void *)qalloc_or_throw(*(_QWORD *)(v22 + 8));
    *(_QWORD *)(v20 - 8) = v23;
    *(_QWORD *)(v20 - 24) = v24;
    a2 = (const char *)*v26;
    memcpy(v24, *v26, v23);
    *(_QWORD *)(v20 - 16) = v23;
    v19 = 0;
  }
  while ( v3 != v18 );
LABEL_26:
  v4 = *(_QWORD *)(a1 + 1136);
  if ( !v4 )
    goto LABEL_9;
  v6 = *(_QWORD *)(a1 + 1144);
  if ( v6 )
  {
LABEL_4:
    for ( i = 0; i != v6; ++i )
    {
      v8 = (__int64 *)(v4 + 24 * i);
      v9 = *v8;
      if ( *v8 )
      {
        v8[1] = 0;
        qfree(v9, a2);
        v4 = *(_QWORD *)(a1 + 1136);
      }
    }
  }
LABEL_8:
  *(_QWORD *)(a1 + 1144) = 0;
  qfree(v4, a2);
LABEL_9:
  v10 = *(int *)(a1 + 1160);
  *(_QWORD *)(a1 + 1136) = v5;
  *(__m128i *)(a1 + 1144) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v10 < v3 )
  {
    v12 = v10;
    while ( 1 )
    {
      v13 = (__int64 *)(v5 + 24 * v12);
      v14 = *v13;
      if ( *v13 )
      {
        v13[1] = 0;
        qfree(v14, a2);
      }
      if ( ++v12 >= v3 )
        break;
      v5 = *(_QWORD *)(a1 + 1136);
    }
    v15 = *(_BYTE *)(a1 + 1128) == 0;
    *(_QWORD *)(a1 + 1144) = v10;
    if ( !v15 && v10 > 1 )
    {
      v16 = (__int64 *)(*(_QWORD *)(a1 + 1136) + 8 * (3 * v10 - 3));
      v17 = *v16;
      if ( (unsigned __int64)v16[2] <= 3 )
      {
        v25 = qvector_reserve(v16, v17, 4, 1);
        *v16 = v25;
        v17 = v25;
      }
      v16[1] = 4;
      *(_WORD *)v17 = 11822;
      *(_BYTE *)(v17 + 2) = 46;
      *(_BYTE *)(*v16 + 3) = 0;
    }
  }
LABEL_10:
  sub_2D0770((__int64 *)(a1 + 592), (_QWORD *)(a1 + 1096));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 760LL))(a1);
}
