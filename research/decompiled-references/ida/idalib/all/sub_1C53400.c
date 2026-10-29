void __fastcall sub_1C53400(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  size_t v3; // r14
  __int64 v4; // r15
  const void *v5; // rbx
  __int64 v6; // r12
  size_t v7; // r9
  size_t v8; // rdx
  int v9; // eax
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm3
  __int64 v14; // r12
  size_t v15; // r13
  size_t v16; // rdx
  int v17; // eax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-78h]
  size_t v21; // [rsp+10h] [rbp-68h]
  __m128i v23; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+30h] [rbp-48h]

  if ( a1 != a2 && a2 != a1 + 24 )
  {
    v2 = a1 + 48;
    do
    {
      v3 = *(_QWORD *)(v2 - 16);
      v4 = v2 - 24;
      v5 = *(const void **)(v2 - 24);
      v20 = v2;
      v6 = v2 - 24;
      v7 = *(_QWORD *)(a1 + 8);
      v8 = v7;
      if ( v3 <= v7 )
        v8 = *(_QWORD *)(v2 - 16);
      if ( v8 && (v21 = *(_QWORD *)(a1 + 8), v9 = memcmp(v5, *(const void **)a1, v8), v7 = v21, v9) )
      {
        if ( v9 >= 0 )
          goto LABEL_16;
      }
      else if ( v3 == v7 || v3 >= v7 )
      {
LABEL_16:
        v14 = *(_QWORD *)(v2 - 8);
        while ( 1 )
        {
          v15 = *(_QWORD *)(v4 - 16);
          v16 = v15;
          if ( v3 <= v15 )
            v16 = v3;
          if ( v16 && (v17 = memcmp(v5, *(const void **)(v4 - 24), v16)) != 0 )
          {
            if ( v17 >= 0 )
              goto LABEL_23;
          }
          else if ( v3 == v15 || v3 >= v15 )
          {
LABEL_23:
            *(_QWORD *)v4 = v5;
            *(_QWORD *)(v4 + 8) = v3;
            *(_QWORD *)(v4 + 16) = v14;
            goto LABEL_13;
          }
          v18 = _mm_loadu_si128((const __m128i *)(v4 - 24));
          v19 = *(_QWORD *)(v4 - 8);
          v4 -= 24;
          *(__m128i *)(v4 + 24) = v18;
          *(_QWORD *)(v4 + 40) = v19;
        }
      }
      v10 = *(_QWORD *)(v2 - 8);
      v23 = _mm_loadu_si128((const __m128i *)(v2 - 24));
      v24 = v10;
      v11 = 0xAAAAAAAAAAAAAAABLL * ((v4 - a1) >> 3);
      if ( v4 - a1 > 0 )
      {
        do
        {
          v6 -= 24;
          v12 = *(_QWORD *)(v6 + 16);
          *(__m128i *)(v6 + 24) = _mm_loadu_si128((const __m128i *)v6);
          *(_QWORD *)(v6 + 40) = v12;
          --v11;
        }
        while ( v11 );
      }
      v13 = _mm_load_si128(&v23);
      *(_QWORD *)(a1 + 16) = v10;
      *(__m128i *)a1 = v13;
LABEL_13:
      v2 += 24;
    }
    while ( a2 != v20 );
  }
}
