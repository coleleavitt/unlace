__int64 __fastcall sub_185500(__m128i *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  char *v7; // r12
  __int8 *i; // rbx
  __m128i v10; // xmm0
  __int32 *v11; // r8
  int v12; // edi
  __int8 *v13; // rax
  __int32 v14; // esi
  int v15; // ecx
  unsigned __int64 v16; // xmm1_8
  int v17; // edx
  int v18; // esi
  int *v19; // r8
  int *v20; // rax
  char *v21; // rdi
  int *v22; // rax
  __int64 j; // rbx
  char *v24; // rax
  int *v25; // r12
  int v26; // ecx
  __int64 v27; // rbx

  result = a2 - (char *)a1;
  if ( a2 - (char *)a1 > 64 )
  {
    v4 = result >> 3;
    v5 = a3;
    v6 = (a2 - (char *)a1) >> 2;
    v7 = a2;
    for ( i = &a1->m128i_i8[4]; v5; v6 = (v21 - (char *)a1) >> 2 )
    {
      v10 = _mm_loadl_epi64(a1);
      v11 = &a1->m128i_i32[v4];
      v12 = *((_DWORD *)v7 - 1);
      v13 = i;
      v14 = *v11;
      --v5;
      v15 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v10, 229));
      v16 = _mm_shuffle_epi32(v10, 225).m128i_u64[0];
      v17 = _mm_cvtsi128_si32(v10);
      if ( v15 >= *v11 )
      {
        if ( v15 < v12 )
        {
LABEL_6:
          a1->m128i_i64[0] = v16;
          v18 = *((_DWORD *)v7 - 1);
          goto LABEL_7;
        }
        if ( v14 < v12 )
          goto LABEL_27;
      }
      else if ( v14 >= v12 )
      {
        if ( v15 >= v12 )
          goto LABEL_6;
LABEL_27:
        a1->m128i_i32[0] = v12;
        v18 = v17;
        *((_DWORD *)v7 - 1) = v17;
        v15 = a1->m128i_i32[0];
        v17 = a1->m128i_i32[1];
        goto LABEL_7;
      }
      a1->m128i_i32[0] = v14;
      *v11 = v17;
      v17 = a1->m128i_i32[1];
      v15 = a1->m128i_i32[0];
      v18 = *((_DWORD *)v7 - 1);
LABEL_7:
      v19 = (int *)v7;
      if ( v15 > v17 )
      {
LABEL_8:
        v20 = (int *)(v13 + 4);
        do
        {
          v21 = (char *)v20;
          v17 = *v20++;
        }
        while ( v17 < v15 );
        if ( v15 >= v18 )
          goto LABEL_16;
LABEL_11:
        v22 = v19 - 2;
        do
        {
          v19 = v22;
          v18 = *v22--;
        }
        while ( v18 > v15 );
        if ( v21 >= (char *)v19 )
          goto LABEL_17;
        goto LABEL_14;
      }
      while ( 1 )
      {
        v21 = v13;
        if ( v15 < v18 )
          goto LABEL_11;
LABEL_16:
        if ( v21 >= (char *)--v19 )
          break;
LABEL_14:
        *(_DWORD *)v21 = v18;
        v13 = v21 + 4;
        v18 = *(v19 - 1);
        *v19 = v17;
        v15 = a1->m128i_i32[0];
        v17 = *((_DWORD *)v21 + 1);
        if ( a1->m128i_i32[0] > v17 )
          goto LABEL_8;
      }
LABEL_17:
      sub_185500(v21, v7, v5);
      result = v21 - (char *)a1;
      if ( v21 - (char *)a1 <= 64 )
        return result;
      v7 = v21;
      v4 = result >> 3;
    }
    for ( j = v4 - 1; ; --j )
    {
      sub_185240((__int64)a1, j, v6, a1->m128i_i32[j]);
      if ( !j )
        break;
    }
    v24 = v7;
    v25 = (int *)(v7 - 4);
    result = v24 - (char *)a1;
    if ( result > 4 )
    {
      do
      {
        v26 = *v25;
        v27 = (char *)v25-- - (char *)a1;
        v25[1] = a1->m128i_i32[0];
        result = sub_185240((__int64)a1, 0, v27 >> 2, v26);
      }
      while ( v27 > 4 );
    }
  }
  return result;
}
