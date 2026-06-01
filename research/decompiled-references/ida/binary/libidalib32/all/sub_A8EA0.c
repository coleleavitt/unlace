unsigned __int64 __fastcall sub_A8EA0(_BYTE *a1, __int64 a2, __int64 *a3, int a4)
{
  int i; // r15d
  __int32 v7; // r13d
  size_t v8; // rbx
  const void *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  __m128i *v12; // rsi
  __int64 v13; // rax
  __int32 v15; // [rsp+0h] [rbp-78h]
  void *v17; // [rsp+18h] [rbp-60h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      if ( !*(_QWORD *)(a2 + 8) )
        *(_QWORD *)(a2 + 8) = qlsize();
      if ( qlseek() >= *(_QWORD *)(a2 + 8) )
        break;
      if ( *a1 > 7u )
      {
        qlread();
        v7 = unpack_dd();
        qlread();
        unpack_dd();
        v15 = v7;
      }
      else
      {
        qlread();
        v15 = unpack_dd();
      }
      qlread();
      v8 = (unsigned int)unpack_dd();
      if ( v8 - 1 <= 0x3FF )
      {
        v9 = (const void *)qalloc();
        if ( v9 )
        {
          if ( v8 == qlread() )
          {
            v17 = (void *)qalloc_or_throw();
            memcpy(v17, v9, v8);
            v10 = a3[1];
            v11 = *a3;
            if ( a3[2] < (unsigned __int64)(v10 + 1) )
            {
              v13 = qvector_reserve();
              *a3 = v13;
              v11 = v13;
              v10 = a3[1];
            }
            v12 = (__m128i *)(32 * v10 + v11);
            v12[1] = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
            v12->m128i_i32[0] = v15;
            v12->m128i_i64[1] = (__int64)v17;
            ++a3[1];
            qfree();
          }
        }
      }
    }
  }
  return v18 - __readfsqword(0x28u);
}

