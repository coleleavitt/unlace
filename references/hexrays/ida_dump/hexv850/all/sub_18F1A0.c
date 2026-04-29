__int64 __fastcall sub_18F1A0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rdx
  __m128i *v10; // rax
  __m128i *v11; // rcx
  unsigned int v12; // ebx
  unsigned __int64 v14; // rdx
  signed int **v15; // rax
  signed int *v16; // r12
  signed int **v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r9
  const __m128i *v22; // rdi
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-78h]
  __int64 v28; // [rsp+10h] [rbp-70h]
  __int64 v30[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v31; // [rsp+30h] [rbp-50h]
  __int128 v32; // [rsp+38h] [rbp-48h]
  unsigned __int64 v33; // [rsp+48h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 48) = 1;
    return 1;
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( a3 >= *(_DWORD *)(v5 + 64) )
    sub_18C210();
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8LL * a3);
  v32 = 0;
  v30[0] = 0;
  v30[1] = 0;
  v31 = 0;
  sub_FF1A0(a4, v5, (__int64)v30);
  v8 = sub_124590(v7, v30, *(_QWORD *)(v7 + 56), 0, nullptr, 0, 0x101u);
  if ( !v8 )
    goto LABEL_10;
  if ( !sub_18C610((_QWORD *)a1, v8, a4) )
  {
LABEL_18:
    v12 = 0;
    goto LABEL_11;
  }
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(__m128i **)a2;
  v11 = (__m128i *)(*(_QWORD *)a2 + 24 * v9);
  if ( *(__m128i **)a2 == v11 )
    goto LABEL_16;
  while ( v8 != v10->m128i_i64[1] )
  {
    v10 = (__m128i *)((char *)v10 + 24);
    if ( v11 == v10 )
      goto LABEL_16;
  }
  if ( v10 == v11 )
  {
LABEL_16:
    v14 = v9 + 1;
    if ( *(_QWORD *)(a2 + 16) < v14 )
    {
      v28 = *(_QWORD *)(a2 + 16);
      v18 = qvector_reserve(a2, 0, v14, 24);
      v19 = *(_QWORD *)(a2 + 8);
      v20 = v18;
      v21 = *(_QWORD *)(a2 + 16);
      v22 = *(const __m128i **)a2;
      *(_QWORD *)(a2 + 16) = v28;
      v23 = v19 - 1;
      if ( v23 >= 0 )
      {
        do
        {
          v24 = _mm_loadu_si128(v22);
          v18 += 24;
          v22 = (const __m128i *)((char *)v22 + 24);
          *(__m128i *)(v18 - 24) = v24;
          *(_QWORD *)(v18 - 8) = v22[-1].m128i_i64[1];
        }
        while ( v23-- != 0 );
        v22 = *(const __m128i **)a2;
      }
      v27 = v21;
      qfree(v22);
      v26 = 3LL * *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v20;
      *(_QWORD *)(a2 + 16) = v27;
      v11 = (__m128i *)(v20 + 8 * v26);
    }
    v11[1].m128i_i64[0] = 0;
    *v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v8);
    ++*(_QWORD *)(a2 + 8);
    if ( !sub_A51D0(v7, v30, *(_QWORD *)(v8 + 8), 0, 1u) )
    {
      v15 = (signed int **)sub_100230((unsigned __int64 *)(**(_QWORD **)(a1 + 8) + 24LL * *(int *)(v7 + 72)), a4);
      v16 = *v15;
      v17 = v15;
      if ( 4LL * (_QWORD)v15[1] )
      {
        while ( (unsigned __int8)sub_18EEE0(a1, (_QWORD *)a2, *v16, (__int64)v17) )
        {
          if ( ++v16 == &(*v17)[(_QWORD)v17[1]] )
            goto LABEL_10;
        }
        v12 = 0;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    goto LABEL_18;
  }
LABEL_10:
  v12 = 1;
LABEL_11:
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  qfree(v30[0]);
  return v12;
}
