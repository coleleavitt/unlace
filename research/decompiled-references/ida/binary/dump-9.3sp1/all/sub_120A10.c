unsigned __int64 __fastcall sub_120A10(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int32 a6)
{
  __int64 v8; // rsi
  __int64 v11; // rax
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i *v15; // rax
  __m128i v16; // xmm0
  __m128i v17[3]; // [rsp+8h] [rbp-30h] BYREF

  v8 = (unsigned int)a4;
  v11 = sub_32ABC0(a3, (unsigned int)a4, 0);
  if ( *(_BYTE *)a1 == 2 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = v11;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v11;
    **(_QWORD **)(a1 + 8) = a5;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a6;
    *(_WORD *)(a1 + 2) = 0;
  }
  else
  {
    v17[0].m128i_i64[0] = v11;
    sub_11CDA0(a1);
    *(_BYTE *)a1 = 2;
    v15 = (__m128i *)j__qalloc_or_throw(32, v8, v13, v14);
    v16 = _mm_loadl_epi64(v17);
    v15->m128i_i64[0] = a5;
    v15->m128i_i32[2] = a6;
    v15[1] = _mm_unpacklo_epi64(v16, v16);
    *(_QWORD *)(a1 + 8) = v15;
  }
  result = a4;
  if ( (unsigned __int64)a4 > 8 )
  {
    *(_DWORD *)(a1 + 4) = 8;
    if ( a5 == -1 )
    {
      if ( !under_debugger )
        sub_383060(51617);
      BUG();
    }
    return sub_1207E0((char *)a1, a2, 8, a5, a4);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = a4;
  }
  return result;
}
