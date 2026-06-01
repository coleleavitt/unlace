__int64 __fastcall sub_6B4790(const __m128i *a1, __int64 a2)
{
  __int64 v3; // rdi
  __m128i *v4; // rax
  __m128i v5; // xmm0
  __m128i *v6; // rbx
  _QWORD *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 result; // rax
  __m128i **v11; // rcx
  unsigned int v12; // ebp
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rcx
  __m128i *v16; // rax
  _QWORD *v17; // rax
  char **exception; // rbx
  __int64 v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = a1[51].m128i_i64[0];
  v19[0] = a2;
  if ( a2 )
  {
    ++*(_DWORD *)(a2 + 8);
    sub_6ACAE0((_QWORD *)(v3 + 8), v19);
    v4 = (__m128i *)sub_186B270(0xB0u);
    v5 = _mm_loadl_epi64(a1 + 3);
    ++*(_DWORD *)(a2 + 8);
    v6 = v4;
    *v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, v5);
  }
  else
  {
    sub_6ACAE0((_QWORD *)(v3 + 8), v19);
    v16 = (__m128i *)sub_186B270(0xB0u);
    v5 = _mm_loadl_epi64(a1 + 3);
    v6 = v16;
    *v16 = _mm_unpacklo_epi64((__m128i)0LL, v5);
  }
  v7 = (_QWORD *)a1[52].m128i_i64[0];
  v6[1].m128i_i64[1] = a2;
  v6[1].m128i_i64[0] = (__int64)&off_1C4E7B8;
  v6[2].m128i_i64[0] = (__int64)v6[1].m128i_i64;
  v6[3].m128i_i64[1] = 0;
  v6[4].m128i_i64[0] = 0;
  v6[2].m128i_i64[1] = (__int64)&off_1C62200;
  v6[5].m128i_i64[0] = 0;
  v6[5].m128i_i64[1] = 0;
  v6[6].m128i_i64[0] = (__int64)&off_1C62200;
  v6[7].m128i_i64[0] = 0;
  v6[7].m128i_i64[1] = 0;
  v6[8].m128i_i64[1] = 0;
  v6[9].m128i_i64[0] = 0;
  v6[10].m128i_i64[0] = 0;
  v6[10].m128i_i8[8] = 1;
  v6[9].m128i_i64[1] = v5.m128i_i64[0];
  if ( v7 )
  {
    v8 = *((_DWORD *)v7 - 1);
    if ( v8 == *((_DWORD *)v7 - 2) )
    {
      v12 = (3 * v8 + 1) >> 1;
      v13 = 8 * v12 + 8;
      if ( 8 * v8 + 8 >= (unsigned int)v13 || v8 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_6A99E0(v19, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v19);
        sub_233E40((__int64)v19);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v7 - 1, v13);
      v15 = v14[1];
      v7 = v14 + 2;
      *v14 = v12;
      a1[52].m128i_i64[0] = (__int64)(v14 + 2);
      LODWORD(v14) = v15;
      v11 = (__m128i **)&v7[v15];
      result = (unsigned int)((_DWORD)v14 + 1);
    }
    else
    {
      v9 = v8;
      result = v8 + 1;
      v11 = (__m128i **)&v7[v9];
    }
  }
  else
  {
    v17 = (_QWORD *)sub_186B270(0x18u);
    v7 = v17 + 1;
    *v17 = 2;
    result = 1;
    a1[52].m128i_i64[0] = (__int64)v7;
    v11 = (__m128i **)v7;
  }
  *v11 = v6;
  *((_DWORD *)v7 - 1) = result;
  return result;
}

