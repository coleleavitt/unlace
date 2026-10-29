void __fastcall sub_13FB630(__int64 a1, __int64 a2)
{
  char v3; // r13
  _BYTE *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __m128i *v10; // rax
  __m128i *v11; // rdx
  _BYTE *v12; // rdi
  unsigned __int64 v13; // r13
  __int64 v14; // rdi
  void *v15[2]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v16[16]; // [rsp+10h] [rbp-68h] BYREF
  void *v17[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v18[72]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *(_BYTE *)(a2 + 20);
  v4 = *(_BYTE **)a2;
  v5 = *(_QWORD *)(a1 + 48);
  v15[0] = v16;
  sub_13F28B0(v15, v4, (__int64)&v4[*(_QWORD *)(a2 + 8)]);
  v17[0] = v18;
  sub_13F27F0(v17, (_BYTE *)v15[0], (__int64)v15[0] + (unsigned __int64)v15[1]);
  v6 = *(unsigned int *)(v5 + 1608);
  v7 = *(unsigned int *)(v5 + 1612);
  v18[16] = v3 & 1;
  v8 = v6 + 1;
  if ( v6 + 1 > v7 )
  {
    v13 = *(_QWORD *)(v5 + 1600);
    v14 = v5 + 1600;
    if ( v13 > (unsigned __int64)v17 || (unsigned __int64)v17 >= v13 + 40 * v6 )
    {
      sub_13FB330(v14, v8);
      v9 = *(_QWORD *)(v5 + 1600);
      v6 = *(unsigned int *)(v5 + 1608);
      v10 = (__m128i *)v17;
    }
    else
    {
      sub_13FB330(v14, v8);
      v9 = *(_QWORD *)(v5 + 1600);
      v6 = *(unsigned int *)(v5 + 1608);
      v10 = (__m128i *)((char *)v17 + v9 - v13);
    }
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 1600);
    v10 = (__m128i *)v17;
  }
  v11 = (__m128i *)(v9 + 40 * v6);
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  if ( (__m128i *)v10->m128i_i64[0] == &v10[1] )
  {
    v11[1] = _mm_loadu_si128(v10 + 1);
  }
  else
  {
    v11->m128i_i64[0] = v10->m128i_i64[0];
    v11[1].m128i_i64[0] = v10[1].m128i_i64[0];
  }
  v11->m128i_i64[1] = v10->m128i_i64[1];
  v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
  v12 = v17[0];
  v10->m128i_i64[1] = 0;
  v10[1].m128i_i8[0] = 0;
  v11[2].m128i_i8[0] = v10[2].m128i_i8[0];
  ++*(_DWORD *)(v5 + 1608);
  if ( v12 != v18 )
    operator delete(v12);
  if ( v15[0] != v16 )
    operator delete(v15[0]);
}
