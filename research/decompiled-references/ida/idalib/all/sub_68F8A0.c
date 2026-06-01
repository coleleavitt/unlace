_QWORD *__fastcall sub_68F8A0(__int64 a1, const __m128i *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __m128i v12; // xmm0
  _QWORD *v13; // rbp
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v24; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 48);
  v5 = *(_QWORD *)(v3 + 56);
  v6 = v4 + 8 * v5;
  if ( v4 == v6 )
  {
LABEL_7:
    v9 = *(_QWORD *)(v3 + 64);
    v10 = v5 + 1;
    if ( v9 < v10 )
    {
      v15 = qvector_reserve(v3 + 48, 0, v10, 8);
      v16 = *(_QWORD *)(v3 + 56);
      v17 = *(_QWORD *)(v3 + 64);
      *(_QWORD *)(v3 + 64) = v9;
      v18 = *(__int64 **)(v3 + 48);
      v19 = v15;
      v20 = v16 - 1;
      if ( v20 >= 0 )
      {
        v21 = v15;
        do
        {
          v22 = *v18;
          v21 += 8;
          ++v18;
          *(_QWORD *)(v21 - 8) = v22;
        }
        while ( v20-- != 0 );
        v18 = *(__int64 **)(v3 + 48);
      }
      qfree(v18);
      v24 = *(_QWORD *)(v3 + 56);
      *(_QWORD *)(v3 + 48) = v19;
      *(_QWORD *)(v3 + 64) = v17;
      v6 = v19 + 8 * v24;
    }
    *(_QWORD *)v6 = 0;
    ++*(_QWORD *)(v3 + 56);
    v11 = operator new(0x38u);
    v12 = _mm_loadu_si128(a2);
    *(_QWORD *)(v11 + 16) = 0;
    *(__m128i *)v11 = v12;
    *(_QWORD *)(v11 + 40) = -1;
    *(_BYTE *)(v11 + 48) = 0;
    *(_OWORD *)(v11 + 24) = 0;
    v13 = *(_QWORD **)v6;
    *(_QWORD *)v6 = v11;
    if ( v13 )
    {
      v14 = (void *)v13[2];
      if ( v14 )
      {
        v13[3] = 0;
        qfree(v14);
      }
      operator delete(v13, 0x38u);
    }
    *(_BYTE *)(v3 + 144) = 1;
    return *(_QWORD **)v6;
  }
  else
  {
    v7 = a2->m128i_i64[0];
    while ( **(_QWORD **)v4 != v7 || *(_QWORD *)(*(_QWORD *)v4 + 8LL) != a2->m128i_i64[1] )
    {
      v4 += 8;
      if ( v6 == v4 )
        goto LABEL_7;
    }
    return *(_QWORD **)v4;
  }
}
