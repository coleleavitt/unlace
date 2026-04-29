unsigned __int64 __fastcall sub_2AED90(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rax
  _DWORD v12[4]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h]
  __int64 v14; // [rsp+18h] [rbp-40h]
  __int32 v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v12[0] = 0;
  copy_argloc(v12, &a1->m128i_u64[1]);
  v13 = a1[1].m128i_i64[1];
  v14 = a1[2].m128i_i64[0];
  v15 = a1[2].m128i_i32[2];
  copy_argloc(&a1->m128i_u64[1], a2 + 8);
  a1[1].m128i_i64[1] = *(_QWORD *)(a2 + 24);
  a1[2].m128i_i64[0] = *(_QWORD *)(a2 + 32);
  a1[2].m128i_i32[2] = *(_DWORD *)(a2 + 40);
  copy_argloc(a2 + 8, v12);
  *(_QWORD *)(a2 + 24) = v13;
  *(_QWORD *)(a2 + 32) = v14;
  *(_DWORD *)(a2 + 40) = v15;
  cleanup_argloc(v12);
  v12[0] = 0;
  copy_argloc(v12, &a1[3]);
  v13 = a1[4].m128i_i64[0];
  copy_argloc(&a1[3], a2 + 48);
  a1[4].m128i_i64[0] = *(_QWORD *)(a2 + 64);
  copy_argloc(a2 + 48, v12);
  *(_QWORD *)(a2 + 64) = v13;
  cleanup_argloc(v12);
  v2 = a1[4].m128i_i64[1];
  v3 = _mm_loadu_si128(a1 + 5);
  a1[4].m128i_i64[1] = *(_QWORD *)(a2 + 72);
  a1[5].m128i_i64[0] = *(_QWORD *)(a2 + 80);
  a1[5].m128i_i64[1] = *(_QWORD *)(a2 + 88);
  v4 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 72) = v2;
  *(__m128i *)(a2 + 80) = v3;
  v5 = a1[6].m128i_i64[0];
  a1[6].m128i_i64[0] = v4;
  v6 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 96) = v5;
  v7 = a1[6].m128i_i64[1];
  a1[6].m128i_i64[1] = v6;
  v8 = _mm_loadu_si128(a1 + 7);
  a1[7].m128i_i64[0] = *(_QWORD *)(a2 + 112);
  a1[7].m128i_i64[1] = *(_QWORD *)(a2 + 120);
  v9 = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a2 + 104) = v7;
  *(__m128i *)(a2 + 112) = v8;
  v10 = a1[8].m128i_i64[0];
  a1[8].m128i_i64[0] = v9;
  LODWORD(v9) = *(_DWORD *)(a2 + 136);
  *(_QWORD *)(a2 + 128) = v10;
  LODWORD(v10) = a1[8].m128i_i32[2];
  a1[8].m128i_i32[2] = v9;
  *(_DWORD *)(a2 + 136) = v10;
  return v16 - __readfsqword(0x28u);
}
