__int64 __fastcall sub_681DC0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  const char *v4; // rdx
  __m128i v5; // xmm0
  unsigned __int64 *i; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r15
  const char *v11; // rdx
  const char *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int8 v17; // [rsp+Fh] [rbp-89h]
  __int64 v18; // [rsp+18h] [rbp-80h] BYREF
  void *v19; // [rsp+20h] [rbp-78h] BYREF
  __int128 v20; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-60h] BYREF
  __int128 v22; // [rsp+40h] [rbp-58h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  netnode_check(&v18, "$ segs", 0, 0);
  if ( v18 == -1 )
  {
    v13 = a2[1];
    v14 = *a2;
    if ( a2[2] < (unsigned __int64)(v13 + 1) )
    {
      v16 = qvector_reserve(a2, v14, v13 + 1, 24);
      v13 = a2[1];
      *a2 = v16;
      v14 = v16;
    }
    v15 = v14 + 24 * v13;
    *(_QWORD *)v15 = 0;
    *(_OWORD *)(v15 + 8) = 0;
    ++a2[1];
    sub_35A790((char **)v15);
    return 0;
  }
  else
  {
    v3 = *(_QWORD *)a1;
    v4 = haystack;
    v5 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B37458), (__m128i)(unsigned __int64)sub_67DB20);
    *(__m128i *)(a1 + 1680) = v5;
    if ( *(_QWORD *)(v3 + 32) )
      v4 = *(const char **)(v3 + 24);
    sub_508110(
      *(_QWORD **)(a1 + 1672),
      a1 + 1624,
      v4,
      (__int64)"$ segs",
      192,
      *(double *)v5.m128i_i64,
      COERCE_DOUBLE(sub_67DB20));
    sub_504B40(a1 + 1624);
    v17 = sub_514250((__int64 *)a1);
    if ( v17 )
    {
      for ( i = sub_506150(a1 + 1624); i; i = sub_505EB0(a1 + 1624, *i) )
      {
        v8 = qword_2CCB598;
        v20 = 0;
        v9 = *(_QWORD *)(qword_2CCB598 + 1672);
        v22 = 0;
        v19 = nullptr;
        ptr = nullptr;
        sub_504090((__int64)&v19, (_QWORD *)(v9 + 1624), i, 0);
        sub_504090((__int64)&ptr, (_QWORD *)(*(_QWORD *)(v8 + 1672) + 1624LL), i, 1);
        sub_3F3C10((__int64)&v19);
        v10 = qword_2CCB598;
        v11 = haystack;
        if ( (_QWORD)v20 )
          v11 = (const char *)v19;
        sub_5083D0((__int64 *)(*(_QWORD *)(qword_2CCB598 + 1672) + 1624LL), i, v11, 0);
        v12 = haystack;
        if ( (_QWORD)v22 )
          v12 = (const char *)ptr;
        sub_5083D0((__int64 *)(*(_QWORD *)(v10 + 1672) + 1624LL), i, v12, 1u);
        if ( ptr )
        {
          *(_QWORD *)&v22 = 0;
          qfree(ptr);
        }
        if ( v19 )
        {
          *(_QWORD *)&v20 = 0;
          qfree(v19);
        }
      }
    }
    else
    {
      return 0;
    }
  }
  return v17;
}
