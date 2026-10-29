__int64 __fastcall sub_D9DAE0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // r12
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned int v12; // [rsp+Ch] [rbp-2Ch]
  __m128i v13; // [rsp+10h] [rbp-28h] BYREF

  v1 = *(__int64 **)(a1 + 48);
  if ( v1 )
  {
    v2 = &v1[*((unsigned int *)v1 - 1)];
    while ( v2 != v1 )
    {
      v3 = *v1++;
      sub_E5EBF0(*(_QWORD *)(a1 + 112), v3);
    }
  }
  result = sub_E60CB0(*(std::ios_base **)(a1 + 112), 0, 0);
  if ( (_DWORD)result != -1 )
  {
    sub_D9D9D0((_QWORD *)a1);
    v5 = *(_QWORD *)(a1 + 184);
    v6 = *(_QWORD *)(a1 + 176);
    if ( v5 )
      v7 = *(unsigned int *)(v5 - 4);
    else
      v7 = 0;
    v8 = sub_15EC1C0(*(_QWORD *)(a1 + 176), v7);
    v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)v6);
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    sub_14B9B80(a1 + 160, &v13);
    sub_E5EBF0(*(_QWORD *)(a1 + 112), v13.m128i_i64[0]);
    result = sub_E60CB0(*(std::ios_base **)(a1 + 112), 0, 0);
    v9 = v13.m128i_i64[0];
    if ( v13.m128i_i64[0] )
    {
      v10 = v13.m128i_i64[1];
      if ( (*(_DWORD *)(v13.m128i_i64[0] + 8))-- == 1 )
      {
        v12 = result;
        sub_15D7BC0(v10, v9);
        return v12;
      }
    }
  }
  return result;
}

