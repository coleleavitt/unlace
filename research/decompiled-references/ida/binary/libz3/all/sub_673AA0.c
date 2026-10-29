__int64 __fastcall sub_673AA0(__int64 a1, unsigned __int64 a2)
{
  __m128i v2; // xmm0
  __int64 result; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 *v10; // rbx
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  _QWORD *v17; // [rsp+18h] [rbp-40h]
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+28h] [rbp-30h]

  v2 = _mm_loadl_epi64((const __m128i *)(a1 + 120));
  v15 = _mm_unpacklo_epi64((__m128i)a2, v2);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v17 = nullptr;
  v16 = v2.m128i_i64[0];
  v18 = 0;
  v19 = v2.m128i_i64[0];
  sub_14CE740(a1 + 136, a2, &v15, &v18);
  sub_E5EBF0(*(_QWORD *)(a1 + 128), v15.m128i_i64[0]);
  result = sub_14CDEA0(a1 + 136, &v16);
  v4 = v17;
  if ( v17 )
  {
    result = *((unsigned int *)v17 - 1);
    v5 = &v17[result];
    if ( v17 != v5 )
    {
      v6 = *(_QWORD *)(a1 + 128);
      do
        result = sub_E5EBF0(v6, *v4++);
      while ( v5 != v4 );
    }
  }
  v7 = v18;
  if ( v18 )
  {
    v8 = v19;
    v9 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v9 )
      result = sub_15D7BC0(v8, v7);
  }
  v10 = v17;
  if ( v17 )
  {
    result = *((unsigned int *)v17 - 1);
    v11 = (unsigned __int64)&v17[result];
    if ( (unsigned __int64)v17 >= v11 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v9 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( (unsigned __int64)++v10 >= v11 )
          goto LABEL_17;
      }
      result = sub_15D7BC0(v16, v12);
      ++v10;
    }
    while ( (unsigned __int64)v10 < v11 );
LABEL_17:
    v10 = v17;
    if ( v17 )
LABEL_18:
      result = sub_186B220(v10 - 1);
  }
  v13 = v15.m128i_i64[0];
  if ( v15.m128i_i64[0] )
  {
    v14 = v15.m128i_i64[1];
    v9 = (*(_DWORD *)(v15.m128i_i64[0] + 8))-- == 1;
    if ( v9 )
      return sub_15D7BC0(v14, v13);
  }
  return result;
}

