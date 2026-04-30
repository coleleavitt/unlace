__int64 __fastcall xref_editor_t__::vfunc_14(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdi
  __m128i v5; // xmm0
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v7.m128i_i64[0] = -1;
  v7.m128i_i16[4] = 0;
  if ( a2 >= 0 )
  {
    v3 = *(_QWORD **)(a1 + 192);
    if ( (unsigned __int64)a2 < v3[1] && *(_QWORD *)(a1 + 200) == -1 )
    {
      a2 = *v3 + 16 * a2;
      v7 = _mm_loadu_si128((const __m128i *)a2);
    }
  }
  v4 = *(_QWORD *)(a1 + 256);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 264) = 0;
    qfree(v4, (const char *)a2);
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 272) = 0;
  }
  sub_3EBB40((__m128i **)(a1 + 256), *(_QWORD *)(a1 + 216), *(_DWORD *)(a1 + 224), nullptr, 0, 1);
  if ( *(_QWORD *)(a1 + 200) != -1 )
  {
    v5 = _mm_loadu_si128((const __m128i *)(a1 + 200));
    *(_QWORD *)(a1 + 200) = -1;
    v7 = v5;
  }
  return sub_3EC010(a1, (unsigned __int64 *)&v7);
}
