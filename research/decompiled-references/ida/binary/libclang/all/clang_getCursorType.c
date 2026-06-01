__int64 __fastcall clang_getCursorType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  unsigned int v9; // r12d
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _WORD *v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int8 v26; // cl
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __m128i v38; // [rsp+0h] [rbp-48h]
  __m128i v39; // [rsp+0h] [rbp-48h]
  __m128i v40; // [rsp+0h] [rbp-48h]
  __m128i v41; // [rsp+0h] [rbp-48h]
  __m128i v42; // [rsp+0h] [rbp-48h]
  __m128i v43; // [rsp+0h] [rbp-48h]
  __m128i v44; // [rsp+0h] [rbp-48h]
  __m128i v45; // [rsp+0h] [rbp-48h]
  __m128i v46; // [rsp+0h] [rbp-48h]

  v9 = a7;
  v38 = _mm_loadu_si128((const __m128i *)&a7);
  v10 = _mm_loadu_si128((const __m128i *)&a8);
  v11 = sub_63A300(a1, a2, a3, a4, a5, a6, v38.m128i_i32[0], v38.m128i_i32[2], v10.m128i_i32[0], v10.m128i_i64[1]);
  if ( v11 )
  {
    v12 = v11;
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 80LL);
    if ( (unsigned int)clang_isExpression(v9) )
    {
      v39 = _mm_loadu_si128((const __m128i *)&a7);
      v18 = sub_63A260(
              v9,
              a2,
              v14,
              v15,
              v16,
              v17,
              v39.m128i_i32[0],
              v39.m128i_i32[2],
              (_WORD *)_mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
      sub_690DD0(a1, *((_QWORD *)v18 + 1), v12);
      return a1;
    }
    if ( (unsigned int)clang_isDeclaration(v9) )
    {
      v40 = _mm_loadu_si128((const __m128i *)&a7);
      v24 = sub_63A250(v9, a2, v20, v21, v22, v23, v40.m128i_i32[0], v40.m128i_i64[1]);
      v25 = v24;
      if ( v24 )
      {
        v26 = *(_BYTE *)(v24 + 28) & 0x7F;
        if ( (unsigned int)v26 - 56 <= 9 )
        {
          v27 = *(_QWORD *)(v24 + 48);
          if ( v27 )
LABEL_9:
            v25 = v27 & 0xFFFFFFFFFFFFFFF0LL;
          else
LABEL_31:
            v25 = sub_6E8D60(v13, v25);
          goto LABEL_10;
        }
        if ( v26 != 18 )
        {
          if ( (unsigned int)v26 - 32 <= 0x11 || (unsigned int)v26 - 24 <= 0x1A )
          {
            sub_690DD0(a1, *(_QWORD *)(v24 + 48), v12);
            return a1;
          }
          if ( v26 == 73 )
          {
            sub_690DD0(a1, *(_QWORD *)(v24 + 56), v12);
            return a1;
          }
          if ( v26 == 69 )
          {
            sub_690DD0(a1, *(_QWORD *)(*(_QWORD *)(v24 + 48) + 48LL), v12);
            return a1;
          }
          goto LABEL_14;
        }
LABEL_25:
        v25 = sub_6C9720(v13, v25, 0);
      }
LABEL_10:
      sub_690DD0(a1, v25, v12);
      return a1;
    }
    if ( (unsigned int)clang_isReference(v9) )
    {
      switch ( v9 )
      {
        case '(':
          v46 = _mm_loadu_si128((const __m128i *)&a7);
          v37 = sub_639C00(v9, a2, v28, v29, v30, v31, v46.m128i_i32[0], v46.m128i_i64[1]);
          goto LABEL_24;
        case '*':
          v45 = _mm_loadu_si128((const __m128i *)&a7);
          v37 = sub_639CC0(v9, a2, v28, v29, v30, v31, v45.m128i_i32[0], v45.m128i_i64[1]);
LABEL_24:
          v25 = v37;
          goto LABEL_25;
        case '+':
          v44 = _mm_loadu_si128((const __m128i *)&a7);
          v36 = sub_639D10(v9, a2, v28, v29, v30, v31, v44.m128i_i32[0], v44.m128i_i64[1]);
          v34 = *(_QWORD *)(v36 + 48);
          if ( v34 )
            goto LABEL_22;
          v25 = v36;
          goto LABEL_31;
        case ',':
          v43 = _mm_loadu_si128((const __m128i *)&a7);
          v33 = **(_QWORD **)(sub_639EB0(v9, a2, v28, v29, v30, v31, v43.m128i_i32[0], v43.m128i_i64[1]) + 16);
          v34 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL);
          v35 = *(_QWORD *)(v34 + 8);
          if ( (v35 & 7) != 0 || (v35 & 8) != 0 )
          {
            v27 = sub_B0CF30(v33, v34);
            goto LABEL_9;
          }
LABEL_22:
          v25 = v34 & 0xFFFFFFFFFFFFFFF0LL;
          break;
        case '/':
          v42 = _mm_loadu_si128((const __m128i *)&a7);
          v32 = sub_639E50(v9, a2, v28, v29, v30, v31, v42.m128i_i32[0], v42.m128i_i64[1]);
          goto LABEL_16;
        case '2':
          v41 = _mm_loadu_si128((const __m128i *)&a7);
          v32 = sub_639E00(v9, a2, v28, v29, v30, v31, v41.m128i_i32[0], v41.m128i_i64[1]);
LABEL_16:
          v25 = *(_QWORD *)(v32 + 48);
          goto LABEL_10;
        default:
          goto LABEL_14;
      }
      goto LABEL_10;
    }
LABEL_14:
    sub_690DD0(a1, 0, v12);
    return a1;
  }
  sub_690DD0(a1, 0, 0);
  return a1;
}

