unsigned __int64 __fastcall sub_11CFD0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int32 a6)
{
  __int64 v9; // rax
  unsigned __int64 result; // rax
  __m128i *v11; // rax
  __m128i v12; // xmm0
  __m128i v13[3]; // [rsp+8h] [rbp-30h] BYREF

  v9 = sub_326890(a3, (unsigned int)a4, 0);
  if ( *(_BYTE *)a1 == 2 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = v9;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v9;
    **(_QWORD **)(a1 + 8) = a5;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a6;
    *(_WORD *)(a1 + 2) = 0;
  }
  else
  {
    v13[0].m128i_i64[0] = v9;
    sub_119360(a1);
    *(_BYTE *)a1 = 2;
    v11 = (__m128i *)j__qalloc_or_throw(32);
    v12 = _mm_loadl_epi64(v13);
    v11->m128i_i64[0] = a5;
    v11->m128i_i32[2] = a6;
    v11[1] = _mm_unpacklo_epi64(v12, v12);
    *(_QWORD *)(a1 + 8) = v11;
  }
  result = a4;
  if ( (unsigned __int64)a4 > 8 )
  {
    *(_DWORD *)(a1 + 4) = 8;
    if ( a5 == -1 )
    {
      if ( !under_debugger )
        sub_37EEE0(51617);
      BUG();
    }
    return sub_11CDA0((char *)a1, a2, 8, a5, a4);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = a4;
  }
  return result;
}
