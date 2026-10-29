unsigned __int64 __fastcall reg_value_info_dstr(__int64 *a1, __int64 a2, __int64 a3)
{
  void *v3; // rbp
  __m128i v4; // xmm1
  void *v5; // rdi
  __m128i v6; // xmm1
  void *v7; // rdi
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v11; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_4E3240((__int64)&ptr, a1, a3);
  v3 = ptr;
  v4 = _mm_loadu_si128(&v11);
  ptr = nullptr;
  v11 = 0;
  v5 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v9 = v4;
    qfree(v5);
    v6 = _mm_load_si128(&v9);
    v7 = ptr;
    *(_QWORD *)a2 = v3;
    *(__m128i *)(a2 + 8) = v6;
    if ( v7 )
    {
      v11.m128i_i64[0] = 0;
      qfree(v7);
    }
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(__m128i *)(a2 + 8) = v4;
  }
  return v12 - __readfsqword(0x28u);
}

