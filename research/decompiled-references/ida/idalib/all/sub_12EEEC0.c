void __fastcall sub_12EEEC0(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __m128i *v6; // rcx
  unsigned __int64 v7; // rsi
  __m128i *v8; // rax
  _BYTE *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  void *v12[2]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v13[40]; // [rsp+10h] [rbp-28h] BYREF

  v12[0] = v13;
  if ( a2 )
  {
    sub_12E9400(v12, a2, (__int64)&a2[a3]);
  }
  else
  {
    v12[1] = nullptr;
    v13[0] = 0;
  }
  v4 = *(unsigned int *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = (__m128i *)v12;
  v7 = v4 + 1;
  v8 = (__m128i *)(v5 + 32 * v4);
  if ( v7 > *(unsigned int *)(a1 + 28) )
  {
    v10 = a1 + 16;
    if ( v5 > (unsigned __int64)v12 || v8 <= (__m128i *)v12 )
    {
      sub_A8C1F0(v10, v7);
      v6 = (__m128i *)v12;
      v8 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24));
    }
    else
    {
      sub_A8C1F0(v10, v7);
      v11 = *(_QWORD *)(a1 + 16);
      v6 = (__m128i *)((char *)v12 + v11 - v5);
      v8 = (__m128i *)(v11 + 32LL * *(unsigned int *)(a1 + 24));
    }
  }
  v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
  if ( (__m128i *)v6->m128i_i64[0] == &v6[1] )
  {
    v8[1] = _mm_loadu_si128(v6 + 1);
  }
  else
  {
    v8->m128i_i64[0] = v6->m128i_i64[0];
    v8[1].m128i_i64[0] = v6[1].m128i_i64[0];
  }
  v8->m128i_i64[1] = v6->m128i_i64[1];
  v6->m128i_i64[0] = (__int64)v6[1].m128i_i64;
  v9 = v12[0];
  v6->m128i_i64[1] = 0;
  v6[1].m128i_i8[0] = 0;
  ++*(_DWORD *)(a1 + 24);
  if ( v9 != v13 )
    operator delete(v9);
}
