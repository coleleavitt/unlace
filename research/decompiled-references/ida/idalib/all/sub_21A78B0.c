_QWORD *__fastcall sub_21A78B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  const __m128i *v6; // r13
  unsigned int v7; // ebp
  __int64 v8; // r14
  char *v9; // rdx
  char *v10; // r10
  char *v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned int v14; // r14d
  __int64 v15; // r13
  char v16; // r9
  char *v17; // rdx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  const char *v22; // rdi
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  const __m128i *v25; // rsi
  __int8 *v26; // rsi
  char *v27; // rsi
  const __m128i *v28; // r9
  __int64 v29; // r14
  signed __int64 v30; // r15
  __int64 v31; // rax
  void *v32; // rdi
  const __m128i *v33; // rdx
  __int64 i; // rsi
  __m128i v35; // xmm1
  __int64 v37; // [rsp+8h] [rbp-70h]
  const __m128i *v39; // [rsp+18h] [rbp-60h]
  __int64 v40; // [rsp+18h] [rbp-60h]
  __m128i v41; // [rsp+20h] [rbp-58h] BYREF
  __int64 v42; // [rsp+30h] [rbp-48h]

  *(_DWORD *)(a2 + 696) = -858993459 * ((__int64)(*(_QWORD *)(a2 + 80) - *(_QWORD *)(a2 + 72)) >> 4);
  v5 = sub_21A2A40(a3);
  v6 = *(const __m128i **)(a2 + 400);
  v37 = a2 + 400;
  v7 = v5;
  if ( v5 > 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a2 + 416) - (_QWORD)v6) >> 3) )
  {
    v28 = *(const __m128i **)(a2 + 408);
    v29 = 24LL * v5;
    v30 = (char *)v28 - (char *)v6;
    if ( v5 )
    {
      v39 = *(const __m128i **)(a2 + 408);
      v31 = operator new(24LL * v5);
      v32 = *(void **)(a2 + 400);
      v28 = v39;
    }
    else
    {
      v32 = *(void **)(a2 + 400);
      v31 = 0;
    }
    v33 = v6;
    for ( i = v31; v28 != v33; *(_QWORD *)(i - 8) = v33[-1].m128i_i64[1] )
    {
      v35 = _mm_loadu_si128(v33);
      v33 = (const __m128i *)((char *)v33 + 24);
      i += 24;
      *(__m128i *)(i - 24) = v35;
    }
    if ( v32 )
    {
      v40 = v31;
      operator delete(v32);
      v31 = v40;
    }
    *(_QWORD *)(a2 + 400) = v31;
    *(_QWORD *)(a2 + 408) = v31 + v30;
    *(_QWORD *)(a2 + 416) = v29 + v31;
  }
  v8 = (__int64)(*(_QWORD *)(a2 + 312) - *(_QWORD *)(a2 + 304)) >> 6;
  v9 = *(char **)(a3 + 8);
  v10 = *(char **)(a3 + 16);
  if ( v7 )
  {
    if ( v9 == v10 )
LABEL_41:
      sub_21A2960();
    v11 = v9 + 1;
    *(_QWORD *)(a3 + 8) = v9 + 1;
    if ( *v9 )
    {
LABEL_35:
      v27 = "invalid attribute";
    }
    else
    {
      if ( v10 == v11 )
      {
LABEL_21:
        v22 = "malformed uleb128, extends past end";
LABEL_22:
        sub_2221C70(v22, 1);
      }
      v12 = a3;
      v13 = v8;
      v14 = v7 - 2;
      v15 = v12;
      while ( 1 )
      {
        v16 = *v11;
        v17 = v11;
        v18 = 0;
        v19 = 0;
        v20 = *v11 & 0x7F;
        while ( 1 )
        {
          v21 = v20 << v18;
          ++v17;
          v18 += 7;
          v19 += v21;
          if ( v16 >= 0 )
            break;
          if ( v17 == v10 )
            goto LABEL_21;
          v16 = *v17;
          v20 = *v17 & 0x7F;
          if ( v18 > 0x3E )
          {
            if ( v18 == 63 )
            {
              if ( v20 != (v16 & 1) )
              {
LABEL_13:
                v22 = "uleb128 too big for uint64";
                goto LABEL_22;
              }
            }
            else if ( (*v17 & 0x7F) != 0 )
            {
              goto LABEL_13;
            }
          }
        }
        *(_QWORD *)(v15 + 8) = &v11[(_DWORD)v17 - (_DWORD)v11];
        if ( v19 > 0xFFFFFFFF )
          sub_2221C70("LEB is outside Varuint32 range", 1);
        if ( v13 <= (unsigned int)v19 )
          break;
        v23 = *(_QWORD *)(a2 + 408) - *(_QWORD *)(a2 + 400);
        v41.m128i_i32[1] = v19;
        v24 = *(_QWORD *)(a2 + 304) + (v19 << 6);
        v41.m128i_i64[1] = 0;
        v42 = 0;
        v41.m128i_i32[0] = *(_DWORD *)(a2 + 684) - 1431655765 * (v23 >> 3);
        *(_DWORD *)(v24 + 56) = 1;
        v25 = *(const __m128i **)(a2 + 408);
        if ( v25 == *(const __m128i **)(a2 + 416) )
        {
          sub_21A7720(v37, v25, &v41);
          v10 = *(char **)(v15 + 16);
          v9 = *(char **)(v15 + 8);
          if ( v14 == -1 )
            goto LABEL_26;
        }
        else
        {
          v26 = &v25[1].m128i_i8[8];
          v10 = *(char **)(v15 + 16);
          v9 = *(char **)(v15 + 8);
          *(__m128i *)(v26 - 24) = _mm_load_si128(&v41);
          *((_QWORD *)v26 - 1) = v42;
          *(_QWORD *)(a2 + 408) = v26;
          if ( v14 == -1 )
            goto LABEL_26;
        }
        if ( v10 == v9 )
          goto LABEL_41;
        v11 = v9 + 1;
        *(_QWORD *)(v15 + 8) = v9 + 1;
        if ( *v9 )
          goto LABEL_35;
        --v14;
        if ( v11 == v10 )
          goto LABEL_21;
      }
      v27 = "invalid tag type";
    }
    goto LABEL_36;
  }
LABEL_26:
  if ( v9 != v10 )
  {
    v27 = "tag section ended prematurely";
LABEL_36:
    sub_21A2C10(v41.m128i_i64, v27);
    *a1 = v41.m128i_i64[0];
    return a1;
  }
  *a1 = 0;
  return a1;
}
