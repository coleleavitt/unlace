__int64 __fastcall sub_10DC500(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  __m128i v9; // xmm0
  __m128i v10; // [rsp+8h] [rbp-40h] BYREF
  _DWORD v11[11]; // [rsp+1Ch] [rbp-2Ch] BYREF

  v11[0] = a3;
  v4 = sub_21B6DA0(a2, v11, 1);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = v5 + 8 * HIDWORD(v4);
  if ( v6 != (_QWORD *)v7 && a3 )
  {
    do
    {
      if ( *v6 && (unsigned __int8)sub_21B9810(*v6, a3) )
        break;
      ++v6;
    }
    while ( (_QWORD *)v7 != v6 );
  }
  v10.m128i_i64[0] = v7;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 40) = a3;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)v10.m128i_i64);
  v9 = _mm_loadl_epi64(&v10);
  *(__m128i *)(a1 + 24) = _mm_unpacklo_epi64(v9, v9);
  return a1;
}
