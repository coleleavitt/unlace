__int64 __fastcall sub_140BF30(__int64 a1, __int64 **a2)
{
  signed __int64 v4; // rbp
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 *v7; // rdx
  __int64 *v8; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // edx
  __int64 result; // rax
  __m128i v15[2]; // [rsp+0h] [rbp-20h] BYREF

  v4 = (char *)a2[1] - (char *)*a2;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v4 >> 4 )
  {
    if ( (unsigned __int64)(v4 >> 4) > 0xFFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v5 = operator new(v4);
  }
  else
  {
    v5 = 0;
  }
  v15[0].m128i_i64[0] = v5;
  v6 = _mm_loadl_epi64(v15);
  *(_QWORD *)(a1 + 16) = v5 + v4;
  *(__m128i *)a1 = _mm_unpacklo_epi64(v6, v6);
  v7 = a2[1];
  v8 = *a2;
  if ( v7 != *a2 )
  {
    v9 = *a2;
    v10 = v5;
    do
    {
      v11 = *v9;
      v12 = v9[1];
      v9 += 2;
      v10 += 16;
      *(_QWORD *)(v10 - 16) = v11;
      *(_QWORD *)(v10 - 8) = v12;
    }
    while ( v7 != v9 );
    v5 += (((char *)(v7 - 2) - (char *)v8) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  *(_QWORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 24) = *((_DWORD *)a2 + 6);
  v13 = *((_BYTE *)a2 + 28) & 1;
  result = v13 | *(_BYTE *)(a1 + 28) & 0xFEu;
  *(_BYTE *)(a1 + 28) = v13 | *(_BYTE *)(a1 + 28) & 0xFE;
  return result;
}
