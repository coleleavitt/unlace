__int64 __fastcall sub_4C6A40(__m128i *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  __int8 *i; // rbx
  unsigned int *v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned int *v14; // rax
  __m128i v15; // xmm0
  unsigned int v16; // r9d
  __int64 v17; // r11
  unsigned int v18; // r8d
  unsigned __int64 v19; // xmm1_8
  unsigned int v20; // ecx
  unsigned int v21; // edx
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned int *v24; // r10
  unsigned int v25; // edi
  unsigned int *v26; // rax
  __int64 v27; // r9
  unsigned int *v28; // rbp
  unsigned int *v29; // rax
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 j; // rbx
  unsigned int *v33; // rbx
  unsigned int v34; // ecx
  __int64 v35; // rbp

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 64 )
  {
    v5 = a3;
    v8 = result >> 3;
    v9 = ((char *)a2 - (char *)a1) >> 2;
    for ( i = &a1->m128i_i8[4]; v5; v9 = ((char *)v28 - (char *)a1) >> 2 )
    {
      v11 = (unsigned int *)a1 + v8;
      v12 = *(_QWORD *)(a4 + 104);
      v13 = a1->m128i_u32[1];
      v14 = (unsigned int *)i;
      v15 = _mm_loadl_epi64(a1);
      --v5;
      v16 = *(_DWORD *)(v12 + 4 * v13);
      v17 = *v11;
      v18 = *(_DWORD *)(v12 + 4 * v17);
      v19 = _mm_shuffle_epi32(v15, 225).m128i_u64[0];
      v20 = _mm_cvtsi128_si32(v15);
      v21 = *(_DWORD *)(v12 + 4LL * *(a2 - 1));
      if ( v16 >= v18 )
      {
        if ( v16 < v21 )
        {
LABEL_6:
          a1->m128i_i64[0] = v19;
          v22 = *(a2 - 1);
          goto LABEL_7;
        }
        if ( v18 < v21 )
          goto LABEL_27;
      }
      else if ( v18 >= v21 )
      {
        if ( v16 >= v21 )
          goto LABEL_6;
LABEL_27:
        a1->m128i_i32[0] = *(a2 - 1);
        v22 = v20;
        *(a2 - 1) = v20;
        v20 = a1->m128i_u32[1];
        v13 = a1->m128i_u32[0];
        goto LABEL_7;
      }
      a1->m128i_i32[0] = v17;
      *v11 = v20;
      v20 = a1->m128i_u32[1];
      v22 = *(a2 - 1);
      v13 = a1->m128i_u32[0];
LABEL_7:
      v23 = *(_QWORD *)(a4 + 104);
      v24 = a2;
      v25 = *(_DWORD *)(v23 + 4 * v13);
      if ( *(_DWORD *)(v23 + 4LL * v20) < v25 )
      {
LABEL_8:
        v26 = v14 + 1;
        do
        {
          v27 = *v26;
          v28 = v26++;
          v20 = v27;
        }
        while ( *(_DWORD *)(v23 + 4 * v27) < v25 );
        if ( v25 >= *(_DWORD *)(v23 + 4LL * (unsigned int)v22) )
          goto LABEL_16;
LABEL_11:
        v29 = v24 - 2;
        do
        {
          v30 = *v29;
          v24 = v29--;
          v22 = v30;
        }
        while ( v25 < *(_DWORD *)(v23 + 4 * v30) );
        if ( v28 >= v24 )
          goto LABEL_17;
        goto LABEL_14;
      }
      while ( 1 )
      {
        v28 = v14;
        if ( v25 < *(_DWORD *)(v23 + 4LL * (unsigned int)v22) )
          goto LABEL_11;
LABEL_16:
        if ( v28 >= --v24 )
          break;
LABEL_14:
        *v28 = v22;
        v14 = v28 + 1;
        v22 = *(v24 - 1);
        *v24 = v20;
        v20 = v28[1];
        v23 = *(_QWORD *)(a4 + 104);
        v25 = *(_DWORD *)(v23 + 4LL * a1->m128i_u32[0]);
        if ( *(_DWORD *)(v23 + 4LL * v20) < v25 )
          goto LABEL_8;
      }
LABEL_17:
      sub_4C6A40(v28, a2, v5, a4, v22);
      result = (char *)v28 - (char *)a1;
      if ( (char *)v28 - (char *)a1 <= 64 )
        return result;
      a2 = v28;
      v8 = result >> 3;
    }
    v31 = a4;
    for ( j = v8 - 1; ; --j )
    {
      sub_4C68C0((__int64)a1, j, v9, a1->m128i_u32[j], v31);
      if ( !j )
        break;
    }
    v33 = a2 - 1;
    result = (char *)a2 - (char *)a1;
    if ( (char *)a2 - (char *)a1 > 4 )
    {
      do
      {
        v34 = *v33;
        v35 = (char *)v33-- - (char *)a1;
        v33[1] = a1->m128i_i32[0];
        result = sub_4C68C0((__int64)a1, 0, v35 >> 2, v34, v31);
      }
      while ( v35 > 4 );
    }
  }
  return result;
}

