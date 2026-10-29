_QWORD *__fastcall sub_E1B2A0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  const __m128i *v8; // r13
  unsigned int v9; // eax
  _QWORD *result; // rax
  const __m128i *v11; // r14
  _QWORD *i; // rdx
  const __m128i *j; // rbx
  int v14; // ebp
  const __m128i *v15; // r13
  int v16; // eax
  const void *v17; // r8
  int v18; // r11d
  size_t v19; // r9
  unsigned int v20; // r10d
  __int64 *v21; // rbp
  char *v22; // rsi
  char v23; // al
  __int64 v24; // rdx
  _QWORD *k; // rdx
  __int64 *v26; // r9
  char v27; // al
  bool v28; // al
  __int32 v29; // eax
  __int64 *v30; // rax
  int v31; // eax
  __int64 *v32; // [rsp+10h] [rbp-68h]
  int v33; // [rsp+10h] [rbp-68h]
  bool v34; // [rsp+18h] [rbp-60h]
  int v35; // [rsp+18h] [rbp-60h]
  int v36; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v37; // [rsp+1Ch] [rbp-5Ch]
  int v38; // [rsp+20h] [rbp-58h]
  __int64 *v39; // [rsp+20h] [rbp-58h]
  const void *v40; // [rsp+20h] [rbp-58h]
  unsigned int v41; // [rsp+28h] [rbp-50h]
  const void *v42; // [rsp+28h] [rbp-50h]
  size_t v43; // [rsp+28h] [rbp-50h]
  size_t v44; // [rsp+30h] [rbp-48h]
  int v45; // [rsp+30h] [rbp-48h]
  const void *v46; // [rsp+38h] [rbp-40h]
  unsigned int v47; // [rsp+38h] [rbp-40h]

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
  result = (_QWORD *)sub_220C370(24LL * v9, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v11 = (const __m128i *)((char *)v8 + 24 * v7);
    for ( i = &result[3 * *(unsigned int *)(a1 + 16)]; i != result; *(result - 2) = 0 )
    {
      *result = -1;
      result += 3;
    }
    if ( v11 != v8 )
    {
      for ( j = v8; v11 != j; j = (const __m128i *)((char *)j + 24) )
      {
        if ( j->m128i_i64[0] != -1 && j->m128i_i64[0] != -2 )
        {
          v14 = *(_DWORD *)(a1 + 16);
          if ( !v14 )
          {
            *(__m128i *)&dword_0 = _mm_loadu_si128(j);
            BUG();
          }
          v15 = *(const __m128i **)a1;
          v16 = sub_2224B50(j->m128i_i64[0], j->m128i_i64[1]);
          v17 = (const void *)j->m128i_i64[0];
          v18 = v14 - 1;
          v19 = j->m128i_u64[1];
          v20 = (v14 - 1) & v16;
          v34 = j->m128i_i64[0] == -2;
          if ( v19 )
          {
            v36 = 1;
            v32 = nullptr;
            while ( 1 )
            {
              v21 = &v15->m128i_i64[3 * v20];
              v22 = (char *)*v21;
              if ( *v21 == -1 )
              {
                if ( v17 != (const void *)-1LL )
                {
                  v30 = &v15->m128i_i64[3 * v20];
                  v21 = v32;
LABEL_38:
                  if ( !v21 )
                    v21 = v30;
                }
                goto LABEL_35;
              }
              if ( v22 == (char *)-2LL )
              {
                v28 = v34;
              }
              else
              {
                if ( v21[1] != v19 )
                  goto LABEL_17;
                v47 = v20;
                v45 = v18;
                v43 = v19;
                v40 = v17;
                v31 = memcmp(v17, v22, v19);
                v17 = v40;
                v19 = v43;
                v18 = v45;
                v20 = v47;
                v28 = v31 == 0;
              }
              if ( v28 )
                goto LABEL_35;
LABEL_17:
              v46 = v17;
              v44 = v19;
              v41 = v20;
              v38 = v18;
              v23 = sub_E16190((char *)*v21, v21[1], (const void *)0xFFFFFFFFFFFFFFFELL, 0);
              v18 = v38;
              v19 = v44;
              v17 = v46;
              if ( !v32 )
              {
                if ( !v23 )
                  v21 = nullptr;
                v32 = v21;
              }
              v20 = v38 & (v36 + v41);
              ++v36;
            }
          }
          v35 = 1;
          v26 = nullptr;
          while ( 1 )
          {
            v21 = &v15->m128i_i64[3 * v20];
            if ( *v21 == -1 )
              break;
            if ( *v21 == -2 )
            {
              if ( v17 == (const void *)-2LL )
                goto LABEL_35;
            }
            else if ( !v21[1] )
            {
              goto LABEL_35;
            }
            v42 = v17;
            v39 = v26;
            v37 = v20;
            v33 = v18;
            v27 = sub_E16190((char *)*v21, v21[1], (const void *)0xFFFFFFFFFFFFFFFELL, 0);
            v18 = v33;
            v17 = v42;
            if ( v39 || !v27 )
              v21 = v39;
            v26 = v21;
            v20 = v33 & (v35 + v37);
            ++v35;
          }
          if ( v17 != (const void *)-1LL )
          {
            v30 = &v15->m128i_i64[3 * v20];
            v21 = v26;
            goto LABEL_38;
          }
LABEL_35:
          v29 = j[1].m128i_i32[0];
          *(__m128i *)v21 = _mm_loadu_si128(j);
          *((_DWORD *)v21 + 4) = v29;
          ++*(_DWORD *)(a1 + 8);
        }
      }
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    v24 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[3 * v24]; k != result; *(result - 2) = 0 )
    {
      *result = -1;
      result += 3;
    }
  }
  return result;
}

