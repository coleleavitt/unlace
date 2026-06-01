__int64 __fastcall sub_2C1140(__m128i *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  char v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r10
  char *v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // r8
  int v18; // edx
  int v19; // eax
  int v20; // esi
  __int64 v21; // r11
  __int64 *v22; // rax
  int v23; // edx
  __int64 v24; // rcx
  int i; // esi
  __int64 v26; // rsi
  int j; // edi
  __int64 k; // rbx
  __int64 v29; // rcx
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __int64 v33; // [rsp+8h] [rbp-40h]

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 128 )
  {
    v8 = a2;
    v9 = result >> 3;
    v10 = a5;
    v11 = a5;
    v12 = result >> 4;
    while ( a3 )
    {
      v13 = a1->m128i_i64[1];
      v14 = *(v8 - 1);
      --a3;
      v15 = &a1->m128i_i8[8];
      v16 = &a1->m128i_i64[v12];
      v17 = *v16;
      if ( v11 )
      {
        v18 = *(_DWORD *)(v13 + 12);
        v19 = *(_DWORD *)(v17 + 12);
        v20 = *(_DWORD *)(v14 + 12);
        if ( v18 < v19 )
          goto LABEL_5;
      }
      else
      {
        v18 = *(_DWORD *)(v13 + 8);
        v19 = *(_DWORD *)(v17 + 8);
        v20 = *(_DWORD *)(v14 + 8);
        if ( v18 < v19 )
        {
LABEL_5:
          v21 = a1->m128i_i64[0];
          if ( v20 > v19 )
          {
            a1->m128i_i64[0] = v17;
            *v16 = v21;
            v13 = a1->m128i_i64[0];
            goto LABEL_7;
          }
          if ( v18 >= v20 )
          {
            v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v21);
            goto LABEL_35;
          }
          a1->m128i_i64[0] = v14;
          *(v8 - 1) = v21;
          v13 = a1->m128i_i64[0];
          goto LABEL_7;
        }
      }
      v30 = _mm_loadl_epi64(a1);
      if ( v18 < v20 )
      {
        v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, v30);
LABEL_35:
        *a1 = v31;
        goto LABEL_7;
      }
      if ( v19 >= v20 )
      {
        a1->m128i_i64[0] = v17;
        *v16 = v30.m128i_i64[0];
      }
      else
      {
        a1->m128i_i64[0] = v14;
        *(v8 - 1) = v30.m128i_i64[0];
      }
      v13 = a1->m128i_i64[0];
LABEL_7:
      v22 = v8;
      while ( 2 )
      {
        v23 = *(_DWORD *)(v13 + 12);
        if ( !v11 )
          v23 = *(_DWORD *)(v13 + 8);
        while ( 1 )
        {
          v24 = *(_QWORD *)v15;
          if ( v11 )
          {
            for ( i = *(_DWORD *)(v24 + 12); i < v23; i = *(_DWORD *)(v24 + 12) )
            {
              v24 = *((_QWORD *)v15 + 1);
              v15 += 8;
            }
            v26 = *--v22;
            for ( j = *(_DWORD *)(v26 + 12); v23 < j; j = *(_DWORD *)(v26 + 12) )
              v26 = *--v22;
            goto LABEL_22;
          }
          if ( *(_DWORD *)(*(_QWORD *)v15 + 8LL) >= v23 )
            break;
          v15 += 8;
        }
        do
          v26 = *--v22;
        while ( v23 < *(_DWORD *)(v26 + 8) );
LABEL_22:
        if ( v15 < (char *)v22 )
        {
          *(_QWORD *)v15 = v26;
          v15 += 8;
          *v22 = v24;
          v13 = a1->m128i_i64[0];
          continue;
        }
        break;
      }
      LOBYTE(v10) = v11;
      sub_2C1140(v15, v8, a3, a4, v10);
      result = v15 - (char *)a1;
      if ( v15 - (char *)a1 <= 128 )
        return result;
      v8 = (__int64 *)v15;
      v12 = result >> 4;
      v9 = (v15 - (char *)a1) >> 3;
    }
    for ( k = v12 - 1; ; --k )
    {
      v33 = v9;
      sub_2C0FA0((__int64)a1, k, v9, a1->m128i_i64[k], a4, v11);
      if ( !k )
        break;
      v9 = v33;
    }
    for ( result = (char *)v8 - (char *)a1;
          (char *)v8 - (char *)a1 > 8;
          result = sub_2C0FA0((__int64)a1, 0, ((char *)v8 - (char *)a1) >> 3, v29, a4, v11) )
    {
      v29 = *--v8;
      *v8 = a1->m128i_i64[0];
    }
  }
  return result;
}
