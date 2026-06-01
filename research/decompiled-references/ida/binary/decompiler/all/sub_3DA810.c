unsigned __int64 __fastcall sub_3DA810(__int64 a1, unsigned __int8 a2)
{
  __m128i v3; // xmm0
  __m128i *v4; // rax
  size_t v5; // rbp
  __int64 v6; // rsi
  void **p_src; // rdi
  void **v8; // rdx
  void *v9; // r12
  __int64 v10; // r13
  __int64 i; // rbp
  void **v12; // rax
  __m128i v13; // xmm4
  void *v15; // rax
  void *v16; // rsi
  __m128i v17; // [rsp+0h] [rbp-78h] BYREF
  __int64 v18; // [rsp+10h] [rbp-68h]
  __int64 v19; // [rsp+18h] [rbp-60h]
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  void *src; // [rsp+30h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  sub_3D7D10(a1, "Stock comments", a2, 1u, 0, 0);
  v3 = _mm_loadl_epi64((const __m128i *)off_4E8978);
  *(_QWORD *)a1 = off_4E87E8;
  *(_QWORD *)(a1 + 32) = off_4E8848;
  *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)&off_4E8920);
  *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4E8980),
                             (__m128i)(unsigned __int64)&off_4E8950);
  *(_OWORD *)n = 0;
  v4 = (__m128i *)qvector_reserve();
  src = v4;
  n[0] = 22;
  *v4 = _mm_load_si128((const __m128i *)&xmmword_425EB0);
  *(__int64 *)((char *)&v4->m128i_i64[1] + 5) = 0x73746E656D6D6F63LL;
  *((_BYTE *)src + 21) = 0;
  v5 = n[0];
  *(_QWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  if ( v5 )
  {
    v15 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 272) = v15;
    v16 = src;
    *(_QWORD *)(a1 + 288) = v5;
    memcpy(v15, v16, v5);
    *(_QWORD *)(a1 + 280) = v5;
  }
  *(_QWORD *)(a1 + 296) = -1;
  netnode_check();
  netnode_check();
  if ( v18 == -1 )
  {
    v19 = 0;
    netnode_supset();
    v20 = 1;
    netnode_supset();
    v21 = 1;
    netnode_supset();
  }
  else
  {
    *(_QWORD *)(a1 + 296) = v21;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v6 = a1 + 272;
  p_src = &src;
  sub_3D9AB0((__int64)&src);
  v8 = *(void ***)(a1 + 248);
  v9 = src;
  v17 = _mm_loadu_si128((const __m128i *)n);
  if ( v8 )
  {
    v10 = *(_QWORD *)(a1 + 256);
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        v12 = &v8[4 * i];
        if ( v12[1] )
        {
          v12[2] = 0;
          qfree();
          v8 = *(void ***)(a1 + 248);
        }
      }
    }
    *(_QWORD *)(a1 + 256) = 0;
    p_src = v8;
    qfree();
  }
  v13 = _mm_load_si128(&v17);
  *(_QWORD *)(a1 + 248) = v9;
  *(__m128i *)(a1 + 256) = v13;
  sub_40C1D0(p_src, v6);
  return v24 - __readfsqword(0x28u);
}
