__int64 __fastcall sub_20BF750(const char *a1, const char *a2)
{
  const char *v2; // rbp
  __int64 v3; // rbx
  __m128i *v4; // rdx
  const char *(__fastcall *v5)(__int64, __int64); // rax
  pthread_rwlock_t *v6; // rax
  __int64 v7; // rax
  const char *v8; // rsi
  size_t v9; // rbp
  _BYTE *v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __m128i si128; // xmm0
  __m128i v16; // xmm0
  size_t v17; // rdx

  v2 = a1;
  v3 = (__int64)a2;
  v4 = *((__m128i **)a2 + 4);
  if ( *((_QWORD *)a2 + 3) - (_QWORD)v4 > 0x26u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB160);
    v4[2].m128i_i32[0] = 1936941424;
    v4[2].m128i_i16[2] = 8250;
    *v4 = si128;
    v16 = _mm_load_si128(xmmword_23AB170);
    v4[2].m128i_i8[6] = 39;
    v4[1] = v16;
    *((_QWORD *)a2 + 4) += 39LL;
  }
  else
  {
    a1 = a2;
    a2 = "Pass::print not implemented for pass: '";
    v3 = sub_227BF10(a1, "Pass::print not implemented for pass: '", 39);
  }
  v5 = *(const char *(__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 16LL);
  if ( v5 == sub_20BF710 )
  {
    v6 = (pthread_rwlock_t *)sub_20BFB80(a1, a2);
    v7 = sub_20BFCA0(v6);
    if ( !v7 )
    {
      v10 = *(_BYTE **)(v3 + 32);
      v9 = 43;
      v8 = "Unnamed pass: implement Pass::getPassName()";
      if ( *(_QWORD *)(v3 + 24) - (_QWORD)v10 > 0x2Au )
        goto LABEL_11;
      goto LABEL_13;
    }
    v8 = *(const char **)v7;
    v9 = *(_QWORD *)(v7 + 8);
  }
  else
  {
    v8 = (const char *)((__int64 (__fastcall *)(const char *))v5)(v2);
    v9 = v17;
  }
  v10 = *(_BYTE **)(v3 + 32);
  v11 = *(_QWORD *)(v3 + 24) - (_QWORD)v10;
  if ( v11 >= v9 )
  {
    if ( !v9 )
      goto LABEL_8;
LABEL_11:
    memcpy(v10, v8, v9);
    v10 = (_BYTE *)(v9 + *(_QWORD *)(v3 + 32));
    v13 = *(_QWORD *)(v3 + 24) - (_QWORD)v10;
    *(_QWORD *)(v3 + 32) = v10;
    if ( v13 <= 2 )
      return sub_227BF10(v3, "'!\n", 3);
    goto LABEL_12;
  }
LABEL_13:
  v14 = sub_227BF10(v3, v8, v9);
  v10 = *(_BYTE **)(v14 + 32);
  v3 = v14;
  v11 = *(_QWORD *)(v14 + 24) - (_QWORD)v10;
LABEL_8:
  if ( v11 <= 2 )
    return sub_227BF10(v3, "'!\n", 3);
LABEL_12:
  v10[2] = 10;
  *(_WORD *)v10 = 8487;
  *(_QWORD *)(v3 + 32) += 3LL;
  return 8487;
}
