__int64 __fastcall sub_E37040(__m128i *a1, double a2, __m128 a3)
{
  const __m128i *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__m128i *); // rax
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 *m128i_i64; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __m128 v14; // xmm0
  _QWORD *v15; // rsi
  unsigned __int64 v16; // xmm1_8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __m128 v22; // xmm0
  __int64 *v23; // rcx
  _QWORD *v24; // rsi
  __int64 v25; // rsi
  int v26; // [rsp+14h] [rbp-54h]
  __m128i *v27; // [rsp+18h] [rbp-50h] BYREF
  _OWORD v28[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a1;
  v4 = a1[7].m128i_i64[1];
  if ( !*(_BYTE *)(v4 + 128) )
  {
    v18 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(v4 + 128) = 1;
    *(_QWORD *)(v4 + 112) = v18;
  }
  v5 = a1[9].m128i_i64[0];
  if ( v5 )
    goto LABEL_18;
  v6 = a1[10].m128i_i64[0];
  v7 = *(__int64 (__fastcall **)(__m128i *))(*(_QWORD *)v6 + 40LL);
  if ( (char *)v7 == (char *)sub_E37040 )
  {
    v8 = *(_QWORD *)(v6 + 120);
    if ( !*(_BYTE *)(v8 + 128) )
    {
      v19 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
      *(_BYTE *)(v8 + 128) = 1;
      *(_QWORD *)(v8 + 112) = v19;
    }
    v9 = *(_QWORD *)(v6 + 144);
    if ( v9 )
      goto LABEL_8;
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 160) + 40LL))(*(_QWORD *)(v6 + 160));
    v21 = *(_QWORD *)(v6 + 144);
    a1 = *(__m128i **)(v6 + 152);
    v9 = v20;
    if ( !v20 )
    {
      if ( v21 )
      {
        v13 = (*(_DWORD *)(v21 + 8))-- == 1;
        if ( v13 )
          sub_15D7BC0(a1, v21);
      }
      v13 = *(_BYTE *)(v8 + 128) == 0;
      *(_QWORD *)(v6 + 144) = 0;
      if ( v13 )
        goto LABEL_34;
      goto LABEL_8;
    }
    ++*(_DWORD *)(v20 + 8);
    if ( v21 )
    {
      v13 = (*(_DWORD *)(v21 + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(a1, v21);
    }
    v22 = (__m128)_mm_loadu_si128((const __m128i *)(v6 + 128));
    *(_QWORD *)(v6 + 144) = v9;
    v23 = (__int64 *)(v6 + 144);
    v24 = *(_QWORD **)(v6 + 8);
    _mm_storeh_ps((double *)&v27, v22);
    v28[0] = v22;
    if ( v22.m128_u64[0] )
    {
      ++*(_DWORD *)(v22.m128_u64[0] + 8);
      a1 = (__m128i *)v28;
      sub_E34F40((__int64 *)v28, v24, v9, v23);
      v26 = *(_DWORD *)(v22.m128_u64[0] + 8);
      *(_DWORD *)(v22.m128_u64[0] + 8) = v26 - 1;
      if ( v26 == 1 )
      {
        a1 = v27;
        sub_15D7BC0(v27, v22.m128_u64[0]);
      }
    }
    else
    {
      a1 = (__m128i *)v28;
      sub_E34F40((__int64 *)v28, v24, v9, v23);
    }
    v9 = *(_QWORD *)(v6 + 144);
    if ( *(_BYTE *)(v8 + 128) )
    {
LABEL_8:
      *(_QWORD *)(v8 + 120) += std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1)
                             - *(_QWORD *)(v8 + 112);
      *(_BYTE *)(v8 + 128) = 0;
    }
  }
  else
  {
    a1 = (__m128i *)a1[10].m128i_i64[0];
    v9 = v7(a1);
  }
  m128i_i64 = v3[9].m128i_i64;
  if ( v9 )
  {
    v11 = v3[9].m128i_i64[0];
    ++*(_DWORD *)(v9 + 8);
    if ( v11 )
    {
      v12 = v3[9].m128i_i64[1];
      v13 = (*(_DWORD *)(v11 + 8))-- == 1;
      if ( v13 )
      {
        sub_15D7BC0(v12, v11);
        m128i_i64 = v3[9].m128i_i64;
      }
    }
    v14 = (__m128)_mm_loadu_si128(v3 + 8);
    v15 = (_QWORD *)v3->m128i_i64[1];
    v3[9].m128i_i64[0] = v9;
    v16 = _mm_movehl_ps(a3, v14).m128_u64[0];
    v28[0] = v14;
    if ( v14.m128_u64[0] )
    {
      ++*(_DWORD *)(v14.m128_u64[0] + 8);
      a1 = (__m128i *)v28;
      sub_E34F40((__int64 *)v28, v15, v9, m128i_i64);
      v13 = (*(_DWORD *)(v14.m128_u64[0] + 8))-- == 1;
      if ( v13 )
      {
        a1 = (__m128i *)v16;
        sub_15D7BC0(v16, v14.m128_u64[0]);
      }
    }
    else
    {
      a1 = (__m128i *)v28;
      sub_E34F40((__int64 *)v28, v15, v9, m128i_i64);
    }
    v5 = v3[9].m128i_i64[0];
    goto LABEL_17;
  }
LABEL_34:
  v25 = v3[9].m128i_i64[0];
  if ( v25 )
  {
    a1 = (__m128i *)v3[9].m128i_i64[1];
    v13 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(a1, v25);
  }
  v3[9].m128i_i64[0] = 0;
LABEL_17:
  if ( *(_BYTE *)(v4 + 128) )
  {
LABEL_18:
    *(_QWORD *)(v4 + 120) += std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1)
                           - *(_QWORD *)(v4 + 112);
    *(_BYTE *)(v4 + 128) = 0;
  }
  return v5;
}

