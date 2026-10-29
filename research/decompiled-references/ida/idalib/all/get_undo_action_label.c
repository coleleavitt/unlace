__int64 __fastcall get_undo_action_label(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v6; // eax
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  void *v9; // rax
  __int64 v10; // rax
  void *v11; // rdi
  const char *v12; // rbp
  size_t v13; // rax
  __m128i v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v1 = 0;
  v17 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(qword_2CCB598 + 1848);
  v3 = *(_QWORD *)(v2 + 32);
  if ( *(_QWORD *)(v2 + 8) != v3 )
  {
    v14 = _mm_unpacklo_epi64(
            (__m128i)*(unsigned __int64 *)(*(_QWORD *)(v3 + 8) + 16LL),
            (__m128i)(unsigned __int64)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL) + *(_QWORD *)(*(_QWORD *)(v3 + 8) + 24LL)));
    unpack_dd(&v14);
    v6 = unpack_dd(&v14);
    if ( v6 )
    {
      v8 = v14.m128i_i64[0];
      v7 = v14.m128i_i64[0] + v6;
      if ( v14.m128i_i64[1] < v7 || v7 < v14.m128i_i64[0] || (v14.m128i_i64[0] += v6, !v8) )
      {
        if ( !under_debugger )
          interr(1677);
        BUG();
      }
    }
    else
    {
      v7 = 0;
      v8 = 0;
    }
    v15 = v8;
    v16 = v7;
    v9 = (void *)unpack_ds(&v15, v7, 1);
    qfree(v9);
    v10 = unpack_ds(&v15, v16, 1);
    v11 = *(void **)a1;
    v12 = (const char *)v10;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v11);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    if ( v12 )
    {
      v13 = strlen(v12);
      *(_QWORD *)a1 = v12;
      *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64((__m128i)(v13 + 1), (__m128i)(v13 + 1));
    }
    return 1;
  }
  return v1;
}
