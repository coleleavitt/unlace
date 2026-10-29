__int64 __fastcall sub_1BFA6B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9)
{
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 i; // r13
  __m128i *v16; // r14
  __m128i *v17; // rdi
  _WORD *v18; // rdx
  __int64 v19; // r14
  __m128i *v20; // r10
  __m128i *v21; // rdi
  __m128i *v22; // rdi
  unsigned int v23; // edx
  __int64 v27; // [rsp+28h] [rbp-E0h]
  __m128i v28[2]; // [rsp+30h] [rbp-D8h] BYREF
  void *ptr; // [rsp+50h] [rbp-B8h]
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF

  sub_18C74E0(a1, 0, 0, 4);
  v12 = sub_1BD9C70(a5, a4, 0, 0);
  v13 = 0;
  v28[0].m128i_i64[0] = 3;
  v14 = v12;
  *(_QWORD *)(v12 + 8) = 3;
  *(_QWORD *)v12 = 0;
  if ( 8 * a4 > 0 )
  {
    do
    {
      *(_QWORD *)(v12 + 8 * v13 + 16) = *(_QWORD *)(a2 + 8 * v13);
      ++v13;
    }
    while ( ((8 * a4) >> 3) - v13 > 0 );
  }
  *(_BYTE *)(v12 + 104) |= 1u;
  *(_DWORD *)(v12 + 108) = a4;
  if ( (_DWORD)a4 )
  {
    for ( i = 0; ; ++i )
    {
      v18 = *(_WORD **)(a3 + 8 * i);
      v19 = 152 * i;
      if ( a9 > (unsigned int)i )
      {
        sub_1BFA5E0(v28, a1, (unsigned __int64)v18, a7, a8);
        v16 = (__m128i *)(*(_QWORD *)(v14 + 48) + v19);
        if ( (v16->m128i_i32[0] & 0x7FFFFFFF) == 3 )
        {
          v21 = (__m128i *)v16[2].m128i_i64[0];
          if ( v21 != &v16[3] )
            free(v21);
        }
        v17 = v16;
      }
      else
      {
        sub_1BEC520(
          v28,
          a1,
          v18,
          *(_QWORD *)(a2 + 8 * i),
          a6 & ((_DWORD)i == 0),
          0,
          a7,
          a8,
          (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0,
          0);
        v20 = (__m128i *)(v19 + *(_QWORD *)(v14 + 48));
        if ( (v20->m128i_i32[0] & 0x7FFFFFFF) == 3 )
        {
          v22 = (__m128i *)v20[2].m128i_i64[0];
          if ( v22 != &v20[3] )
          {
            v27 = v19 + *(_QWORD *)(v14 + 48);
            free(v22);
            v20 = (__m128i *)v27;
          }
        }
        v17 = v20;
      }
      sub_1A0B340(v17, v28);
      if ( (v28[0].m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v30 )
        free(ptr);
      if ( (*(_DWORD *)(*(_QWORD *)(v14 + 48) + 152 * i) & 0x7FFFFFFF) == 5 )
        break;
      if ( i == (_DWORD)a4 - 1 )
        return sub_190D5E0(a1, a7);
    }
    v23 = *(_DWORD *)(v14 + 104) & 0xFFFC03FE;
    BYTE1(v23) |= 8u;
    *(_DWORD *)(v14 + 104) = v23;
  }
  return sub_190D5E0(a1, a7);
}
