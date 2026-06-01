unsigned __int64 __fastcall sub_51BF30(__int64 a1, __int64 a2, int a3, int a4, unsigned __int64 *a5)
{
  __int64 v7; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // r12
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // r15
  __int64 *v16; // r15
  unsigned __int64 *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 *v19; // rdi
  const __m128i *v20; // rbx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r9
  unsigned __int64 *v26; // r14
  __int64 v27; // rdi
  __int64 v28; // rax
  char *v29; // r8
  __m128i si128; // xmm0
  __int64 v32; // rax
  char *v33; // [rsp+8h] [rbp-70h]
  __m128i v34[2]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]

  v7 = *(int *)(a1 + 4LL * a3 + 16);
  v35 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(switch_dbctx(v7) + 1768);
  if ( !*(_BYTE *)(v9 + 152) )
    goto LABEL_24;
  v10 = a4 - *(_DWORD *)(*(_QWORD *)(v9 + 8) + 68LL);
  if ( v10 >= *(_QWORD *)(v9 + 40) )
    goto LABEL_26;
  v11 = v10 << 6;
  *(_DWORD *)(*(_QWORD *)(v9 + 32) + v11 + 56) = a4;
  v7 = *(int *)(a1 + 4LL * (int)a2 + 16);
  v12 = *(_QWORD *)(v9 + 32) + v11;
  v13 = *(_QWORD *)(switch_dbctx(v7) + 1768);
  if ( !*(_BYTE *)(v13 + 152) )
  {
LABEL_24:
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v14 = a4 - *(_DWORD *)(*(_QWORD *)(v13 + 8) + 68LL);
  if ( v14 >= *(_QWORD *)(v13 + 40) )
LABEL_26:
    sub_5144F0(v7, a2);
  v15 = v14 << 6;
  *(_DWORD *)(*(_QWORD *)(v13 + 32) + v15 + 56) = a4;
  v16 = (__int64 *)(*(_QWORD *)(v13 + 32) + v15);
  sub_5178A0(v16, *a5, a5[1]);
  v17 = sub_5168B0((unsigned __int64 **)v12, *a5);
  v18 = *(_QWORD *)(v12 + 8);
  v19 = *(unsigned __int64 **)v12;
  v20 = (const __m128i *)v17;
  if ( v17 != (unsigned __int64 *)(*(_QWORD *)v12 + 33 * v18) )
  {
    do
    {
      v21 = v20->m128i_i64[0];
      v23 = a5[1];
      if ( v20->m128i_i64[0] >= v23 )
        return v35 - __readfsqword(0x28u);
      v24 = *a5;
      v22 = v20->m128i_u64[1];
      v34[0] = _mm_loadu_si128(v20);
      v34[1] = _mm_loadu_si128(v20 + 1);
      if ( v24 < v21 || v24 >= v22 )
      {
        if ( v23 < v22 )
        {
LABEL_15:
          v26 = sub_5168B0((unsigned __int64 **)v16, v21);
          if ( v26 == (unsigned __int64 *)(*v16 + 33 * v16[1]) || v21 < *v26 && *v26 >= v25 )
          {
            v27 = *((unsigned int *)v16 + 14);
            v34[0].m128i_i64[0] = v21;
            v34[0].m128i_i64[1] = v25;
            sub_514A20(v27, v34[0].m128i_i64, 183);
            v28 = v16[1];
            v29 = (char *)v26 - *v16;
            if ( v16[2] < (unsigned __int64)(v28 + 1) )
            {
              v33 = (char *)v26 - *v16;
              v32 = qvector_reserve(v16, *v16, v28 + 1, 33);
              v29 = v33;
              *v16 = v32;
              v26 = (unsigned __int64 *)&v33[v32];
              v28 = v16[1];
            }
            memmove((char *)v26 + 33, v26, 33 * v28 - (_QWORD)v29);
            *((_BYTE *)v26 + 24) = 0;
            *(_OWORD *)v26 = 0;
            si128 = _mm_load_si128(v34);
            v26[2] = 0;
            *((_BYTE *)v26 + 32) = 0;
            v16[3] = (__int64)v26;
            ++v16[1];
            *(__m128i *)v26 = si128;
            *(__m128i *)((char *)v26 + 9) = _mm_loadu_si128((const __m128i *)((char *)&v34[0].m128i_u64[1] + 1));
            *(_BYTE *)(v16[3] + 32) = 1;
          }
          v18 = *(_QWORD *)(v12 + 8);
          v19 = *(unsigned __int64 **)v12;
          goto LABEL_11;
        }
      }
      else
      {
        v21 = v24;
        if ( v23 >= v22 )
          goto LABEL_15;
        v22 = v23;
      }
      if ( v21 < v22 )
        goto LABEL_15;
LABEL_11:
      v20 = (const __m128i *)((char *)v20 + 33);
    }
    while ( v20 != (const __m128i *)((char *)v19 + 33 * v18) );
  }
  return v35 - __readfsqword(0x28u);
}
