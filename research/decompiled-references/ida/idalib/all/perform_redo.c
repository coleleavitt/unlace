__int64 __fastcall perform_redo(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rbx
  unsigned __int64 *v7; // r13
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  void *v10; // rdi
  unsigned __int64 *v11; // r12
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  char *v15; // r13
  const char *v16; // r14
  __int64 v17; // rax
  bool v18; // zf
  __m128i v20; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v21[3] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(qword_2CCB598 + 1848);
  sub_5C9D00(*(_QWORD *)v6, a2, a3, a4, a5, a6);
  v7 = *(unsigned __int64 **)(v6 + 32);
  if ( (unsigned __int64 *)(v6 + 8) == v7 )
    return 0;
  *(_DWORD *)(v6 + 116) = 2;
  *(_BYTE *)(v6 + 120) = 0;
  if ( v7[6] )
  {
    sub_57E920((_QWORD *)v6, v7 + 5, 0, 0);
    v8 = v7[6];
    v9 = *(_QWORD *)(v6 + 104);
    if ( v9 < v8 )
      sub_57E1C0();
    *(_QWORD *)(v6 + 104) = v9 - v8;
    v10 = (void *)v7[5];
    if ( v10 )
    {
      v7[6] = 0;
      qfree(v10);
      v7[5] = 0;
      v7[7] = 0;
    }
    v7 = *(unsigned __int64 **)(v6 + 32);
  }
  v11 = v7 + 2;
  v20 = _mm_unpacklo_epi64((__m128i)v7[2], (__m128i)(v7[2] + v7[3]));
  unpack_dd(&v20);
  v12 = unpack_dd(&v20);
  if ( v12 )
  {
    v14 = v20.m128i_i64[0];
    v13 = v20.m128i_i64[0] + v12;
    if ( v20.m128i_i64[1] < v13 || v13 < v20.m128i_i64[0] || (v20.m128i_i64[0] += v12, !v14) )
    {
      if ( !under_debugger )
        interr(1677);
      BUG();
    }
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  v21[0] = v14;
  v21[1] = v13;
  v15 = (char *)unpack_ds(v21, v13, 1);
  v16 = v15;
  v17 = **(_QWORD **)(v6 + 32);
  if ( !v15 )
    v16 = haystack;
  *(_QWORD *)(v6 + 32) = v17;
  if ( v6 + 8 == v17 )
  {
    sub_57E920((_QWORD *)v6, v11, 1u, (__int64)v16);
  }
  else
  {
    sub_57E920((_QWORD *)v6, v11, 1u, 0);
    sub_57E920((_QWORD *)v6, (unsigned __int64 *)(*(_QWORD *)(v6 + 32) + 40LL), 1u, (__int64)v16);
  }
  v18 = *(_QWORD *)(v6 + 24) == 0;
  *(_DWORD *)(v6 + 116) = 0;
  *(_BYTE *)(v6 + 120) = !v18;
  if ( v15 )
    qfree(v15);
  return 1;
}
