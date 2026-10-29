__int64 __fastcall sub_1FC9F60(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __m128i v4; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+10h] [rbp-28h]

  sub_1F6F570(*(_QWORD **)(a1 + 16), a2->m128i_i32[2], *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), a2->m128i_u8[12]);
  sub_1F9A420((__int64 *)(a1 + 8), a2[1].m128i_i64[0], a2[1].m128i_i64[1]);
  v2 = a2[3].m128i_i64[0];
  v4 = _mm_loadu_si128(a2 + 2);
  v5 = v2;
  sub_1F9E200(a1 + 8, (__int64)&v4);
  result = sub_183F100(a1 + 32, a2[3].m128i_i64[1]);
  *(_DWORD *)(a1 + 224) = 384;
  return result;
}
