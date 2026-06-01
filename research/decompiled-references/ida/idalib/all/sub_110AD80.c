_BYTE *__fastcall sub_110AD80(__int64 a1, __int64 a2)
{
  signed __int64 v4; // r12
  __int64 v5; // r13
  __m128i v6; // xmm0
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r15
  _QWORD *v10; // r14
  _QWORD *v11; // rdi
  __m128i v13[4]; // [rsp+8h] [rbp-40h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  sub_110A8B0((_QWORD *)a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  *(_QWORD *)(a1 + 32) = a1 + 48;
  sub_110A8B0((_QWORD *)(a1 + 32), *(_BYTE **)(a2 + 32), *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 40));
  *(_QWORD *)(a1 + 64) = a1 + 80;
  sub_110A8B0((_QWORD *)(a1 + 64), *(_BYTE **)(a2 + 64), *(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
  v4 = *(_QWORD *)(a2 + 104) - *(_QWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  if ( v4 >> 5 )
  {
    if ( (unsigned __int64)(v4 >> 5) > 0x7FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v5 = operator new(v4);
  }
  else
  {
    v5 = 0;
  }
  v13[0].m128i_i64[0] = v5;
  v6 = _mm_loadl_epi64(v13);
  *(_QWORD *)(a1 + 112) = v5 + v4;
  *(__m128i *)(a1 + 96) = _mm_unpacklo_epi64(v6, v6);
  v7 = *(_QWORD *)(a2 + 104);
  v8 = *(_QWORD *)(a2 + 96);
  if ( v7 != v8 )
  {
    v9 = *(_QWORD *)(a2 + 96);
    v10 = (_QWORD *)v5;
    do
    {
      v11 = v10;
      v9 += 32;
      v13[0].m128i_i64[0] = v8;
      *v10 = v10 + 2;
      v10 += 4;
      sub_110A8B0(v11, *(_BYTE **)(v9 - 32), *(_QWORD *)(v9 - 32) + *(_QWORD *)(v9 - 24));
      v8 = v13[0].m128i_i64[0];
    }
    while ( v7 != v9 );
    v5 += ((v7 - 32 - v13[0].m128i_i64[0]) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  }
  *(_QWORD *)(a1 + 104) = v5;
  *(_QWORD *)(a1 + 120) = a1 + 136;
  sub_110A8B0((_QWORD *)(a1 + 120), *(_BYTE **)(a2 + 120), *(_QWORD *)(a2 + 120) + *(_QWORD *)(a2 + 128));
  return sub_10F33D0(a1 + 152, a2 + 152);
}
