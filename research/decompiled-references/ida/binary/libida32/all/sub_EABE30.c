void __fastcall sub_EABE30(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rtt
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  __m128i si128; // [rsp+10h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    v3 = (a2 - a1) >> 3;
    v5 = a1 + 8;
    if ( 0xFFFFFFFF / v3 >= v3 )
    {
      if ( (v3 & 1) == 0 )
      {
        v5 = a1 + 16;
        si128 = _mm_load_si128((const __m128i *)&unk_2383B90);
        v19 = sub_EABBD0((__int64)&si128, a3, &si128);
        v20 = *(_QWORD *)(a1 + 8);
        v21 = (_QWORD *)(a1 + 8 * v19);
        *(_QWORD *)(a1 + 8) = *v21;
        *v21 = v20;
      }
      if ( a2 != v5 )
      {
        v10 = v5 + ((a2 - 16 - v5) & 0xFFFFFFFFFFFFFFF0LL) + 16;
        do
        {
          si128.m128i_i64[0] = 0;
          v11 = v5 - a1;
          v5 += 16;
          v11 >>= 3;
          v12 = v11 + 2;
          si128.m128i_i64[1] = (v11 + 2) * (v11 + 1) - 1;
          v13 = sub_EABBD0((__int64)&si128, a3, &si128);
          v14 = *(_QWORD *)(v5 - 16);
          v15 = v13;
          v16 = (_QWORD *)(a1 + 8 * (v13 / v12));
          *(_QWORD *)(v5 - 16) = *v16;
          *v16 = v14;
          v17 = (_QWORD *)(a1 + 8 * (v15 % v12));
          v18 = *(_QWORD *)(v5 - 8);
          *(_QWORD *)(v5 - 8) = *v17;
          *v17 = v18;
        }
        while ( v5 != v10 );
      }
    }
    else
    {
      v22 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      if ( a2 != v5 )
      {
        do
        {
          si128.m128i_i64[0] = 0;
          v6 = v5 - a1;
          v5 += 8;
          si128.m128i_i64[1] = v6 >> 3;
          v7 = sub_EABBD0((__int64)&v22, a3, &si128);
          v8 = *(_QWORD *)(v5 - 8);
          v9 = (_QWORD *)(a1 + 8 * v7);
          *(_QWORD *)(v5 - 8) = *v9;
          *v9 = v8;
        }
        while ( v5 != a1 + 8 * ((unsigned __int64)(a2 - 16 - a1) >> 3) + 16 );
      }
    }
  }
}

