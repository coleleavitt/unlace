__int64 __fastcall sub_6C1A50(__int64 a1, __int64 a2, __int64 *a3)
{
  _DWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __m128 v12; // [rsp+0h] [rbp-38h] BYREF

  v12 = _mm_loadh_ps((const double *)a1);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_14B9B80(a1 + 32, &v12);
  v4 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v4 && *v4 == 5 && v4[1] == 1 )
    v5 = (_QWORD *)(a1 + 216);
  else
    v5 = (_QWORD *)(a1 + 264);
  result = sub_1506780(a1 + 664, v12.m128_u64[0], *v5, a3);
  if ( (_DWORD)result == 5 )
  {
    v10 = sub_15E1B70(*(_QWORD *)(a1 + 672));
    v11 = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    result = sub_6BFE30(*a3, a3[1]);
    *a3 = v11;
  }
  v7 = v12.m128_u64[0];
  if ( v12.m128_u64[0] )
  {
    v8 = v12.m128_u64[1];
    if ( (*(_DWORD *)(v12.m128_u64[0] + 8))-- == 1 )
      return sub_15D7BC0(v8, v7);
  }
  return result;
}

