_QWORD *__fastcall sub_E3EFE0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  const __m128i *v8; // r13
  unsigned int v9; // eax
  _QWORD *result; // rax
  const __m128i *v11; // r14
  _QWORD *i; // rdx
  const __m128i *v13; // rbx
  const __m128i *v14; // r12
  int v15; // ebp
  const __m128i *v16; // r13
  int v17; // eax
  const void *v18; // r8
  int v19; // r11d
  size_t v20; // r9
  unsigned int v21; // r10d
  __int64 *v22; // rbp
  char *v23; // rsi
  char v24; // al
  __int64 v25; // rdx
  _QWORD *j; // rdx
  __int64 *v27; // r9
  char v28; // al
  bool v29; // al
  __int32 v30; // eax
  __int64 *v31; // rax
  int v32; // eax
  __int64 v33; // [rsp+8h] [rbp-70h]
  __int64 *v34; // [rsp+10h] [rbp-68h]
  int v35; // [rsp+10h] [rbp-68h]
  bool v36; // [rsp+18h] [rbp-60h]
  int v37; // [rsp+18h] [rbp-60h]
  int v38; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v39; // [rsp+1Ch] [rbp-5Ch]
  int v40; // [rsp+20h] [rbp-58h]
  __int64 *v41; // [rsp+20h] [rbp-58h]
  const void *v42; // [rsp+20h] [rbp-58h]
  unsigned int v43; // [rsp+28h] [rbp-50h]
  const void *v44; // [rsp+28h] [rbp-50h]
  size_t v45; // [rsp+28h] [rbp-50h]
  size_t v46; // [rsp+30h] [rbp-48h]
  int v47; // [rsp+30h] [rbp-48h]
  const void *v48; // [rsp+38h] [rbp-40h]
  unsigned int v49; // [rsp+38h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v7 = *(unsigned int *)(a1 + 16);
  v8 = *(const __m128i **)a1;
  v9 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
        | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
        | ((v6 | (v6 >> 1)) >> 2)
        | v6
        | (v6 >> 1)) >> 16)
      | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
      | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
      | ((v6 | (v6 >> 1)) >> 2)
      | v6
      | (v6 >> 1))
     + 1;
  if ( v9 < 0x40 )
    v9 = 64;
  *(_DWORD *)(a1 + 16) = v9;
  result = (_QWORD *)sub_22300B0(24LL * v9, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v33 = 24 * v7;
    v11 = (const __m128i *)((char *)v8 + 24 * v7);
    for ( i = &result[3 * *(unsigned int *)(a1 + 16)]; i != result; *(result - 2) = 0 )
    {
      *result = -1;
      result += 3;
    }
    if ( v11 != v8 )
    {
      v13 = v8;
      v14 = v8;
      do
      {
        if ( v13->m128i_i64[0] != -1 && v13->m128i_i64[0] != -2 )
        {
          v15 = *(_DWORD *)(a1 + 16);
          if ( !v15 )
          {
            *(__m128i *)&dword_0 = _mm_loadu_si128(v13);
            BUG();
          }
          v16 = *(const __m128i **)a1;
          v17 = sub_2248890(v13->m128i_i64[0], v13->m128i_i64[1]);
          v18 = (const void *)v13->m128i_i64[0];
          v19 = v15 - 1;
          v20 = v13->m128i_u64[1];
          v21 = (v15 - 1) & v17;
          v36 = v13->m128i_i64[0] == -2;
          if ( v20 )
          {
            v38 = 1;
            v34 = nullptr;
            while ( 1 )
            {
              v22 = &v16->m128i_i64[3 * v21];
              v23 = (char *)*v22;
              if ( *v22 == -1 )
              {
                if ( v18 != (const void *)-1LL )
                {
                  v31 = &v16->m128i_i64[3 * v21];
                  v22 = v34;
LABEL_39:
                  if ( !v22 )
                    v22 = v31;
                }
                goto LABEL_36;
              }
              if ( v23 == (char *)-2LL )
              {
                v29 = v36;
              }
              else
              {
                if ( v22[1] != v20 )
                  goto LABEL_17;
                v49 = v21;
                v47 = v19;
                v45 = v20;
                v42 = v18;
                v32 = memcmp(v18, v23, v20);
                v18 = v42;
                v20 = v45;
                v19 = v47;
                v21 = v49;
                v29 = v32 == 0;
              }
              if ( v29 )
                goto LABEL_36;
LABEL_17:
              v48 = v18;
              v46 = v20;
              v43 = v21;
              v40 = v19;
              v24 = sub_E39ED0((char *)*v22, v22[1], (const void *)0xFFFFFFFFFFFFFFFELL, 0);
              v19 = v40;
              v20 = v46;
              v18 = v48;
              if ( !v34 )
              {
                if ( !v24 )
                  v22 = nullptr;
                v34 = v22;
              }
              v21 = v40 & (v38 + v43);
              ++v38;
            }
          }
          v37 = 1;
          v27 = nullptr;
          while ( 1 )
          {
            v22 = &v16->m128i_i64[3 * v21];
            if ( *v22 == -1 )
              break;
            if ( *v22 == -2 )
            {
              if ( v18 == (const void *)-2LL )
                goto LABEL_36;
            }
            else if ( !v22[1] )
            {
              goto LABEL_36;
            }
            v44 = v18;
            v41 = v27;
            v39 = v21;
            v35 = v19;
            v28 = sub_E39ED0((char *)*v22, v22[1], (const void *)0xFFFFFFFFFFFFFFFELL, 0);
            v19 = v35;
            v18 = v44;
            if ( v41 || !v28 )
              v22 = v41;
            v27 = v22;
            v21 = v35 & (v37 + v39);
            ++v37;
          }
          if ( v18 != (const void *)-1LL )
          {
            v31 = &v16->m128i_i64[3 * v21];
            v22 = v27;
            goto LABEL_39;
          }
LABEL_36:
          v30 = v13[1].m128i_i32[0];
          *(__m128i *)v22 = _mm_loadu_si128(v13);
          *((_DWORD *)v22 + 4) = v30;
          ++*(_DWORD *)(a1 + 8);
        }
        v13 = (const __m128i *)((char *)v13 + 24);
      }
      while ( v11 != v13 );
      v8 = v14;
    }
    return (_QWORD *)operator delete(v8, v33, 8);
  }
  else
  {
    v25 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[3 * v25]; j != result; *(result - 2) = 0 )
    {
      *result = -1;
      result += 3;
    }
  }
  return result;
}
