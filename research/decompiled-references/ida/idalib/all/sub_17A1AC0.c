void __fastcall sub_17A1AC0(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __m128i *v7; // rbp
  const __m128i *v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i *v14; // rax
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v20; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-90h]
  const __m128i *v23; // [rsp+50h] [rbp-88h] BYREF
  __int64 v24; // [rsp+58h] [rbp-80h]
  _BYTE v25[120]; // [rsp+60h] [rbp-78h] BYREF

  v4 = (__int64 *)(16LL * a3 + *(_QWORD *)(a1 + 48));
  v5 = *v4;
  v6 = v4[1];
  if ( v6 != 7 || *(_DWORD *)v5 != 1634100580 || *(_WORD *)(v5 + 4) != 27765 || *(_BYTE *)(v5 + 6) != 116 )
  {
    v19[1] = v6;
    v19[0] = v5;
    v23 = (const __m128i *)v25;
    v24 = 0x400000000LL;
    sub_22476F0(v19, &v23, (unsigned int)a4, 0xFFFFFFFFLL, 1);
    v7 = (__m128i *)&v23[(unsigned int)v24];
    if ( v23 != v7 )
    {
      v8 = v23;
      do
      {
        v15 = 0;
        v20 = _mm_loadu_si128(v8);
        v16 = sub_2246FB0(&v20, asc_22E1692, 6, 0);
        v17 = v20.m128i_i64[1];
        if ( v16 < v20.m128i_i64[1] )
        {
          v15 = v20.m128i_i64[1] - v16;
          v17 = v16;
        }
        v22 = v15;
        v21 = v20.m128i_i64[0] + v17;
        v9 = sub_2247130(&v21, asc_22E1692, 6, -1) + 1;
        v20.m128i_i64[0] = v21;
        if ( v9 > v22 )
          v9 = v22;
        v10 = v22 - v15 + v9;
        v11 = *(unsigned int *)(a2 + 12);
        if ( v10 > v22 )
          v10 = v22;
        v20.m128i_i64[1] = v10;
        v12 = *(unsigned int *)(a2 + 8);
        v13 = _mm_load_si128(&v20);
        if ( v12 + 1 > v11 )
        {
          v18 = v13;
          sub_2237220(a2, a2 + 16, v12 + 1, 16);
          v13 = _mm_load_si128(&v18);
          v14 = (__m128i *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8));
        }
        else
        {
          v14 = (__m128i *)(*(_QWORD *)a2 + 16 * v12);
        }
        ++v8;
        *v14 = v13;
        ++*(_DWORD *)(a2 + 8);
      }
      while ( v7 != v8 );
      v7 = (__m128i *)v23;
    }
    if ( v7 != (__m128i *)v25 )
      free(v7);
  }
}
