__int64 __fastcall sub_1F1B00(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, unsigned __int8 a5)
{
  __int64 v6; // r13
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // r15
  _QWORD *v11; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rbp
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // rax
  void *v22; // rax
  const void *v23; // rsi
  __int64 v25[2]; // [rsp+10h] [rbp-68h] BYREF
  void *v26; // [rsp+20h] [rbp-58h]
  __m128i v27; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( a3 != a2[1] )
    sub_1ECB60();
  v6 = a3;
  if ( !(unsigned __int8)sub_64780((_QWORD *)a1, a4) && !(unsigned __int8)sub_318470(a1 + 16, a4 + 2) )
    return 0;
  if ( *(_BYTE *)(a1 + 88) )
    return a5 ^ 1u;
  if ( *(_BYTE *)(a1 + 84) )
    return 0;
  v8 = *(_QWORD *)(a1 + 64);
  if ( v8 != v6 )
  {
    v9 = *(_QWORD **)(a1 + 40);
    v10 = &v9[5 * *(_QWORD *)(a1 + 48)];
    if ( v10 != v9 )
    {
      v11 = *(_QWORD **)(a1 + 40);
      while ( !(unsigned __int8)sub_64780(v11, a4) && !(unsigned __int8)sub_318470(v11 + 2, a4 + 2) )
      {
        v11 += 5;
        if ( v10 == v11 )
        {
          v8 = *(_QWORD *)(a1 + 64);
          if ( v8 == v6 )
            goto LABEL_19;
          goto LABEL_16;
        }
      }
      return 1;
    }
LABEL_16:
    if ( a5 )
      v6 = *(_QWORD *)(v6 + 8);
    if ( !sub_A9AA0(*a2, a4, v6, v8, 0x81u) )
    {
LABEL_19:
      sub_64000(v25, (__int64)a4);
      v15 = a4[3];
      v26 = nullptr;
      v27 = 0;
      if ( v15 )
      {
        v22 = (void *)qalloc_or_throw(16 * v15, (__int64)a4, v13, v14);
        v23 = (const void *)a4[2];
        v26 = v22;
        v27.m128i_i64[1] = v15;
        memcpy(v22, v23, 16 * v15);
        v27.m128i_i64[0] = v15;
      }
      v16 = *(_QWORD *)(a1 + 48);
      v17 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v16 + 1) )
      {
        v21 = qvector_reserve(a1 + 40, v17, v16 + 1, 40);
        *(_QWORD *)(a1 + 40) = v21;
        v16 = *(_QWORD *)(a1 + 48);
        v17 = v21;
      }
      v18 = v17 + 40 * v16;
      sub_64000((__int64 *)v18, (__int64)v25);
      v19 = _mm_loadu_si128(&v27);
      v20 = v25[0];
      *(_QWORD *)(v18 + 16) = v26;
      *(__m128i *)(v18 + 24) = v19;
      ++*(_QWORD *)(a1 + 48);
      qfree(v20);
      return 1;
    }
    return 0;
  }
  if ( a5 || !(unsigned __int8)sub_64820(a4, (_QWORD *)a1) )
    return 0;
  return sub_317F40(a1 + 16, a4 + 2);
}
