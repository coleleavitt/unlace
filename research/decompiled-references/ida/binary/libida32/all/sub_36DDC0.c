__int64 __fastcall sub_36DDC0(__int64 a1, __m128i *a2)
{
  unsigned __int64 v2; // rax
  _BYTE *v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  void *v7; // rax
  __m128i v8; // xmm0
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __m128i v11; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v2 = *(unsigned int *)(a1 + 8);
  v12 = __readfsqword(0x28u);
  if ( v2 < (unsigned __int64)xmmword_2CA1588 && *(_QWORD *)(qword_2CA1580 + 8 * v2) )
  {
    ptr = nullptr;
    v11 = 0;
    v3 = nullptr;
    if ( qgetline() < 0 )
    {
      a2->m128i_i32[2] = -1;
    }
    else
    {
      v4 = v11.m128i_i64[0];
      if ( v11.m128i_i64[0] )
      {
        v5 = v11.m128i_i64[0] + 1;
        v6 = v11.m128i_i64[0];
        v4 = v11.m128i_i64[0] - 1;
      }
      else
      {
        v5 = 2;
        v6 = 1;
      }
      if ( v11.m128i_i64[1] < v5 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v5, 1);
        v3 = ptr;
      }
      v11.m128i_i64[0] = v5;
      v3[v6] = 0;
      *((_BYTE *)ptr + v4) = 10;
      v7 = ptr;
      v8 = _mm_loadu_si128(&v11);
      a2->m128i_i8[0] = 7;
      a2->m128i_i64[1] = (__int64)v7;
      a2[1] = v8;
    }
  }
  else
  {
    a2->m128i_i32[2] = -1;
  }
  return 0;
}

