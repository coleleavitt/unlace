void __fastcall sub_11D9460(__int64 a1, __int64 a2)
{
  __m128i *v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rax
  void *v6; // rdx
  __int64 v7; // rbp
  char *v8; // rax
  char *v9; // rbx
  size_t v10; // rax
  _BYTE *v11; // rdi
  size_t v12; // r12
  _BYTE *v13; // rax
  __m128i si128; // xmm0

  if ( *(_BYTE *)(a1 + 8) )
  {
    v3 = *(__m128i **)(a2 + 32);
    v4 = a2;
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v3 > 0x18u )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9B40);
      v3[1].m128i_i8[8] = 32;
      v3[1].m128i_i64[0] = 0x3A6E6F6974616C6CLL;
      *v3 = si128;
      *(_QWORD *)(a2 + 32) += 25LL;
    }
    else
    {
      v4 = sub_227BF10(a2, "Found CUDA installation: ", 25);
    }
    v5 = sub_227BF10(v4, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
    v6 = *(void **)(v5 + 32);
    v7 = v5;
    if ( *(_QWORD *)(v5 + 24) - (_QWORD)v6 > 9u )
    {
      qmemcpy(v6, ", version ", 10);
      *(_QWORD *)(v5 + 32) += 10LL;
    }
    else
    {
      v7 = sub_227BF10(v5, ", version ", 10);
    }
    v8 = sub_FBFE80(*(_DWORD *)(a1 + 12));
    v9 = v8;
    if ( v8 )
    {
      v10 = strlen(v8);
      v11 = *(_BYTE **)(v7 + 32);
      v12 = v10;
      v13 = *(_BYTE **)(v7 + 24);
      if ( v12 <= v13 - v11 )
      {
        if ( v12 )
        {
          memcpy(v11, v9, v12);
          v13 = *(_BYTE **)(v7 + 24);
          v11 = (_BYTE *)(v12 + *(_QWORD *)(v7 + 32));
          *(_QWORD *)(v7 + 32) = v11;
        }
        goto LABEL_10;
      }
      v7 = sub_227BF10(v7, v9, v12);
    }
    v11 = *(_BYTE **)(v7 + 32);
    v13 = *(_BYTE **)(v7 + 24);
LABEL_10:
    if ( v13 == v11 )
    {
      sub_227BF10(v7, "\n", 1);
    }
    else
    {
      *v11 = 10;
      ++*(_QWORD *)(v7 + 32);
    }
  }
}
