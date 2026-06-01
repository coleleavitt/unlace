char *__fastcall sub_2016490(__int64 a1, __int64 a2)
{
  void *v2; // rax
  _BYTE *v4; // r13
  signed __int64 v5; // r12
  signed __int64 v6; // r12
  int v7; // eax
  char *v8; // rcx
  __m128i v9; // xmm0
  char *result; // rax
  char *v11; // rsi
  __int64 v12; // r12
  __m128i v13; // xmm1
  __m128i v14[3]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (void *)(a1 + 16);
  *(_QWORD *)a1 = a1 + 16;
  v4 = *(_BYTE **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 + *(_QWORD *)a2 && !v4 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v5 > 0xF )
  {
    if ( v5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v2 = (void *)operator new(v5 + 1);
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)a1 = v2;
LABEL_16:
    memcpy(v2, v4, v5);
    v2 = *(void **)a1;
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
    *(_BYTE *)(a1 + 16) = *v4;
    goto LABEL_6;
  }
  if ( v5 )
    goto LABEL_16;
LABEL_6:
  *(_QWORD *)(a1 + 8) = v5;
  *((_BYTE *)v2 + v5) = 0;
  v6 = *(_QWORD *)(a2 + 48) - *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 36);
  *(_OWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 36) = v7;
  *(_QWORD *)(a1 + 56) = 0;
  if ( v6 >> 3 )
  {
    if ( (unsigned __int64)(v6 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v8 = (char *)operator new(v6);
  }
  else
  {
    v8 = nullptr;
  }
  v14[0].m128i_i64[0] = (__int64)v8;
  v9 = _mm_loadl_epi64(v14);
  *(_QWORD *)(a1 + 56) = &v8[v6];
  *(__m128i *)(a1 + 40) = _mm_unpacklo_epi64(v9, v9);
  result = *(char **)(a2 + 48);
  v11 = *(char **)(a2 + 40);
  v12 = *(_QWORD *)(a2 + 48) - (_QWORD)v11;
  if ( result != v11 )
  {
    result = (char *)memmove(v8, v11, *(_QWORD *)(a2 + 48) - (_QWORD)v11);
    v8 = result;
  }
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(_QWORD *)(a1 + 48) = &v8[v12];
  *(__m128i *)(a1 + 64) = v13;
  return result;
}
