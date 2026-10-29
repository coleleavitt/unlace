void __fastcall sub_1417320(__int64 a1, const __m128i *a2)
{
  unsigned __int64 v2; // r9
  __int64 v4; // r10
  __int64 v5; // rdi
  __m128i *v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  void *v10; // r8
  __int64 v11; // r14
  __int64 v12; // rax
  size_t v13; // r14
  void *v14; // rax

  v2 = *(_QWORD *)(a1 + 2944);
  if ( v2 )
  {
    v4 = *(_QWORD *)(a1 + 2904);
    v5 = 24 * v2;
    v6 = (__m128i *)(v4 + 24 * v2 - 24);
    if ( a2->m128i_i32[0] == v6->m128i_i32[0] )
    {
      v8 = v2;
LABEL_8:
      *v6 = _mm_loadu_si128(a2);
      v6[1].m128i_i32[0] = a2[1].m128i_i32[0];
      *(_QWORD *)(a1 + 2944) = v8;
    }
    else
    {
      v7 = v4 + v5 - 48;
      v8 = v2;
      while ( --v8 )
      {
        v9 = 24 - v4 + v7;
        v6 = (__m128i *)v7;
        v7 -= 24;
        if ( *(_DWORD *)(v7 + 24) == a2->m128i_i32[0] )
        {
          if ( v2 > v8 )
          {
            v10 = (void *)(v4 + v9);
            v11 = 24LL * *(unsigned int *)(a1 + 2912);
            v12 = v4 + v11;
            v13 = v11 - v5;
            if ( v4 + v5 != v12 )
            {
              v14 = memmove(v10, (const void *)(v4 + v5), v13);
              v4 = *(_QWORD *)(a1 + 2904);
              v10 = v14;
            }
            *(_DWORD *)(a1 + 2912) = -1431655765 * (((__int64)((__int64)v10 + v13) - v4) >> 3);
          }
          goto LABEL_8;
        }
      }
    }
  }
}
