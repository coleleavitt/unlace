__int64 __fastcall sub_1BFAC00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 i; // r13
  __m128i *v15; // r15
  __m128i *v16; // rdi
  __int64 v17; // r15
  _WORD *v18; // rdx
  __m128i *v19; // r10
  __m128i *v20; // rdi
  __m128i *v21; // rdi
  unsigned int v22; // edx
  __int64 v26; // [rsp+28h] [rbp-E0h]
  __m128i v27[2]; // [rsp+30h] [rbp-D8h] BYREF
  void *ptr; // [rsp+50h] [rbp-B8h]
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF

  sub_18C74E0(a1, 0, 0, 4);
  v11 = sub_1BD9C70(a5, a4, 0, 0);
  v12 = 0;
  v27[0].m128i_i64[0] = 3;
  v13 = v11;
  *(_QWORD *)(v11 + 8) = 3;
  *(_QWORD *)v11 = 0;
  if ( 8 * a4 > 0 )
  {
    do
    {
      *(_QWORD *)(v11 + 8 * v12 + 16) = *(_QWORD *)(a2 + 8 * v12);
      ++v12;
    }
    while ( ((8 * a4) >> 3) - v12 > 0 );
  }
  *(_BYTE *)(v11 + 104) |= 1u;
  *(_DWORD *)(v11 + 108) = a4;
  if ( (_DWORD)a4 )
  {
    for ( i = 0; ; ++i )
    {
      v17 = 152 * i;
      v18 = *(_WORD **)(a3 + 8 * i);
      if ( a6 > (unsigned int)i )
      {
        sub_1BFA5E0(v27, a1, (unsigned __int64)v18, a7, a8);
        v15 = (__m128i *)(*(_QWORD *)(v13 + 48) + v17);
        if ( (v15->m128i_i32[0] & 0x7FFFFFFF) == 3 )
        {
          v20 = (__m128i *)v15[2].m128i_i64[0];
          if ( v20 != &v15[3] )
            free(v20);
        }
        v16 = v15;
      }
      else
      {
        sub_1BEC520(
          v27,
          a1,
          v18,
          *(_QWORD *)(a2 + 8 * i),
          0,
          0,
          a7,
          a8,
          (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0,
          0);
        v19 = (__m128i *)(v17 + *(_QWORD *)(v13 + 48));
        if ( (v19->m128i_i32[0] & 0x7FFFFFFF) == 3 )
        {
          v21 = (__m128i *)v19[2].m128i_i64[0];
          if ( v21 != &v19[3] )
          {
            v26 = v17 + *(_QWORD *)(v13 + 48);
            free(v21);
            v19 = (__m128i *)v26;
          }
        }
        v16 = v19;
      }
      sub_1A0B340(v16, v27);
      if ( (v27[0].m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v29 )
        free(ptr);
      if ( (*(_DWORD *)(*(_QWORD *)(v13 + 48) + 152 * i) & 0x7FFFFFFF) == 5 )
        break;
      if ( i == (_DWORD)a4 - 1 )
        return sub_190D5E0(a1, a7);
    }
    v22 = *(_DWORD *)(v13 + 104) & 0xFFFC03FE;
    BYTE1(v22) |= 8u;
    *(_DWORD *)(v13 + 104) = v22;
  }
  return sub_190D5E0(a1, a7);
}
