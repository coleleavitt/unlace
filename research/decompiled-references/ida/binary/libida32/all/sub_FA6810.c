__int64 __fastcall sub_FA6810(__int64 a1)
{
  std::__detail::_List_node_base *v1; // r12
  std::__detail::_List_node_base **v3; // rbp
  std::__detail::_List_node_base *v4; // r13
  std::__detail::_List_node_base **v5; // rdi
  __m128i v6; // xmm0
  __int64 v7; // rbp
  void *v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int16 v13; // dx
  __int16 v14; // dx
  __int64 v15; // rax
  __int64 result; // rax
  __m128i v17; // xmm0
  __m128i v18[3]; // [rsp+8h] [rbp-30h] BYREF

  v1 = (std::__detail::_List_node_base *)(a1 + 72);
  v3 = *(std::__detail::_List_node_base ***)(a1 + 72);
  if ( (std::__detail::_List_node_base **)(a1 + 72) != v3 )
  {
    do
    {
      v4 = *v3;
      operator delete();
      v5 = v3;
      v3 = (std::__detail::_List_node_base **)v4;
      operator delete(v5);
    }
    while ( v1 != v4 );
  }
  v18[0].m128i_i64[0] = (__int64)v1;
  v6 = _mm_loadl_epi64(v18);
  v7 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 88) = 0;
  *(__m128i *)(a1 + 72) = _mm_unpacklo_epi64(v6, v6);
  if ( v7 )
  {
    while ( 1 )
    {
      sub_FA6710(a1 + 96, *(_QWORD **)(v7 + 24));
      v8 = *(void **)(v7 + 56);
      v9 = *(_QWORD *)(v7 + 16);
      if ( v8 == (void *)(v7 + 72) )
      {
        operator delete((void *)v7);
        if ( !v9 )
          break;
      }
      else
      {
        free(v8);
        operator delete((void *)v7);
        if ( !v9 )
          break;
      }
      v7 = v9;
    }
  }
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = a1 + 104;
  *(_QWORD *)(a1 + 128) = a1 + 104;
  v10 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  if ( v10 != *(_QWORD *)(a1 + 176) )
    *(_QWORD *)(a1 + 176) = v10;
  v11 = *(_QWORD *)(a1 + 32);
  v12 = operator new(0x38u);
  v13 = *(_WORD *)(v12 + 40);
  *(_QWORD *)(v12 + 48) = v11;
  *(_QWORD *)(v12 + 16) = 0;
  v14 = v13 & 0xE0;
  *(_QWORD *)(v12 + 24) = 0;
  HIBYTE(v14) |= 1u;
  *(_DWORD *)(v12 + 32) = 0;
  *(_WORD *)(v12 + 40) = v14;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v12, v1);
  v15 = *(_QWORD *)(a1 + 80);
  ++*(_QWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 160) = 0;
  result = v15 + 16;
  v18[0].m128i_i64[0] = result;
  v17 = _mm_loadl_epi64(v18);
  *(__m128i *)(a1 + 144) = _mm_unpacklo_epi64(v17, v17);
  return result;
}

