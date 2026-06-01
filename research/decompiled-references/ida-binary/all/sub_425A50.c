unsigned __int64 __fastcall sub_425A50(__int64 a1, const char *a2)
{
  unsigned __int64 v2; // r14
  _BYTE *v3; // r12
  char *v4; // r13
  __int64 *v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rbx
  size_t v8; // r15
  size_t v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v17; // [rsp+0h] [rbp-78h]
  size_t v18; // [rsp+8h] [rbp-70h]
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  __m128i i; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v2 = 0;
  v3 = nullptr;
  v22 = __readfsqword(0x28u);
  v4 = (char *)a2;
  v20 = 0;
  for ( i = 0; ; v2 = i.m128i_u64[1] )
  {
    v11 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 > 0x2Fu )
      break;
    v5 = (__int64 *)(*((_QWORD *)v4 + 2) + v11);
    *(_DWORD *)v4 = v11 + 8;
    v6 = *v5;
    if ( !*v5 )
      goto LABEL_16;
LABEL_3:
    if ( *(_BYTE *)v6 != 47 )
    {
      v7 = i.m128i_i64[0];
      if ( i.m128i_i64[0] > 1uLL )
      {
        if ( v3[i.m128i_i64[0] - 2] == 47 )
        {
          v8 = strlen((const char *)v6);
LABEL_10:
          v9 = --v7 + v8;
          goto LABEL_11;
        }
        if ( v2 < i.m128i_i64[0] + 1 )
        {
          v20 = qvector_reserve(&v20, v3, i.m128i_i64[0] + 1, 1);
          v3 = (_BYTE *)v20;
        }
        i.m128i_i64[0] = v7 + 1;
        v3[v7 - 1] = 47;
        *(_BYTE *)(v20 + v7) = 0;
        v2 = i.m128i_u64[1];
        v7 = i.m128i_i64[0];
        v3 = (_BYTE *)v20;
      }
LABEL_9:
      v8 = strlen((const char *)v6);
      v9 = v8;
      if ( !v7 )
        goto LABEL_11;
      goto LABEL_10;
    }
    i.m128i_i64[0] = 0;
    if ( *(_BYTE *)(v6 + 1) != 47 )
    {
      if ( v2 <= 1 )
      {
        v20 = qvector_reserve(&v20, v3, 2, 1);
        v3 = (_BYTE *)v20;
      }
      i.m128i_i64[0] = 2;
      *v3 = 47;
      *(_BYTE *)(v20 + 1) = 0;
      v2 = i.m128i_u64[1];
      v7 = i.m128i_i64[0];
      v3 = (_BYTE *)v20;
      goto LABEL_9;
    }
    v7 = 0;
    v8 = strlen((const char *)v6);
    v9 = v8;
LABEL_11:
    v10 = v9 + 1;
    if ( v2 < v9 + 1 )
    {
      v17 = v9 + 1;
      v18 = v9;
      v20 = qvector_reserve(&v20, v3, v10, 1);
      v9 = v18;
      v3 = (_BYTE *)v20;
      v10 = v17;
    }
    i.m128i_i64[0] = v10;
    a2 = (const char *)v6;
    v3[v9] = 0;
    memmove((void *)(v20 + v7), (const void *)v6, v8);
    v3 = (_BYTE *)v20;
  }
  v12 = *((__int64 **)v4 + 1);
  *((_QWORD *)v4 + 1) = v12 + 1;
  v6 = *v12;
  if ( *v12 )
    goto LABEL_3;
LABEL_16:
  v13 = *(_QWORD *)a1;
  v14 = *(_QWORD *)(a1 + 16);
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64(&i), (__m128i)v2);
  *(_QWORD *)a1 = v3;
  *(__m128i *)(a1 + 8) = v15;
  v20 = v13;
  i.m128i_i64[1] = v14;
  if ( v13 )
  {
    i.m128i_i64[0] = 0;
    qfree(v13, a2);
  }
  return v22 - __readfsqword(0x28u);
}
