__int64 __fastcall sub_66FAA0(__int64 a1, const __m128i ***a2, unsigned __int64 a3, unsigned int a4, int a5, int a6)
{
  const __m128i **v7; // rdx
  __int64 v8; // r13
  const __m128i **v10; // r15
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  const __m128i **v13; // rbx
  __int64 v14; // r13
  unsigned int v15; // ebx
  __m128i v17; // [rsp+0h] [rbp-98h]
  __int64 *v18; // [rsp+10h] [rbp-88h]
  const __m128i ***v19; // [rsp+18h] [rbp-80h]
  __int64 v20[2]; // [rsp+20h] [rbp-78h] BYREF
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v22; // [rsp+38h] [rbp-60h]
  __int64 v23; // [rsp+48h] [rbp-50h]
  int v24; // [rsp+50h] [rbp-48h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v7 = *a2;
  v19 = a2;
  v8 = (__int64)&(*a2)[(_QWORD)a2[1]];
  v25 = __readfsqword(0x28u);
  v24 = -1;
  ptr = nullptr;
  v23 = 0;
  v22 = 0;
  if ( v7 != (const __m128i **)v8 )
  {
    v10 = v7;
    v18 = v20;
    v17 = _mm_unpacklo_epi64((__m128i)a3, (__m128i)a3);
    do
    {
      v11 = _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(a1 + 24) + 16LL));
      v12 = _mm_and_si128(_mm_add_epi64(_mm_loadu_si128(*v10), v17), _mm_unpacklo_epi64(v11, v11));
      rangeset_t_add(
        (int)&ptr,
        (int)v18,
        (int)v7,
        (int)*v10++,
        a5,
        a6,
        v17.m128i_i32[0],
        (void *)v17.m128i_i64[1],
        (__int64)v18,
        (int)v19,
        v12.m128i_i32[0],
        v12.m128i_i32[2],
        (__int64)ptr);
    }
    while ( (const __m128i **)v8 != v10 );
  }
  if ( !(unsigned __int8)sub_66F7D0(a1, &ptr) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 10LL) & 8) == 0 )
    {
      v13 = *v19;
      v14 = (__int64)&(*v19)[(_QWORD)v19[1]];
      if ( (const __m128i **)v14 == *v19 )
      {
LABEL_11:
        v15 = 0;
        goto LABEL_12;
      }
      while ( sub_3792E0(0x1Au, *v13, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & (a3 + (*v13)->m128i_i64[0]), a4) >= 0 )
      {
        if ( (const __m128i **)v14 == ++v13 )
          goto LABEL_11;
      }
    }
    v15 = -3;
    goto LABEL_12;
  }
  v15 = -7;
LABEL_12:
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
  return v15;
}
