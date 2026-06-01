__int64 __fastcall sub_2005960(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 *v4; // rsi
  signed __int64 **v5; // rbx
  __int64 v6; // r12
  signed __int64 *v7; // rdx
  const void *v8; // rsi
  signed __int64 v9; // r15
  __m128i *v10; // rax
  __m128i *v11; // rsi
  _QWORD *v12; // rax
  signed __int64 **v13; // rax
  void *src; // [rsp+0h] [rbp-60h]
  __m128i v16; // [rsp+8h] [rbp-58h] BYREF
  __m128i v17[4]; // [rsp+18h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a2 + 16);
  v4 = *(__int64 **)(a2 + 8);
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  sub_2005920((__int64 **)&v16, v4, v3 == 0);
  v5 = (signed __int64 **)v16.m128i_i64[0];
  sub_2005920((__int64 **)&v16, (__int64 *)(*(_QWORD *)(a2 + 8) + 8LL * *(unsigned int *)(a2 + 16)), 1);
  v6 = v16.m128i_i64[0];
  if ( v5 != (signed __int64 **)v16.m128i_i64[0] )
  {
    v7 = *v5;
    while ( 1 )
    {
      v8 = v7 + 4;
      if ( v7 == (signed __int64 *)-32LL )
      {
        v16.m128i_i64[0] = (__int64)v17;
        v16.m128i_i64[1] = 0;
        v17[0].m128i_i8[0] = 0;
        goto LABEL_8;
      }
      v9 = *v7;
      v16.m128i_i64[0] = (__int64)v17;
      if ( (unsigned __int64)v9 > 0xF )
        break;
      if ( v9 == 1 )
      {
        v17[0].m128i_i8[0] = *((_BYTE *)v7 + 32);
        v10 = v17;
      }
      else
      {
        v10 = v17;
        if ( v9 )
          goto LABEL_27;
      }
LABEL_7:
      v16.m128i_i64[1] = v9;
      v10->m128i_i8[v9] = 0;
LABEL_8:
      v11 = *(__m128i **)(a1 + 8);
      if ( v11 == *(__m128i **)(a1 + 16) )
      {
        sub_A82970((void ***)a1, v11, &v16);
        if ( (__m128i *)v16.m128i_i64[0] != v17 )
          operator delete((void *)v16.m128i_i64[0]);
      }
      else
      {
        v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
        if ( (__m128i *)v16.m128i_i64[0] == v17 )
        {
          v11[1] = _mm_load_si128(v17);
        }
        else
        {
          v11->m128i_i64[0] = v16.m128i_i64[0];
          v11[1].m128i_i64[0] = v17[0].m128i_i64[0];
        }
        v11->m128i_i64[1] = v16.m128i_i64[1];
        *(_QWORD *)(a1 + 8) += 32LL;
      }
      v7 = v5[1];
      v12 = v5 + 1;
      if ( v7 && v7 != (signed __int64 *)-8LL )
      {
        ++v5;
        if ( (_QWORD *)v6 == v12 )
          return a1;
      }
      else
      {
        v13 = v5 + 2;
        do
        {
          do
          {
            v7 = *v13;
            v5 = v13++;
          }
          while ( !v7 );
        }
        while ( v7 == (signed __int64 *)-8LL );
        if ( (signed __int64 **)v6 == v5 )
          return a1;
      }
    }
    if ( v9 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src = v7 + 4;
    v10 = (__m128i *)operator new(v9 + 1);
    v17[0].m128i_i64[0] = v9;
    v8 = src;
    v16.m128i_i64[0] = (__int64)v10;
LABEL_27:
    memcpy(v10, v8, v9);
    v10 = (__m128i *)v16.m128i_i64[0];
    goto LABEL_7;
  }
  return a1;
}
