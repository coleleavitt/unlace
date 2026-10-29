void __fastcall sub_165D60(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rdi
  _OWORD *v6; // rdx
  __int64 v7; // rsi
  __m128i si128; // xmm0
  _OWORD *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rbp
  const __m128i *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 *v16; // rdi
  __int64 v17; // rax
  __m128i v18[2]; // [rsp+0h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_OWORD **)a2;
  v7 = *(_QWORD *)a2 + 16 * v5;
  if ( v6 != (_OWORD *)v7 )
  {
    while ( *v6 - *(_OWORD *)a3 != 0 )
    {
      if ( (_OWORD *)v7 == ++v6 )
        goto LABEL_7;
    }
    if ( v6 != (_OWORD *)v7 )
    {
      sub_8F740((__int64)"Coherency check failed: !g->has(ss)\n");
      v5 = *(_QWORD *)(a2 + 8);
    }
  }
LABEL_7:
  if ( v5 && !a3->m128i_i8[0] )
  {
    v14 = sub_1545C0(a3->m128i_i64[1]);
    v15 = v14;
    if ( v14 )
    {
      v16 = qword_253FE8;
      if ( !qword_253FE8 )
      {
        v18[0].m128i_i64[0] = v14;
        v17 = operator new(0x18u);
        v15 = v18[0].m128i_i64[0];
        *(_QWORD *)v17 = 0;
        v16 = (__int64 *)v17;
        qword_253FE8 = (_QWORD *)v17;
        *(_OWORD *)(v17 + 8) = 0;
      }
      sub_1213D0(v16, v15, 1);
    }
    v5 = *(_QWORD *)(a2 + 8);
  }
  si128 = _mm_loadu_si128(a3);
  v9 = *(_OWORD **)a2;
  if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v5 + 1) )
  {
    v18[0] = si128;
    v13 = qvector_reserve();
    v5 = *(_QWORD *)(a2 + 8);
    si128 = _mm_load_si128(v18);
    *(_QWORD *)a2 = v13;
    v9 = (_OWORD *)v13;
  }
  v10 = 0;
  v9[v5] = si128;
  ++*(_QWORD *)(a2 + 8);
  v11 = xmmword_2544E8;
  if ( (_QWORD)xmmword_2544E8 )
  {
    do
    {
      v12 = *(const __m128i **)(qword_2544E0 + 8 * v10++);
      sub_165A50(v12);
    }
    while ( v11 != v10 );
  }
}

