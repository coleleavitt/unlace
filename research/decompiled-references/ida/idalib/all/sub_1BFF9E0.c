__int64 __fastcall sub_1BFF9E0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 result; // rax
  _QWORD *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // r12
  _QWORD *v16; // rbp
  __int64 *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int32 v24; // edx
  __int32 v25; // eax
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // [rsp+0h] [rbp-D8h]
  __int64 *v29; // [rsp+8h] [rbp-D0h] BYREF
  __m128i v30; // [rsp+10h] [rbp-C8h] BYREF
  int v31; // [rsp+20h] [rbp-B8h]
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __m128 v33; // [rsp+38h] [rbp-A0h] BYREF
  int v34; // [rsp+60h] [rbp-78h]
  __int64 v35; // [rsp+70h] [rbp-68h] BYREF
  __m128 v36; // [rsp+78h] [rbp-60h]

  v29 = a2;
  if ( (unsigned __int8)sub_1BC8220(a1, (__int64 *)&v29, (__m128i)a7, a8, a3, a4, a5, a6) )
    return 1;
  v9 = *(_QWORD **)(a1 + 248);
  v10 = sub_A8A250(v9);
  v14 = *(_QWORD *)(v10 + 48);
  if ( v14 )
    v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v15 = sub_A7AA70((__int64)v9, v10, 0, v11, v12, v13);
  v16 = *(_QWORD **)(a1 + 248);
  v17 = v29;
  v18 = sub_A8A250(v16);
  v22 = *(_QWORD *)(v18 + 48);
  if ( v22 )
    v23 = v22 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v23 = sub_A7AA70((__int64)v16, v18, v19, 0, v20, v21);
  sub_1BEC140(&v30, a1, (unsigned __int64)v17, v23, 0, 1, a7, a8, 0, 0, 0, 1u);
  v24 = v30.m128i_i32[0];
  v25 = v30.m128i_i32[0] & 0x7FFFFFFF;
  if ( (v30.m128i_i32[0] & 0x7FFFFFFF) != 0 )
  {
    if ( v25 == 2 )
    {
      if ( BYTE1(v34) == 13 )
      {
        v26 = _mm_loadl_epi64((const __m128i *)&v35);
        v34 = (unsigned __int8)v34;
        a7 = (__m128)_mm_unpacklo_epi64(v26, v26);
        v36 = a7;
      }
    }
    else if ( v25 == 5 )
    {
      result = 0;
      goto LABEL_12;
    }
  }
  else if ( BYTE1(v31) == 13 )
  {
    v27 = _mm_loadl_epi64((const __m128i *)&ptr);
    a7 = (__m128)_mm_unpacklo_epi64(v27, v27);
    v31 = (unsigned __int8)v31;
    v33 = a7;
  }
  result = sub_19AFC70(a1, v29, v15, (__int64)&v30, 3, 0, a7, a8);
  v24 = v30.m128i_i32[0];
LABEL_12:
  if ( (v24 & 0x7FFFFFFF) == 3 && ptr != &v33.m128_u16[4] )
  {
    v28 = result;
    free(ptr);
    return v28;
  }
  return result;
}
