void __fastcall sub_124F970(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v6; // rax
  _BYTE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  __m128i *v11; // rcx
  unsigned __int64 v12; // rsi
  __m128i *v13; // rax
  _BYTE *v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  void *v17[2]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v18[40]; // [rsp+10h] [rbp-28h] BYREF

  sub_1134980(a1, a2, a3, a4);
  *(_QWORD *)a1 = &off_2C3C960;
  *(_QWORD *)(a1 + 2384) = 0;
  *(_QWORD *)(a1 + 2392) = 0;
  if ( sub_10DCD30(a4, 0x13Bu) )
  {
    v6 = j__strlen(&byte_22F0C30);
    v7 = (_BYTE *)sub_21B7BC0(a4, 315, &byte_22F0C30, v6);
    if ( v7 )
    {
      v17[0] = v18;
      sub_124E480(v17, v7, (__int64)&v7[v8]);
    }
    else
    {
      v18[0] = 0;
      v17[0] = v18;
      v17[1] = nullptr;
    }
    v9 = *(unsigned int *)(a1 + 1160);
    v10 = *(_QWORD *)(a1 + 1152);
    v11 = (__m128i *)v17;
    v12 = v9 + 1;
    v13 = (__m128i *)(v10 + 32 * v9);
    if ( v12 > *(unsigned int *)(a1 + 1164) )
    {
      v15 = a1 + 1152;
      if ( v10 > (unsigned __int64)v17 || v13 <= (__m128i *)v17 )
      {
        sub_A8C1F0(v15, v12);
        v11 = (__m128i *)v17;
        v13 = (__m128i *)(*(_QWORD *)(a1 + 1152) + 32LL * *(unsigned int *)(a1 + 1160));
      }
      else
      {
        sub_A8C1F0(v15, v12);
        v16 = *(_QWORD *)(a1 + 1152);
        v11 = (__m128i *)((char *)v17 + v16 - v10);
        v13 = (__m128i *)(v16 + 32LL * *(unsigned int *)(a1 + 1160));
      }
    }
    v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
    if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
    {
      v13[1] = _mm_loadu_si128(v11 + 1);
    }
    else
    {
      v13->m128i_i64[0] = v11->m128i_i64[0];
      v13[1].m128i_i64[0] = v11[1].m128i_i64[0];
    }
    v13->m128i_i64[1] = v11->m128i_i64[1];
    v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
    v14 = v17[0];
    v11->m128i_i64[1] = 0;
    v11[1].m128i_i8[0] = 0;
    ++*(_DWORD *)(a1 + 1160);
    if ( v14 != v18 )
      operator delete(v14);
  }
}
