unsigned __int64 __fastcall sub_3A5BF0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  const char *v6; // rsi
  __int64 v7; // rbx
  _BYTE *v8; // r13
  _BYTE *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // r15
  unsigned __int64 v16; // r12
  __int64 v17; // r8
  __int64 v18; // rbx
  _BYTE *v19; // r12
  __int64 v20; // rcx
  size_t v21; // r14
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+10h] [rbp-58h] BYREF
  __m128i v29; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( (unsigned __int64)a3 < *(_QWORD *)(a2 + 136) )
  {
    v4 = *(_QWORD *)(a2 + 128) + 32LL * a3;
    v6 = s1;
    if ( *(_QWORD *)(v4 + 8) )
      v6 = *(const char **)v4;
    tag_remove(a1, v6, 0);
    v7 = a1[1];
    if ( v7 )
    {
      v8 = (_BYTE *)*a1;
      if ( *(_BYTE *)*a1 == 32 )
      {
        v9 = (_BYTE *)*a1;
        do
          ++v9;
        while ( *v9 == 32 );
        v10 = (v9 - v8) / 32;
        v11 = v10;
        if ( v10 )
        {
          v12 = 0;
          v13 = 0;
          v29 = 0;
          v28 = 0;
          v14 = v7 - 1 - 29 * v10;
          if ( v14 )
          {
            v28 = qvector_reserve(&v28, 0, v14, 1);
            v14 = v29.m128i_i64[0];
            v13 = v28;
            v12 = v29.m128i_u64[1];
          }
          v15 = 0;
          if ( !v14 )
            goto LABEL_16;
          while ( 1 )
          {
            v16 = v14 + 3;
            v17 = v14 + 2;
            --v14;
            if ( v12 < v16 )
              goto LABEL_17;
            while ( 1 )
            {
              v29.m128i_i64[0] = v16;
              ++v15;
              *(_BYTE *)(v13 + v17) = 0;
              v18 = v28 + v14;
              *(_WORD *)v18 = -32542;
              *(_BYTE *)(v18 + 2) = -90;
              v12 = v29.m128i_u64[1];
              v14 = v29.m128i_i64[0];
              v13 = v28;
              if ( v11 == v15 )
              {
                v19 = &v8[32 * v11];
                v20 = (a1[1] == 0) + a1[1] - 1 - 32 * v11;
                v21 = v20;
                v22 = v20;
                if ( v29.m128i_i64[0] )
                {
                  v14 = v29.m128i_i64[0] - 1;
                  v22 = v20 + v29.m128i_i64[0] - 1;
                }
                if ( v29.m128i_i64[1] < (unsigned __int64)(v22 + 1) )
                {
                  v28 = qvector_reserve(&v28, v28, v22 + 1, 1);
                  v13 = v28;
                }
                v29.m128i_i64[0] = v22 + 1;
                *(_BYTE *)(v13 + v22) = 0;
                memmove((void *)(v14 + v28), v19, v21);
                v24 = a1[2];
                v25 = v28;
                v26 = _mm_loadu_si128(&v29);
                v28 = *a1;
                v23 = v28;
                *a1 = v25;
                v29.m128i_i64[1] = v24;
                *(__m128i *)(a1 + 1) = v26;
                if ( v23 )
                {
                  v29.m128i_i64[0] = 0;
                  qfree(v23);
                }
                return v30 - __readfsqword(0x28u);
              }
              if ( v29.m128i_i64[0] )
                break;
LABEL_16:
              v16 = 4;
              v17 = 3;
              if ( v12 < 4 )
              {
LABEL_17:
                v27 = v17;
                v28 = qvector_reserve(&v28, v13, v16, 1);
                v17 = v27;
                v13 = v28;
              }
            }
          }
        }
      }
    }
  }
  return v30 - __readfsqword(0x28u);
}
