const char *__fastcall sub_13F1510(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  void *v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rdi
  char v7; // cl
  __m128i *v8; // rdx
  unsigned __int64 v9; // rax
  char v10; // cl
  const char *v11; // r13
  const char *result; // rax
  _BYTE *v13; // rax
  const char *v14; // rbp
  unsigned __int16 v15; // r15
  char *v16; // rax
  char *v17; // r12
  size_t v18; // rax
  void *v19; // rdi
  size_t v20; // r14
  __int16 v21; // ax
  const void *v22; // rsi
  void *v23; // rdi
  size_t v24; // r12
  __int64 v25; // rax
  unsigned int *v26; // rsi
  const char *v27; // r12
  size_t v28; // rax
  void *v29; // rdi
  size_t v30; // rcx
  _BYTE *v31; // rax
  _BYTE *v32; // rdi
  _BYTE *v33; // rdx
  unsigned int v34; // r12d
  unsigned int *v35; // rsi
  unsigned __int64 v36; // rax
  size_t v37; // r14
  const void *v38; // rsi
  __m128i v39; // xmm0
  __m128i si128; // xmm0
  char v41; // cl
  const char *v42; // [rsp+0h] [rbp-48h]
  size_t v43; // [rsp+8h] [rbp-40h]

  v3 = sub_227D6D0(a1, a2);
  v4 = *(void **)(v3 + 32);
  v5 = v3;
  if ( *(_QWORD *)(v3 + 24) - (_QWORD)v4 > 9u )
  {
    v6 = v3;
    qmemcpy(v4, "MacroInfo ", 10);
    *(_QWORD *)(v3 + 32) += 10LL;
  }
  else
  {
    v6 = sub_227BF10(v3, "MacroInfo ", 10);
  }
  sub_227B9B0(v6, a1);
  v7 = *(_BYTE *)(a1 + 36);
  v8 = *(__m128i **)(v5 + 32);
  if ( (v7 & 0x10) != 0 )
  {
    if ( *(_QWORD *)(v5 + 24) - (_QWORD)v8 > 7u )
    {
      v8->m128i_i64[0] = 0x6E69746C69756220LL;
      v7 = *(_BYTE *)(a1 + 36);
      v8 = (__m128i *)(*(_QWORD *)(v5 + 32) + 8LL);
      *(_QWORD *)(v5 + 32) = v8;
    }
    else
    {
      sub_227BF10(v5, " builtin", 8);
      v8 = *(__m128i **)(v5 + 32);
      v7 = *(_BYTE *)(a1 + 36);
    }
  }
  v9 = *(_QWORD *)(v5 + 24) - (_QWORD)v8;
  if ( (v7 & 0x40) != 0 )
  {
    if ( v9 > 8 )
    {
      v8->m128i_i8[8] = 100;
      v8->m128i_i64[0] = 0x656C626173696420LL;
      v8 = (__m128i *)(*(_QWORD *)(v5 + 32) + 9LL);
      *(_QWORD *)(v5 + 32) = v8;
    }
    else
    {
      sub_227BF10(v5, " disabled", 9);
      v8 = *(__m128i **)(v5 + 32);
    }
    v9 = *(_QWORD *)(v5 + 24) - (_QWORD)v8;
    if ( *(char *)(a1 + 36) >= 0 )
    {
LABEL_6:
      v10 = *(_BYTE *)(a1 + 37);
      if ( (v10 & 1) == 0 )
        goto LABEL_7;
      goto LABEL_58;
    }
  }
  else if ( v7 >= 0 )
  {
    goto LABEL_6;
  }
  if ( v9 > 4 )
  {
    v8->m128i_i32[0] = 1702065440;
    v8->m128i_i8[4] = 100;
    v8 = (__m128i *)(*(_QWORD *)(v5 + 32) + 5LL);
    *(_QWORD *)(v5 + 32) = v8;
  }
  else
  {
    sub_227BF10(v5, " used", 5);
    v8 = *(__m128i **)(v5 + 32);
  }
  v10 = *(_BYTE *)(a1 + 37);
  v9 = *(_QWORD *)(v5 + 24) - (_QWORD)v8;
  if ( (v10 & 1) == 0 )
  {
LABEL_7:
    if ( (v10 & 2) == 0 )
      goto LABEL_8;
    goto LABEL_61;
  }
LABEL_58:
  if ( v9 > 0x23 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA550);
    v8[2].m128i_i32[0] = 1735289198;
    *v8 = si128;
    v8[1] = _mm_load_si128((const __m128i *)&xmmword_23AA560);
    v8 = (__m128i *)(*(_QWORD *)(v5 + 32) + 36LL);
    *(_QWORD *)(v5 + 32) = v8;
  }
  else
  {
    sub_227BF10(v5, " allow_redefinitions_without_warning", 36);
    v8 = *(__m128i **)(v5 + 32);
  }
  v10 = *(_BYTE *)(a1 + 37);
  v9 = *(_QWORD *)(v5 + 24) - (_QWORD)v8;
  if ( (v10 & 2) == 0 )
  {
LABEL_8:
    if ( (v10 & 4) == 0 )
      goto LABEL_9;
LABEL_64:
    if ( v9 > 0xC )
    {
      qmemcpy(v8, " header_guard", 13);
      v8 = (__m128i *)(*(_QWORD *)(v5 + 32) + 13LL);
      *(_QWORD *)(v5 + 32) = v8;
    }
    else
    {
      sub_227BF10(v5, " header_guard", 13);
      v8 = *(__m128i **)(v5 + 32);
    }
    if ( *(_QWORD *)(v5 + 24) - (_QWORD)v8 <= 0x13u )
      goto LABEL_10;
    goto LABEL_67;
  }
