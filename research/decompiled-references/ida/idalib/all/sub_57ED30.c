__int64 __fastcall sub_57ED30(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  const char *v12; // rcx
  void *v13; // rbp
  bool v14; // zf
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v17[3] = __readfsqword(0x28u);
  sub_5C9D00(*(_QWORD *)a1, a2, a3, a4, a5, a6, v16.m128i_i32[0], v16.m128i_i32[2], v17[0]);
  v6 = *(_QWORD **)(a1 + 32);
  if ( *(_QWORD **)(a1 + 8) == v6 )
    return 0;
  *(_DWORD *)(a1 + 116) = 2;
  *(_BYTE *)(a1 + 120) = 0;
  if ( v6 != (_QWORD *)(a1 + 8) && v6[6] )
  {
    sub_57E920((_QWORD *)a1, v6 + 5, 0, 0);
    v6 = *(_QWORD **)(a1 + 32);
  }
  v7 = v6[1];
  *(_QWORD *)(a1 + 32) = v7;
  v16 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(v7 + 16),
          (__m128i)(unsigned __int64)(*(_QWORD *)(v7 + 16) + *(_QWORD *)(v7 + 24)));
  unpack_dd(&v16);
  v8 = unpack_dd(&v16);
  if ( v8 )
  {
    v10 = v16.m128i_i64[0];
    v9 = v16.m128i_i64[0] + v8;
    if ( v16.m128i_i64[1] < v9 || v9 < v16.m128i_i64[0] || (v16.m128i_i64[0] += v8, !v10) )
    {
      if ( !under_debugger )
        interr(1677);
      BUG();
    }
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  v17[0] = v10;
  v17[1] = v9;
  v11 = unpack_ds(v17, v9, 1);
  v12 = haystack;
  v13 = (void *)v11;
  if ( v11 )
    v12 = (const char *)v11;
  sub_57E920((_QWORD *)a1, (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 16LL), 0, (__int64)v12);
  v14 = *(_QWORD *)(a1 + 24) == 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 120) = !v14;
  if ( v13 )
    qfree(v13);
  return 1;
}
