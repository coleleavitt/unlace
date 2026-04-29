_QWORD *__fastcall sub_C7D0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __m128i *v6; // r15
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r12
  _QWORD *v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i *v20; // [rsp+50h] [rbp-78h] BYREF
  __int128 v21; // [rsp+58h] [rbp-70h]
  __int128 v22; // [rsp+68h] [rbp-60h]
  __int64 v23; // [rsp+78h] [rbp-50h]
  int v24; // [rsp+80h] [rbp-48h]
  unsigned __int64 v25; // [rsp+88h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v21 = 0;
  v20 = nullptr;
  v23 = 0;
  v24 = 1;
  v22 = 0;
  sub_C190((__int64 *)&v20, 3u);
  v4 = (__int64)v20;
  v5 = v20[1].m128i_i64[0];
  if ( v20[2].m128i_i64[0] <= 5uLL )
  {
    v19 = qvector_reserve();
    *(_QWORD *)(v4 + 16) = v19;
    v5 = v19;
  }
  *(_QWORD *)(v4 + 24) = 6;
  *(_DWORD *)v5 = 1634890337;
  *(_BYTE *)(v5 + 4) = 121;
  *(_BYTE *)(*(_QWORD *)(v4 + 16) + 5LL) = 0;
  copy_tinfo_t();
  copy_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  v6 = v20;
  *(_QWORD *)(v4 + 8) = 8 * (unsigned int)*(unsigned __int8 *)(a2 + 565);
  v7 = v6[10].m128i_i64[0];
  if ( v6[11].m128i_i64[0] <= 3uLL )
  {
    v18 = qvector_reserve();
    v6[10].m128i_i64[0] = v18;
    v7 = v18;
  }
  v6[10].m128i_i64[1] = 4;
  *(_WORD *)v7 = 25964;
  *(_BYTE *)(v7 + 2) = 110;
  *(_BYTE *)(v6[10].m128i_i64[0] + 3) = 0;
  copy_tinfo_t();
  clear_tinfo_t();
  v8 = _mm_loadl_epi64((const __m128i *)(v4 + 8));
  v9 = (__int64 *)v20;
  v6[9] = _mm_unpacklo_epi64(v8, v8);
  v10 = v9[38];
  if ( (unsigned __int64)v9[40] <= 3 )
  {
    v17 = qvector_reserve();
    v9[38] = v17;
    v10 = v17;
  }
  v9[39] = 4;
  *(_WORD *)v10 = 24931;
  *(_BYTE *)(v10 + 2) = 112;
  *(_BYTE *)(v9[38] + 3) = 0;
  copy_tinfo_t();
  v11 = *(_QWORD *)(v4 + 8);
  v9[37] = v11;
  v9[36] = v6[9].m128i_i64[0] + v11;
  *a1 = 0;
  create_tinfo();
  v12 = (__int64)v20;
  if ( v20 )
  {
    v13 = v21;
    if ( (_QWORD)v21 )
    {
      v14 = 0;
      do
      {
        v15 = (_QWORD *)(v12 + 144 * v14);
        clear_tinfo_t();
        if ( v15[5] )
        {
          v15[6] = 0;
          qfree();
        }
        if ( v15[2] )
        {
          v15[3] = 0;
          qfree();
        }
        ++v14;
        v12 = (__int64)v20;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return a1;
}
