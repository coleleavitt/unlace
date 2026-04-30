__int64 __fastcall sub_2B47C0(_QWORD *a1, unsigned int a2, double a3)
{
  __m128i *v3; // rsi
  __m128i v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __m128i *v8; // rbx
  __m128i *v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r12
  const __m128i *v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-58h] BYREF
  __m128i v26; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]

  v3 = (__m128i *)_byteswap_ulong(a2);
  v27 = __readfsqword(0x28u);
  v5.m128i_i64[0] = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__((_DWORD)v3, 8), (unsigned int)v3);
  v25 = v5;
  v7 = a1[37];
  v8 = (__m128i *)a1[36];
  v9 = &v8[v7];
  if ( v8 != v9 )
  {
    do
    {
      v3 = v8;
      if ( (unsigned __int8)QT::QColor::operator==(&v25, v8) )
        break;
      ++v8;
    }
    while ( v9 != v8 );
    v7 = a1[37];
    v6 = a1[36];
    v9 = (__m128i *)(v6 + 16 * v7);
    if ( v8 != v9 )
      return ((__int64)v8->m128i_i64 - v6) >> 4;
  }
  if ( v7 > 0xFD )
  {
    if ( !under_debugger )
      interr(40427, v3, v7, v6, a3);
    BUG();
  }
  v11 = a1[38];
  v12 = v7 + 1;
  v26 = _mm_load_si128(&v25);
  if ( v11 < v12 )
  {
    v13 = qvector_reserve(a1 + 36, 0, v12, 16);
    v17 = a1[37];
    v18 = a1[38];
    a1[38] = v11;
    v19 = (const __m128i *)a1[36];
    v20 = v13;
    v21 = v17 - 1;
    if ( v21 >= 0 )
    {
      v14 = v13;
      do
      {
        v22 = _mm_loadu_si128(v19);
        v14 += 16;
        ++v19;
        *(__m128i *)(v14 - 16) = v22;
      }
      while ( v21-- != 0 );
      v19 = (const __m128i *)a1[36];
    }
    qfree(v19, nullptr, v21, v14, v15, v16, *(_OWORD *)&v25, *(_OWORD *)&v26);
    v24 = a1[37];
    a1[36] = v20;
    a1[38] = v18;
    v9 = (__m128i *)(16 * v24 + v20);
  }
  *v9 = _mm_load_si128(&v26);
  result = a1[37];
  a1[37] = result + 1;
  return result;
}
