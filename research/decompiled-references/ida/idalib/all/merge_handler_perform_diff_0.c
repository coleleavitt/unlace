unsigned __int64 __fastcall merge_handler_perform_diff_0(__int64 a1)
{
  __int64 *v1; // r12
  __int64 v2; // r13
  _QWORD *v4; // rbp
  __m128i v5; // xmm0
  void *v6; // rdi
  void *v7; // rbp
  __m128i v8; // xmm1
  __m128i v9; // xmm1
  void *v10; // rdi
  __m128i v12; // [rsp+0h] [rbp-68h] BYREF
  __m128i v13; // [rsp+10h] [rbp-58h] BYREF
  void *ptr; // [rsp+20h] [rbp-48h]
  __m128i v15; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v1 = *(__int64 **)(a1 + 56);
  v2 = *(_QWORD *)(a1 + 64);
  v16 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(a1 + 72);
  (*(void (__fastcall **)(__int64 *))(*v1 + 16))(v1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  sub_400C20((__int64)&v13, v4, v1, v2);
  v5 = _mm_load_si128(&v13);
  v6 = *(void **)(a1 + 96);
  v7 = ptr;
  v8 = _mm_loadu_si128(&v15);
  ptr = nullptr;
  *(__m128i *)(a1 + 80) = v5;
  v15 = 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    v12 = v8;
    qfree(v6);
    v9 = _mm_load_si128(&v12);
    v10 = ptr;
    *(_QWORD *)(a1 + 96) = v7;
    *(__m128i *)(a1 + 104) = v9;
    if ( v10 )
    {
      v15.m128i_i64[0] = 0;
      qfree(v10);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 96) = v7;
    *(__m128i *)(a1 + 104) = v8;
  }
  return v16 - __readfsqword(0x28u);
}
