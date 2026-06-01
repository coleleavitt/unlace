unsigned __int64 __fastcall sub_A94F0(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  int i; // r14d
  size_t v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __m128i *v11; // rsi
  __int64 v12; // rax
  unsigned int v14; // [rsp+0h] [rbp-78h]
  unsigned __int64 v15; // [rsp+0h] [rbp-78h]
  void *src; // [rsp+8h] [rbp-70h]
  void *v18; // [rsp+18h] [rbp-60h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( a4 > 0 )
  {
    for ( i = 0; a4 != i; ++i )
    {
      if ( !*(_QWORD *)(a2 + 8) )
        *(_QWORD *)(a2 + 8) = qlsize();
      if ( qlseek() >= *(_QWORD *)(a2 + 8) )
        return v19 - __readfsqword(0x28u);
      if ( *(_BYTE *)a1 > 7u )
      {
        qlread();
        v14 = unpack_dd();
        qlread();
        v15 = v14 | (unsigned __int64)(unpack_dd() << 32);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) != v15 )
          goto LABEL_4;
      }
      else
      {
        qlread();
        v15 = (unsigned int)unpack_dd();
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) != v15 )
          goto LABEL_4;
      }
      v15 = -1;
LABEL_4:
      qlread();
      v7 = (unsigned int)unpack_dd();
      if ( v7 - 1 <= 0x3FF )
      {
        v8 = qalloc();
        if ( v8 )
        {
          src = (void *)v8;
          if ( v7 == qlread() )
          {
            v18 = (void *)qalloc_or_throw();
            memcpy(v18, src, v7);
            v9 = a3[1];
            v10 = *a3;
            if ( a3[2] < (unsigned __int64)(v9 + 1) )
            {
              v12 = qvector_reserve();
              *a3 = v12;
              v10 = v12;
              v9 = a3[1];
            }
            v11 = (__m128i *)(32 * v9 + v10);
            v11[1] = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
            v11->m128i_i64[0] = v15;
            v11->m128i_i64[1] = (__int64)v18;
            ++a3[1];
            qfree();
          }
        }
      }
    }
  }
  return v19 - __readfsqword(0x28u);
}

