void **__fastcall sub_503720(void **a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _DWORD *v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  void *v10; // rdi
  __int64 v11; // r13
  _DWORD *v12; // rsi
  size_t v13; // rdx
  _DWORD *v14; // rcx
  unsigned int v15; // r13d
  size_t v16; // rdi
  __int64 v17; // rax
  __m128i v18; // xmm0
  _DWORD *v19; // rsi
  size_t v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdi
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v32; // [rsp+8h] [rbp-30h]

  v7 = (_DWORD *)*a3;
  *a1 = nullptr;
  if ( v7 )
  {
    v8 = _mm_loadl_epi64((const __m128i *)(v7 - 2));
    v32 = v8.m128i_i64[0];
    v9 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v8) + 8);
    v10 = (void *)(v9 + 8);
    v11 = v9;
    *a1 = (void *)(v9 + 8);
    v12 = (_DWORD *)*a3;
    *(_QWORD *)v9 = v8.m128i_i64[0];
    if ( v12 )
    {
      v13 = 4LL * (unsigned int)*(v12 - 1);
      if ( v13 <= 4 )
      {
        if ( v13 == 4 )
          *(_DWORD *)(v9 + 8) = *v12;
      }
      else
      {
        v10 = memmove(v10, v12, v13);
      }
    }
    v14 = (_DWORD *)a3[1];
    a1[1] = nullptr;
    if ( !v14 )
    {
      v21 = *a4;
      if ( !*a4 )
      {
        if ( !*(_DWORD *)(v11 + 4) )
          return a1;
        v26 = a4[1];
        *(_DWORD *)(v11 + 4) = 0;
        if ( !v26 )
          return a1;
        goto LABEL_17;
      }
      v22 = *(_DWORD *)(v21 - 4);
      v23 = *((_DWORD *)v10 - 1);
      if ( v22 >= v23 )
        goto LABEL_13;
      goto LABEL_26;
    }
LABEL_6:
    v15 = *(v14 - 1);
    v16 = 4LL * (unsigned int)*(v14 - 2) + 8;
    LODWORD(v32) = *(v14 - 2);
    v17 = sub_186B270(v16);
    v18 = _mm_cvtsi32_si128(v32);
    v14 = (_DWORD *)(v17 + 8);
    a1[1] = (void *)(v17 + 8);
    v19 = (_DWORD *)a3[1];
    *(_QWORD *)v17 = _mm_unpacklo_epi32(v18, _mm_cvtsi32_si128(v15)).m128i_u64[0];
    if ( v19 )
    {
      v20 = 4LL * (unsigned int)*(v19 - 1);
      if ( v20 <= 4 )
      {
        v10 = *a1;
        if ( v20 == 4 )
          *(_DWORD *)(v17 + 8) = *v19;
LABEL_10:
        v21 = *a4;
        if ( *a4 )
        {
          v22 = *(_DWORD *)(v21 - 4);
          if ( v10 )
          {
            v23 = *((_DWORD *)v10 - 1);
            if ( v22 >= v23 )
            {
LABEL_13:
              if ( v23 )
              {
                v24 = 0;
                do
                {
                  v25 = v24++;
                  *((_DWORD *)v10 + v25) &= *(_DWORD *)(v21 + 4 * v25);
                }
                while ( v24 < *((_DWORD *)v10 - 1) );
              }
              v26 = a4[1];
              if ( v26 )
              {
LABEL_17:
                v27 = *(_DWORD *)(v26 - 4);
                if ( v14 )
                {
LABEL_18:
                  v28 = *(v14 - 1);
                  if ( v27 < v28 )
                  {
                    *(v14 - 1) = v27;
                    v28 = v27;
                  }
                  if ( v28 )
                  {
                    v29 = 0;
                    do
                    {
                      v30 = v29++;
                      v14[v30] &= *(_DWORD *)(v26 + 4 * v30);
                    }
                    while ( v29 < *(v14 - 1) );
                  }
                }
                return a1;
              }
              if ( !v14 )
                return a1;
LABEL_34:
              if ( *(v14 - 1) )
                *(v14 - 1) = 0;
              return a1;
            }
LABEL_26:
            *((_DWORD *)v10 - 1) = v22;
            v23 = v22;
            goto LABEL_13;
          }
        }
        else if ( v10 && *((_DWORD *)v10 - 1) )
        {
          *((_DWORD *)v10 - 1) = 0;
          v26 = a4[1];
          if ( v26 )
            goto LABEL_17;
          goto LABEL_34;
        }
        v26 = a4[1];
        if ( v26 )
        {
          v27 = *(_DWORD *)(v26 - 4);
          goto LABEL_18;
        }
        goto LABEL_34;
      }
      v14 = memmove((void *)(v17 + 8), v19, v20);
    }
    v10 = *a1;
    goto LABEL_10;
  }
  v14 = (_DWORD *)a3[1];
  a1[1] = nullptr;
  if ( v14 )
    goto LABEL_6;
  return a1;
}

