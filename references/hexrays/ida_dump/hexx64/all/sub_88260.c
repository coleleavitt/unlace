__int64 __fastcall sub_88260(_QWORD *a1, unsigned __int8 **a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __int64 v9; // rdi
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  __m128i v12; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  result = sub_87990((__int64)a1, (__int64)a2);
  if ( (_BYTE)result )
  {
    v4 = sub_7CFC0((__int64)a2, 1u);
    a1[2] = v4;
    sub_7D2C0(a2, (__int64)(a1 + 3), v4);
    sub_7D150((__int64)&v11, a2);
    v5 = a1[4];
    v6 = v11;
    v11 = 0;
    v7 = _mm_loadu_si128(&v12);
    v12 = 0;
    if ( v5 )
    {
      a1[5] = 0;
      v10 = v7;
      qfree(v5);
      v8 = _mm_load_si128(&v10);
      v9 = v11;
      a1[4] = v6;
      *(__m128i *)(a1 + 5) = v8;
      if ( v9 )
      {
        v12.m128i_i64[0] = 0;
        qfree(v9);
      }
    }
    else
    {
      a1[4] = v6;
      *(__m128i *)(a1 + 5) = v7;
    }
    result = extract_argloc(a1 + 7, a2, 0);
    if ( !(_BYTE)result )
      sub_7A530(a1 + 7, a2);
  }
  return result;
}
