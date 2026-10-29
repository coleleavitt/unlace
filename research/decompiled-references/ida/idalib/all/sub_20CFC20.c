__int64 __fastcall sub_20CFC20(_QWORD *a1, __int64 ****a2, int a3)
{
  __int64 v4; // rax
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 **v8; // rbp
  __int64 *v9; // r12
  __int64 *v11; // r15
  signed __int64 v12; // r13
  char *v13; // rcx
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  char *v16; // rax
  __m128i v17[4]; // [rsp+8h] [rbp-40h] BYREF

  v4 = *a1 + 4LL * a3;
  v5 = *(_DWORD *)(v4 + 792);
  *(_DWORD *)(v4 + 792) = v5 + 1;
  v6 = sub_20CF970(*a1 + 816LL, 24);
  *(_WORD *)(v6 + 8) = 16417;
  v7 = v6;
  LOBYTE(v6) = *(_BYTE *)(v6 + 10);
  *(_DWORD *)(v7 + 16) = v5;
  *(_DWORD *)(v7 + 12) = a3;
  *(_BYTE *)(v7 + 10) = v6 & 0xF0 | 5;
  *(_QWORD *)v7 = off_2BE7320;
  v8 = **a2;
  if ( v8 )
  {
    v9 = v8[1];
    if ( v9 != v8[2] )
    {
LABEL_3:
      v8[1] = v9 + 1;
      *v9 = v7;
      return v7;
    }
    v11 = *v8;
    v12 = (char *)v9 - (char *)*v8;
    if ( *v8 == (__int64 *)(v8 + 3) )
    {
      v16 = (char *)malloc(16 * (v9 - *v8));
      v13 = v16;
      if ( v16 )
      {
        if ( v9 != v11 )
          v13 = (char *)memmove(v16, v11, v12);
        *v8 = (__int64 *)v13;
        goto LABEL_7;
      }
    }
    else
    {
      v13 = (char *)realloc(*v8, 16 * (v9 - *v8));
      *v8 = (__int64 *)v13;
      if ( v13 )
      {
LABEL_7:
        v9 = (__int64 *)&v13[v12];
        v17[0].m128i_i64[0] = 16 * (v12 >> 3);
        v14 = (__m128i)_mm_loadh_ps((const double *)v17[0].m128i_i64);
        v17[0].m128i_i64[0] = (__int64)v13;
        v15 = _mm_loadl_epi64(v17);
        *(__m128i *)(v8 + 1) = _mm_add_epi64(v14, _mm_unpacklo_epi64(v15, v15));
        goto LABEL_3;
      }
    }
    abort();
  }
  return v7;
}