LABEL_61:
  if ( v9 > 0xE )
  {
    qmemcpy(v8, " warn_if_unused", 15);
    v8 = (__m128i *)(*(_QWORD *)(v5 + 32) + 15LL);
    *(_QWORD *)(v5 + 32) = v8;
  }
  else
  {
    sub_227BF10(v5, " warn_if_unused", 15);
    v8 = *(__m128i **)(v5 + 32);
  }
  v9 = *(_QWORD *)(v5 + 24) - (_QWORD)v8;
  if ( (*(_BYTE *)(a1 + 37) & 4) != 0 )
    goto LABEL_64;
LABEL_9:
  if ( v9 <= 0x13 )
  {
LABEL_10:
    sub_227BF10(v5, "\n    #define <macro>", 20);
    goto LABEL_11;
  }
LABEL_67:
  v39 = _mm_load_si128((const __m128i *)&xmmword_23AA570);
  v8[1].m128i_i32[0] = 1047491171;
  *v8 = v39;
  *(_QWORD *)(v5 + 32) += 20LL;
LABEL_11:
  if ( (*(_BYTE *)(a1 + 36) & 2) == 0 )
    goto LABEL_12;
  v31 = *(_BYTE **)(v5 + 32);
  if ( *(_BYTE **)(v5 + 24) == v31 )
  {
    sub_227BF10(v5, "(", 1);
    v32 = *(_BYTE **)(v5 + 32);
  }
  else
  {
    *v31 = 40;
    v32 = (_BYTE *)(*(_QWORD *)(v5 + 32) + 1LL);
    *(_QWORD *)(v5 + 32) = v32;
  }
  v33 = *(_BYTE **)(v5 + 24);
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v41 = *(_BYTE *)(a1 + 36);
    v36 = v33 - v32;
    if ( (v41 & 4) != 0 )
      goto LABEL_81;
    goto LABEL_88;
  }
  v34 = 0;
  while ( 1 )
  {
    v35 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v34) + 16LL);
    v36 = v33 - v32;
    v37 = *v35;
    v38 = v35 + 4;
    if ( v37 <= v33 - v32 )
      break;
    ++v34;
    sub_227BF10(v5, v38, v37);
    v33 = *(_BYTE **)(v5 + 24);
    v32 = *(_BYTE **)(v5 + 32);
    v36 = v33 - v32;
    if ( *(_DWORD *)(a1 + 24) == v34 )
      goto LABEL_79;
LABEL_48:
    if ( v34 )
    {
      if ( v36 > 1 )
      {
        *(_WORD *)v32 = 8236;
        v32 = (_BYTE *)(*(_QWORD *)(v5 + 32) + 2LL);
        *(_QWORD *)(v5 + 32) = v32;
      }
      else
      {
        sub_227BF10(v5, ", ", 2);
        v32 = *(_BYTE **)(v5 + 32);
      }
      v33 = *(_BYTE **)(v5 + 24);
    }
  }
  if ( v37 )
  {
    memcpy(v32, v38, v37);
    v33 = *(_BYTE **)(v5 + 24);
    v32 = (_BYTE *)(v37 + *(_QWORD *)(v5 + 32));
    *(_QWORD *)(v5 + 32) = v32;
    v36 = v33 - v32;
  }
  if ( *(_DWORD *)(a1 + 24) != ++v34 )
    goto LABEL_48;
LABEL_79:
  v41 = *(_BYTE *)(a1 + 36);
  if ( (v41 & 4) == 0 )
  {
LABEL_88:
    if ( (v41 & 8) != 0 )
      goto LABEL_81;
    goto LABEL_84;
  }
  if ( v34 )
  {
    if ( v36 > 1 )
    {
      *(_WORD *)v32 = 8236;
      v32 = (_BYTE *)(*(_QWORD *)(v5 + 32) + 2LL);
      *(_QWORD *)(v5 + 32) = v32;
    }
    else
    {
      sub_227BF10(v5, ", ", 2);
      v32 = *(_BYTE **)(v5 + 32);
    }
    v36 = *(_QWORD *)(v5 + 24) - (_QWORD)v32;
  }
