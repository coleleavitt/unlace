__int64 __fastcall sub_76F070(__int64 a1, __int64 a2)
{
  std::__detail::_List_node_base *v3; // rsi
  std::__detail::_List_node_base *v5; // rdi
  __int64 v6; // rax
  std::__detail::_List_node_base *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  int v12; // ecx
  char v13; // cl
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  char v25; // al
  char v26; // dl
  char v27; // al
  char v28; // dl
  char v29; // al
  __int64 v30; // rdx
  __int64 result; // rax
  __m128i *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rcx
  unsigned __int64 v36; // r8
  __int32 v37; // ecx
  __int64 v38; // rax
  int v39; // edx
  __int32 v40; // ecx
  __m128i v41; // xmm0

  v3 = (std::__detail::_List_node_base *)(a2 + 8);
  v5 = (std::__detail::_List_node_base *)(a1 + 8);
  v6 = *((_QWORD *)v5 - 1);
  v7 = *((std::__detail::_List_node_base **)v3 - 1);
  *((_QWORD *)v5 - 1) = v7;
  *((_QWORD *)v3 - 1) = v6;
  std::__detail::_List_node_base::swap(v5, v3, v7);
  v8 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  LODWORD(v5) = *(_DWORD *)(a1 + 32);
  v9 = a2 + 32;
  *(_QWORD *)(a1 + 24) = v8;
  v10 = *(_DWORD *)(a2 + 32);
  v11 = a1 + 32;
  *(_DWORD *)(a2 + 32) = (unsigned int)v5 & 0xFFFFFFFE | v10 & 1;
  *(_DWORD *)(a1 + 32) = v10 & 0xFFFFFFFE | *(_DWORD *)(a1 + 32) & 1;
  v12 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a2 + 36) = v12;
  v13 = *(_BYTE *)(a2 + 32) & 1;
  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
  {
    if ( v13 )
    {
      v32 = (__m128i *)(a1 + 40);
      v33 = a2 + 40;
      v24 = a2 + 168;
      do
      {
        v34 = v32->m128i_i64[0];
        v35 = *(_QWORD *)v33;
        v36 = *(_QWORD *)v33 - 1LL;
        if ( (unsigned __int64)(v32->m128i_i64[0] - 1) > 0xFFFFFFFFFFFFFFFDLL )
        {
          v32->m128i_i64[0] = v35;
          if ( v36 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v40 = *(_DWORD *)(v33 + 8);
            *(_QWORD *)v33 = v34;
            v32->m128i_i32[2] = v40;
          }
          else
          {
            *(_QWORD *)v33 = v34;
          }
        }
        else
        {
          if ( v36 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v41 = _mm_loadu_si128(v32);
            v32->m128i_i64[0] = v35;
            v32->m128i_i32[2] = *(_DWORD *)(v33 + 8);
            v37 = v41.m128i_i32[2];
            *(_QWORD *)v33 = v41.m128i_i64[0];
          }
          else
          {
            v32->m128i_i64[0] = v35;
            *(_QWORD *)v33 = v34;
            v37 = v32->m128i_i32[2];
          }
          *(_DWORD *)(v33 + 8) = v37;
        }
        v33 += 16;
        ++v32;
      }
      while ( v33 != v24 );
      goto LABEL_21;
    }
  }
  else
  {
    if ( !v13 )
    {
      v38 = *(_QWORD *)(a1 + 40);
      v24 = a2 + 168;
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
      v39 = *(_DWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 40) = v38;
      LODWORD(v38) = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 48) = v39;
      *(_DWORD *)(a2 + 48) = v38;
      goto LABEL_21;
    }
    v9 = a1 + 32;
    v11 = a2 + 32;
  }
  *(_BYTE *)v9 |= 1u;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = *(_QWORD *)(v9 + 8);
  v16 = *(_DWORD *)(v9 + 16);
  *(_QWORD *)(v9 + 8) = v14;
  if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    *(_DWORD *)(v9 + 16) = *(_DWORD *)(v11 + 16);
  v17 = *(_QWORD *)(v11 + 24);
  *(_QWORD *)(v9 + 24) = v17;
  if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    *(_DWORD *)(v9 + 32) = *(_DWORD *)(v11 + 32);
  v18 = *(_QWORD *)(v11 + 40);
  *(_QWORD *)(v9 + 40) = v18;
  if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    *(_DWORD *)(v9 + 48) = *(_DWORD *)(v11 + 48);
  v19 = *(_QWORD *)(v11 + 56);
  *(_QWORD *)(v9 + 56) = v19;
  if ( (unsigned __int64)(v19 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    *(_DWORD *)(v9 + 64) = *(_DWORD *)(v11 + 64);
  v20 = *(_QWORD *)(v11 + 72);
  *(_QWORD *)(v9 + 72) = v20;
  if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    *(_DWORD *)(v9 + 80) = *(_DWORD *)(v11 + 80);
  v21 = *(_QWORD *)(v11 + 88);
  *(_QWORD *)(v9 + 88) = v21;
  if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    *(_DWORD *)(v9 + 96) = *(_DWORD *)(v11 + 96);
  v22 = *(_QWORD *)(v11 + 104);
  *(_QWORD *)(v9 + 104) = v22;
  if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    *(_DWORD *)(v9 + 112) = *(_DWORD *)(v11 + 112);
  v23 = *(_QWORD *)(v11 + 120);
  *(_QWORD *)(v9 + 120) = v23;
  if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    *(_DWORD *)(v9 + 128) = *(_DWORD *)(v11 + 128);
  *(_BYTE *)v11 &= ~1u;
  *(_DWORD *)(v11 + 16) = v16;
  *(_QWORD *)(v11 + 8) = v15;
  v24 = a2 + 168;
LABEL_21:
  sub_25D59E0(a1 + 168, a1 + 192, a2 + 192, v24);
  v25 = *(_BYTE *)(a1 + 360);
  *(_BYTE *)(a1 + 360) = *(_BYTE *)(a2 + 360);
  v26 = *(_BYTE *)(a2 + 361);
  *(_BYTE *)(a2 + 360) = v25;
  v27 = *(_BYTE *)(a1 + 361);
  *(_BYTE *)(a1 + 361) = v26;
  v28 = *(_BYTE *)(a2 + 362);
  *(_BYTE *)(a2 + 361) = v27;
  v29 = *(_BYTE *)(a1 + 362);
  *(_BYTE *)(a1 + 362) = v28;
  v30 = *(_QWORD *)(a2 + 224);
  *(_BYTE *)(a2 + 362) = v29;
  result = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 224) = v30;
  *(_QWORD *)(a2 + 224) = result;
  return result;
}

