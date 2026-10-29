unsigned __int64 __fastcall sub_4B6F80(__int64 a1, unsigned int a2, const __m128i *a3)
{
  __m128i v5; // xmm0
  __int32 v6; // eax
  __int64 v7; // rdi
  __m128i v8; // xmm0
  size_t v9; // rbx
  void *src; // [rsp+0h] [rbp-A8h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-A0h]
  _OWORD v13[2]; // [rsp+20h] [rbp-88h] BYREF
  __int32 v14; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-60h]
  void *v16; // [rsp+50h] [rbp-58h]
  __int128 v17; // [rsp+58h] [rbp-50h]
  __int64 v18; // [rsp+68h] [rbp-40h]
  __int128 v19; // [rsp+70h] [rbp-38h]
  unsigned __int64 v20; // [rsp+88h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 1, 1);
  n[0] = 1;
  *(_BYTE *)src = 0;
  v5 = _mm_loadu_si128(a3);
  v6 = a3[2].m128i_i32[0];
  v7 = a3[2].m128i_i64[1];
  v15 = 0;
  v13[0] = v5;
  v8 = _mm_loadu_si128(a3 + 1);
  v14 = v6;
  v13[1] = v8;
  if ( v7 )
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v9 = n[0];
  v16 = nullptr;
  v17 = 0;
  if ( n[0] )
  {
    v16 = (void *)qalloc_or_throw(n[0]);
    *((_QWORD *)&v17 + 1) = v9;
    memcpy(v16, src, v9);
    *(_QWORD *)&v17 = v9;
  }
  v18 = 0;
  v19 = 0;
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  sub_4B6E60(qword_2CCB598, a1, a2, (__int64)v13, 1);
  sub_4B66E0(v13);
  return v20 - __readfsqword(0x28u);
}
