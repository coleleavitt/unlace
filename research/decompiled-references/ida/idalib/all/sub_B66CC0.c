__int64 __fastcall sub_B66CC0(__int64 a1, __int64 a2)
{
  std::__detail::_List_node_base *v3; // rsi
  std::__detail::_List_node_base *v5; // rdi
  __int64 v6; // rax
  std::__detail::_List_node_base *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // r8d
  __int64 v12; // rax
  __m128i *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rcx
  char v24; // al
  char v25; // dl
  char v26; // al
  char v27; // dl
  char v28; // al
  __int64 v29; // rdx
  __int64 result; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  unsigned __int64 v33; // r8
  __m128i v34; // xmm0
  __int64 v35; // rdi
  __int64 v36; // rax
  __int32 v37; // esi

  v3 = (std::__detail::_List_node_base *)(a2 + 8);
  v5 = (std::__detail::_List_node_base *)(a1 + 8);
  v6 = *((_QWORD *)v5 - 1);
  v7 = *((std::__detail::_List_node_base **)v3 - 1);
  *((_QWORD *)v5 - 1) = v7;
  *((_QWORD *)v3 - 1) = v6;
  std::__detail::_List_node_base::swap(v5, v3, v7);
  v8 = *(_QWORD *)(a2 + 24);
  v9 = a1 + 32;
  v10 = a2 + 32;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  LODWORD(v3) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 24) = v8;
  LODWORD(v8) = *(_DWORD *)(a2 + 32) & 0xFFFFFFFE;
  *(_DWORD *)(a2 + 32) = (unsigned int)v3 & 0xFFFFFFFE | *(_DWORD *)(a2 + 32) & 1;
  *(_DWORD *)(a1 + 32) = v8 | *(_DWORD *)(a1 + 32) & 1;
  LODWORD(v8) = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a2 + 36) = v8;
  if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
  {
    v11 = *(_DWORD *)(a1 + 48);
    if ( (*(_BYTE *)(a2 + 32) & 1) == 0 )
    {
      v36 = *(_QWORD *)(a1 + 40);
      v23 = a2 + 168;
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = v36;
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(a2 + 48) = v11;
      goto LABEL_23;
    }
    v12 = a1 + 40;
    v13 = (__m128i *)(a2 + 40);
    v10 = a1 + 32;
    v9 = a2 + 32;
    goto LABEL_6;
  }
  v13 = (__m128i *)(a1 + 40);
  v12 = a2 + 40;
  if ( (*(_BYTE *)(a2 + 32) & 1) == 0 )
  {
    v11 = *(_DWORD *)(a2 + 48);
LABEL_6:
    *(_BYTE *)v10 |= 1u;
    v14 = v13->m128i_i64[0];
    v15 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)v12 = v13->m128i_i64[0];
    if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      *(_DWORD *)(v12 + 8) = v13->m128i_i32[2];
    v16 = v13[1].m128i_i64[0];
    *(_QWORD *)(v12 + 16) = v16;
    if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      *(_DWORD *)(v12 + 24) = v13[1].m128i_i32[2];
    v17 = v13[2].m128i_i64[0];
    *(_QWORD *)(v12 + 32) = v17;
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      *(_DWORD *)(v12 + 40) = v13[2].m128i_i32[2];
    v18 = v13[3].m128i_i64[0];
    *(_QWORD *)(v12 + 48) = v18;
    if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      *(_DWORD *)(v12 + 56) = v13[3].m128i_i32[2];
    v19 = v13[4].m128i_i64[0];
    *(_QWORD *)(v12 + 64) = v19;
    if ( (unsigned __int64)(v19 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      *(_DWORD *)(v12 + 72) = v13[4].m128i_i32[2];
    v20 = v13[5].m128i_i64[0];
    *(_QWORD *)(v12 + 80) = v20;
    if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      *(_DWORD *)(v12 + 88) = v13[5].m128i_i32[2];
    v21 = v13[6].m128i_i64[0];
    *(_QWORD *)(v12 + 96) = v21;
    if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      *(_DWORD *)(v12 + 104) = v13[6].m128i_i32[2];
    v22 = v13[7].m128i_i64[0];
    *(_QWORD *)(v12 + 112) = v22;
    if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      *(_DWORD *)(v12 + 120) = v13[7].m128i_i32[2];
    *(_BYTE *)v9 &= ~1u;
    *(_QWORD *)(v9 + 8) = v15;
    *(_DWORD *)(v9 + 16) = v11;
    v23 = a2 + 168;
    goto LABEL_23;
  }
  v23 = a2 + 168;
  do
  {
    v31 = *(_QWORD *)v12;
    v32 = v13->m128i_i64[0];
    v33 = v13->m128i_i64[0] - 1;
    if ( (unsigned __int64)(*(_QWORD *)v12 - 1LL) > 0xFFFFFFFFFFFFFFFDLL )
    {
      v13->m128i_i64[0] = v31;
      *(_QWORD *)v12 = v32;
      if ( v33 <= 0xFFFFFFFFFFFFFFFDLL )
        *(_DWORD *)(v12 + 8) = v13->m128i_i32[2];
    }
    else if ( v33 > 0xFFFFFFFFFFFFFFFDLL )
    {
      v13->m128i_i64[0] = v31;
      v37 = *(_DWORD *)(v12 + 8);
      *(_QWORD *)v12 = v32;
      v13->m128i_i32[2] = v37;
    }
    else
    {
      v34 = _mm_loadu_si128(v13);
      v35 = v13->m128i_i64[0];
      v13->m128i_i64[0] = v31;
      v13->m128i_i32[2] = *(_DWORD *)(v12 + 8);
      *(_QWORD *)v12 = v35;
      *(_DWORD *)(v12 + 8) = v34.m128i_i32[2];
    }
    v12 += 16;
    ++v13;
  }
  while ( v23 != v12 );
LABEL_23:
  sub_2236B10(a1 + 168, a1 + 192, a2 + 192, v23);
  v24 = *(_BYTE *)(a1 + 360);
  *(_BYTE *)(a1 + 360) = *(_BYTE *)(a2 + 360);
  v25 = *(_BYTE *)(a2 + 361);
  *(_BYTE *)(a2 + 360) = v24;
  v26 = *(_BYTE *)(a1 + 361);
  *(_BYTE *)(a1 + 361) = v25;
  v27 = *(_BYTE *)(a2 + 362);
  *(_BYTE *)(a2 + 361) = v26;
  v28 = *(_BYTE *)(a1 + 362);
  *(_BYTE *)(a1 + 362) = v27;
  v29 = *(_QWORD *)(a2 + 224);
  *(_BYTE *)(a2 + 362) = v28;
  result = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 224) = v29;
  *(_QWORD *)(a2 + 224) = result;
  return result;
}
