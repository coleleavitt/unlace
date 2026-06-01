unsigned __int64 __fastcall sub_50D160(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // r13
  __int64 v7; // rbx
  const __m128i *v8; // rax
  __m128i v10; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v11[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v12[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v13 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1760);
  v10 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = unpack_dq(&v10);
  v11[0] = unpack_dq(&v10);
  v11[1] = unpack_dq(&v10);
  v12[0] = unpack_dq(&v10);
  v12[1] = unpack_dq(&v10);
  v8 = (const __m128i *)v12;
  if ( !a3 )
    v8 = (const __m128i *)v11;
  *(__m128i *)(*(_QWORD *)(v6 + 24) + 16 * v7) = _mm_load_si128(v8);
  *(_OWORD *)(v6 + 8) = -1;
  return v13 - __readfsqword(0x28u);
}
