__int64 __fastcall sub_1357C20(__int64 a1, _BYTE *a2, size_t a3)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r14
  __int64 v10; // rax
  unsigned int v11; // ecx
  _QWORD *v12; // r13
  unsigned int v13; // eax
  __m128i *v14; // rsi
  unsigned int v15; // [rsp+Ch] [rbp-5Ch]
  __m128i v16; // [rsp+10h] [rbp-58h] BYREF
  __m128i v17[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = sub_2244B30(a2, a3);
  v5 = (unsigned int)sub_2244CB0(a1 + 8, a2, a3, v4);
  v8 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8 * v5);
  if ( *v8 )
  {
    if ( *v8 != -8 )
    {
      sub_A45C10((__int64 **)&v16, v8, 0);
      return 0;
    }
    --*(_DWORD *)(a1 + 24);
  }
  v15 = v5;
  v10 = sub_22300B0(a3 + 9, 8, v5, v5, v6, v7);
  v11 = v15;
  v12 = (_QWORD *)v10;
  if ( a3 )
  {
    memcpy((void *)(v10 + 8), a2, a3);
    v11 = v15;
  }
  *((_BYTE *)v12 + a3 + 8) = 0;
  *v12 = a3;
  *v8 = (__int64)v12;
  ++*(_DWORD *)(a1 + 20);
  v13 = sub_22450D0(a1 + 8, v11);
  sub_A45C10((__int64 **)&v16, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * v13), 0);
  v16.m128i_i64[0] = (__int64)v17;
  sub_1356F60(&v16, a2, (__int64)&a2[a3]);
  v14 = *(__m128i **)(a1 + 40);
  if ( v14 == *(__m128i **)(a1 + 48) )
  {
    sub_A82970((void ***)(a1 + 32), v14, &v16);
    if ( (__m128i *)v16.m128i_i64[0] != v17 )
      operator delete((void *)v16.m128i_i64[0]);
  }
  else
  {
    v14->m128i_i64[0] = (__int64)v14[1].m128i_i64;
    if ( (__m128i *)v16.m128i_i64[0] == v17 )
    {
      v14[1] = _mm_load_si128(v17);
    }
    else
    {
      v14->m128i_i64[0] = v16.m128i_i64[0];
      v14[1].m128i_i64[0] = v17[0].m128i_i64[0];
    }
    v14->m128i_i64[1] = v16.m128i_i64[1];
    *(_QWORD *)(a1 + 40) += 32LL;
  }
  return 1;
}
