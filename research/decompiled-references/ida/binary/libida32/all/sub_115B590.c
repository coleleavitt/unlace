unsigned __int64 __fastcall sub_115B590(__int64 a1, __int64 a2)
{
  signed __int64 v3; // r13
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // r14
  __int64 v8; // r13
  _BYTE *v9; // r15
  signed __int64 v10; // r12
  __int64 v11; // r13
  __m128i v12[4]; // [rsp+8h] [rbp-40h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  sub_115A670((_QWORD *)a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  *(_QWORD *)(a1 + 32) = a1 + 48;
  sub_115A670((_QWORD *)(a1 + 32), *(_BYTE **)(a2 + 32), *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 40));
  *(_QWORD *)(a1 + 64) = a1 + 80;
  sub_115A670((_QWORD *)(a1 + 64), *(_BYTE **)(a2 + 64), *(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
  v3 = *(_QWORD *)(a2 + 104) - *(_QWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 96) = 0;
  result = v3 >> 5;
  *(_QWORD *)(a1 + 112) = 0;
  if ( v3 >> 5 )
  {
    if ( result > 0x7FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    result = operator new(v3);
    v5 = (unsigned __int64 *)result;
  }
  else
  {
    v5 = nullptr;
  }
  v12[0].m128i_i64[0] = (__int64)v5;
  v6 = _mm_loadl_epi64(v12);
  *(_QWORD *)(a1 + 112) = (char *)v5 + v3;
  *(__m128i *)(a1 + 96) = _mm_unpacklo_epi64(v6, v6);
  v7 = *(_QWORD *)(a2 + 104);
  v8 = *(_QWORD *)(a2 + 96);
  if ( v7 != v8 )
  {
    *v5 = (unsigned __int64)(v5 + 2);
    v9 = *(_BYTE **)v8;
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 + *(_QWORD *)v8 && !v9 )
LABEL_14:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v11 = v8 + 32;
    while ( (unsigned __int64)v10 <= 0xF )
    {
      result = *v5;
      if ( v10 != 1 )
      {
        if ( !v10 )
          goto LABEL_11;
        goto LABEL_17;
      }
      *(_BYTE *)result = *v9;
      result = *v5;
LABEL_11:
      v5[1] = v10;
      v5 += 4;
      *(_BYTE *)(result + v10) = 0;
      if ( v7 == v11 )
        goto LABEL_20;
      v11 += 32;
      *v5 = (unsigned __int64)(v5 + 2);
      v9 = *(_BYTE **)(v11 - 32);
      v10 = *(_QWORD *)(v11 - 24);
      if ( &v9[v10] && !v9 )
        goto LABEL_14;
    }
    if ( v10 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    result = operator new(v10 + 1);
    v5[2] = v10;
    *v5 = result;
LABEL_17:
    memcpy((void *)result, v9, v10);
    result = *v5;
    goto LABEL_11;
  }
LABEL_20:
  *(_QWORD *)(a1 + 104) = v5;
  return result;
}

