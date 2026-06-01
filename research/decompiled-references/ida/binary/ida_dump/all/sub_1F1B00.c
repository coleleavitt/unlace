__int64 __fastcall sub_1F1B00(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, unsigned __int8 a5)
{
  __int64 v5; // r13
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // r15
  _QWORD *v10; // r12
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rbp
  __m128i v16; // xmm0
  __int64 v17; // rax
  void *v18; // rax
  const void *v19; // rsi
  __int64 v21[2]; // [rsp+10h] [rbp-68h] BYREF
  void *v22; // [rsp+20h] [rbp-58h]
  __m128i v23; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a3 != a2[1] )
    sub_1ECB60();
  v5 = a3;
  if ( !(unsigned __int8)sub_64780((_QWORD *)a1, a4) && !(unsigned __int8)sub_318470(a1 + 16, a4 + 2) )
    return 0;
  if ( *(_BYTE *)(a1 + 88) )
    return a5 ^ 1u;
  if ( *(_BYTE *)(a1 + 84) )
    return 0;
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 != v5 )
  {
    v8 = *(_QWORD **)(a1 + 40);
    v9 = &v8[5 * *(_QWORD *)(a1 + 48)];
    if ( v9 != v8 )
    {
      v10 = *(_QWORD **)(a1 + 40);
      while ( !(unsigned __int8)sub_64780(v10, a4) && !(unsigned __int8)sub_318470(v10 + 2, a4 + 2) )
      {
        v10 += 5;
        if ( v9 == v10 )
        {
          v7 = *(_QWORD *)(a1 + 64);
          if ( v7 == v5 )
            goto LABEL_19;
          goto LABEL_16;
        }
      }
      return 1;
    }
LABEL_16:
    if ( a5 )
      v5 = *(_QWORD *)(v5 + 8);
    if ( !sub_A9AA0(*a2, a4, v5, v7, 0x81u) )
    {
LABEL_19:
      sub_64000(v21, (__int64)a4);
      v12 = a4[3];
      v22 = nullptr;
      v23 = 0;
      if ( v12 )
      {
        v18 = (void *)qalloc_or_throw();
        v19 = (const void *)a4[2];
        v22 = v18;
        v23.m128i_i64[1] = v12;
        memcpy(v18, v19, 16 * v12);
        v23.m128i_i64[0] = v12;
      }
      v13 = *(_QWORD *)(a1 + 48);
      v14 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v13 + 1) )
      {
        v17 = qvector_reserve();
        *(_QWORD *)(a1 + 40) = v17;
        v13 = *(_QWORD *)(a1 + 48);
        v14 = v17;
      }
      v15 = v14 + 40 * v13;
      sub_64000((__int64 *)v15, (__int64)v21);
      v16 = _mm_loadu_si128(&v23);
      *(_QWORD *)(v15 + 16) = v22;
      *(__m128i *)(v15 + 24) = v16;
      ++*(_QWORD *)(a1 + 48);
      qfree();
      return 1;
    }
    return 0;
  }
  if ( a5 || !(unsigned __int8)sub_64820(a4, (_QWORD *)a1) )
    return 0;
  return sub_317F40(a1 + 16, a4 + 2);
}
