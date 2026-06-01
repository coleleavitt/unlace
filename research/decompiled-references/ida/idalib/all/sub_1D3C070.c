__int64 __fastcall sub_1D3C070(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7,
        _QWORD *a8,
        _BYTE *a9)
{
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r15
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  __int64 v18; // r12
  __int64 i; // r14
  __int64 v20; // rcx
  _QWORD *v21; // r10
  __int64 v22; // rax
  unsigned __int16 v23; // dx
  __m128i *v24; // rdx
  __m128i v25; // xmm1
  __int32 v26; // ecx
  __m128i v27; // xmm4
  __int8 v28; // al
  __int64 v30; // rax
  __m128i v31; // xmm3
  const __m128i *v32; // roff
  __int64 v33; // rax
  __int64 v35; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+30h] [rbp-98h]
  __int64 v38; // [rsp+38h] [rbp-90h]
  unsigned __int64 v39; // [rsp+40h] [rbp-88h]
  __m128i v40; // [rsp+50h] [rbp-78h] BYREF
  __m128i v41; // [rsp+60h] [rbp-68h] BYREF
  __m128i v42; // [rsp+70h] [rbp-58h] BYREF
  __m128i v43; // [rsp+80h] [rbp-48h]

  v36 = a2;
  v35 = a3;
  v11 = sub_F22BD0(&v36, 0);
  if ( !v11 )
    return 0;
  v15 = v11;
  if ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x44 )
  {
    if ( !sub_AB7BF0(*(_QWORD **)(a1 + 248), &v36, &v35, a6 != 0) )
    {
      *(_QWORD *)(a4 + 184) = 6;
      v30 = v36;
      *(_QWORD *)(a4 + 208) = 6;
      *(_QWORD *)(a4 + 192) = v30;
      *(_QWORD *)(a4 + 216) = v35;
      return 10;
    }
    return 0;
  }
  if ( (*(_DWORD *)(v11 + 64) & 0xFFFFF) != *(_DWORD *)(a4 + 24) )
    return 0;
  v16 = *(_QWORD *)(v11 + 56);
  v17 = *(_DWORD *)(v16 + 20) & 0x1FFFFFFF;
  if ( v17 > a6 )
    v17 = a6;
  if ( v17 )
  {
    v18 = (unsigned int)(v17 - 1);
    for ( i = 0; !sub_B8BED0(*(_QWORD *)(v16 + 8 * i + 24)); ++i )
    {
      v20 = (unsigned int)(i + 1);
      if ( v18 == i )
        goto LABEL_12;
    }
    v20 = (unsigned int)a6;
  }
  else
  {
    v20 = 0;
  }
LABEL_12:
  v21 = *(_QWORD **)(a1 + 248);
  v22 = v35;
  if ( a7 )
  {
    LODWORD(v37) = v20;
    v39 = a6 - v20;
    v38 = a5 + 24 * v20;
    v22 = sub_A808D0((__int64)v21, v35, v12, v20, v13, v14, v20, (int)a5 + 24 * (int)v20, a6 - v20);
    v21 = *(_QWORD **)(a1 + 248);
  }
  v23 = *(_WORD *)(v15 + 66);
  v40.m128i_i64[1] = v22;
  v41.m128i_i8[8] = 0;
  v40.m128i_i64[0] = 6;
  v24 = (__m128i *)(*a8 + 32LL * (v23 >> 4));
  if ( (v24->m128i_i32[0] & 0x7FFFFFFF) == 0 )
  {
    v25 = _mm_load_si128(&v41);
    v26 = 6;
    v42 = _mm_load_si128(&v40);
    v43 = v25;
    goto LABEL_16;
  }
  sub_1D3B740(&v42, v21, v24, &v40, 0, v14);
  v26 = v42.m128i_i32[0] & 0x7FFFFFFF;
  if ( (v42.m128i_i32[0] & 0x7FFFFFFF) != 0 )
  {
    v24 = (__m128i *)(*a8 + 32LL * (*(_WORD *)(v15 + 66) >> 4));
LABEL_16:
    v42.m128i_i32[0] = v26 | v42.m128i_i32[0] & 0x80000000;
    v27 = _mm_load_si128(&v42);
    v24[1].m128i_i64[0] = v43.m128i_i64[0];
    v28 = v43.m128i_i8[8];
    *v24 = v27;
    v24[1].m128i_i8[8] = v28;
    if ( a9 )
      *a9 = 1;
    return 0;
  }
  v31 = _mm_load_si128(&v40);
  *(_QWORD *)(a4 + 176) = v15 & 0xFFFFFFFFFFFFFFF9LL | 4;
  v32 = (const __m128i *)(*a8 + 32LL * (*(_WORD *)(v15 + 66) >> 4));
  *(__m128i *)(a4 + 184) = _mm_loadu_si128(v32);
  v33 = v32[1].m128i_i64[0];
  *(__m128i *)(a4 + 208) = v31;
  *(_QWORD *)(a4 + 200) = v33;
  *(_QWORD *)(a4 + 224) = v41.m128i_i64[0];
  return 5;
}
