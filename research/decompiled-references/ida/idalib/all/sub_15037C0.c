__int64 __fastcall sub_15037C0(const __m128i *a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned int v5; // [rsp+Ch] [rbp-5Ch]
  __m128i v6; // [rsp+10h] [rbp-58h] BYREF
  __int64 v7; // [rsp+20h] [rbp-48h]
  void *v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF

  v1 = a1[2].m128i_i64[0];
  v6 = _mm_loadu_si128(a1 + 1);
  v7 = v1;
  if ( (_WORD)v1 != 131 && (_WORD)v1 != 5 )
    return 6;
  v3 = a1->m128i_i64[1];
  v4 = *(_QWORD *)(v3 + 56);
  sub_13D35F0((__int64)v8, (__int64)&v6, *(_QWORD *)(v3 + 88), v4, nullptr);
  result = sub_FFC7C0(55, (__int64)v8[0], (__int64)v8[1], v4);
  if ( v8[0] != &v9 )
  {
    v5 = result;
    operator delete(v8[0]);
    result = v5;
  }
  if ( (unsigned int)result > 5 )
    return 6;
  return result;
}
