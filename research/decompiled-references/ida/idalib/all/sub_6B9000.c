__int64 __fastcall sub_6B9000(__int64 a1, __m128i *a2)
{
  __int8 v2; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rax
  __m128i *v15; // rax
  __m128i *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // rdx

  v2 = *(_BYTE *)(a1 + 32);
  *(_BYTE *)(a1 + 32) = a2[2].m128i_i8[0];
  v3 = a2->m128i_i64[0];
  a2[2].m128i_i8[0] = v2;
  v4 = *(_QWORD *)a1;
  *(_QWORD *)a1 = v3;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = a2->m128i_i64[1];
  *(_QWORD *)(a1 + 16) = a2[1].m128i_i64[0];
  v6 = a2[1].m128i_i64[1];
  a2->m128i_i64[0] = v4;
  *(__m128i *)((char *)a2 + 8) = v5;
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v6;
  LOBYTE(v6) = a2[2].m128i_i8[1];
  a2[1].m128i_i64[1] = v7;
  LOBYTE(v7) = *(_BYTE *)(a1 + 33);
  *(_BYTE *)(a1 + 33) = v6;
  v8 = a2[2].m128i_i64[1];
  a2[2].m128i_i8[1] = v7;
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v8;
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = a2[3].m128i_i64[0];
  *(_QWORD *)(a1 + 56) = a2[3].m128i_i64[1];
  a2[3] = v10;
  a2[2].m128i_i64[1] = v9;
  v11 = *(_QWORD *)(a1 + 144);
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 152));
  *(_QWORD *)(a1 + 144) = a2[9].m128i_i64[0];
  *(_QWORD *)(a1 + 152) = a2[9].m128i_i64[1];
  *(_QWORD *)(a1 + 160) = a2[10].m128i_i64[0];
  v13 = _mm_loadu_si128(a2 + 6);
  a2[9].m128i_i64[0] = v11;
  *(__m128i *)((char *)a2 + 152) = v12;
  v14 = *(_QWORD *)(a1 + 104);
  v12.m128i_i32[0] = *(_DWORD *)(a1 + 96);
  *(__m128i *)(a1 + 96) = v13;
  a2[6].m128i_i64[1] = v14;
  a2[6].m128i_i32[0] = v12.m128i_i32[0];
  v15 = *(__m128i **)(a1 + 64);
  v16 = (__m128i *)a2[4].m128i_i64[0];
  if ( v15 == (__m128i *)(a1 + 112) )
  {
    v15 = a2 + 7;
    if ( v16 != &a2[7] )
      goto LABEL_3;
  }
  else
  {
    if ( v16 != &a2[7] )
    {
LABEL_3:
      *(_QWORD *)(a1 + 64) = v16;
      a2[4].m128i_i64[0] = (__int64)v15;
      goto LABEL_4;
    }
    a2[4].m128i_i64[0] = (__int64)v15;
    *(_QWORD *)(a1 + 64) = a1 + 112;
  }
LABEL_4:
  v17 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = a2[4].m128i_i64[1];
  v18 = a2[5].m128i_i64[0];
  a2[4].m128i_i64[1] = v17;
  v19 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v18;
  v20 = a2[5].m128i_i64[1];
  a2[5].m128i_i64[0] = v19;
  v21 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = v20;
  v22 = a2[7].m128i_i64[0];
  a2[5].m128i_i64[1] = v21;
  v23 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v22;
  a2[7].m128i_i64[0] = v23;
  v24 = *(_QWORD *)(a1 + 80);
  if ( v24 )
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * (*(_QWORD *)(v24 + 8) % *(_QWORD *)(a1 + 72))) = a1 + 80;
  result = a2[5].m128i_i64[0];
  if ( result )
  {
    v26 = *(_QWORD *)(result + 8) % a2[4].m128i_i64[1];
    result = a2[4].m128i_i64[0];
    *(_QWORD *)(result + 8 * v26) = a2 + 5;
  }
  return result;
}
