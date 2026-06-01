unsigned __int64 __fastcall sub_683310(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int32 a8)
{
  __int64 v9; // r13
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  __m128i *v14; // rdx
  __m128i *v15; // rax
  __int64 v16; // r14
  const __m128i *v17; // r15
  char v18; // dl
  __m128i v19; // xmm0
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+8h] [rbp-60h]
  __m128i v25; // [rsp+10h] [rbp-58h] BYREF
  __int32 v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v9 = (a3 - 1) / 2;
  v27 = __readfsqword(0x28u);
  v24 = a3 & 1;
  if ( a2 >= v9 )
  {
    v15 = (__m128i *)(a1 + 20 * a2);
    if ( (a3 & 1) != 0 )
    {
      v25 = _mm_loadu_si128((const __m128i *)&a7);
      v26 = a8;
      goto LABEL_10;
    }
    v11 = a2;
  }
  else
  {
    v11 = a2;
    do
    {
      v12 = a4(a1 + 40 * (v11 + 1), a1 + 40 * (v11 + 1) - 20);
      v13 = v11;
      v11 = 2 * (v11 + 1) - v12;
      v14 = (__m128i *)(a1 + 20 * v13);
      v15 = (__m128i *)(a1 + 20 * v11);
      *v14 = _mm_loadu_si128(v15);
      v14[1].m128i_i32[0] = v15[1].m128i_i32[0];
    }
    while ( v11 < v9 );
    if ( v24 )
      goto LABEL_5;
  }
  if ( (a3 - 2) / 2 == v11 )
  {
    v21 = v11 + 1;
    v22 = 10 * v21;
    v11 = 2 * v21 - 1;
    v23 = a1 + 4 * v22;
    *v15 = _mm_loadu_si128((const __m128i *)(v23 - 20));
    v15[1].m128i_i32[0] = *(_DWORD *)(v23 - 4);
    v15 = (__m128i *)(a1 + 20 * v11);
  }
LABEL_5:
  v26 = a8;
  v25 = _mm_loadu_si128((const __m128i *)&a7);
  v16 = (v11 - 1) / 2;
  if ( v11 > a2 )
  {
    while ( 1 )
    {
      v17 = (const __m128i *)(a1 + 20 * v16);
      v18 = a4((__int64)v17, (__int64)&v25);
      v15 = (__m128i *)(a1 + 20 * v11);
      if ( !v18 )
        break;
      v11 = v16;
      *v15 = _mm_loadu_si128(v17);
      v15[1].m128i_i32[0] = v17[1].m128i_i32[0];
      if ( a2 >= v16 )
      {
        v15 = (__m128i *)(a1 + 20 * v16);
        break;
      }
      v16 = (v16 - 1) / 2;
    }
  }
LABEL_10:
  v19 = _mm_load_si128(&v25);
  v15[1].m128i_i32[0] = v26;
  *v15 = v19;
  return v27 - __readfsqword(0x28u);
}

