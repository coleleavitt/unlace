__int64 __fastcall sub_20E1810(__int64 a1)
{
  char *v1; // rax
  char *v2; // rsi
  int v3; // r12d
  __int64 v4; // rbp
  __int64 v6; // rax
  __int16 v7; // si
  __int16 v8; // cx
  size_t v9; // r12
  const void *v10; // rdx
  const void *v11; // r13
  size_t v12; // rax
  bool v13; // al
  char *v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r15
  char v17; // al
  __m128 v18; // xmm0
  __m128i v19; // xmm1
  unsigned __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // r14
  char v24; // al
  __m128i v25[4]; // [rsp+8h] [rbp-40h] BYREF

  v1 = *(char **)a1;
  v2 = *(char **)(a1 + 8);
  if ( v2 != *(char **)a1 && *v1 == 85 )
  {
    *(_QWORD *)a1 = v1 + 1;
    v9 = sub_20D0070((char **)a1);
    v11 = v10;
    if ( v9 )
    {
      v12 = j__strlen("objcproto");
      v13 = sub_20D1BF0(v9, v11, v12, "objcproto");
      v14 = *(char **)a1;
      if ( v13 )
      {
        v25[0].m128i_i64[0] = *(_QWORD *)(a1 + 8);
        v18 = _mm_loadh_ps((const double *)v25[0].m128i_i64);
        v25[0].m128i_i64[0] = (__int64)v11;
        v19 = _mm_loadl_epi64(v25);
        v25[0].m128i_i64[0] = v9;
        *(__m128i *)a1 = _mm_add_epi64(
                           _mm_unpacklo_epi64(v19, v19),
                           (__m128i)_mm_loadh_ps((const double *)v25[0].m128i_i64));
        v20 = sub_20D0070((char **)a1);
        v22 = v21;
        *(__m128 *)a1 = v18;
        if ( v20 )
        {
          v23 = sub_20E1810(a1);
          if ( v23 )
          {
            v4 = sub_20CF970(a1 + 816, 40);
            *(_WORD *)(v4 + 8) = 16395;
            v24 = *(_BYTE *)(v4 + 10);
            *(_QWORD *)(v4 + 16) = v23;
            *(_QWORD *)(v4 + 24) = v20;
            *(_QWORD *)(v4 + 32) = v22;
            *(_BYTE *)(v4 + 10) = v24 & 0xF0 | 5;
            *(_QWORD *)v4 = off_2BE6AE0;
            return v4;
          }
        }
      }
      else
      {
        v15 = 0;
        if ( v14 == *(char **)(a1 + 8) || *v14 != 73 || (v15 = sub_20DCBE0(a1, 0)) != 0 )
        {
          v16 = sub_20E1810(a1);
          if ( v16 )
          {
            v4 = sub_20CF970(a1 + 816, 48);
            *(_WORD *)(v4 + 8) = 16386;
            v17 = *(_BYTE *)(v4 + 10);
            *(_QWORD *)(v4 + 16) = v16;
            *(_QWORD *)(v4 + 24) = v9;
            *(_QWORD *)(v4 + 32) = v11;
            *(_BYTE *)(v4 + 10) = v17 & 0xF0 | 5;
            *(_QWORD *)(v4 + 40) = v15;
            *(_QWORD *)v4 = off_2BE6720;
            return v4;
          }
        }
      }
    }
    return 0;
  }
  v3 = sub_20CFB50((char **)a1, v2);
  v4 = sub_20D8F30(a1);
  if ( v4 && v3 )
  {
    v6 = sub_20CF970(a1 + 816, 24);
    v7 = *(_WORD *)(v4 + 9);
    v8 = *(_WORD *)(v6 + 8);
    *(_QWORD *)(v6 + 16) = v4;
    v4 = v6;
    *(_DWORD *)(v6 + 12) = v3;
    *(_WORD *)(v6 + 8) = v8 & 0xC000 | 3;
    *(_WORD *)(v6 + 9) = v7 & 0xFC0 | *(_WORD *)(v6 + 9) & 0xF03F;
    *(_QWORD *)v6 = off_2BE6780;
  }
  return v4;
}
