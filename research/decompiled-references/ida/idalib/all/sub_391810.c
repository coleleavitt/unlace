__int64 __fastcall sub_391810(__int64 a1, char **a2)
{
  char *v2; // rax
  char *v3; // r14
  int v4; // r12d
  __m128i v5; // xmm0
  void *v6; // rdx
  int v7; // ebp
  __int64 v8; // rdx
  const char *v9; // rsi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  size_t v17; // r9
  __int64 v18; // r8
  __int64 v19; // r10
  _BYTE *v20; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-98h]
  unsigned __int64 v25; // [rsp+8h] [rbp-98h]
  unsigned __int64 v26; // [rsp+10h] [rbp-90h]
  __int64 v27; // [rsp+10h] [rbp-90h]
  unsigned __int64 v28; // [rsp+18h] [rbp-88h]
  __int64 v29; // [rsp+18h] [rbp-88h]
  __int64 v30; // [rsp+20h] [rbp-80h]
  void *src; // [rsp+28h] [rbp-78h] BYREF
  __m128i v32; // [rsp+30h] [rbp-70h] BYREF
  void *ptr; // [rsp+48h] [rbp-58h] BYREF
  __int128 v34; // [rsp+50h] [rbp-50h]
  unsigned __int64 v35; // [rsp+60h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = a2[1];
  src = nullptr;
  v32 = 0;
  if ( v2 )
  {
    v3 = *a2;
    v4 = (_DWORD)v2 - 1;
    if ( (int)v2 - 1 > 0 )
    {
      do
      {
        v7 = 1023;
        v34 = 0;
        ptr = nullptr;
        if ( v4 <= 1023 )
          v7 = v4;
        ptr = (void *)qvector_reserve(&ptr, 0, v7 + 1LL, 1);
        *(_QWORD *)&v34 = v7 + 1LL;
        memmove(ptr, v3, v7);
        v8 = 0;
        v9 = haystack;
        *((_BYTE *)ptr + v7) = 0;
        if ( (_QWORD)v34 )
        {
          v9 = (const char *)ptr;
          v8 = (unsigned int)(v34 - 1);
        }
        qstr2user(&src, v9, v8);
        v10 = *(_QWORD *)(a1 + 8);
        v11 = *(_QWORD *)(a1 + 16);
        v12 = *(_QWORD *)a1;
        if ( v10 <= 1 )
        {
          v5 = _mm_loadu_si128(&v32);
          v6 = src;
          src = *(void **)a1;
          *(__m128i *)(a1 + 8) = v5;
          *(_QWORD *)a1 = v6;
          v32 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v11);
        }
        else
        {
          v13 = v10 + 3;
          v14 = v10 - 1;
          if ( v11 < v10 + 3 )
          {
            v28 = v10 - 1;
            v26 = *(_QWORD *)(a1 + 8);
            v24 = v10 + 3;
            v22 = qvector_reserve(a1, v12, v13, 1);
            v14 = v28;
            v10 = v26;
            *(_QWORD *)a1 = v22;
            v12 = v22;
            v13 = v24;
          }
          *(_QWORD *)(a1 + 8) = v13;
          *(_BYTE *)(v12 + v10 + 2) = 0;
          v15 = v14 + *(_QWORD *)a1;
          *(_WORD *)v15 = 8226;
          *(_BYTE *)(v15 + 2) = 34;
          v16 = v32.m128i_i64[0];
          if ( v32.m128i_i64[0] )
          {
            v17 = v32.m128i_i64[0] - 1;
            if ( v32.m128i_i64[0] != 1 )
            {
              v18 = *(_QWORD *)(a1 + 8);
              v19 = v32.m128i_i64[0] - 1;
              if ( v18 )
              {
                --v18;
                v19 = v17 + v18;
                v16 = v32.m128i_i64[0] + v18;
              }
              v20 = *(_BYTE **)a1;
              if ( *(_QWORD *)(a1 + 16) < v16 )
              {
                v30 = v18;
                v29 = v32.m128i_i64[0] - 1;
                v27 = v19;
                v25 = v16;
                v23 = qvector_reserve(a1, v20, v16, 1);
                v18 = v30;
                v17 = v29;
                *(_QWORD *)a1 = v23;
                v20 = (_BYTE *)v23;
                v19 = v27;
                v16 = v25;
              }
              *(_QWORD *)(a1 + 8) = v16;
              v20[v19] = 0;
              memcpy((void *)(v18 + *(_QWORD *)a1), src, v17);
            }
          }
        }
        v3 += v7;
        v4 -= v7;
        if ( ptr )
        {
          *(_QWORD *)&v34 = 0;
          qfree(ptr);
        }
      }
      while ( v4 > 0 );
      if ( src )
      {
        v32.m128i_i64[0] = 0;
        qfree(src);
      }
    }
  }
  return a1;
}
