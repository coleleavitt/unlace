/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42CD20
// Address: 0x000000000042CD20

//----- (000000000042CD20) ----------------------------------------------------
__int64 __fastcall sub_42CD20(__int64 a1, __m128i *a2)
{
  unsigned __int64 v2; // rax
  FILE *v4; // rsi
  __int64 v5; // rax
  void *v6; // rdi
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  void *v10; // rax
  __m128i v11; // xmm0
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __m128i v14; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 8);
  v15 = __readfsqword(0x28u);
  if ( v2 < (unsigned __int64)xmmword_4C80A8 && (v4 = *(FILE **)(qword_4C80A0 + 8 * v2)) != nullptr )
  {
    ptr = nullptr;
    v14 = 0;
    v5 = sub_481160((char **)&ptr, v4);
    v6 = ptr;
    if ( v5 < 0 )
    {
      a2->m128i_i64[1] = -1;
      if ( v6 )
      {
        v14.m128i_i64[0] = 0;
        j__free(v6);
      }
    }
    else
    {
      v7 = v14.m128i_i64[0];
      if ( v14.m128i_i64[0] )
      {
        v8 = v14.m128i_i64[0] + 1;
        v9 = v14.m128i_i64[0];
        v7 = v14.m128i_i64[0] - 1;
      }
      else
      {
        v8 = 2;
        v9 = 1;
      }
      if ( v14.m128i_i64[1] < v8 )
      {
        ptr = sub_481540((__int64)&ptr, ptr, v8, 1u);
        v6 = ptr;
      }
      v14.m128i_i64[0] = v8;
      *((_BYTE *)v6 + v9) = 0;
      *((_BYTE *)ptr + v7) = 10;
      v10 = ptr;
      v11 = _mm_loadu_si128(&v14);
      a2->m128i_i8[0] = 7;
      a2->m128i_i64[1] = (__int64)v10;
      a2[1] = v11;
    }
  }
  else
  {
    a2->m128i_i64[1] = -1;
  }
  return 0;
}
// 4C80A0: using guessed type __int64 qword_4C80A0;
// 4C80A8: using guessed type __int128 xmmword_4C80A8;
