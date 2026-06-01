unsigned __int64 __fastcall sub_BFF8E0(__int64 a1, __int64 *a2)
{
  signed __int64 v2; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rbx
  __m128i v5; // xmm0
  __int64 v6; // r13
  __int64 v7; // r12
  _BYTE *v8; // r14
  signed __int64 v9; // rbp
  __int64 v10; // r12
  __m128i v11[4]; // [rsp+0h] [rbp-40h] BYREF

  v2 = a2[1] - *a2;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  result = v2 >> 5;
  if ( v2 >> 5 )
  {
    if ( result > 0x7FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    result = operator new(v2);
    v4 = (unsigned __int64 *)result;
  }
  else
  {
    v4 = nullptr;
  }
  v11[0].m128i_i64[0] = (__int64)v4;
  v5 = _mm_loadl_epi64(v11);
  *(_QWORD *)(a1 + 16) = (char *)v4 + v2;
  *(__m128i *)a1 = _mm_unpacklo_epi64(v5, v5);
  v6 = a2[1];
  v7 = *a2;
  if ( v6 != *a2 )
  {
    *v4 = (unsigned __int64)(v4 + 2);
    v8 = *(_BYTE **)v7;
    v9 = *(_QWORD *)(v7 + 8);
    if ( v9 + *(_QWORD *)v7 && !v8 )
LABEL_14:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v10 = v7 + 32;
    while ( (unsigned __int64)v9 <= 0xF )
    {
      result = *v4;
      if ( v9 != 1 )
      {
        if ( !v9 )
          goto LABEL_11;
        goto LABEL_17;
      }
      *(_BYTE *)result = *v8;
      result = *v4;
LABEL_11:
      v4[1] = v9;
      v4 += 4;
      *(_BYTE *)(result + v9) = 0;
      if ( v6 == v10 )
        goto LABEL_20;
      v10 += 32;
      *v4 = (unsigned __int64)(v4 + 2);
      v8 = *(_BYTE **)(v10 - 32);
      v9 = *(_QWORD *)(v10 - 24);
      if ( &v8[v9] && !v8 )
        goto LABEL_14;
    }
    if ( v9 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    result = operator new(v9 + 1);
    v4[2] = v9;
    *v4 = result;
LABEL_17:
    memcpy((void *)result, v8, v9);
    result = *v4;
    goto LABEL_11;
  }
LABEL_20:
  *(_QWORD *)(a1 + 8) = v4;
  return result;
}

