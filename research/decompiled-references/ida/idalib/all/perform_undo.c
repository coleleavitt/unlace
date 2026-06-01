__int64 __fastcall perform_undo(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  const char *v13; // rcx
  void *v14; // rbp
  bool v15; // zf
  __m128i v17; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v18[3] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(qword_2CCB598 + 1848);
  sub_5C9D00(*(_QWORD *)v6, a2, a3, a4, a5, a6);
  v7 = *(_QWORD **)(v6 + 32);
  if ( *(_QWORD **)(v6 + 8) == v7 )
    return 0;
  *(_DWORD *)(v6 + 116) = 2;
  *(_BYTE *)(v6 + 120) = 0;
  if ( v7 != (_QWORD *)(v6 + 8) && v7[6] )
  {
    sub_57E920((_QWORD *)v6, v7 + 5, 0, 0);
    v7 = *(_QWORD **)(v6 + 32);
  }
  v8 = v7[1];
  *(_QWORD *)(v6 + 32) = v8;
  v17 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(v8 + 16),
          (__m128i)(unsigned __int64)(*(_QWORD *)(v8 + 16) + *(_QWORD *)(v8 + 24)));
  unpack_dd(&v17);
  v9 = unpack_dd(&v17);
  if ( v9 )
  {
    v11 = v17.m128i_i64[0];
    v10 = v17.m128i_i64[0] + v9;
    if ( v17.m128i_i64[1] < v10 || v10 < v17.m128i_i64[0] || (v17.m128i_i64[0] += v9, !v11) )
    {
      if ( !under_debugger )
        interr(1677);
      BUG();
    }
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  v18[0] = v11;
  v18[1] = v10;
  v12 = unpack_ds(v18, v10, 1);
  v13 = haystack;
  v14 = (void *)v12;
  if ( v12 )
    v13 = (const char *)v12;
  sub_57E920((_QWORD *)v6, (unsigned __int64 *)(*(_QWORD *)(v6 + 32) + 16LL), 0, (__int64)v13);
  v15 = *(_QWORD *)(v6 + 24) == 0;
  *(_DWORD *)(v6 + 116) = 0;
  *(_BYTE *)(v6 + 120) = !v15;
  if ( v14 )
    qfree(v14);
  return 1;
}
