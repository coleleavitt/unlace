__int64 __fastcall idaplace_t__deserialize(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 v7; // r13
  __int64 v8; // rdx
  __m128i v9; // xmm1
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( *a2 >= a3 )
    return 0;
  v7 = *(_QWORD *)(qword_2CCB598 + 1672);
  *(_DWORD *)(a1 + 8) = unpack_dd(a2);
  if ( *a2 >= a3 )
    return 0;
  v9 = (__m128i)a3;
  v10 = *(_QWORD *)(v7 + 24);
  v14 = _mm_unpacklo_epi64((__m128i)*a2, v9);
  if ( (unsigned __int8)is_cvt64(a2, a3, v8) )
  {
    v11 = (unsigned int)unpack_dd(&v14);
    if ( (unsigned int)v11 == 0xFFFFFFFFLL )
      goto LABEL_9;
  }
  else
  {
    v11 = unpack_dq(&v14);
  }
  v12 = *(_QWORD *)(v10 + 16);
  v13 = v12 & v11;
  if ( v12 == v13 )
LABEL_9:
    v13 = -1;
  *(_QWORD *)(a1 + 16) = v13;
  *a2 = v14.m128i_i64[0];
  return 1;
}
