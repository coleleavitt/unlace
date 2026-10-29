__m128i *__fastcall dwarf_tdelete(__int64 a1, const __m128i **a2, unsigned int (__fastcall *a3)(__int64, _QWORD))
{
  const __m128i *v3; // rbp
  __m128i *v4; // rax
  __m128i *v5; // rbx
  __int64 v6; // r12
  __m128i *v7; // rdi
  int v9; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v10[1] = __readfsqword(0x28u);
  v3 = *a2;
  v9 = 0;
  v10[0] = 0;
  if ( v3 )
  {
    v4 = (__m128i *)sub_59C60(a1, v3, a3, 2, &v9, v10);
    v5 = v4;
    if ( v4 )
    {
      v6 = v10[0];
      if ( v10[0] )
      {
        --v3[1].m128i_i64[1];
        *(_QWORD *)(v6 + 16) = v4[1].m128i_i64[0];
        free(v4);
        return (__m128i *)v6;
      }
      v7 = (__m128i *)v4[1].m128i_i64[0];
      if ( v7 )
      {
        *v4 = _mm_loadu_si128(v7);
        v4[1].m128i_i64[0] = v7[1].m128i_i64[0];
        free(v7);
        --v3[1].m128i_i64[1];
        return v5;
      }
      --v3[1].m128i_i64[1];
      v4[1].m128i_i64[0] = 0;
      v4->m128i_i64[0] = 0;
      v4->m128i_i8[8] = 0;
    }
  }
  return nullptr;
}

