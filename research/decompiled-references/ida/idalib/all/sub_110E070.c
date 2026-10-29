void __fastcall sub_110E070(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i *v11; // rdi
  __m128i *v12; // rsi

  *(_QWORD *)a1 = a1 + 16;
  if ( *(_QWORD *)a2 == a2 + 16 )
  {
    *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)(a2 + 16));
  }
  else
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  }
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = a2 + 16;
  *(_QWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  v2 = *(_QWORD *)(a2 + 32);
  if ( v2 == a2 + 48 )
  {
    *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)(a2 + 48));
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v2;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = a2 + 48;
  *(_QWORD *)(a2 + 40) = 0;
  *(_BYTE *)(a2 + 48) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  v3 = *(_QWORD *)(a2 + 64);
  if ( v3 == a2 + 80 )
  {
    *(__m128i *)(a1 + 80) = _mm_loadu_si128((const __m128i *)(a2 + 80));
  }
  else
  {
    *(_QWORD *)(a1 + 64) = v3;
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  }
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_BYTE *)(a2 + 80) = 0;
  *(_QWORD *)(a2 + 64) = a2 + 80;
  *(_QWORD *)(a2 + 72) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  v4 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 96) = 0;
  v5 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v4;
  v6 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a2 + 104) = v5;
  v7 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v6;
  *(_QWORD *)(a2 + 112) = v7;
  *(_QWORD *)(a1 + 120) = a1 + 136;
  v8 = *(_QWORD *)(a2 + 120);
  v9 = a2 + 136;
  if ( v8 == a2 + 136 )
  {
    *(__m128i *)(a1 + 136) = _mm_loadu_si128((const __m128i *)(a2 + 136));
  }
  else
  {
    *(_QWORD *)(a1 + 120) = v8;
    *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 136);
  }
  v10 = *(_QWORD *)(a2 + 128);
  v11 = (__m128i *)(a1 + 152);
  v12 = (__m128i *)(a2 + 152);
  v11[-2].m128i_i64[1] = v10;
  v12[-2].m128i_i64[0] = v9;
  v12[-2].m128i_i64[1] = 0;
  v12[-1].m128i_i8[0] = 0;
  sub_A20E90(v11, v12);
}
