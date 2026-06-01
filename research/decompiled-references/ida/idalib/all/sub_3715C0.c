__int64 __fastcall sub_3715C0(__int64 a1, __m128i *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  void *v4; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  void *v8; // rax
  __m128i v9; // xmm0
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __m128i v12; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 8);
  v13 = __readfsqword(0x28u);
  if ( v2 < (unsigned __int64)xmmword_2CCB488 && *(_QWORD *)(qword_2CCB480 + 8 * v2) )
  {
    ptr = nullptr;
    v12 = 0;
    v3 = qgetline(&ptr);
    v4 = ptr;
    if ( v3 < 0 )
    {
      a2->m128i_i64[1] = -1;
      if ( v4 )
      {
        v12.m128i_i64[0] = 0;
        qfree(v4);
      }
    }
    else
    {
      v5 = v12.m128i_i64[0];
      if ( v12.m128i_i64[0] )
      {
        v6 = v12.m128i_i64[0] + 1;
        v7 = v12.m128i_i64[0];
        v5 = v12.m128i_i64[0] - 1;
      }
      else
      {
        v6 = 2;
        v7 = 1;
      }
      if ( v12.m128i_i64[1] < v6 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v6, 1);
        v4 = ptr;
      }
      v12.m128i_i64[0] = v6;
      *((_BYTE *)v4 + v7) = 0;
      *((_BYTE *)ptr + v5) = 10;
      v8 = ptr;
      v9 = _mm_loadu_si128(&v12);
      a2->m128i_i8[0] = 7;
      a2->m128i_i64[1] = (__int64)v8;
      a2[1] = v9;
    }
  }
  else
  {
    a2->m128i_i64[1] = -1;
  }
  return 0;
}
