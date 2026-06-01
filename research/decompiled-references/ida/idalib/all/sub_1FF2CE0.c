void __fastcall sub_1FF2CE0(__int64 a1)
{
  __int64 v1; // rax
  __m128i *v2; // rbx
  void **v3; // r12
  void **v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r12
  __m128i *v8; // rax
  __int8 *v9; // rsi
  signed __int64 v10; // rbp
  __int8 *src; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 176);
  if ( v1 != *(_QWORD *)(a1 + 184) )
    *(_QWORD *)(a1 + 184) = v1;
  v2 = *(__m128i **)(a1 + 120);
  v3 = *(void ***)(a1 + 128);
  if ( v2 != (__m128i *)v3 )
  {
    v4 = *(void ***)(a1 + 120);
    do
    {
      while ( *v4 != v4 + 2 )
      {
        operator delete(*v4);
        v4 += 4;
        if ( v4 == v3 )
          goto LABEL_7;
      }
      v4 += 4;
    }
    while ( v3 != v4 );
LABEL_7:
    *(_QWORD *)(a1 + 128) = v2;
  }
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(_QWORD *)(a1 + 152);
  if ( v5 != v6 )
  {
    v7 = v5 + 48;
    while ( *(__m128i **)(a1 + 136) == v2 )
    {
      sub_10BCB90((void ***)(a1 + 120), v2, v7 - 40);
      if ( v6 == v7 )
        return;
LABEL_16:
      v2 = *(__m128i **)(a1 + 128);
      v7 += 48;
    }
    v8 = v2 + 1;
    v2->m128i_i64[0] = (__int64)v2[1].m128i_i64;
    v9 = *(__int8 **)(v7 - 40);
    v10 = *(_QWORD *)(v7 - 32);
    if ( &v9[v10] && !v9 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v10 > 0xF )
    {
      if ( v10 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      src = *(__int8 **)(v7 - 40);
      v8 = (__m128i *)operator new(v10 + 1);
      v2[1].m128i_i64[0] = v10;
      v9 = src;
      v2->m128i_i64[0] = (__int64)v8;
    }
    else
    {
      if ( v10 == 1 )
      {
        v2[1].m128i_i8[0] = *v9;
        goto LABEL_15;
      }
      if ( !v10 )
      {
LABEL_15:
        v2->m128i_i64[1] = v10;
        v8->m128i_i8[v10] = 0;
        *(_QWORD *)(a1 + 128) += 32LL;
        if ( v6 == v7 )
          return;
        goto LABEL_16;
      }
    }
    memcpy(v8, v9, v10);
    v8 = (__m128i *)v2->m128i_i64[0];
    goto LABEL_15;
  }
}