LABEL_81:
  if ( v36 > 2 )
  {
    v32[2] = 46;
    *(_WORD *)v32 = 11822;
    v32 = (_BYTE *)(*(_QWORD *)(v5 + 32) + 3LL);
    *(_QWORD *)(v5 + 32) = v32;
  }
  else
  {
    sub_227BF10(v5, "...", 3);
    v32 = *(_BYTE **)(v5 + 32);
  }
  v33 = *(_BYTE **)(v5 + 24);
LABEL_84:
  if ( v33 == v32 )
  {
    sub_227BF10(v5, ")", 1);
  }
  else
  {
    *v32 = 41;
    ++*(_QWORD *)(v5 + 32);
  }
LABEL_12:
  v11 = *(const char **)(a1 + 16);
  result = &v11[24 * *(unsigned int *)(a1 + 28)];
  v42 = result;
  if ( result != v11 )
  {
    v13 = *(_BYTE **)(v5 + 32);
    if ( *(_BYTE **)(v5 + 24) != v13 )
      goto LABEL_23;
    while ( 2 )
    {
      sub_227BF10(v5, " ", 1);
LABEL_15:
      v14 = v11 + 24;
LABEL_16:
      v15 = *((_WORD *)v14 - 4);
      v11 = v14;
      v16 = sub_10CBF60(v15);
      v17 = v16;
      if ( v16 )
      {
        v18 = strlen(v16);
        v19 = *(void **)(v5 + 32);
        v20 = v18;
        result = (const char *)(*(_QWORD *)(v5 + 24) - (_QWORD)v19);
        if ( v20 > (unsigned __int64)result )
        {
          result = (const char *)sub_227BF10(v5, v17, v20);
        }
        else if ( v20 )
        {
          result = (const char *)memcpy(v19, v17, v20);
          *(_QWORD *)(v5 + 32) += v20;
        }
        goto LABEL_20;
      }
      if ( (unsigned __int16)(v15 - 7) > 0xCu )
      {
        if ( v15 != 1 )
        {
          v25 = *((_QWORD *)v14 - 2);
          if ( v25 )
          {
            v26 = *(unsigned int **)(v25 + 16);
            v23 = *(void **)(v5 + 32);
            v24 = *v26;
            v22 = v26 + 4;
            result = (const char *)(*(_QWORD *)(v5 + 24) - (_QWORD)v23);
            if ( v24 > (unsigned __int64)result )
              goto LABEL_33;
LABEL_27:
            if ( v24 )
            {
              result = (const char *)memcpy(v23, v22, v24);
              *(_QWORD *)(v5 + 32) += v24;
              if ( v42 == v14 )
                return result;
            }
            else
            {
LABEL_20:
              if ( v42 == v14 )
                return result;
            }
            v21 = *((_WORD *)v14 + 9);
            v14 += 24;
            if ( (v21 & 2) != 0 )
            {
              v13 = *(_BYTE **)(v5 + 32);
              if ( *(_BYTE **)(v5 + 24) == v13 )
                continue;
LABEL_23:
              *v13 = 32;
              ++*(_QWORD *)(v5 + 32);
              goto LABEL_15;
            }
            goto LABEL_16;
          }
        }
      }
      else
      {
        v22 = *((const void **)v14 - 2);
        if ( v22 )
        {
          v23 = *(void **)(v5 + 32);
          v24 = *((unsigned int *)v14 - 5);
          result = (const char *)(*(_QWORD *)(v5 + 24) - (_QWORD)v23);
          if ( v24 <= (unsigned __int64)result )
            goto LABEL_27;
LABEL_33:
          result = (const char *)sub_227BF10(v5, v22, v24);
          goto LABEL_20;
        }
      }
      break;
    }
    result = (const char *)sub_10CBF50(v15);
    v27 = result;
    if ( result )
    {
      v28 = strlen(result);
      v29 = *(void **)(v5 + 32);
      v30 = v28;
      result = (const char *)(*(_QWORD *)(v5 + 24) - (_QWORD)v29);
      if ( v30 <= (unsigned __int64)result )
      {
        if ( v30 )
        {
          v43 = v30;
          result = (const char *)memcpy(v29, v27, v30);
          *(_QWORD *)(v5 + 32) += v43;
        }
      }
      else
      {
        result = (const char *)sub_227BF10(v5, v27, v30);
      }
    }
    goto LABEL_20;
  }
  return result;
}
