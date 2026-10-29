__int64 __fastcall sub_7B22E0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rdi
  unsigned int v5; // ebp
  void *v6; // rax
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __int64 v9; // rdx
  void *v10; // rax
  __m128i v11; // xmm0
  void *ptr; // [rsp+0h] [rbp+0h]
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
  v4 = nullptr;
  v5 = calc_func_metadata();
  if ( v5 )
  {
    v6 = *(void **)a3;
    *(_DWORD *)(a3 + 24) = v5;
    v7 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    v8 = _mm_loadu_si128(&vars8);
    *(_QWORD *)a3 = 0;
    v9 = *(_QWORD *)(a3 + 48);
    ptr = v6;
    v10 = *(void **)(a3 + 32);
    vars8 = v7;
    v11 = _mm_loadu_si128(&vars28);
    vars20 = v10;
    vars28.m128i_i64[1] = v9;
    *(_QWORD *)(a3 + 32) = 0;
    v4 = v10;
    *(__m128i *)(a3 + 8) = v8;
    *(__m128i *)(a3 + 40) = v11;
  }
  if ( v4 )
  {
    vars28.m128i_i64[0] = 0;
    qfree(v4);
  }
  if ( ptr )
  {
    vars8.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v5;
}

