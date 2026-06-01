void **__fastcall sub_7D57C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  void *v7; // rdi
  int v8; // ebp
  void *v9; // rax
  void *v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __int64 v13; // rdx
  void *v14; // rax
  __m128i v15; // xmm0
  void *ptr; // [rsp+0h] [rbp+0h] BYREF
  __m128i vars8; // [rsp+8h] [rbp+8h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]
  void *vars20; // [rsp+20h] [rbp+20h]
  __m128i vars28; // [rsp+28h] [rbp+28h] BYREF
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  vars38 = __readfsqword(0x28u);
  ptr = nullptr;
  vars18 = 0;
  vars20 = nullptr;
  vars8 = 0;
  vars28 = 0;
  v6 = calc_func_metadata(a2, &ptr, a4, a5);
  v7 = vars20;
  v8 = v6;
  if ( v6 )
  {
    v9 = *(void **)a3;
    v10 = ptr;
    *(_DWORD *)(a3 + 24) = v8;
    v11 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    v12 = _mm_loadu_si128(&vars8);
    *(_QWORD *)a3 = v10;
    v13 = *(_QWORD *)(a3 + 48);
    ptr = v9;
    v14 = *(void **)(a3 + 32);
    vars8 = v11;
    v15 = _mm_loadu_si128(&vars28);
    vars20 = v14;
    vars28.m128i_i64[1] = v13;
    *(_QWORD *)(a3 + 32) = v7;
    v7 = v14;
    *(__m128i *)(a3 + 8) = v12;
    *(__m128i *)(a3 + 40) = v15;
  }
  if ( v7 )
  {
    vars28.m128i_i64[0] = 0;
    qfree(v7);
  }
  if ( ptr )
  {
    vars8.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return &ptr;
}
