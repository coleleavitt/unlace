unsigned __int64 __fastcall sub_2CE4B0(_QWORD *a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  _BYTE *v5; // rdi
  _BYTE *v6; // rdi
  _BYTE *v7; // rdi
  _UNKNOWN **v9; // [rsp+0h] [rbp-58h] BYREF
  int v10; // [rsp+8h] [rbp-50h]
  __m128i v11; // [rsp+10h] [rbp-48h]
  _UNKNOWN **v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h]
  __m128i v14; // [rsp+30h] [rbp-28h]
  unsigned __int64 v15; // [rsp+48h] [rbp-10h]

  v2 = _mm_loadu_si128(a2);
  v3 = a2->m128i_i64[1];
  v15 = __readfsqword(0x28u);
  v5 = (_BYTE *)a1[111];
  v9 = &hexplace_t___vtable;
  v10 = 0;
  v11 = _mm_unpacklo_epi64(v2, v2);
  v13 = 0x7FFFFFFF;
  v12 = &hexplace_t___vtable;
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v3 - 1), (__m128i)(unsigned __int64)(v3 - 1));
  if ( v5 )
    sub_174F50(v5, (__int64)&v9, (__int64)&v12);
  v6 = (_BYTE *)a1[112];
  if ( v6 )
    sub_174F50(v6, (__int64)&v9, (__int64)&v12);
  v7 = (_BYTE *)a1[113];
  if ( v7 )
    sub_174F50(v7, (__int64)&v9, (__int64)&v12);
  return v15 - __readfsqword(0x28u);
}
