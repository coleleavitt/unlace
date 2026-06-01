unsigned __int64 __fastcall sub_650F30(__int64 *a1, __int64 a2, __m128i *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rax
  void *v8; // rdi
  __int64 v9; // rdx
  __m128i v10; // xmm0
  _QWORD v12[4]; // [rsp+0h] [rbp-58h] BYREF
  void *v13; // [rsp+20h] [rbp-38h]
  __m128i v14; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v7 = *a1;
  v15 = __readfsqword(0x28u);
  v12[2] = a2;
  v12[3] = a5;
  v12[0] = off_2B371C0;
  v12[1] = v7;
  v13 = nullptr;
  v14 = 0;
  sub_650CF0(a2, (__int64)v12, a3, nullptr, 0, a6);
  v8 = v13;
  if ( a4 )
  {
    v8 = *(void **)a4;
    v9 = *(_QWORD *)(a4 + 16);
    *(_QWORD *)a4 = v13;
    v10 = _mm_loadu_si128(&v14);
    v13 = v8;
    v14.m128i_i64[1] = v9;
    *(__m128i *)(a4 + 8) = v10;
  }
  v12[0] = off_2B371C0;
  if ( v8 )
  {
    v14.m128i_i64[0] = 0;
    qfree(v8);
  }
  return v15 - __readfsqword(0x28u);
}
