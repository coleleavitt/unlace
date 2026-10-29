__int64 __fastcall sub_D465C0(const __m128i *a1, __int64 **a2, __int64 a3)
{
  __int64 *v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // r14d
  _QWORD *v8; // r15
  __int64 *v9; // rax
  __m128i *v10; // rbp
  __m128i v11; // xmm0
  __m128 v12; // xmm0
  __int64 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rbx
  _DWORD *v16; // rbp
  __int64 v19; // r14
  __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __int64 i; // rax
  __int64 *v24; // [rsp+8h] [rbp-50h]
  _BYTE v25[64]; // [rsp+18h] [rbp-40h] BYREF

  sub_EE4940(v25, "pb-preprocess", *a2);
  *((_DWORD *)*a2 + 30) = (*((_DWORD *)*a2 + 30) + 1) & 0x3FFFFFF | (*a2)[15] & 0xFC000000;
  v5 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v5 + 8);
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *(_DWORD *)(a3 + 12);
  if ( v6 >= v7 )
  {
    v24 = v5;
    v19 = 2 * v7;
    v20 = sub_186B270(8 * v19);
    v6 = *(_DWORD *)(a3 + 8);
    v21 = *(_QWORD **)a3;
    v8 = (_QWORD *)v20;
    v5 = v24;
    if ( v6 )
    {
      if ( v6 - 1 <= 2 || (_QWORD *)v20 == v21 + 1 )
      {
        for ( i = 0; i != v6; ++i )
          v8[i] = v21[i];
      }
      else
      {
        v22 = 0;
        do
        {
          *(__m128i *)&v8[v22] = _mm_loadu_si128((const __m128i *)&v21[v22]);
          v22 += 2;
        }
        while ( v22 != 2LL * (v6 >> 1) );
        if ( (v6 & 1) != 0 )
          v8[v6 & 0xFFFFFFFE] = v21[v6 & 0xFFFFFFFE];
      }
    }
    if ( v21 && v21 != (_QWORD *)(a3 + 16) )
    {
      sub_186B220(v21);
      v6 = *(_DWORD *)(a3 + 8);
      v5 = v24;
    }
    *(_QWORD *)a3 = v8;
    *(_DWORD *)(a3 + 12) = v19;
  }
  else
  {
    v8 = *(_QWORD **)a3;
  }
  v8[v6] = v5;
  v9 = *a2;
  *(_DWORD *)(a3 + 8) = v6 + 1;
  if ( (*((_BYTE *)v9 + 123) & 8) == 0 )
  {
    v10 = (__m128i *)sub_186B270(0x50u);
    v10[1].m128i_i8[8] = 1;
    v11 = _mm_loadl_epi64(a1 + 1);
    v10->m128i_i32[2] = 0;
    v10[1].m128i_i64[0] = 0;
    strcpy(&v10[3].m128i_i8[8], "pb-preprocess");
    v10->m128i_i64[0] = (__int64)&off_1C60CE8;
    v12 = (__m128)_mm_unpacklo_epi64(v11, (__m128i)(unsigned __int64)&v10[3].m128i_u64[1]);
    v10[2] = (__m128i)v12;
    v10[3].m128i_i64[0] = 13;
    v10[4].m128i_i64[1] = 0;
    while ( (unsigned __int8)sub_D44140((__int64)a1, a2, v10, v12) )
      ;
    v13 = *a2;
    v14 = sub_1336AB0((*a2)[1], v10);
    v15 = v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    v16 = (_DWORD *)v13[1];
    if ( v16 )
    {
      if ( v16[2]-- == 1 )
      {
        (**(void (__fastcall ***)(_DWORD *))v16)(v16);
        sub_186B220(v16);
      }
    }
    v13[1] = v15;
  }
  return sub_EE4A00(v25);
}

